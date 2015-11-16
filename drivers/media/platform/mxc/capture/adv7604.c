/*
 * Copyright 2014 Synexxus, Inc. 
 */

/*
 * The code contained herein is licensed under the GNU General Public
 * License. You may obtain a copy of the GNU General Public License
 * Version 2 or later at the following locations:
 *
 * http://www.opensource.org/licenses/gpl-license.html
 * http://www.gnu.org/copyleft/gpl.html
 */

/*!
 * @file adv7604.c
 *
 * @brief Analog Device ADV7604 video decoder functions
 *
 * @ingroup Camera
 */

//#define DEBUG
#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/slab.h>
#include <linux/i2c.h>
#include <linux/videodev2.h>
#include <linux/workqueue.h>

#include <linux/mfd/syscon.h>
#include <linux/mfd/syscon/imx6q-iomuxc-gpr.h>
#include <linux/of_device.h>
#include <linux/of_gpio.h>
#include <linux/regmap.h>

#include <linux/v4l2-dv-timings.h>
#include <media/v4l2-device.h>
#include <media/v4l2-ctrls.h>
#include <media/v4l2-chip-ident.h>
#include "mxc_v4l2_capture.h"

#include "adv7604.h"
#include "adv7604_edid_default.h"
#include <linux/delay.h>

//#define FUNCTION_DEBUG
#ifdef FUNCTION_DEBUG
#define LOG_FUNCTION_NAME printk("[%d] : %s : %s() ENTER\n", __LINE__, __FILE__, __FUNCTION__)
#define LOG_FUNCTION_NAME_EXIT printk("[%d] : %s : %s() EXIT\n", __LINE__, __FILE__,  __FUNCTION__)
#else
#define LOG_FUNCTION_NAME if (0)
#define LOG_FUNCTION_NAME_EXIT if (0)
#endif


static int debug;
module_param(debug, int, 0644);
MODULE_PARM_DESC(debug, "debug level (0-2)");

#ifdef DEBUG
#define dbg(format, arg...)        \
	    printk(KERN_DEBUG format, ##arg)
#else
#define dbg(format, arg...)                \
	({                              \
	     if (0)                          \
	         printk(KERN_DEBUG format, ##arg); \
	     0;                          \
	 })  
#endif


/*
 **********************************************************************
 *  Arrays with configuration parameters for the ADV7604
 *	Look in "mxc_adv7604.h"
 **********************************************************************
 */
static struct adv7604_sensor_data adv7604_data;

/* ----------------- REGISTER DEVICE ID ----------------------------------- */
static const struct i2c_device_id adv7604_id[] = {
	{"adv7604", 0},
	{"adv7604_camera", 0},
	{"adv76xx", 0},
	{},
};

MODULE_DEVICE_TABLE(i2c, adv7604_id);

/* ----------------- REGISTER DEVICE I2C----------------------------------- */
static struct i2c_driver adv7604_i2c_driver = {
	.driver = {
		   .owner = THIS_MODULE,
		   .name = "adv7604",
		   },
	.probe = adv7604_probe,
	.remove = adv7604_remove,
	.id_table = adv7604_id,
};

//module_i2c_driver(mxc_v4l2_adv7604_i2c_driver);

/*
 **********************************************************************
 *  Functions specific to the driver
 **********************************************************************
 */
static inline unsigned vtotal(const struct v4l2_bt_timings *t)
{
	return t->height + t->vfrontporch + t->vsync + t->vbackporch;
}

static inline unsigned htotal(const struct v4l2_bt_timings *t)
{
	return t->width + t->hfrontporch + t->hsync + t->hbackporch;
}

static inline int cp_read(u8 reg)
{
	return adv7604_read_byte_data(ADV7604_DEFAULT_CP_SLAVE_ADDRESS, reg);
}

static inline int cp_write(u8 reg, u8 val)
{
	return adv7604_generic_i2c_byte_write(adv7604_data.i2c_client, ADV7604_DEFAULT_CP_SLAVE_ADDRESS, reg, val);
}

static inline int cp_write_and_or(u8 reg, u8 mask, u8 val)
{
	return cp_write(reg, (cp_read(reg) & mask) | val);
}

static inline int io_read(u8 reg)
{
	return adv7604_read_byte_data(ADV7604_DEFAULT_IO_MAP_I2C_ADDR, reg);
}

static inline int io_write(u8 reg, u8 val)
{
	return adv7604_generic_i2c_byte_write(adv7604_data.i2c_client, ADV7604_DEFAULT_IO_MAP_I2C_ADDR, reg, val);
}

static inline int io_write_and_or(u8 reg, u8 mask, u8 val)
{
	return io_write(reg, (io_read(reg) & mask) | val);
}

static inline int afe_write(u8 reg, u8 val)
{
	return adv7604_generic_i2c_byte_write(adv7604_data.i2c_client, ADV7604_DEFAULT_AFE_SLAVE_ADDRESS, reg, val);
}

static inline int hdmi_write(u8 reg, u8 val)
{
	return adv7604_generic_i2c_byte_write(adv7604_data.i2c_client, ADV7604_DEFAULT_HDMI_SLAVE_ADDRESS, reg, val);
}

static inline void adv7604_power_down(int enable)
{
	(enable == 0 ) ? dbg(KERN_INFO "%s: DISABLED\n",__func__) : dbg(KERN_INFO "%s: ENABLED\n",__func__);;
	//if(&adv7604_data.pwn_gpio != NULL)
	//	gpio_set_value(adv7604_data.pwn_gpio, enable);
	/* power */
	if (enable)
		io_write(0x0c, 0x20);   /* Power Down Part */
	else
		io_write(0x0c, 0x02);   /* Power up part and power down VDP */

	msleep(400);
}

/*
 *	GPIO based reset
 */
static inline void adv7604_reset(void)
{
	dbg(KERN_INFO "%s: \n",__func__);
	// camera reset 
	gpio_set_value(adv7604_data.rst_gpio, 1);

	msleep(100);
	gpio_set_value(adv7604_data.rst_gpio, 0);
	msleep(500);
	gpio_set_value(adv7604_data.rst_gpio, 1);
	msleep(500);
//	gpio_set_value(pwn_gpio, 1);

}

static void adv7604_soft_reset(void)
{
	dbg(KERN_INFO "%s: \n",__func__);

	/* delay at least 5ms */
	msleep(500);
}

/**
	adv7604_update_pixel_values()
	General Function to update the values needed in the (struct sensor_data).pix.<values> fields
 */
static void adv7604_update_pixel_values(void)
{
	const struct v4l2_bt_timings *bt = &adv7604_data.curr_vid_std[adv7604_data.curr_vid_std_index].timings.bt;
	LOG_FUNCTION_NAME;

	adv7604_data.pix.width = bt->width;
	adv7604_data.pix.height = bt->height;
	/* TODO Add crop values for each resolutions */
	adv7604_data.spix.top = bt->vbackporch;
	adv7604_data.spix.left = bt->hbackporch;
	adv7604_data.spix.swidth = bt->width + bt->hfrontporch + bt->hsync + bt->hbackporch;
	adv7604_data.spix.sheight = bt->height + bt->vfrontporch + bt->vsync + bt->vbackporch;
	pr_info("%s: pix.width = %d, pix.height = %d\n",
			__func__, adv7604_data.pix.width, adv7604_data.pix.height);
	LOG_FUNCTION_NAME_EXIT;
}

static int adv7604_s_hdmi_ch(int hdmi_ch)
{
	return hdmi_write(0x0, hdmi_ch);
}

static int adv7604_init_default_mode(void)
{
	int retval = 0;
	adv7604_soft_reset();
	dbg(KERN_INFO "%s: \n",__func__);
	return retval;
}


static void enable_input()
{
	struct adv7604_sensor_data *sensor = &adv7604_data;

	switch (sensor->sensor_mode) {
	case ADV7604_SENSOR_MODE_GR:
		/* enable */
		io_write(0x15, 0xb0);   /* Disable Tristate of Pins (no audio) */
		break;
	case ADV7604_SENSOR_MODE_HDMI_GR:
		/* enable */
		hdmi_write(0x01, 0x00); /* Enable HDMI clock terminators */
		io_write(0x15, 0xb0);   /* Disable Tristate of Pins */
		break;
	default:
		pr_debug("%s: Unknown mode %d\n", __func__, sensor->sensor_mode);
		break;
	}
}

static void disable_input()
{
	/* disable */
	io_write(0x15, 0xbe);   /* Tristate all outputs from video core */
	hdmi_write(0x1a, 0x1a); /* Mute audio */
	hdmi_write(0x01, 0x78); /* Disable HDMI clock terminators */
}

static void select_input()
{
	struct adv7604_sensor_data *sensor = &adv7604_data;

	switch (sensor->sensor_mode) {
	case ADV7604_SENSOR_MODE_GR:
		/* reset ADI recommended settings for HDMI: */
		/* "ADV7604 Register Settings Recommendations (rev. 2.5, June 2010)" p. 4. */
		hdmi_write(0x0d, 0x04); /* HDMI filter optimization */
		hdmi_write(0x3d, 0x00); /* DDC bus active pull-up control */
		hdmi_write(0x3e, 0x74); /* TMDS PLL optimization */
		hdmi_write(0x4e, 0x3b); /* TMDS PLL optimization */
		hdmi_write(0x57, 0x74); /* TMDS PLL optimization */
		hdmi_write(0x58, 0x63); /* TMDS PLL optimization */
		hdmi_write(0x8d, 0x18); /* equaliser */
		hdmi_write(0x8e, 0x34); /* equaliser */
		hdmi_write(0x93, 0x88); /* equaliser */
		hdmi_write(0x94, 0x2e); /* equaliser */
		hdmi_write(0x96, 0x00); /* enable automatic EQ changing */

		afe_write(0x00, 0x08); /* power up ADC */
		afe_write(0x01, 0x06); /* power up Analog Front End */
		afe_write(0xc8, 0x00); /* phase control */

		/* set ADI recommended settings for digitizer */
		/* "ADV7604 Register Settings Recommendations (rev. 2.5, June 2010)" p. 17. */
		afe_write(0x12, 0x7b); /* ADC noise shaping filter controls */
		afe_write(0x0c, 0x1f); /* CP core gain controls */
		cp_write(0x3e, 0x04); /* CP core pre-gain control */
		cp_write(0xc3, 0x39); /* CP coast control. Graphics mode */
		cp_write(0x40, 0x5c); /* CP core pre-gain control. Graphics mode */
		break;

	case ADV7604_SENSOR_MODE_HDMI_GR:
		/* set ADI recommended settings for HDMI: */
		/* "ADV7604 Register Settings Recommendations (rev. 2.5, June 2010)" p. 4. */
		hdmi_write(0x0d, 0x84); /* HDMI filter optimization */
		hdmi_write(0x3d, 0x10); /* DDC bus active pull-up control */
		hdmi_write(0x3e, 0x39); /* TMDS PLL optimization */
		hdmi_write(0x4e, 0x3b); /* TMDS PLL optimization */
		hdmi_write(0x57, 0xb6); /* TMDS PLL optimization */
		hdmi_write(0x58, 0x03); /* TMDS PLL optimization */
		hdmi_write(0x8d, 0x18); /* equaliser */
		hdmi_write(0x8e, 0x34); /* equaliser */
		hdmi_write(0x93, 0x8b); /* equaliser */
		hdmi_write(0x94, 0x2d); /* equaliser */
		hdmi_write(0x96, 0x01); /* enable automatic EQ changing */

		afe_write(0x00, 0xff); /* power down ADC */
		afe_write(0x01, 0xfe); /* power down Analog Front End */
		afe_write(0xc8, 0x40); /* phase control */

		/* reset ADI recommended settings for digitizer */
		/* "ADV7604 Register Settings Recommendations (rev. 2.5, June 2010)" p. 17. */
		afe_write(0x12, 0xfb); /* ADC noise shaping filter controls */
		afe_write(0x0c, 0x0d); /* CP core gain controls */
		cp_write(0x3e, 0x00); /* CP core pre-gain control */
		cp_write(0xc3, 0x39); /* CP coast control. Graphics mode */
		cp_write(0x40, 0x80); /* CP core pre-gain control. Graphics mode */

		break;
	default:
		pr_debug("%s: Unknown mode %d\n",	__func__, sensor->sensor_mode);
		break;
	}
}

static int adv7604_s_routing(int sensor_mode)
{
	struct adv7604_sensor_data *sensor = &adv7604_data;

	pr_info("%s: sensor_mode %d", __func__, sensor_mode);

	sensor->sensor_mode = sensor_mode;

	disable_input();

	select_input();

	enable_input();

	return 0;
}


#if 0
static void set_rgb_quantization_range(struct v4l2_subdev *sd)
{
	struct adv7604_state *state = to_state(sd);

	switch (state->rgb_quantization_range) {
	case V4L2_DV_RGB_RANGE_AUTO:
		/* automatic */
		if (DIGITAL_INPUT && !(hdmi_read(0x05) & 0x80)) {
			/* receiving DVI-D signal */

			/* ADV7604 selects RGB limited range regardless of
			   input format (CE/IT) in automatic mode */
			if (state->timings.bt.standards & V4L2_DV_BT_STD_CEA861) {
				/* RGB limited range (16-235) */
				io_write_and_or(0x02, 0x0f, 0x00);

			} else {
				/* RGB full range (0-255) */
				io_write_and_or(0x02, 0x0f, 0x10);
			}
		} else {
			/* receiving HDMI or analog signal, set automode */
			io_write_and_or(0x02, 0x0f, 0xf0);
		}
		break;
	case V4L2_DV_RGB_RANGE_LIMITED:
		/* RGB limited range (16-235) */
		io_write_and_or(0x02, 0x0f, 0x00);
		break;
	case V4L2_DV_RGB_RANGE_FULL:
		/* RGB full range (0-255) */
		io_write_and_or(0x02, 0x0f, 0x10);
		break;
	}
}
#endif

static int find_and_set_predefined_video_timings(u8 prim_mode,
		const struct adv7604_video_standards *predef_vid_timings,
		const struct v4l2_dv_timings *timings)
{
	struct adv7604_sensor_data *sensor = &adv7604_data;
	int i;

	LOG_FUNCTION_NAME;
	for (i = 0; predef_vid_timings[i].timings.bt.width; i++) {
		if (!v4l_match_dv_timings(timings, &predef_vid_timings[i].timings,
					DIGITAL_INPUT ? 250000 : 1000000))
			continue;
		/* Custom Video timings define their vid_std as 0x3f */
		if (predef_vid_timings[i].vid_std == 0x3f)
			continue;
		io_write(0x00, predef_vid_timings[i].vid_std); /* video std */
		io_write(0x01, (predef_vid_timings[i].v_freq << 4) +
				prim_mode); /* v_freq and prim mode */
		LOG_FUNCTION_NAME_EXIT;
		return 0;
	}

	return -1;
}

static void configure_custom_video_timings(const struct v4l2_bt_timings *bt)
{
	struct adv7604_sensor_data *sensor = &adv7604_data;
	u32 width = htotal(bt);
	u32 height = vtotal(bt);
	u16 cp_start_sav = bt->hsync + bt->hbackporch - 4;
	u16 cp_start_eav = width - bt->hfrontporch;
	u16 cp_start_vbi = height - bt->vfrontporch;
	u16 cp_end_vbi = bt->vsync + bt->vbackporch;
	u16 ch1_fr_ll = (((u32)bt->pixelclock / 100) > 0) ?
		((width * (ADV7604_fsc / 100)) / ((u32)bt->pixelclock / 100)) : 0;
	const u8 pll[2] = {
		0xc0 | ((width >> 8) & 0x1f),
		width & 0xff
	};

	pr_debug("%s: Width = %d, height = %d\n", __func__, width, height);
	pr_debug("%s: ch1_fr_ll = %d cp_start_sav = %d cp_start_eav = %d\n", __func__, ch1_fr_ll, cp_start_sav, cp_start_eav);
	pr_debug("%s: cp_start_vbi = %d, cp_end_vbi = %d\n", __func__, cp_start_vbi, cp_end_vbi);
	LOG_FUNCTION_NAME;
	switch (sensor->sensor_mode) {
	case ADV7604_SENSOR_MODE_GR:
		/* auto graphics */
		io_write(0x00, 0x07); /* video std */
		io_write(0x01, 0x02); /* prim mode */
		/* enable embedded syncs for auto graphics mode */
		cp_write_and_or(0x81, 0xef, 0x10);

		/* Should only be set in auto-graphics mode [REF_02, p. 91-92] */
		/* setup PLL_DIV_MAN_EN and PLL_DIV_RATIO */
		/* IO-map reg. 0x16 and 0x17 should be written in sequence */
		if (adv7604_smbus_write_i2c_block_data(adv7604_data.i2c_client, 0x16, 2, pll)) {
			pr_err("writing to reg 0x16 and 0x17 failed\n");
			break;
		}

		/* active video - horizontal timing */
		cp_write(0xa2, (cp_start_sav >> 4) & 0xff);
		cp_write(0xa3, ((cp_start_sav & 0x0f) << 4) |
					((cp_start_eav >> 8) & 0x0f));
		cp_write(0xa4, cp_start_eav & 0xff);

		/* active video - vertical timing */
		cp_write(0xa5, (cp_start_vbi >> 4) & 0xff);
		cp_write(0xa6, ((cp_start_vbi & 0xf) << 4) |
					((cp_end_vbi >> 8) & 0xf));
		cp_write(0xa7, cp_end_vbi & 0xff);
		break;
	case ADV7604_SENSOR_MODE_HDMI_GR:
		/* set default prim_mode/vid_std for HDMI
		   according to [REF_03, c. 4.2] */
		io_write(0x00, 0x02); /* video std */
		io_write(0x01, 0x06); /* prim mode */
		break;
	default:
		pr_debug("%s: Unknown mode %d\n",
				__func__, sensor->sensor_mode);
		break;
	}

	cp_write(0x8f, (ch1_fr_ll >> 8) & 0x7);
	cp_write(0x90, ch1_fr_ll & 0xff);
	cp_write(0xab, (height >> 4) & 0xff);
	cp_write(0xac, (height & 0x0f) << 4);
	LOG_FUNCTION_NAME_EXIT;
}

static int configure_predefined_video_timings(const struct v4l2_dv_timings *timings)
{
	struct adv7604_sensor_data *sensor = &adv7604_data;
	int err;

	LOG_FUNCTION_NAME;

	/* reset to default values */
	io_write(0x16, 0x43);
	io_write(0x17, 0x5a);
	/* disable embedded syncs for auto graphics mode */
	cp_write_and_or(0x81, 0xef, 0x00);
	cp_write(0x8f, 0x00);
	cp_write(0x90, 0x00);
	cp_write(0xa2, 0x00);
	cp_write(0xa3, 0x00);
	cp_write(0xa4, 0x00);
	cp_write(0xa5, 0x00);
	cp_write(0xa6, 0x00);
	cp_write(0xa7, 0x00);
	cp_write(0xab, 0x00);
	cp_write(0xac, 0x00);

	switch (sensor->sensor_mode) {
	case ADV7604_SENSOR_MODE_GR:
		err = find_and_set_predefined_video_timings(
				0x02, adv7604_prim_mode_gr, timings);
		break;
	case ADV7604_SENSOR_MODE_HDMI_GR:
		err = find_and_set_predefined_video_timings(
				0x06, adv7604_prim_mode_hdmi_gr, timings);
		break;
	default:
		pr_debug("%s: Unknown mode %d\n",	__func__, sensor->sensor_mode);
		err = -1;
		break;
	}

	LOG_FUNCTION_NAME_EXIT;
	return err;
}

#if 0
/* Fill the optional fields .standards and .flags in struct v4l2_dv_timings
   if the format is listed in adv7604_timings[] */
static void adv7604_fill_optional_dv_timings_fields(struct v4l2_subdev *sd,
		struct v4l2_dv_timings *timings)
{
	struct adv7604_state *state = to_state(sd);
	int i;

	for (i = 0; adv7604_timings[i].bt.width; i++) {
		if (v4l_match_dv_timings(timings, &adv7604_timings[i],
					DIGITAL_INPUT ? 250000 : 1000000)) {
			*timings = adv7604_timings[i];
			break;
		}
	}
}
#endif

static int adv7604_s_dv_timings(const struct v4l2_dv_timings *timings)
{
	struct adv7604_sensor_data *sensor = &adv7604_data;
	const struct v4l2_bt_timings *bt;
	int err;

	LOG_FUNCTION_NAME;
	if (!timings)
		return -EINVAL;

	bt = &timings->bt;

	if ((!DIGITAL_INPUT && bt->pixelclock > 170000000) ||
			(DIGITAL_INPUT && bt->pixelclock > 225000000)) {
		pr_err("%s: pixelclock out of range %d\n",
				__func__, (u32)bt->pixelclock);
		return -ERANGE;
	}

	//adv7604_fill_optional_dv_timings_fields(sd, timings);

	//sensor->timings = *timings;

	cp_write(0x91, bt->interlaced ? 0x50 : 0x10);

	/* Use prim_mode and vid_std when available */
	err = configure_predefined_video_timings(timings);
	if (err) {
		/* custom settings when the video format
		 does not have prim_mode/vid_std */
		configure_custom_video_timings(bt);
	}

	//set_rgb_quantization_range(sd);

	LOG_FUNCTION_NAME_EXIT;
	return 0;
}
/*
 * Change the mode of the given Sensor to accomodate the chosen mode
 */
static int adv7604_change_mode(int prim_mode)
{
	int ret = 0;

	pr_info("%s: sesor_mode = %d, capture_mode = %d\n", __func__, adv7604_data.sensor_mode, prim_mode);
	switch(adv7604_data.sensor_mode) {
		case ADV7604_SENSOR_MODE_GR:
			if (prim_mode < ADV7604_CAPTURE_GR_MAX_SIZE) {
				adv7604_data.curr_vid_std = adv7604_prim_mode_gr;
				adv7604_data.curr_vid_std_size = ADV7604_CAPTURE_GR_MAX_SIZE;
				adv7604_data.curr_vid_std_index = prim_mode;
			} else {
				pr_err("%s: Invalid Capture mode\n", __func__);
				return -1;
			}
			break;
		case ADV7604_SENSOR_MODE_HDMI_GR:
			if (prim_mode < ADV7604_CAPTURE_HDMI_GR_MAX_SIZE) {
				adv7604_data.curr_vid_std = adv7604_prim_mode_hdmi_gr;
				adv7604_data.curr_vid_std_size = ADV7604_CAPTURE_HDMI_GR_MAX_SIZE;
				adv7604_data.curr_vid_std_index = prim_mode;
				/* Update EDID Table fro HDMI */
				adv7604_update_edid(&adv7604_data.curr_vid_std[adv7604_data.curr_vid_std_index].timings.bt);
			} else {
				pr_err("%s: Invalid Capture mode\n", __func__);
				return -1;
			}
			break;
		default:
			pr_err("%s: Invalid sensor mode\n", __func__);
			return -1;
	}
	adv7604_update_pixel_values();
	mdelay(10);
	ret = adv7604_s_dv_timings(&adv7604_data.curr_vid_std[adv7604_data.curr_vid_std_index].timings);
	return ret;
}

/* --------------- IOCTL functions from v4l2_int_ioctl_desc --------------- */
/*!
 * \fn ioctl_g_ifparm
 * \brief Get Slave Interface Parameters (V4L2)
 *
 * \param struct v4l2_int_device *s
 * \param struct v4l2_ifparm *p
 * \return int
 */
static int ioctl_g_ifparm(struct v4l2_int_device *s, struct v4l2_ifparm *p)
{
	if (s == NULL) {
		pr_err("   ERROR!! no slave device set!\n");
		return -1;
	}
	LOG_FUNCTION_NAME;
	memset(p, 0, sizeof(*p));
	p->u.bt656.clock_curr = adv7604_data.mclk;
	pr_debug("   clock_curr=mclk=%d\n", adv7604_data.mclk);
	p->if_type = V4L2_IF_TYPE_BT1120_PROGRESSIVE_SDR;
	p->u.bt656.mode = V4L2_IF_TYPE_BT656_MODE_NOBT_8BIT;
	p->u.bt656.clock_min = ADV7604_XCLK_MIN;
	p->u.bt656.clock_max = ADV7604_XCLK_MAX;
	p->u.bt656.bt_sync_correct = 0;  /* Indicate internal vsync */
	LOG_FUNCTION_NAME_EXIT;

	return 0;
}

/*!
 * ioctl_s_power - V4L2 sensor interface handler for VIDIOC_S_POWER ioctl
 * @s: pointer to standard V4L2 device structure
 * @on: indicates power mode (on or off)
 *
 * Turns the power on or off, depending on the value of on and returns the
 * appropriate error code.
 */
static int ioctl_s_power(struct v4l2_int_device *s, int on)
{
	struct adv7604_sensor_data *sensor = s->priv;

	LOG_FUNCTION_NAME;

	if (on && !sensor->on) {
		/* Make sure power on */
		adv7604_power_down(0);
	} else if (!on && sensor->on) {
		adv7604_power_down(1);
	}

	sensor->on = on;
	LOG_FUNCTION_NAME_EXIT;

	return 0;
}

/*!
 * ioctl_g_parm - V4L2 sensor interface handler for VIDIOC_G_PARM ioctl
 * @s: pointer to standard V4L2 device structure
 * @a: pointer to standard V4L2 VIDIOC_G_PARM ioctl structure
 *
 * Returns the sensor's video CAPTURE parameters.
 */
static int ioctl_g_parm(struct v4l2_int_device *s, struct v4l2_streamparm *a)
{
	struct adv7604_sensor_data *sensor = s->priv;
	struct v4l2_captureparm *cparm = &a->parm.capture;
	int ret = 0;

	dbg(KERN_INFO "%s: \n",__func__);
	LOG_FUNCTION_NAME;

	switch (a->type) {
	/* This is the only case currently handled. */
	case V4L2_BUF_TYPE_VIDEO_CAPTURE:
		memset(a, 0, sizeof(*a));
		a->type = V4L2_BUF_TYPE_VIDEO_CAPTURE;
		cparm->capability = sensor->streamcap.capability;
		cparm->timeperframe = sensor->streamcap.timeperframe;
		cparm->capturemode = sensor->streamcap.capturemode;
		ret = 0;
		break;

	/* These are all the possible cases. */
	case V4L2_BUF_TYPE_VIDEO_OUTPUT:
	case V4L2_BUF_TYPE_VIDEO_OVERLAY:
	case V4L2_BUF_TYPE_VBI_CAPTURE:
	case V4L2_BUF_TYPE_VBI_OUTPUT:
	case V4L2_BUF_TYPE_SLICED_VBI_CAPTURE:
	case V4L2_BUF_TYPE_SLICED_VBI_OUTPUT:
		ret = -EINVAL;
		break;

	default:
		pr_debug("   type is unknown - %d\n", a->type);
		ret = -EINVAL;
		break;
	}

	LOG_FUNCTION_NAME_EXIT;
	return ret;
}

/*!
 * ioctl_s_parm - V4L2 sensor interface handler for VIDIOC_S_PARM ioctl
 * @s: pointer to standard V4L2 device structure
 * @a: pointer to standard V4L2 VIDIOC_S_PARM ioctl structure
 *
 * Configures the sensor to use the input parameters, if possible.  If
 * not possible, reverts to the old parameters and returns the
 * appropriate error code.
 */
static int ioctl_s_parm(struct v4l2_int_device *s, struct v4l2_streamparm *a)
{
	struct adv7604_sensor_data *sensor = s->priv;
	struct v4l2_fract *timeperframe = &a->parm.capture.timeperframe;
	int sensor_mode, prim_mode, hdmi_ch, ret = 0;

	LOG_FUNCTION_NAME;

	/* Make sure power on */
	adv7604_power_down(0);

	switch (a->type) {
		/* This is the only case currently handled. */
		case V4L2_BUF_TYPE_VIDEO_CAPTURE:

			sensor->streamcap.timeperframe = *timeperframe;
			sensor->streamcap.capturemode = a->parm.capture.capturemode;
			/* Find sensor Mode and Capture Mode */
			pr_info("%s - Capture Mode = %x\n", __func__, sensor->streamcap.capturemode);
			sensor_mode = (sensor->streamcap.capturemode & ADV7604_SENSOR_MODE_MASK) >> ADV7604_SENSOR_MODE_SHIFT;
			pr_info("%s - Sensor Mode = %d\n", __func__, sensor_mode);
			if (sensor_mode >= ADV7604_SENSOR_MODE_MAX) {
				pr_err("Invalid sensor mode \n");
				ret = -1;
				break;
			}
			prim_mode = (sensor->streamcap.capturemode & ADV7604_PRIM_MODE_MASK) >> ADV7604_PRIM_MODE_SHIFT;
			pr_info("%s - Prim Mode = %d\n", __func__, prim_mode);
			/* TODO Check for Prim mode Maximum */
			/* Find HDMI Channel in case of HDMI Input */
			if (sensor_mode == ADV7604_SENSOR_MODE_HDMI_GR) {
				hdmi_ch = (sensor->streamcap.capturemode & ADV7604_HDMI_CH_MASK) >> ADV7604_HDMI_CH_SHIFT;
				pr_info("%s - HDMI Channel = %d\n", __func__, hdmi_ch);
				adv7604_s_hdmi_ch(hdmi_ch);
			}
			adv7604_s_routing(sensor_mode);
			ret = adv7604_change_mode(prim_mode);
			break;

		/* These are all the possible cases. */
		case V4L2_BUF_TYPE_VIDEO_OUTPUT:
		case V4L2_BUF_TYPE_VIDEO_OVERLAY:
		case V4L2_BUF_TYPE_VBI_CAPTURE:
		case V4L2_BUF_TYPE_VBI_OUTPUT:
		case V4L2_BUF_TYPE_SLICED_VBI_CAPTURE:
		case V4L2_BUF_TYPE_SLICED_VBI_OUTPUT:
			pr_debug("   type is not " \
				"V4L2_BUF_TYPE_VIDEO_CAPTURE but %d\n",
				a->type);
			ret = -EINVAL;
			break;

		default:
			pr_debug("   type is unknown - %d\n", a->type);
			ret = -EINVAL;
			break;
	}
	LOG_FUNCTION_NAME_EXIT;

	return ret;
}

/*!
 * ioctl_g_fmt_cap - V4L2 sensor interface handler for ioctl_g_fmt_cap
 * @s: pointer to standard V4L2 device structure
 * @f: pointer to standard V4L2 v4l2_format structure
 *
 * Returns the sensor's current pixel format in the v4l2_format
 * parameter.
 */
static int ioctl_g_fmt_cap(struct v4l2_int_device *s, struct v4l2_format *f)
{
	struct adv7604_sensor_data *sensor = s->priv;

	LOG_FUNCTION_NAME;

	switch (f->type) {
		case V4L2_BUF_TYPE_VIDEO_CAPTURE:
			pr_info("adv7604:   Returning size of %dx%d\n",
				 sensor->pix.width, sensor->pix.height);
			f->fmt.pix = sensor->pix;
			break;

		case V4L2_BUF_TYPE_SENSOR:
			pr_info("%s: left=%d, top=%d, %dx%d\n", __func__,
					sensor->spix.left, sensor->spix.top,
					sensor->spix.swidth, sensor->spix.sheight);
			f->fmt.spix = sensor->spix;
			break;

		//case V4L2_BUF_TYPE_PRIVATE: {
		//	v4l2_std_id std;
		//	adv7604_get_std(&std);
		//	f->fmt.pix.pixelformat = (u32)std;
		//	}
		//	break;

		default:
			f->fmt.pix = sensor->pix;
			break;
	}
	LOG_FUNCTION_NAME_EXIT;

	return 0;
}

/*!
 * ioctl_g_ctrl - V4L2 sensor interface handler for VIDIOC_G_CTRL ioctl
 * @s: pointer to standard V4L2 device structure
 * @vc: standard V4L2 VIDIOC_G_CTRL ioctl structure
 *
 * If the requested control is supported, returns the control's current
 * value from the video_control[] array.  Otherwise, returns -EINVAL
 * if the control is not supported.
 */
static int ioctl_g_ctrl(struct v4l2_int_device *s, struct v4l2_control *vc)
{
	/* TODO! */
	int ret = 0;
	LOG_FUNCTION_NAME;
	switch (vc->id) {
		case V4L2_CID_BRIGHTNESS:
			vc->value = adv7604_data.brightness;
			break;
		case V4L2_CID_HUE:
			vc->value = adv7604_data.hue;
			break;
		case V4L2_CID_CONTRAST:
			vc->value = adv7604_data.contrast;
			break;
		case V4L2_CID_SATURATION:
			vc->value = adv7604_data.saturation;
			break;
		case V4L2_CID_RED_BALANCE:
			vc->value = adv7604_data.red;
			break;
		case V4L2_CID_BLUE_BALANCE:
			vc->value = adv7604_data.blue;
			break;
		//case V4L2_CID_EXPOSURE:
		//	vc->value = adv7604_data.ae_mode;
		//	break;
		default:
			ret = -EINVAL;
	}
	LOG_FUNCTION_NAME_EXIT;

	return ret;
}

/*
 * adv7604_cid_brightness
 *
 *	Description: Call back to adjust the brightness for the adv7604
 */
static s32 adv7604_cid_brightness(s32 value)
{
	s32 ret = 0;

	LOG_FUNCTION_NAME;
	ret=adv7604_generic_i2c_byte_write(adv7604_data.i2c_client, ADV7604_REG_CP_SLAVE_ADDRESS, ADV7604_REG_CP_BRIGHTNESS, (u8)(value & 0x000000FF));
	if(ret >= 0) 
		adv7604_data.brightness = value;
	LOG_FUNCTION_NAME_EXIT;
	return ret;
}

/*
 * adv7604_cid_contrast
 *
 *	Description: Call back to adjust the contrast for the adv7604
 */
static s32 adv7604_cid_contrast(s32 value)
{
	s32 ret = 0;

	LOG_FUNCTION_NAME;
	ret=adv7604_generic_i2c_byte_write(adv7604_data.i2c_client, ADV7604_REG_CP_SLAVE_ADDRESS, ADV7604_REG_CP_CONTRAST, (u8)(value & 0x000000FF));
	if(ret >= 0) 
		adv7604_data.contrast = value;
	LOG_FUNCTION_NAME_EXIT;
	return ret;
}

/*
 * adv7604_cid_hue
 *
 *	Description: Call back to adjust the hue for the adv7604
 */
static s32 adv7604_cid_hue(s32 value)
{
	s32 ret = 0;

	LOG_FUNCTION_NAME;
	ret=adv7604_generic_i2c_byte_write(adv7604_data.i2c_client, ADV7604_REG_CP_SLAVE_ADDRESS, ADV7604_REG_CP_HUE, (u8)(value & 0x000000FF));
	if(ret >= 0) 
		adv7604_data.hue = value;
	LOG_FUNCTION_NAME_EXIT;
	return ret;
}

/*
 * adv7604_cid_hue
 *
 *	Description: Call back to adjust the hue for the adv7604
 */
static s32 adv7604_cid_saturation(s32 value)
{
	s32 ret = 0;

	LOG_FUNCTION_NAME;
	ret=adv7604_generic_i2c_byte_write(adv7604_data.i2c_client, ADV7604_REG_CP_SLAVE_ADDRESS, ADV7604_REG_CP_SATURATION, (u8)(value & 0x000000FF));
	if(ret >= 0) 
		adv7604_data.saturation = value;
	LOG_FUNCTION_NAME_EXIT;
	return ret;
}

/*!
 * ioctl_s_ctrl - V4L2 sensor interface handler for VIDIOC_S_CTRL ioctl
 * @s: pointer to standard V4L2 device structure
 * @vc: standard V4L2 VIDIOC_S_CTRL ioctl structure
 *
 * If the requested control is supported, sets the control's current
 * value in HW (and updates the video_control[] array).  Otherwise,
 * returns -EINVAL if the control is not supported.
 */
static int ioctl_s_ctrl(struct v4l2_int_device *s, struct v4l2_control *vc)
{
	int retval = 0;

	LOG_FUNCTION_NAME;

	switch (vc->id) {
		case V4L2_CID_BRIGHTNESS:
			retval = adv7604_cid_brightness(vc->value);
			break;
		case V4L2_CID_CONTRAST:
			retval = adv7604_cid_contrast(vc->value);
			break;
		case V4L2_CID_SATURATION:
			retval = adv7604_cid_saturation(vc->value);
			break;
		case V4L2_CID_HUE:
			retval = adv7604_cid_hue(vc->value);
			break;
		case V4L2_CID_AUTO_WHITE_BALANCE:
			break;
		case V4L2_CID_DO_WHITE_BALANCE:
			break;
		case V4L2_CID_RED_BALANCE:
			break;
		case V4L2_CID_BLUE_BALANCE:
			break;
		case V4L2_CID_GAMMA:
			break;
		case V4L2_CID_EXPOSURE:
			break;
		case V4L2_CID_AUTOGAIN:
			break;
		case V4L2_CID_GAIN:
			break;
		case V4L2_CID_HFLIP:
			break;
		case V4L2_CID_VFLIP:
			break;
		case V4L2_CID_AUTOBRIGHTNESS:
			break;
		case V4L2_CID_ROTATE:
			// Added for use in the mxc_v4l2_output.c files
			retval = 1;
			break;
		case V4L2_CID_MXC_MOTION:
			// Added for use in the mxc_v4l2_output.c files
			retval = 1;
			break;
		default:
			retval = -EPERM;
			break;
	}

	LOG_FUNCTION_NAME_EXIT;
	return retval;
}

/*!
 * ioctl_enum_framesizes - V4L2 sensor interface handler for
 *			   VIDIOC_ENUM_FRAMESIZES ioctl
 * @s: pointer to standard V4L2 device structure
 * @fsize: standard V4L2 VIDIOC_ENUM_FRAMESIZES ioctl structure
 *
 * Return 0 if successful, otherwise -EINVAL.
 */
static int ioctl_enum_framesizes(struct v4l2_int_device *s,
				 struct v4l2_frmsizeenum *fsize)
{
	struct adv7604_sensor_data *sensor = s->priv;
	const struct adv7604_video_standards *vid_list = sensor->curr_vid_std;
	int vid_list_size;
	int index = fsize->index & ADV7604_PRIM_MODE_MASK;
	int sensor_mode = (fsize->index & ADV7604_SENSOR_MODE_MASK) >> ADV7604_SENSOR_MODE_SHIFT;

	LOG_FUNCTION_NAME;
	pr_info("%s: sensor_mode = %x, index = %x\n", __func__, sensor_mode, index);
	switch (sensor_mode) {
		case ADV7604_SENSOR_MODE_GR:
			vid_list = adv7604_prim_mode_gr;
			vid_list_size = ADV7604_CAPTURE_GR_MAX_SIZE;
			break;
		case ADV7604_SENSOR_MODE_HDMI_GR:
			vid_list = adv7604_prim_mode_hdmi_gr;
			vid_list_size = ADV7604_CAPTURE_HDMI_GR_MAX_SIZE;
			break;
		default:
			return -EINVAL;
	}

	if(index >= vid_list_size)
		return -EINVAL;

	fsize->discrete.width = vid_list[index].timings.bt.width;
	fsize->discrete.height = vid_list[index].timings.bt.height;
	LOG_FUNCTION_NAME_EXIT;
	return 0;
}

/*!
 * ioctl_enum_frameintervals - V4L2 sensor interface handler for
 *			       VIDIOC_ENUM_FRAMEINTERVALS ioctl
 * @s: pointer to standard V4L2 device structure
 * @fival: standard V4L2 VIDIOC_ENUM_FRAMEINTERVALS ioctl structure
 *
 * Return 0 if successful, otherwise -EINVAL.
 */
static int ioctl_enum_frameintervals(struct v4l2_int_device *s,
					 struct v4l2_frmivalenum *fival)
{
	//int i, j, count;
	struct adv7604_sensor_data *sensor = s->priv;
	const struct adv7604_video_standards *vid_list = sensor->curr_vid_std;
	int vid_list_size = sensor->curr_vid_std_size;

	LOG_FUNCTION_NAME;

	if (fival->index < 0 || fival->index >= vid_list_size)
		return -EINVAL;

	if (fival->width == 0 || fival->height == 0 ||
	    fival->pixel_format == 0) {
		pr_warning("Please assign pixelformat, width and height.\n");
		return -EINVAL;
	}

	fival->type = V4L2_FRMIVAL_TYPE_DISCRETE;
	fival->discrete.numerator = 1;
	fival->discrete.denominator = vid_list[fival->index].refresh;
	LOG_FUNCTION_NAME_EXIT;
	return -EINVAL;
}

/*!
 * ioctl_g_chip_ident - V4L2 sensor interface handler for
 *			VIDIOC_DBG_G_CHIP_IDENT ioctl
 * @s: pointer to standard V4L2 device structure
 * @id: pointer to int
 *
 * Return 0.
 */
static int ioctl_g_chip_ident(struct v4l2_int_device *s, int *id)
{
	LOG_FUNCTION_NAME;
	((struct v4l2_dbg_chip_ident *)id)->match.type =
					V4L2_CHIP_MATCH_I2C_DRIVER;
	strcpy(((struct v4l2_dbg_chip_ident *)id)->match.name, "adv7604_camera");
	LOG_FUNCTION_NAME_EXIT;

	return 0;
}

/*!
 * ioctl_init - V4L2 sensor interface handler for VIDIOC_INT_INIT
 * @s: pointer to standard V4L2 device structure
 */
static int ioctl_init(struct v4l2_int_device *s)
{
	return adv7604_init_default_mode();	// Simply Defers to the default init modes from adv7604
}

/*!
 * ioctl_enum_fmt_cap - V4L2 sensor interface handler for VIDIOC_ENUM_FMT
 * @s: pointer to standard V4L2 device structure
 * @fmt: pointer to standard V4L2 fmt description structure
 *
 * Return 0.
 */
static int ioctl_enum_fmt_cap(struct v4l2_int_device *s,
			      struct v4l2_fmtdesc *fmt)
{
	/* TODO Convert this and utilize pixelformat field of pix structure*/
	struct adv7604_sensor_data *sensor = s->priv;

	LOG_FUNCTION_NAME;

	if (fmt->index >= sensor->curr_vid_std_size)
		return -EINVAL;
	fmt->pixelformat = adv7604_data.pix.pixelformat;

	LOG_FUNCTION_NAME_EXIT;

	return 0;
}

static int adv7604_update_edid_timing_desc(const struct v4l2_bt_timings  *bt)
{
	int pclk;
	int hblank;
	int vblank;
	unsigned char timing_desc[18];
	int i;
	__u8 checksum = 0;

	LOG_FUNCTION_NAME;
	/* Copy the timing descriptor field contents from edid struct */
	memcpy(timing_desc, &edid_default[ADV7604_EDID_TIMING_DESC_START], ADV7604_EDID_TIMING_DESC_CNT);
	pclk = bt->pixelclock;
	do_div(pclk,10000);
	printk("pixclk = %lld, pclk = %d\n", bt->pixelclock, pclk);
	hblank = bt->hfrontporch + bt->hsync + bt->hbackporch;
	vblank = bt->vfrontporch + bt->vsync + bt->vbackporch;

	timing_desc[0] = pclk & 0xff;
	timing_desc[1] = (pclk & 0xff00) >> 8;
	timing_desc[2] = bt->width & 0xff;
	timing_desc[3] = hblank & 0xff;
	timing_desc[4] = ((bt->width & 0xf00) >> 4) |  ((hblank & 0xf00) >> 8);
	timing_desc[5] = bt->height & 0xff;
	timing_desc[6] = vblank & 0xff;
	timing_desc[7] = ((bt->height & 0xf00) >> 4) |  ((vblank & 0xf00) >> 8);
	timing_desc[8] = bt->hfrontporch & 0xff;
	timing_desc[9] = bt->hsync & 0xff;
	timing_desc[10] = ((bt->vfrontporch & 0xf) << 4) |  (bt->vsync & 0xf);
	timing_desc[11] = ((bt->hfrontporch & 0x300) >> 2) |
			((bt->hsync & 0x300) >> 4) |
			((bt->vfrontporch & 0x30) >> 2) |
			((bt->vsync & 0x30) >> 4);
	timing_desc[17] = (bt->interlaced << 7) | (timing_desc[17] & 0x7F);
	for (i=0; i<ADV7604_EDID_TIMING_DESC_CNT; ++i) {
		edid_default[ADV7604_EDID_TIMING_DESC_START + i] = timing_desc[i]; 
		printk("a[%d] = %02X\n", i, timing_desc[i]);
	}
	/* Update checksum */
	for (i=0; i<ADV7604_EDID_LENGTH; ++i) {
		checksum += edid_default[i];
	}
	edid_default[ADV7604_EDID_LENGTH] = 0x100 - checksum;
	printk("Updated checksum = %02X\n", edid_default[ADV7604_EDID_LENGTH]);
	LOG_FUNCTION_NAME_EXIT;
	return 0;
}

static int adv7604_update_edid(const struct v4l2_bt_timings  *bt)
{
	int i, ret;

	LOG_FUNCTION_NAME;
	/* Disable the Internal EDID for all 4 Ports */
	adv7604_generic_i2c_byte_write(adv7604_data.i2c_client, ADV7604_DEFAULT_KSV_SLAVE_ADDRESS, 0x77, 0x0);
	/* Update the EDID Table Video Timing Descriptor */
	adv7604_update_edid_timing_desc(bt);
	/* Internal EDID Download for ADV7604 */
	for (i=0; i<ADV7604_EDID_INIT_REG_CNT; ++i) {
		ret = adv7604_generic_i2c_byte_write(adv7604_data.i2c_client, ADV7604_DEFAULT_EDID_SLAVE_ADDRESS,
				i, edid_default[i]);
		if (ret < 0) {
			pr_err("%s: Failed at address %x\n", __func__, i);
			break;
		}
	}
	/* Enable the Internal EDID for all 4 Ports */
	adv7604_generic_i2c_byte_write(adv7604_data.i2c_client, ADV7604_DEFAULT_KSV_SLAVE_ADDRESS, 0x77, 0xF);
	LOG_FUNCTION_NAME_EXIT;
	return ret;
}

/*!
 * ioctl_dev_init - V4L2 sensor interface handler for vidioc_int_dev_init_num
 * @s: pointer to standard V4L2 device structure
 *
 * Initialise the device when slave attaches to the master.
 */
static int ioctl_dev_init(struct v4l2_int_device *s)
{
	struct adv7604_sensor_data *sensor = s->priv;
	int ret = 0;
	struct ipu_soc *ipur;						// Added from reference

	ipur = ipu_get_soc(sensor->ipu_id);						// Added from reference AR0134
	ipu_enable_csi(ipur, sensor->csi);						// Added from reference AR0134

	return ret;
}

/*!
 * ioctl_dev_exit - V4L2 sensor interface handler for vidioc_int_dev_exit_num
 * @s: pointer to standard V4L2 device structure
 *
 * Delinitialise the device when slave detaches to the master.
 */
static int ioctl_dev_exit(struct v4l2_int_device *s)
{
	struct ipu_soc *ipur;						// Added from reference
	struct adv7604_sensor_data *sensor = s->priv;

	ipur = ipu_get_soc(sensor->ipu_id);						// Added from reference AR0134
	ipu_disable_csi(ipur, sensor->csi);						// Added from reference AR0134
	return 0;
}

/***********************************************************************
 * MXC V4l2 Device Driver Section.
 ***********************************************************************/

/* ---------------------- adv7604 v4l2 ioctl descriptors ------------------------ */
/*!
 * This structure defines all the ioctls for this module and links them to the
 * enumeration.
 */
static struct v4l2_int_ioctl_desc adv7604_ioctl_desc[] = {
	{ vidioc_int_dev_init_num, 		(v4l2_int_ioctl_func *)ioctl_dev_init },
	{ vidioc_int_dev_exit_num,  				       ioctl_dev_exit},
	{ vidioc_int_s_power_num,  		(v4l2_int_ioctl_func *)ioctl_s_power },
	{ vidioc_int_g_ifparm_num,  		(v4l2_int_ioctl_func *)ioctl_g_ifparm },
	{ vidioc_int_init_num,  		(v4l2_int_ioctl_func *)ioctl_init },
	{ vidioc_int_enum_fmt_cap_num,  	(v4l2_int_ioctl_func *)ioctl_enum_fmt_cap },
	{ vidioc_int_g_fmt_cap_num,		(v4l2_int_ioctl_func *)ioctl_g_fmt_cap },
	{ vidioc_int_g_parm_num,		(v4l2_int_ioctl_func *)ioctl_g_parm },
	{ vidioc_int_s_parm_num,		(v4l2_int_ioctl_func *)ioctl_s_parm },
	{ vidioc_int_g_ctrl_num,		(v4l2_int_ioctl_func *)ioctl_g_ctrl },
	{ vidioc_int_s_ctrl_num,		(v4l2_int_ioctl_func *)ioctl_s_ctrl },
	{ vidioc_int_enum_framesizes_num,	(v4l2_int_ioctl_func *)ioctl_enum_framesizes },
	{ vidioc_int_enum_frameintervals_num,	(v4l2_int_ioctl_func *)ioctl_enum_frameintervals },
	{ vidioc_int_g_chip_ident_num,		(v4l2_int_ioctl_func *)ioctl_g_chip_ident },
};

static struct v4l2_int_slave adv7604_slave = {
	.ioctls = adv7604_ioctl_desc,
	.num_ioctls = ARRAY_SIZE(adv7604_ioctl_desc),
};

static struct v4l2_int_device adv7604_int_device = {
	.module = THIS_MODULE,
	.name = "adv7604",
	.type = v4l2_int_type_slave,
	.u = {
		.slave = &adv7604_slave,
	},
};

/***********************************************************************
 * I2C client and driver.
 ***********************************************************************/
static s32 adv7604_smbus_write_i2c_block_data(struct i2c_client *client,
	       u8 command, unsigned length, const u8 *values)
{
	union i2c_smbus_data data;

	if (length > I2C_SMBUS_BLOCK_MAX)
		length = I2C_SMBUS_BLOCK_MAX;
	data.block[0] = length;
	memcpy(data.block + 1, values, length);
	return i2c_smbus_xfer(client->adapter, client->addr, client->flags,
			      I2C_SMBUS_WRITE, command,
			      I2C_SMBUS_I2C_BLOCK_DATA, &data);
}

static s32 adv7604_generic_i2c_byte_write(struct i2c_client *client, u8 addr, u8 reg, u8 val)
{
	unsigned short temp_addr = client->addr;		// Save the address for restoration later
	u8 au8Buf[2] = {0};
	int retval = 0;

	au8Buf[0] = reg;
	au8Buf[1] = val;
	client->addr = addr;	//set the desired address to be the client->addr field to use the normal variables
	retval = i2c_master_send(client, au8Buf, 2);
	if (retval < 0) {
		pr_err("%s: ERROR write reg error:reg=%x,val=%x\n",
			__func__, reg, val);
		return -1;
	}
	client->addr = temp_addr;	//set the desired address to be the client->addr field to use the normal variables
	return 0;
}

/***********************************************************************
 * I2C transfer.
 ***********************************************************************/

/*! Read one register from a ADV7604 i2c slave device.
 *
 *  @param *reg		register in the device we wish to access.
 *
 *  @return		       Register value or -1 if error
 */
static inline int adv7604_read_byte_data(u8 addr, u8 reg)
{
	int val;
	u8 tempaddr = adv7604_data.i2c_client->addr;
	adv7604_data.i2c_client->addr = addr;
	val = i2c_smbus_read_byte_data(adv7604_data.i2c_client, reg);
	if (val < 0) {
		pr_err("%s:read reg error: addr=%x reg=%2x\n", __func__, adv7604_data.i2c_client->addr, reg);
		return -1;
	}
	adv7604_data.i2c_client->addr = tempaddr;
	return val;
}

static int adv7604_core_init(void)
{

#if 0
	hdmi_write(sd, 0x48,
		(pdata->disable_pwrdnb ? 0x80 : 0) |
		(pdata->disable_cable_det_rst ? 0x40 : 0));
#endif

	disable_input();

	/* power */
	io_write(0x0c, 0x02);   /* Power up part and power down VDP */
	io_write(0x0b, 0x44);   /* Power down ESDP block */
	cp_write(0xcf, 0x01);   /* Power down macrovision */

	/* video format */
	io_write(0x02, 0xf0);   /* Auto CSC and YUV out */
	io_write(0x03, 0x80); /* 16 bit ITU 656 SDR o/p mode */
#if 0
	io_write_and_or(sd, 0x05, 0xf0, pdata->blank_data << 3 |
					pdata->insert_av_codes << 2 |
					pdata->replicate_av_codes << 1 |
					pdata->invert_cbcr << 0);
#endif

	/* TODO from platform data */
	cp_write(0x69, 0x30);   /* Enable CP CSC */
	//io_write(0x06, 0xa6);   /* positive VS and HS */
	io_write(0x14, 0x7f);   /* Drive strength adjusted to max */
	cp_write(0xba, (1 << 1) | 0x01); /* HDMI free run */
	cp_write(0xf3, 0xdc); /* Low threshold to enter/exit free run mode */
	cp_write(0xf9, 0x23); /*  STDI ch. 1 - LCVS change threshold -
			      ADI recommended setting [REF_01, c. 2.3.3] */
	cp_write(0x45, 0x23); /*  STDI ch. 2 - LCVS change threshold -
			      ADI recommended setting [REF_01, c. 2.3.3] */
	cp_write(0xc9, 0x2d); /* use prim_mode and vid_std as free run resolution
				     for digital formats */
	cp_write(0x7b, 0x1); /* SAV code at HS falling edge and EAV code at HS rising edge */

	/* TODO from platform data */
	afe_write(0xb5, 0x01);  /* Setting MCLK to 256Fs */

	afe_write(0x02, 0x02); /* Select analog input muxing mode */

	/* interrupts */
#if 0
	io_write(0x40, 0xc2); /* Configure INT1 */
	io_write(0x41, 0xd7); /* STDI irq for any change, disable INT2 */
	io_write(0x46, 0x98); /* Enable SSPD, STDI and CP unlocked interrupts */
	io_write(0x6e, 0xc0); /* Enable V_LOCKED and DE_REGEN_LCK interrupts */
	io_write(0x73, 0x10); /* Enable CABLE_DET_A_ST (+5v) interrupt */
#endif

	return 0;
}

/* ---------------------- PROBE ------------------------------------ */

/*!
 * ADV7604 I2C probe function.
 * Function set in i2c_driver struct.
 * Called by insmod.
 *
 *  @param *adapter	I2C adapter descriptor.
 *
 *  @return		Error code indicating success or failure.
 */
static int adv7604_probe(struct i2c_client *client,
			 const struct i2c_device_id *id)
{
	struct pinctrl *pinctrl;
	struct device *dev = &client->dev;
	int retval, val=0;

	/* Check if the adapter supports the needed features */
	if (!i2c_check_functionality(client->adapter, I2C_FUNC_SMBUS_BYTE_DATA))
		return -EIO;
	v4l_dbg(1, debug, client, "detecting adv7604 client on address 0x%x\n",
			client->addr << 1);

	/* Set initial values for the sensor struct. */
	memset(&adv7604_data, 0, sizeof(adv7604_data));

	/* adv7604 pinctrl */
	pinctrl = devm_pinctrl_get_select_default(dev);
	if (IS_ERR(pinctrl)) {
		dev_err(dev, "setup pinctrl failed\n");
		return PTR_ERR(pinctrl);
	}

	/* request reset pin */
	adv7604_data.rst_gpio = of_get_named_gpio(dev->of_node, "rst-gpios", 0);
	if (!gpio_is_valid(adv7604_data.rst_gpio)) {
		dev_warn(dev, "no sensor reset pin available");
		return -EINVAL;
	}
	retval = devm_gpio_request_one(dev, adv7604_data.rst_gpio, GPIOF_OUT_INIT_HIGH,
					"adv7604_reset");
	if (retval < 0)
		return retval;

	/* Initialize variables */
	adv7604_data.i2c_client = client;	// Set the adv7604_data field <i2c_client> to this i2c_client
	adv7604_data.sensor_clk = devm_clk_get(dev, "csi_mclk");
	if (IS_ERR(adv7604_data.sensor_clk)) {
		dev_err(dev, "get mclk failed\n");
		return PTR_ERR(adv7604_data.sensor_clk);
	}

	retval = of_property_read_u32(dev->of_node, "mclk", &adv7604_data.mclk);
	if (retval) {
		dev_err(dev, "mclk frequency is invalid\n");
		return retval;
	}

	retval = of_property_read_u32(dev->of_node, "mclk_source", (u32 *) &(adv7604_data.mclk_source));
	if (retval) {
		dev_err(dev, "mclk_source invalid\n");
		return retval;
	}

	retval = of_property_read_u32(dev->of_node, "ipu_id", &adv7604_data.ipu_id);
	if (retval) {
		dev_err(dev, "ipu_id missing or invalid\n");
		return retval;
	}

	retval = of_property_read_u32(dev->of_node, "csi_id", &adv7604_data.csi);
	if (retval) {
		dev_err(dev, "csi_id invalid\n");
		return retval;
	}

	clk_prepare_enable(adv7604_data.sensor_clk);

	adv7604_data.io_init = adv7604_reset;
	adv7604_data.i2c_client = client;
	adv7604_data.pix.pixelformat = V4L2_PIX_FMT_YUYV;
	adv7604_data.pix.width = 800;
	adv7604_data.pix.height = 600;
	adv7604_data.streamcap.capability = V4L2_MODE_HIGHQUALITY || V4L2_CAP_TIMEPERFRAME;
	adv7604_data.streamcap.capturemode = 0;
	adv7604_data.streamcap.timeperframe.denominator = DEFAULT_FPS;
	adv7604_data.streamcap.timeperframe.numerator = 1;

	adv7604_reset();

	adv7604_power_down(0);

	/*
	 *	Verify that the chip is present
	 */
	val = adv7604_read_byte_data(ADV7604_DEFAULT_IO_MAP_I2C_ADDR, ADV7604_REG_HDMI_SLAVE_ADDRESS);
	if(val != ADV7604_HDMI_SLAVE_ADDRESS) {
		dev_err(dev, "%s: not an adv7604 on address 0x%x\n", __func__, client->addr << 1);
		return -ENODEV;
	}

	clk_disable_unprepare(adv7604_data.sensor_clk);

	/* TODO Add Default crop values for all resolutions to get proper Frame
	 * from camera */
	adv7604_data.spix.top = 0;
	adv7604_data.spix.left = 0;
	adv7604_data.spix.swidth = adv7604_data.pix.width + adv7604_data.spix.left;
	adv7604_data.spix.sheight = adv7604_data.pix.height + adv7604_data.spix.top;

	adv7604_int_device.priv = &adv7604_data;

	retval = v4l2_int_device_register(&adv7604_int_device);

	adv7604_core_init();
	/* TODO Initialize default mode as per entry in device tree */
	adv7604_s_routing(ADV7604_SENSOR_MODE_GR);
	adv7604_change_mode(ADV7604_CAPTURE_GR_SVGA_60);
	pr_info(KERN_INFO "%s ADV7604 Registered Successfully\n", __func__);

	adv7604_power_down(1);

	return retval;
}

/* ---------------------- REMOVE ------------------------------------ */
/*!
 * ADV7604 I2C detach function.
 * Called on rmmod.
 *
 *  @param *client	struct i2c_client*.
 *
 *  @return		Error code indicating success or failure.
 */
static int adv7604_remove(struct i2c_client *client)
{
	/*
	struct v4l2_subdev *sd = i2c_get_clientdata(client);
	struct adv7604_state *state = to_state(sd);
	*/
	dev_dbg(&adv7604_data.i2c_client->dev,
		"%s:Removing %s video decoder @ 0x%02X from adapter %s\n",
		__func__, "adv7180", client->addr << 1, client->adapter->name);

	v4l2_int_device_unregister(&adv7604_int_device);

	return 0;
}


/* ------------------- DRIVER DECLARATION --------------------------------- */
module_i2c_driver(adv7604_i2c_driver);

MODULE_AUTHOR("John Reep <john.reep@gmail.com");
MODULE_DESCRIPTION("ADV7604 Camera Driver");
MODULE_LICENSE("GPL");
MODULE_VERSION("1.1");
MODULE_ALIAS("CSI");
