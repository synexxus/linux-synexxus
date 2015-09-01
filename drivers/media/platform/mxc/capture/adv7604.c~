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
 * @file mxc_adv7604.c
 *
 * @brief Analog Device ADV7604 video decoder functions
 *
 * @ingroup Camera
 */

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

static int debug;
module_param(debug, int, 0644);
MODULE_PARM_DESC(debug, "debug level (0-2)");

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
static inline void adv7604_power_down(int enable)
{
	(enable == 0 ) ? printk(KERN_INFO "%s: DISABLED\n",__func__) : printk(KERN_INFO "%s: ENABLED\n",__func__);;
	//if(&adv7604_data.pwn_gpio != NULL)
	//	gpio_set_value(adv7604_data.pwn_gpio, enable);

	msleep(400);
}

/*
 *	GPIO based reset
 */
static inline void adv7604_reset(void)
{
	printk(KERN_INFO "%s: \n",__func__);
	// camera reset 
	gpio_set_value(adv7604_data.rst_gpio, 1);

/*
	// camera power down
	gpio_set_value(pwn_gpio, 1);
	msleep(5);
	gpio_set_value(pwn_gpio, 0);
	msleep(5);
*/
	msleep(100);
	gpio_set_value(adv7604_data.rst_gpio, 0);
	msleep(500);
	gpio_set_value(adv7604_data.rst_gpio, 1);
	msleep(500);
//	gpio_set_value(pwn_gpio, 1);

}

static void adv7604_soft_reset(void)
{

	printk(KERN_INFO "%s: \n",__func__);

	/* delay at least 5ms */
	msleep(500);
}

/* set sensor driver capability
 * 0x40, 0x14 [5:4] - Output Drivers
 * 0x40, 0x14 [3:2] - Pix Clk Driver
 * 0x40, 0x14 [1:0] - Sync & Field Drivers
	00     - DON'T USE. Defaults to MEDIUM
	01     - LOW
	10     - MEDIUM
	11     - HIGH
 */
static int adv7604_driver_capability(int strength)
{
	u8 temp = 0;
	printk(KERN_INFO "%s: \n",__func__);
	if (strength > 3 || strength < 1) {
		pr_err("The valid driver capability of adv7604 has 3 options\n");
		return -EINVAL;
	}

	temp = adv7604_i2c_byte_read(adv7604_data.i2c_client, ADV7604_REG_IO_REG_14);
	
	temp &= 0xc0;	/* clear [5:0] */
	temp |= ((strength << 4) | (strength << 2) | (strength << 0));

	temp = adv7604_i2c_byte_write(adv7604_data.i2c_client, ADV7604_REG_IO_REG_14, temp);

	return 0;
}

/* Calculate SysClk
 *  
 */
static int adv7604_get_sysclk(void)
{
	return ADV7604_fsc;
}

static int adv7604_init_default_hdmi(void)
{
	printk(KERN_INFO "%s: \n",__func__);
	/*
	* Initialize the HDMI
	* 	Settings from the Register Settings Recommendations Document:
	*/
	printk(KERN_INFO "%s: \tWriting HDMI\n",__func__);
	adv7604_generic_i2c_byte_write(adv7604_data.i2c_client, ADV7604_DEFAULT_HDMI_SLAVE_ADDRESS, 0x0D, 0x84);
	adv7604_generic_i2c_byte_write(adv7604_data.i2c_client, ADV7604_DEFAULT_HDMI_SLAVE_ADDRESS, 0x3D, 0x10);
	adv7604_generic_i2c_byte_write(adv7604_data.i2c_client, ADV7604_DEFAULT_HDMI_SLAVE_ADDRESS, 0x3E, 0x39);
	adv7604_generic_i2c_byte_write(adv7604_data.i2c_client, ADV7604_DEFAULT_HDMI_SLAVE_ADDRESS, 0x4E, 0x3B);
	adv7604_generic_i2c_byte_write(adv7604_data.i2c_client, ADV7604_DEFAULT_HDMI_SLAVE_ADDRESS, 0x57, 0xB6);
	adv7604_generic_i2c_byte_write(adv7604_data.i2c_client, ADV7604_DEFAULT_HDMI_SLAVE_ADDRESS, 0x58, 0x03);
	adv7604_generic_i2c_byte_write(adv7604_data.i2c_client, ADV7604_DEFAULT_HDMI_SLAVE_ADDRESS, 0x8D, 0x18);
	adv7604_generic_i2c_byte_write(adv7604_data.i2c_client, ADV7604_DEFAULT_HDMI_SLAVE_ADDRESS, 0x8E, 0x34);
	adv7604_generic_i2c_byte_write(adv7604_data.i2c_client, ADV7604_DEFAULT_HDMI_SLAVE_ADDRESS, 0x93, 0x8B);
	adv7604_generic_i2c_byte_write(adv7604_data.i2c_client, ADV7604_DEFAULT_HDMI_SLAVE_ADDRESS, 0x94, 0x2D);
	adv7604_generic_i2c_byte_write(adv7604_data.i2c_client, ADV7604_DEFAULT_HDMI_SLAVE_ADDRESS, 0x96, 0x01);
	adv7604_generic_i2c_byte_write(adv7604_data.i2c_client, ADV7604_DEFAULT_HDMI_SLAVE_ADDRESS, 0x48, 0xC0);
	

	printk(KERN_INFO "%s: \tWriting CP\n",__func__);
	adv7604_generic_i2c_byte_write(adv7604_data.i2c_client, ADV7604_DEFAULT_CP_SLAVE_ADDRESS, 0xCF, 0x01);	/* Power Off Macrovision */
	//adv7604_generic_i2c_byte_write(adv7604_data.i2c_client, ADV7604_DEFAULT_CP_SLAVE_ADDRESS, 0x3e, 0x00);	/* Color Conversion controls */
	//adv7604_generic_i2c_byte_write(adv7604_data.i2c_client, ADV7604_DEFAULT_CP_SLAVE_ADDRESS, 0xc3, 0x39);	/* CP Coast Controls */
	//adv7604_generic_i2c_byte_write(adv7604_data.i2c_client, ADV7604_DEFAULT_CP_SLAVE_ADDRESS, 0x40, 0x80);	/* CP Core Pre Gain */
	
	printk(KERN_INFO "%s: \tWriting AFE\n",__func__);
	adv7604_generic_i2c_byte_write(adv7604_data.i2c_client, ADV7604_DEFAULT_AFE_SLAVE_ADDRESS, 0x00, 0xFF);	/* Power Off Macrovision */
	adv7604_generic_i2c_byte_write(adv7604_data.i2c_client, ADV7604_DEFAULT_AFE_SLAVE_ADDRESS, 0x01, 0xFE);	/* Power down ref buffer/bandcap/clamps */
	//adv7604_generic_i2c_byte_write(adv7604_data.i2c_client, ADV7604_DEFAULT_AFE_SLAVE_ADDRESS, 0x12, 0xfb);	/* ADI recommended write */
	//adv7604_generic_i2c_byte_write(adv7604_data.i2c_client, ADV7604_DEFAULT_AFE_SLAVE_ADDRESS, 0x0C, 0x0d);	/* ADI recommended write */
	//adv7604_generic_i2c_byte_write(adv7604_data.i2c_client, ADV7604_DEFAULT_AFE_SLAVE_ADDRESS, 0xC8, 0x40);	/* ADI recommended write */
	adv7604_generic_i2c_byte_write(adv7604_data.i2c_client, 0x30, 0xC8, 0x40);	/* ADI recommended write */

	printk(KERN_INFO "%s: \tWriting IO Map\n",__func__);
	adv7604_generic_i2c_byte_write(adv7604_data.i2c_client, ADV7604_DEFAULT_IO_MAP_I2C_ADDR, ADV7604_REG_PRIMARY_MODE, 0x06);	// HDMI-GR mode
	adv7604_generic_i2c_byte_write(adv7604_data.i2c_client, ADV7604_DEFAULT_IO_MAP_I2C_ADDR, ADV7604_REG_VIDEO_STANDARD, adv7604_prim_mode_hdmi_gr[adv7604_hdmi_mode_SVGA_60].vid_std);	// HDMI GR mode (800x600 @60)
	adv7604_generic_i2c_byte_write(adv7604_data.i2c_client, ADV7604_DEFAULT_IO_MAP_I2C_ADDR, 0x15, 0xA0); // Bring LLC, SYNCS and Pixel_Bus out of TRISATE condition


	printk(KERN_INFO "%s: \tWriting IO Map Recommended\n",__func__);
	adv7604_generic_i2c_byte_write(adv7604_data.i2c_client, ADV7604_DEFAULT_IO_MAP_I2C_ADDR, 0x0B, 0x04);	// Power Down ESDP
	// adv7604_generic_i2c_byte_write(adv7604_data.i2c_client, ADV7604_DEFAULT_IO_MAP_I2C_ADDR, 0x0C, 0x42);	// Power Down VDP Core
	adv7604_generic_i2c_byte_write(adv7604_data.i2c_client, ADV7604_DEFAULT_IO_MAP_I2C_ADDR, 0x0C, 0x40); // Brings up operational mode

adv7604_generic_i2c_byte_write(adv7604_data.i2c_client, ADV7604_DEFAULT_IO_MAP_I2C_ADDR, 0xBA, 0x03); // Force HDMI free run mode
adv7604_generic_i2c_byte_write(adv7604_data.i2c_client, ADV7604_DEFAULT_IO_MAP_I2C_ADDR, 0xBF, 0x13); // Force CP Blue output and free run
	

/* Force Power Up all cores/clocks and disables POWER_DOWN and PWR_SAVE_MODE of oeperation */
//	adv7604_generic_i2c_byte_write(adv7604_data.i2c_client, ADV7604_DEFAULT_ESDP_SLAVE_ADDRESS, 0x0B, 0x04);	/* Power down ESDP core */



	printk(KERN_INFO "%s: \tupdating Data Structure fields for HDMI Graphics\n",__func__);
	adv7604_data.mode = ADV7604_MODE_HDMI_GR;
	adv7604_data.curr_vid_std = adv7604_prim_mode_hdmi_gr;
	adv7604_data.curr_vid_std_index = adv7604_hdmi_mode_SVGA_60;
	adv7604_data.curr_vid_std_size = adv7604_hdmi_gr_mode_size;
	adv7604_update_pixel_values();
	printk(KERN_INFO "%s: \tReturning\n",__func__);
	return adv7604_generic_i2c_byte_write(adv7604_data.i2c_client, ADV7604_DEFAULT_VDP_SLAVE_ADDRESS, 0x0C, 0x42);	/* Power down VDP core */
}

static int adv7604_init_default_gr(void)
{
	printk(KERN_INFO "%s: \n",__func__);
	/*
	 * Initialize the digitizer modes
	 * 	Settings from the Register Settings Recommendations Document:
	 */
	adv7604_generic_i2c_byte_write(adv7604_data.i2c_client, ADV7604_DEFAULT_AFE_SLAVE_ADDRESS, 0x12, 0x7b);	/* ADI recommended write */

	adv7604_generic_i2c_byte_write(adv7604_data.i2c_client, ADV7604_DEFAULT_HDMI_SLAVE_ADDRESS, 0x0D, 0x04);
	adv7604_generic_i2c_byte_write(adv7604_data.i2c_client, ADV7604_DEFAULT_HDMI_SLAVE_ADDRESS, 0x3D, 0x00);
	adv7604_generic_i2c_byte_write(adv7604_data.i2c_client, ADV7604_DEFAULT_HDMI_SLAVE_ADDRESS, 0x3E, 0x74);
	adv7604_generic_i2c_byte_write(adv7604_data.i2c_client, ADV7604_DEFAULT_HDMI_SLAVE_ADDRESS, 0x4E, 0x3B);
	adv7604_generic_i2c_byte_write(adv7604_data.i2c_client, ADV7604_DEFAULT_HDMI_SLAVE_ADDRESS, 0x57, 0x74);
	adv7604_generic_i2c_byte_write(adv7604_data.i2c_client, ADV7604_DEFAULT_HDMI_SLAVE_ADDRESS, 0x58, 0x63);
	adv7604_generic_i2c_byte_write(adv7604_data.i2c_client, ADV7604_DEFAULT_HDMI_SLAVE_ADDRESS, 0x8D, 0x18);
	adv7604_generic_i2c_byte_write(adv7604_data.i2c_client, ADV7604_DEFAULT_HDMI_SLAVE_ADDRESS, 0x8E, 0x34);
	adv7604_generic_i2c_byte_write(adv7604_data.i2c_client, ADV7604_DEFAULT_HDMI_SLAVE_ADDRESS, 0x93, 0x88);
	adv7604_generic_i2c_byte_write(adv7604_data.i2c_client, ADV7604_DEFAULT_HDMI_SLAVE_ADDRESS, 0x94, 0x2e);
	adv7604_generic_i2c_byte_write(adv7604_data.i2c_client, ADV7604_DEFAULT_HDMI_SLAVE_ADDRESS, 0x96, 0x00);
	adv7604_generic_i2c_byte_write(adv7604_data.i2c_client, ADV7604_DEFAULT_HDMI_SLAVE_ADDRESS, 0x00, 0x01);	/* Set to come up as HDMI Port B*/

	adv7604_generic_i2c_byte_write(adv7604_data.i2c_client, ADV7604_DEFAULT_AFE_SLAVE_ADDRESS, 0x00, 0x08);	/* Powerup ADC */
	adv7604_generic_i2c_byte_write(adv7604_data.i2c_client, ADV7604_DEFAULT_AFE_SLAVE_ADDRESS, 0x01, 0x06);	/* Power up AFE */
	adv7604_generic_i2c_byte_write(adv7604_data.i2c_client, ADV7604_DEFAULT_AFE_SLAVE_ADDRESS, 0x02, 0x02);	/* Select the AIN_SEL[2:0] */
	adv7604_generic_i2c_byte_write(adv7604_data.i2c_client, ADV7604_DEFAULT_AFE_SLAVE_ADDRESS, 0x12, 0x7b);	/* ADI recommended write */
	adv7604_generic_i2c_byte_write(adv7604_data.i2c_client, ADV7604_DEFAULT_AFE_SLAVE_ADDRESS, 0x0C, 0x1f);	/* ADI recommended write */
	adv7604_generic_i2c_byte_write(adv7604_data.i2c_client, ADV7604_DEFAULT_AFE_SLAVE_ADDRESS, 0xA0, 0x00);	/* ADI recommended write */
	adv7604_generic_i2c_byte_write(adv7604_data.i2c_client, ADV7604_DEFAULT_AFE_SLAVE_ADDRESS, 0xC8, 0x00);	/* ADI recommended write */

	adv7604_generic_i2c_byte_write(adv7604_data.i2c_client, ADV7604_DEFAULT_IO_MAP_I2C_ADDR, ADV7604_REG_VIDEO_STANDARD, adv7604_prim_mode_gr[adv7604_gr_mode_SVGA_60].vid_std);	// NTSC Comp
	adv7604_generic_i2c_byte_write(adv7604_data.i2c_client, ADV7604_DEFAULT_IO_MAP_I2C_ADDR, ADV7604_REG_PRIMARY_MODE, 
						0x00 | 	(adv7604_prim_mode_gr[adv7604_gr_mode_SVGA_60].prim_mode) |
						      	(adv7604_prim_mode_gr[adv7604_gr_mode_SVGA_60].v_freq << 4));	// Component Mode @60Hz

//	adv7604_generic_i2c_byte_write(adv7604_data.i2c_client, ADV7604_DEFAULT_IO_MAP_I2C_ADDR, ADV7604_REG_PRIMARY_MODE, 0x02);	// Graphics-RGB mode
//	adv7604_generic_i2c_byte_write(adv7604_data.i2c_client, ADV7604_DEFAULT_IO_MAP_I2C_ADDR, ADV7604_REG_VIDEO_STANDARD, adv7604_prim_mode_gr[adv7604_gr_mode_SVGA_60].vid_std);	// HDMI GR mode (800x600 @60)

	adv7604_generic_i2c_byte_write(adv7604_data.i2c_client, ADV7604_DEFAULT_CP_SLAVE_ADDRESS, 0x3e, 0x04);	/* Power Off Macrovision */
	adv7604_generic_i2c_byte_write(adv7604_data.i2c_client, ADV7604_DEFAULT_CP_SLAVE_ADDRESS, 0xc3, 0x39);	/* Power Off Macrovision */

	adv7604_data.mode = ADV7604_MODE_GR;
	adv7604_data.curr_vid_std = adv7604_prim_mode_gr;
	adv7604_data.curr_vid_std_index = adv7604_gr_mode_SVGA_60;
	adv7604_data.curr_vid_std_size = adv7604_gr_mode_size;

	adv7604_update_pixel_values();
	return adv7604_generic_i2c_byte_write(adv7604_data.i2c_client, ADV7604_DEFAULT_CP_SLAVE_ADDRESS, 0x40, 0x5c);	/* CP core pre-gain control. Graphics Mode */
}

static int adv7604_init_default_comp(void)
{
	/*
	 * Initialize the digitizer modes
	 * 	Settings from the Register Settings Recommendations Document:
	 */
	printk(KERN_INFO "%s: \n",__func__);
	adv7604_generic_i2c_byte_write(adv7604_data.i2c_client, ADV7604_DEFAULT_AFE_SLAVE_ADDRESS, 0x12, 0x7b);	/* ADI recommended write */

	adv7604_generic_i2c_byte_write(adv7604_data.i2c_client, ADV7604_DEFAULT_HDMI_SLAVE_ADDRESS, 0x0D, 0x04);
	adv7604_generic_i2c_byte_write(adv7604_data.i2c_client, ADV7604_DEFAULT_HDMI_SLAVE_ADDRESS, 0x3D, 0x00);
	adv7604_generic_i2c_byte_write(adv7604_data.i2c_client, ADV7604_DEFAULT_HDMI_SLAVE_ADDRESS, 0x3E, 0x74);
	adv7604_generic_i2c_byte_write(adv7604_data.i2c_client, ADV7604_DEFAULT_HDMI_SLAVE_ADDRESS, 0x4E, 0x3B);
	adv7604_generic_i2c_byte_write(adv7604_data.i2c_client, ADV7604_DEFAULT_HDMI_SLAVE_ADDRESS, 0x57, 0x74);
	adv7604_generic_i2c_byte_write(adv7604_data.i2c_client, ADV7604_DEFAULT_HDMI_SLAVE_ADDRESS, 0x58, 0x63);
	adv7604_generic_i2c_byte_write(adv7604_data.i2c_client, ADV7604_DEFAULT_HDMI_SLAVE_ADDRESS, 0x8D, 0x18);
	adv7604_generic_i2c_byte_write(adv7604_data.i2c_client, ADV7604_DEFAULT_HDMI_SLAVE_ADDRESS, 0x8E, 0x34);
	adv7604_generic_i2c_byte_write(adv7604_data.i2c_client, ADV7604_DEFAULT_HDMI_SLAVE_ADDRESS, 0x93, 0x88);
	adv7604_generic_i2c_byte_write(adv7604_data.i2c_client, ADV7604_DEFAULT_HDMI_SLAVE_ADDRESS, 0x94, 0x2e);
	adv7604_generic_i2c_byte_write(adv7604_data.i2c_client, ADV7604_DEFAULT_HDMI_SLAVE_ADDRESS, 0x96, 0x00);
	adv7604_generic_i2c_byte_write(adv7604_data.i2c_client, ADV7604_DEFAULT_HDMI_SLAVE_ADDRESS, 0x00, 0x01);	/* Set to come up as HDMI Port B*/

	adv7604_generic_i2c_byte_write(adv7604_data.i2c_client, ADV7604_DEFAULT_AFE_SLAVE_ADDRESS, 0x00, 0x08);	/* Powerup ADC */
	adv7604_generic_i2c_byte_write(adv7604_data.i2c_client, ADV7604_DEFAULT_AFE_SLAVE_ADDRESS, 0x01, 0x81);	/* Simultaneous mode Power up AFE */
	adv7604_generic_i2c_byte_write(adv7604_data.i2c_client, ADV7604_DEFAULT_AFE_SLAVE_ADDRESS, 0x02, 0x01);	/* Select the AIN_SEL[2:0] 4, 5, 6.  We want ch5 or ch6*/
	adv7604_generic_i2c_byte_write(adv7604_data.i2c_client, ADV7604_DEFAULT_AFE_SLAVE_ADDRESS, 0x05, 0x07);	/* Enable all Anti-aliasing filters for ADCs */
	adv7604_generic_i2c_byte_write(adv7604_data.i2c_client, ADV7604_DEFAULT_AFE_SLAVE_ADDRESS, 0x12, 0x7b);	/* ADI recommended write */
	adv7604_generic_i2c_byte_write(adv7604_data.i2c_client, ADV7604_DEFAULT_AFE_SLAVE_ADDRESS, 0x0C, 0x1f);	/* ADI recommended write */
	adv7604_generic_i2c_byte_write(adv7604_data.i2c_client, ADV7604_DEFAULT_AFE_SLAVE_ADDRESS, 0xA0, 0x00);	/* ADI recommended write */
	adv7604_generic_i2c_byte_write(adv7604_data.i2c_client, ADV7604_DEFAULT_AFE_SLAVE_ADDRESS, 0xb5, 0x01);	/* Selects 256Fs for Mclk output setting */
	adv7604_generic_i2c_byte_write(adv7604_data.i2c_client, ADV7604_DEFAULT_AFE_SLAVE_ADDRESS, 0xC8, 0x00);	/* ADI recommended write */

	adv7604_generic_i2c_byte_write(adv7604_data.i2c_client, ADV7604_DEFAULT_IO_MAP_I2C_ADDR, ADV7604_REG_VIDEO_STANDARD, adv7604_prim_mode_comp[adv7604_comp_mode_PR_2x1_525p].vid_std);	// NTSC Comp
	adv7604_generic_i2c_byte_write(adv7604_data.i2c_client, ADV7604_DEFAULT_IO_MAP_I2C_ADDR, ADV7604_REG_PRIMARY_MODE, 
						0x00 | 	(adv7604_prim_mode_comp[adv7604_comp_mode_PR_2x1_525p].prim_mode) |
						      	(adv7604_prim_mode_comp[adv7604_comp_mode_PR_2x1_525p].v_freq << 4));	// Component Mode @60Hz
	adv7604_generic_i2c_byte_write(adv7604_data.i2c_client, ADV7604_DEFAULT_IO_MAP_I2C_ADDR, ADV7604_REG_IO_REG_02, 0xFF);	/* */
	//adv7604_generic_i2c_byte_write(adv7604_data.i2c_client, ADV7604_DEFAULT_IO_MAP_I2C_ADDR, ADV7604_REG_IO_REG_03, 0x80);	/* 16-bit ITU-656 mode*/
	adv7604_generic_i2c_byte_write(adv7604_data.i2c_client, ADV7604_DEFAULT_IO_MAP_I2C_ADDR, ADV7604_REG_IO_REG_03, 0x00);	/* 8-bit ITU-656 mode SDR */
	adv7604_generic_i2c_byte_write(adv7604_data.i2c_client, ADV7604_DEFAULT_IO_MAP_I2C_ADDR, ADV7604_REG_IO_REG_05, 0x0A);	/* DE Output, Blank and no AV codes! */
	adv7604_generic_i2c_byte_write(adv7604_data.i2c_client, ADV7604_DEFAULT_IO_MAP_I2C_ADDR, ADV7604_REG_IO_REG_15, 0xB0); /* Video output available */

	adv7604_generic_i2c_byte_write(adv7604_data.i2c_client, ADV7604_DEFAULT_CP_SLAVE_ADDRESS, 0x3e, 0x04);	/* Power Off Macrovision */
	adv7604_generic_i2c_byte_write(adv7604_data.i2c_client, ADV7604_DEFAULT_CP_SLAVE_ADDRESS, 0x7B, 0x01);	/* Power Off Macrovision */
	adv7604_generic_i2c_byte_write(adv7604_data.i2c_client, ADV7604_DEFAULT_CP_SLAVE_ADDRESS, 0xc3, 0x39);	/* Power Off Macrovision */
	//adv7604_generic_i2c_byte_write(adv7604_data.i2c_client, ADV7604_DEFAULT_CP_SLAVE_ADDRESS, 0xBF, 0x39);	/* Power Off Macrovision */

	adv7604_data.mode = ADV7604_MODE_COMP;
	adv7604_data.curr_vid_std = adv7604_prim_mode_comp;
	adv7604_data.curr_vid_std_index = adv7604_comp_mode_PR_2x1_525p;
	adv7604_data.curr_vid_std_size = adv7604_comp_mode_size;

	adv7604_update_pixel_values();

	adv7604_generic_i2c_byte_write(adv7604_data.i2c_client, ADV7604_DEFAULT_IO_MAP_I2C_ADDR, ADV7604_REG_IO_REG_15, 0xB0);	/* Turn on outputs */
	adv7604_generic_i2c_byte_write(adv7604_data.i2c_client, ADV7604_DEFAULT_CP_SLAVE_ADDRESS, 0x40, 0x5c);				/* CP core pre-gain control. Graphics Mode */
	return 	adv7604_generic_i2c_byte_write(adv7604_data.i2c_client, ADV7604_DEFAULT_IO_MAP_I2C_ADDR, 0x0C, 0x42);			/* Remove the Power Down Control */
}

/**
	adv7604_update_pixel_values()
	General Function to update the values needed in the (struct sensor_data).pix.<values> fields
 */
static void adv7604_update_pixel_values(void){
	adv7604_data.pix.width = adv7604_data.curr_vid_std[adv7604_data.curr_vid_std_index].timings.bt.width;
	adv7604_data.pix.height = adv7604_data.curr_vid_std[adv7604_data.curr_vid_std_index].timings.bt.height;
}

static int adv7604_init_default_mode(void)
{
	int retval = 0;
	adv7604_soft_reset();
	printk(KERN_INFO "%s: \n",__func__);

	retval = adv7604_init_default_hdmi();	/* Come up in Default HDMI mode */
	//retval = adv7604_init_default_comp();	/* NTSC Capture */

	/* allow initialization time */
	msleep(50);

	/* turn off night mode */
	//adv7604_data.pix.width = 800;
	//adv7604_data.pix.height = 600;
//err:
	return retval;
}

static int adv7604_init_mode(void)
{
	printk(KERN_INFO "adv7604_init: Initialization called\n");
	return adv7604_init_default_mode();
}

/*
 * adv7604_change_video_mode
 *
 *	Description: Changes the Video Mode by writing to the i2c device to adjust to a new mode
 */
static int adv7604_change_video_mode(int new_mode){
	int ret = 0;
	u8 modeval = (adv7604_data.curr_vid_std[new_mode].vid_std & ADV7604_MASK_VID_STD);			// Setup Mode value
		ret=adv7604_generic_i2c_byte_write(adv7604_data.i2c_client, ADV7604_DEFAULT_IO_MAP_I2C_ADDR, ADV7604_REG_VIDEO_STANDARD, modeval);
		modeval = 0x00 | 
			( (adv7604_data.curr_vid_std[new_mode].v_freq << 4) & ADV7604_MASK_V_FREQ ) | 
			( adv7604_data.curr_vid_std[new_mode].prim_mode & ADV7604_MASK_PRIM_MODE );
		ret=adv7604_generic_i2c_byte_write(adv7604_data.i2c_client, ADV7604_DEFAULT_IO_MAP_I2C_ADDR, ADV7604_REG_PRIMARY_MODE, modeval);

		// Store the Data
		adv7604_data.curr_vid_std_index = new_mode;	// curr_vid_std is unchanged.  But the new mode is programmed in.
		pr_debug("mxc_v4l2_adv7604: Changing mode to %dx%d\n", 
				adv7604_data.curr_vid_std[adv7604_data.curr_vid_std_index].timings.bt.width, 
				adv7604_data.curr_vid_std[adv7604_data.curr_vid_std_index].timings.bt.height);
	return ret;
}

/*
 * Change the mode of the given Sensor to accomodate the chosen mode
 *
 *
 */
static int adv7604_change_mode(struct adv7604_sensor_data *sensor, enum adv7604_frame_rate frame_rate,
			    enum adv7604_mode mode)
{
	int retval = 0;
	//s32 curr_vid_std = 0;
	s32 curr_v_freq = 0;
	s32 curr_prim_mode = 0;
	u8 reg_val=0;
	printk(KERN_INFO "%s: Entered with frame rate %d and Mode %d!\n", __func__, frame_rate, mode);

	if (frame_rate < adv7604_60_fps || frame_rate >= adv7604_reserved) {
		pr_err("%s: Unsupported V_FREQ mode for current resolution detected: %x!\n", __func__, frame_rate);
		return -1;
		//frame_rate = DEFAULT_FPS;
	}

	//curr_vid_std = (adv7604_generic_i2c_byte_read(sensor->i2c_client, ADV7604_DEFAULT_IO_MAP_I2C_ADDR, 0x00) & ADV7604_MASK_VID_STD);
	//curr_v_freq = adv7604_generic_i2c_byte_read(sensor->i2c_client, ADV7604_DEFAULT_IO_MAP_I2C_ADDR, ADV7604_REG_PRIMARY_MODE);
	curr_v_freq = adv7604_read_byte_data(ADV7604_DEFAULT_IO_MAP_I2C_ADDR, ADV7604_REG_PRIMARY_MODE);
	curr_prim_mode = (curr_v_freq & ADV7604_MASK_PRIM_MODE);
	//curr_v_freq = (curr_v_freq & ADV7604_MASK_V_FREQ)>> 4; // Right shift to match the V_FREQ to our enumeration list

	if(curr_prim_mode != sensor->mode){
		printk(KERN_INFO "%s: 7604 Mode %d vs I2c Mode %d\n", __func__, sensor->mode, curr_prim_mode);
		//pr_err("adv7604_change_mode: I2C read returned different PRIM_MODE than stored\n");	
		//pr_err("adv7604_change_mode: Changing stored mode value\n");
		//sensor.mode = curr_prim_mode;
		if(curr_prim_mode <= ADV7604_MODE_COMP){
			printk(KERN_INFO "%s: Component!\n", __func__);
			sensor->mode = ADV7604_MODE_COMP;
		} else if(curr_prim_mode <= ADV7604_MODE_GR){
			printk(KERN_INFO "%s: Graphics!\n", __func__);
			sensor->mode = ADV7604_MODE_GR;
		} else if(curr_prim_mode <= ADV7604_MODE_HDMI_COMP){
			printk(KERN_INFO "%s: HDMI Comp!\n", __func__);
			sensor->mode = ADV7604_MODE_HDMI_COMP;
		} else if(curr_prim_mode <= ADV7604_MODE_HDMI_GR){
			printk(KERN_INFO "%s: HDMI Gr!\n", __func__);
			sensor->mode = ADV7604_MODE_HDMI_GR;
		} else {
			printk(KERN_INFO "%s: Unsupported mode found in curr_prim_mode!\n", __func__);
			//pr_err("Unsupported mode found in curr_prim_mode\n");
			return -2;
		}
	}

	reg_val = (curr_v_freq & ~ADV7604_MASK_V_FREQ) | (frame_rate << 4);
	printk(KERN_INFO "%s: Write back to PRIMARY_MODE: 0x%x!\n", __func__, reg_val);
	adv7604_generic_i2c_byte_write(sensor->i2c_client, ADV7604_DEFAULT_IO_MAP_I2C_ADDR, ADV7604_REG_PRIMARY_MODE, reg_val);
	return retval;
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
	printk(KERN_INFO "%s: \n",__func__);
	memset(p, 0, sizeof(*p));
	p->u.bt656.clock_curr = adv7604_data.mclk;
	pr_debug("   clock_curr=mclk=%d\n", adv7604_data.mclk);
	p->if_type = V4L2_IF_TYPE_BT656;
	p->u.bt656.mode = V4L2_IF_TYPE_BT656_MODE_NOBT_8BIT;
	p->u.bt656.clock_min = ADV7604_XCLK_MIN;
	p->u.bt656.clock_max = ADV7604_XCLK_MAX;
	p->u.bt656.bt_sync_correct = 1;  /* Indicate external vsync */

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

	printk(KERN_INFO "%s: \n",__func__);

	if (on && !sensor->on) {
		/* Make sure power on */
		adv7604_power_down(0);
	} else if (!on && sensor->on) {
		adv7604_power_down(1);
	}

	sensor->on = on;

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

	printk(KERN_INFO "%s: \n",__func__);

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
	u32 tgt_fps;	/* target frames per secound */
	enum adv7604_frame_rate frame_rate;
	int ret = 0;

	printk(KERN_INFO "%s: \n",__func__);

	/* Make sure power on */
	adv7604_power_down(0);

	switch (a->type) {
		/* This is the only case currently handled. */
		case V4L2_BUF_TYPE_VIDEO_CAPTURE:
			/* Check that the new frame rate is allowed. */
			if ((timeperframe->numerator == 0) ||
			    (timeperframe->denominator == 0)) {
				timeperframe->denominator = DEFAULT_FPS;
				timeperframe->numerator = 1;
			}

			tgt_fps = timeperframe->denominator /
				  timeperframe->numerator;

			if (tgt_fps > MAX_FPS) {
				timeperframe->denominator = MAX_FPS;
				timeperframe->numerator = 1;
			} else if (tgt_fps < MIN_FPS) {
				timeperframe->denominator = MIN_FPS;
				timeperframe->numerator = 1;
			}

			/* Actual frame rate we use */
			tgt_fps = timeperframe->denominator /
				  timeperframe->numerator;

			if (tgt_fps <= 24)
				frame_rate = adv7604_24_fps;
			else if (tgt_fps <= 25)
				frame_rate = adv7604_25_fps;
			else if (tgt_fps <= 30)
				frame_rate = adv7604_30_fps;
			else if (tgt_fps <= 50)
				frame_rate = adv7604_50_fps;
			else if (tgt_fps <= 60)
				frame_rate = adv7604_60_fps;
			else {
				pr_err(" The camera frame rate is not supported!\n");
				return -EINVAL;
			}

			ret = adv7604_change_mode(sensor, frame_rate, a->parm.capture.capturemode);	/* Change the FPS mode! */
			if (ret < 0)
				return ret;

			sensor->streamcap.timeperframe = *timeperframe;
			sensor->streamcap.capturemode = a->parm.capture.capturemode;

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

	printk(KERN_INFO "%s: \n",__func__);

	switch (f->type) {
		case V4L2_BUF_TYPE_VIDEO_CAPTURE:
			pr_debug("adv7604:   Returning size of %dx%d\n",
				 sensor->pix.width, sensor->pix.height);
			f->fmt.pix = sensor->pix;
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

	return 0;
}

/*!
 * ioctl_s_fmt_cap - V4L2 sensor interface handler for ioctl_s_fmt_cap
 * @s: pointer to standard V4L2 device structure
 * @f: pointer to standard V4L2 v4l2_format structure to try and set to
 *
 * Sets the desired sensor's settings to the desired pixel format in the v4l2_format
 * parameter.
 */
static int ioctl_s_fmt_cap(struct v4l2_int_device *s, struct v4l2_format *f)
{
	int ret = 0,i=0,best=-1;
	u32 d=0;
	u32 diff = -1;
	struct adv7604_sensor_data *sensor = s->priv;
	const struct adv7604_video_standards *vid_list;
	//struct v4l2_pix_format desired_pix = f->fmt.pix;
	struct v4l2_bt_timings	t_bt_timings;

	printk(KERN_INFO "%s: \n",__func__);

	switch (f->type) {
		case V4L2_BUF_TYPE_VIDEO_CAPTURE:
			pr_debug("adv7604:   Attempting to set size of %dx%d\n", f->fmt.pix.width, f->fmt.pix.height);
			switch(sensor->mode){
				case ADV7604_MODE_COMP:
					pr_debug("adv7604: ioctl_s_fmt_cap Component Size %dx%d\n", f->fmt.pix.width, f->fmt.pix.height);
					vid_list = adv7604_prim_mode_comp;
					// could use something like adv7604_comp_mode_size value as size instead of NELEMS macro
					break;
				case ADV7604_MODE_GR:
					pr_debug("adv7604: ioctl_s_fmt_cap Graphics Size %dx%d\n", f->fmt.pix.width, f->fmt.pix.height);
					vid_list = adv7604_prim_mode_gr;
					break;
				case ADV7604_MODE_HDMI_COMP:
					pr_debug("adv7604: ioctl_s_fmt_cap HDMI Component Size %dx%d\n", f->fmt.pix.width, f->fmt.pix.height);
					vid_list = adv7604_prim_mode_hdmi_comp;
					break;
				case ADV7604_MODE_HDMI_GR:
					pr_debug("adv7604: ioctl_s_fmt_cap HDMI Graphics Size %dx%d\n", f->fmt.pix.width, f->fmt.pix.height);
					vid_list = adv7604_prim_mode_hdmi_gr;
					break;
				default:
					break;
			}

			/**
				Use vid_list to now parse and understand if the desired resolution is applicable
			 */
			for(i=0; i < NELEMS(vid_list); i++){
				t_bt_timings = vid_list[i].timings.bt;
				if(t_bt_timings.width >= f->fmt.pix.width && t_bt_timings.height >= f->fmt.pix.height){
					d = (t_bt_timings.width - f->fmt.pix.width) + 
						(t_bt_timings.height - f->fmt.pix.height);
					if (diff > d){
						diff = d;
						best = i;
					}
				}
			}
			/**
				We have our mode unless best == -1
			 */
			if(best == -1){
				pr_err("mxc_v4l2_adv7604: ioctl_s_fmt_cap Mode was not found based on selection\n");
				return -EINVAL;
			}
			t_bt_timings = vid_list[best].timings.bt;
			/* Alter the mode set forth in VID_STD */
			adv7604_change_video_mode(best);
			break;
		default:
			ret = -EINVAL;
			break;
	}
	return ret;
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
	printk(KERN_INFO "%s: \n",__func__);
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

	return ret;
}

/*
 * adv7604_cid_brightness
 *
 *	Description: Call back to adjust the brightness for the adv7604
 */
static s32 adv7604_cid_brightness(s32 value){
	s32 ret = 0;
	ret=adv7604_generic_i2c_byte_write(adv7604_data.i2c_client, ADV7604_REG_CP_SLAVE_ADDRESS, ADV7604_REG_CP_BRIGHTNESS, (u8)(value & 0x000000FF));
	if(ret >= 0) 
		adv7604_data.brightness = value;
	return ret;
}

/*
 * adv7604_cid_contrast
 *
 *	Description: Call back to adjust the contrast for the adv7604
 */
static s32 adv7604_cid_contrast(s32 value){
	s32 ret = 0;
	ret=adv7604_generic_i2c_byte_write(adv7604_data.i2c_client, ADV7604_REG_CP_SLAVE_ADDRESS, ADV7604_REG_CP_CONTRAST, (u8)(value & 0x000000FF));
	if(ret >= 0) 
		adv7604_data.contrast = value;
	return ret;
}

/*
 * adv7604_cid_hue
 *
 *	Description: Call back to adjust the hue for the adv7604
 */
static s32 adv7604_cid_hue(s32 value){
	s32 ret = 0;
	ret=adv7604_generic_i2c_byte_write(adv7604_data.i2c_client, ADV7604_REG_CP_SLAVE_ADDRESS, ADV7604_REG_CP_HUE, (u8)(value & 0x000000FF));
	if(ret >= 0) 
		adv7604_data.hue = value;
	return ret;
}

/*
 * adv7604_cid_hue
 *
 *	Description: Call back to adjust the hue for the adv7604
 */
static s32 adv7604_cid_saturation(s32 value){
	s32 ret = 0;
	ret=adv7604_generic_i2c_byte_write(adv7604_data.i2c_client, ADV7604_REG_CP_SLAVE_ADDRESS, ADV7604_REG_CP_SATURATION, (u8)(value & 0x000000FF));
	if(ret >= 0) 
		adv7604_data.saturation = value;
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

	pr_debug("In adv7604:ioctl_s_ctrl %d\n", vc->id);

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
	//struct adv7604_sensor_data *sensor = s->priv;
	const struct adv7604_video_standards *vid_list;
	int vid_list_size = 0;
	printk(KERN_INFO "%s: \n",__func__);
	fsize->pixel_format = adv7604_data.pix.pixelformat;

	switch(adv7604_data.mode){
		case ADV7604_MODE_COMP:
			pr_debug("adv7604: ioctl_enum_framesizes Component Size\n");
			vid_list = adv7604_prim_mode_comp;
			vid_list_size = adv7604_comp_mode_size;
			break;
		case ADV7604_MODE_GR:
			pr_debug("adv7604: ioctl_enum_framesizes Graphics Size\n");
			vid_list = adv7604_prim_mode_gr;
			vid_list_size = adv7604_gr_mode_size;
			break;
		case ADV7604_MODE_HDMI_COMP:
			pr_debug("adv7604: ioctl_enum_framesizes Component Size\n");
			vid_list = adv7604_prim_mode_hdmi_comp;
			vid_list_size = adv7604_hdmi_comp_mode_size;
			break;
		case ADV7604_MODE_HDMI_GR:
			pr_debug("adv7604: ioctl_enum_framesizes Graphics Size\n");
			vid_list = adv7604_prim_mode_hdmi_gr;
			vid_list_size = adv7604_hdmi_gr_mode_size;
			break;
		default:
			return -EINVAL;
			break;
	}
	
	if(fsize->index >= vid_list_size)
		return -EINVAL;

	fsize->discrete.width = vid_list[fsize->index].timings.bt.width;
	fsize->discrete.height = vid_list[fsize->index].timings.bt.height;
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
	const struct adv7604_video_standards *vid_list;
	int vid_list_size = 0;
	printk(KERN_INFO "%s: \n",__func__);
	switch(adv7604_data.mode){
		case ADV7604_MODE_COMP:
			pr_debug("adv7604: ioctl_enum_frameintervals Component Size\n");
			vid_list = adv7604_prim_mode_comp;
			vid_list_size = adv7604_comp_mode_size;
			break;
		case ADV7604_MODE_GR:
			pr_debug("adv7604: ioctl_enum_frameintervals Graphics Size\n");
			vid_list = adv7604_prim_mode_gr;
			vid_list_size = adv7604_gr_mode_size;
			break;
		case ADV7604_MODE_HDMI_COMP:
			pr_debug("adv7604: ioctl_enum_frameintervals Component Size\n");
			vid_list = adv7604_prim_mode_hdmi_comp;
			vid_list_size = adv7604_hdmi_comp_mode_size;
			break;
		case ADV7604_MODE_HDMI_GR:
			pr_debug("adv7604: ioctl_enum_frameintervals Graphics Size\n");
			vid_list = adv7604_prim_mode_hdmi_gr;
			vid_list_size = adv7604_hdmi_gr_mode_size;
			break;
		default:
			return -EINVAL;
			break;
	}

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
	printk(KERN_INFO "%s: \n",__func__);
	((struct v4l2_dbg_chip_ident *)id)->match.type =
					V4L2_CHIP_MATCH_I2C_DRIVER;
	strcpy(((struct v4l2_dbg_chip_ident *)id)->match.name, "adv7604_camera");

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
	//if (fmt->index > ov5640_mode_MAX)
	//	return -EINVAL;
	/* TODO Convert this and utilize pixelformat field of pix structure*/
	struct adv7604_sensor_data *sensor = s->priv;
	const struct adv7604_video_standards *vid_list;
	int vid_list_size = 0;

	printk(KERN_INFO "%s: \n",__func__);
	switch(sensor->mode){
		case ADV7604_MODE_COMP:
			printk(KERN_INFO "%s: ADV7604_MODE_COMP\n", __func__);
			vid_list = adv7604_prim_mode_comp;
			vid_list_size = adv7604_comp_mode_size;
			break;
		case ADV7604_MODE_GR:
			printk(KERN_INFO "%s: ADV7604_MODE_GR\n", __func__);
			vid_list = adv7604_prim_mode_gr;
			vid_list_size = adv7604_gr_mode_size;
			break;
		case ADV7604_MODE_HDMI_COMP:
			printk(KERN_INFO "%s: ADV7604_MODE_HDMI_COMP\n", __func__);
			vid_list = adv7604_prim_mode_hdmi_comp;
			vid_list_size = adv7604_hdmi_comp_mode_size;
			break;
		case ADV7604_MODE_HDMI_GR:
			printk(KERN_INFO "%s: ADV7604_MODE_HDMI_GR\n", __func__);
			vid_list = adv7604_prim_mode_hdmi_gr;
			vid_list_size = adv7604_hdmi_gr_mode_size;
			break;
		default:
			printk(KERN_ERR "%s: ADV7604 Mode Data Invalid\n", __func__);
			return -EINVAL;
			break;
	}

	if (fmt->index >= vid_list_size)
		return -EINVAL;
	fmt->pixelformat = adv7604_data.pix.pixelformat;


	printk(KERN_INFO "%s: Format %dx%d\n",__func__,vid_list[fmt->index].timings.bt.width, vid_list[fmt->index].timings.bt.height);

	return 0;
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
	u32 tgt_xclk;	/* target xclk */
	u32 tgt_fps;	/* target frames per secound */
	enum adv7604_frame_rate frame_rate;
	int ret;
	struct ipu_soc *ipur;						// Added from reference

	printk(KERN_INFO "%s: \n",__func__);
	adv7604_data.on = true;

	ipur = ipu_get_soc(sensor->ipu_id);						// Added from reference AR0134
	ipu_enable_csi(ipur, sensor->csi);						// Added from reference AR0134

	/* mclk */
	tgt_xclk = adv7604_data.mclk;
	tgt_xclk = min(tgt_xclk, (u32)ADV7604_XCLK_MAX);
	tgt_xclk = max(tgt_xclk, (u32)ADV7604_XCLK_MIN);
	adv7604_data.mclk = tgt_xclk;

	pr_debug(" ADV7604:  Setting mclk to %d MHz\n", tgt_xclk / 1000000);
	clk_set_rate(adv7604_data.sensor_clk, adv7604_data.mclk);

	/* Default camera frame rate is set in probe */
	tgt_fps = sensor->streamcap.timeperframe.denominator /
		  sensor->streamcap.timeperframe.numerator;

	if (tgt_fps <= 24)
		frame_rate = adv7604_24_fps;
	else if (tgt_fps <= 25)
		frame_rate = adv7604_25_fps;
	else if (tgt_fps <= 30)
		frame_rate = adv7604_30_fps;
	else if (tgt_fps <= 50)
		frame_rate = adv7604_50_fps;
	else if (tgt_fps <= 60)
		frame_rate = adv7604_60_fps;
	else {
		pr_err(" The camera frame rate is not supported!\n");
		return -EINVAL;
	}

	ret = adv7604_init_mode();
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
	{ vidioc_int_s_fmt_cap_num, 		(v4l2_int_ioctl_func *)ioctl_s_fmt_cap },
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

static s32 adv7604_generic_i2c_byte_read(struct i2c_client *client, u8 addr, u8 reg){
	unsigned short temp_addr = client->addr;		// Save the address for restoration later
	u8 au8RegBuf[1] = {0};
	int retval = 0;

	printk(KERN_INFO "%s: read original addr=%x\n", __func__, temp_addr);

	client->addr = addr;	//set the desired address to be the client->addr field to use the normal variables
	au8RegBuf[0] = reg;
	//au8RegBuf[1] = reg;

	retval = i2c_master_send(client, au8RegBuf, 1);
	printk(KERN_INFO "%s: Master Send:addr=%x reg=%x count=%x\n",__func__, (unsigned short)client->addr, reg, retval);
	if (retval < 0 ) {
		printk(KERN_ERR "%s:write reg error:addr=%x reg=%x\n",
				__func__, addr, reg);
		return -1;
	}

//	retval = i2c_master_recv(client, &u8RdVal, 1);
	retval = i2c_smbus_read_byte_data(client, reg);
	printk(KERN_INFO "%s: addr=%x reg=%x val=%x\n",__func__, (unsigned short)client->addr, reg, retval);
	if (retval < 0) {
		printk(KERN_ERR "%s:read reg error:addr=%x, reg=%x, val=%x\n", __func__, (unsigned short)client->addr, reg, retval);
		return -1;
	}
	client->addr = temp_addr;				// Restore the address
	return retval;
}

/*
 *	Address to transmit to
 *	reg: starting register to read from
 *	count: number of bytes to read
 */
static s32 my_i2c_byte_read(struct i2c_client *client, u8 addr, u8 reg, u8 count);
static s32 my_i2c_byte_read(struct i2c_client *client, u8 addr, u8 reg, u8 count){
	unsigned short temp_addr = client->addr;		// Save the address for restoration later
	u8 au8RegBuf[1] = {0};
	u8 sizeToRead = count;
	u8 u8RdVal[count];
	//u8 u8RdVal = 0;
	int retval = 0;
	for(retval = 0; retval < sizeToRead; retval++) u8RdVal[retval] = 0;
	retval = 0;

	printk(KERN_INFO "%s: read original addr=%x\n", __func__, temp_addr);

	client->addr = addr;	//set the desired address to be the client->addr field to use the normal variables
	au8RegBuf[0] = reg;
	//au8RegBuf[1] = reg;

	retval = i2c_master_send(client, au8RegBuf, 1);
	printk(KERN_INFO "%s: Master Send:addr=%x reg=%x count=%x\n",__func__, (unsigned short)client->addr, reg, retval);
	if (retval < 0 ) {
		printk(KERN_ERR "%s:write reg error:addr=%x reg=%x\n",__func__, addr, reg);
		return -1;
	}

	msleep(5);
	printk(KERN_INFO "%s: Master recv:addr=%x reg=%x val=%x count=%x\n",__func__, (unsigned short)client->addr, reg, u8RdVal[0], retval);
	retval = i2c_master_recv(client, u8RdVal, sizeToRead);
	if (retval < 0) {
		printk(KERN_ERR "%s:read reg error:addr=%x, reg=%x, val=%x retval=%x\n", __func__, (unsigned short)client->addr, reg, u8RdVal[0],retval);
		return -1;
	}

	for(sizeToRead=0; sizeToRead < retval; sizeToRead++){
		printk(KERN_INFO "\t%s: val[0x%x]=0x%x\n",__func__, reg+sizeToRead, u8RdVal[sizeToRead]);
	}

	client->addr = temp_addr;				// Restore the address
	msleep(5);
	return u8RdVal[0];
}

static s32 adv7604_i2c_byte_read(struct i2c_client *client, u8 reg){
	u8 au8RegBuf[1] = {0};
	u8 u8RdVal = 0;
	int retval = 0;
	au8RegBuf[0] = reg;

	retval = i2c_master_send(client, au8RegBuf, 1);
	printk(KERN_INFO "%s: Master send:addr=%x reg=%x count=%x\n",__func__, (unsigned short)client->addr, reg, retval);
	if (retval < 0) {
		pr_err("%s:ERROR write reg error:reg=%x\n",
				__func__, reg);
		return -1;
	}

	retval = i2c_master_recv(client, &u8RdVal, 1);
	printk(KERN_INFO "%s: Master recv:addr=%x reg=%x val=%x count=%x\n",__func__, (unsigned short)client->addr, reg, u8RdVal, retval);
	if (retval < 0) {
		pr_err("%s: ERROR read reg error:reg=%x,val=%x\n",
				__func__, reg, u8RdVal);
		return -1;
	}

	return u8RdVal;
}

static s32 adv7604_generic_i2c_byte_write(struct i2c_client *client, u8 addr, u8 reg, u8 val){
	unsigned short temp_addr = client->addr;		// Save the address for restoration later
	u8 au8Buf[2] = {0};
	int retval = 0;
	au8Buf[0] = reg;
	au8Buf[1] = val;

	client->addr = addr;	//set the desired address to be the client->addr field to use the normal variables

	printk(KERN_INFO "%s: write original addr=%x\n", __func__, temp_addr);

	retval = i2c_master_send(client, au8Buf, 2);
	printk(KERN_INFO "%s: Master Send:addr=%x reg=%x count=%x\n",__func__, (unsigned short)client->addr, reg, retval);
	if (retval < 0) {
		pr_err("%s: ERROR write reg error:reg=%x,val=%x\n",
			__func__, reg, val);
		return -1;
	}

	client->addr = temp_addr;	//set the desired address to be the client->addr field to use the normal variables

	return 0;

	client->addr = temp_addr;				// Restore the address
}

static s32 adv7604_i2c_byte_write(struct i2c_client *client, u8 reg, u8 val){
	u8 au8Buf[2] = {0};
	int retval = 0;
	au8Buf[0] = reg;
	au8Buf[1] = val;

	retval = i2c_master_send(client, au8Buf, 2);
	printk(KERN_INFO "%s: Master Send:addr=%x reg=%x count=%x\n",__func__, (unsigned short)client->addr, reg, retval);
	if (retval < 0) {
		pr_err("%s: ERROR write reg error:reg=%x,val=%x\n",
			__func__, reg, val);
		return -1;
	}

	return 0;
}

/***********************************************************************
 * I2C transfert.
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

/*! Write one register of a ADV7604 i2c slave device.
 *
 *  @param *reg		register in the device we wish to access.
 *
 *  @return		       0 if success, an error code otherwise.
 */
static int adv7604_write_reg(u8 addr, u8 reg, u8 val)
{
	s32 ret;
	u8 tempaddr = adv7604_data.i2c_client->addr;
	adv7604_data.i2c_client->addr = addr;
	ret = i2c_smbus_write_byte_data(adv7604_data.i2c_client, reg, val);
	if (ret < 0) {
		pr_err("%s:write reg error: addr=%x reg=%2x,val=%2x\n", __func__,adv7604_data.i2c_client->addr, reg, val);
		return -1;
	}
	adv7604_data.i2c_client->addr = tempaddr;
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
	//struct v4l2_subdev *sd;
	int retval, val=0;
	//u8 chip_id_high, chip_id_low;
	struct regmap *gpr;
	struct ipu_soc *ipur;
	struct adv7604_sensor_data *sensor = &adv7604_data;

	printk(KERN_INFO "%s: Something probed the ADV7604!\n", __func__);
	printk(KERN_INFO "%s: Noel wants lots more beer too\n", __func__);

	/* Check if the adapter supports the needed features */
	if (!i2c_check_functionality(client->adapter, I2C_FUNC_SMBUS_BYTE_DATA))
		return -EIO;
	v4l_dbg(1, debug, client, "detecting adv7604 client on address 0x%x\n",
			client->addr << 1);

	/* Set initial values for the sensor struct. */
	memset(&adv7604_data, 0, sizeof(adv7604_data));

	/* Notify adapter allocation */
	printk(KERN_INFO "DBG sensor data is at %p\n", &adv7604_data);

	/* adv7604 pinctrl */
	pinctrl = devm_pinctrl_get_select_default(dev);
	if (IS_ERR(pinctrl)) {
		dev_err(dev, "setup pinctrl failed\n");
		return PTR_ERR(pinctrl);
	}

	printk(KERN_INFO "%s Requesting reset pin\n", __func__);
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

	printk(KERN_INFO "%s initializing variables\n", __func__);

	/* Initialize variables */
	adv7604_data.i2c_client = client;	// Set the adv7604_data field <i2c_client> to this i2c_client
	printk(KERN_INFO "%s devm_clk_get csi_mclk\n", __func__);
	adv7604_data.sensor_clk = devm_clk_get(dev, "csi_mclk");
	if (IS_ERR(adv7604_data.sensor_clk)) {
		dev_err(dev, "get mclk failed\n");
		return PTR_ERR(adv7604_data.sensor_clk);
	}

	printk(KERN_INFO "%s devm_clk_get mclk\n", __func__);
	retval = of_property_read_u32(dev->of_node, "mclk", &adv7604_data.mclk);
	if (retval) {
		dev_err(dev, "mclk frequency is invalid\n");
		return retval;
	}

	printk(KERN_INFO "%s devm_clk_get mclk_source\n", __func__);
	retval = of_property_read_u32(dev->of_node, "mclk_source", (u32 *) &(adv7604_data.mclk_source));
	if (retval) {
		dev_err(dev, "mclk_source invalid\n");
		return retval;
	}

	printk(KERN_INFO "%s devm_clk_get ipu_id\n", __func__);
	retval = of_property_read_u32(dev->of_node, "ipu_id", &adv7604_data.ipu_id);
	if (retval) {
		dev_err(dev, "ipu_id missing or invalid\n");
		return retval;
	}

	printk(KERN_INFO "%s devm_clk_get csi_id\n", __func__);
	retval = of_property_read_u32(dev->of_node, "csi_id", &adv7604_data.csi);
	if (retval) {
		dev_err(dev, "csi_id invalid\n");
		return retval;
	}

	printk(KERN_INFO "%s all values read.  Preparing struct\n", __func__);
	clk_prepare_enable(adv7604_data.sensor_clk);

	adv7604_data.io_init = adv7604_reset;
	adv7604_data.i2c_client = client;
	//adv7604_data.pix.pixelformat = V4L2_PIX_FMT_YUYV;
	adv7604_data.pix.pixelformat = V4L2_PIX_FMT_UYVY;
	adv7604_data.pix.width = 800;
	adv7604_data.pix.height = 600;
//	adv7604_data.streamcap.capability = V4L2_MODE_HIGHQUALITY |
	adv7604_data.streamcap.capability = V4L2_CAP_TIMEPERFRAME;
	adv7604_data.streamcap.capturemode = 0;
	adv7604_data.streamcap.timeperframe.denominator = DEFAULT_FPS;
	adv7604_data.streamcap.timeperframe.numerator = 1;

	//ov5640_regulator_enable(&client->dev);
	///state->restart_stdi_once = true;
	//state->selected_input = ~0;	
	//state.std_id = V4L2_STD_ALL;

	printk(KERN_INFO "%s Struct prepared.  Attempting reset\n", __func__);
	adv7604_reset();

	adv7604_power_down(0);

	/*
	 *	Verify that the chip is present
	 */
	printk(KERN_INFO "%s: Attempting to find ADV7604 on i2c bus\n", __func__);
	//val = adv7604_generic_i2c_byte_read(client, ADV7604_DEFAULT_IO_MAP_I2C_ADDR, ADV7604_REG_HDMI_SLAVE_ADDRESS);
	val = adv7604_read_byte_data(ADV7604_DEFAULT_IO_MAP_I2C_ADDR, ADV7604_REG_HDMI_SLAVE_ADDRESS);
	printk(KERN_INFO "%s Value Read @ 0x%x is 0x%x\n", __func__ , ADV7604_DEFAULT_IO_MAP_I2C_ADDR, val);	
	if(val != ADV7604_HDMI_SLAVE_ADDRESS) {
		dev_err(dev, "%s: not an adv7604 on address 0x%x\n", __func__, client->addr << 1);
		return -ENODEV;
	}

	printk(KERN_INFO "%s ADV7604 found.  Attempting device enable\n", __func__);
	adv7604_power_down(1);

	gpr = syscon_regmap_lookup_by_compatible("fsl,imx6q-iomuxc-gpr");
	if (!IS_ERR(gpr)) {
		if (of_machine_is_compatible("fsl,imx6q")) {
			int mask = (3 << 19);
			int val;
			  
			if (sensor->csi != sensor->ipu_id) {
				//pr_warning("%s: csi_id(%d) != ipu_id(%d)\n", __func__, sensor->csi, sensor->ipu_id);
				  printk(KERN_WARNING "%s: csi_id(%d) != ipu_id(%d)\n", __func__, sensor->csi, sensor->ipu_id);
				return -ENODEV;
			}

			printk(KERN_INFO "%s: sensor->ipu = %d\n", __func__,sensor->ipu_id);	
			printk(KERN_INFO "%s: sensor->csi = %d\n", __func__,sensor->csi);	

			if(sensor->csi==1)	// comparison between pointer and integer lines
			{
			  val= (1<<20) ;
			}
			else
                          val= (1<<19); 
			
			printk(KERN_INFO "%s: syscon_regmap_lookup: mask:%x %x\n", __func__,mask,val);
			regmap_update_bits(gpr, IOMUXC_GPR1, val, val);
			
		} else if (of_machine_is_compatible("fsl,imx6dl")) {
			int mask = &adv7604_data.csi ? (7 << 3) : (7 << 0);
			int val =  &adv7604_data.csi ? (4 << 3) : (4 << 0);

			regmap_update_bits(gpr, IOMUXC_GPR13, mask, val);
		}
	} else {
		pr_err("%s: failed to find fsl,imx6q-iomux-gpr regmap\n",
		       __func__);
	}

	printk(KERN_INFO "%s IPU/CSI attached.  Allocating Device\n", __func__);
	clk_disable_unprepare(adv7604_data.sensor_clk);

	adv7604_int_device.priv = &adv7604_data;

	printk(KERN_INFO "%s Allocated to adv7604_int_device. Attempting device registration\n", __func__);
	retval = v4l2_int_device_register(&adv7604_int_device);

	printk(KERN_INFO "%s ADV7604 Registered Successfully\n", __func__);

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

	/*
	cancel_delayed_work(&adv7604_data->delayed_work_enable_hotplug);
	destroy_workqueue(adv7604_data->work_queues);
	v4l2_device_unregister_subdev(adv7604_data);
	media_entity_cleanup(&sd->entity);
	adv7604_unregister_clients(to_state(sd));
	v4l2_ctrl_handler_free(sd->ctrl_handler);
	kfree(to_state(sd));
	*/
	return 0;
}


/* ---------------------- INIT ------------------------------------ */
/*!
 * ADV7604 init function.
 * Called on insmod.
 *
 * @return    Error code indicating success or failure.
 */
static int mxc_v4l2_adv7604_i2c_init(void)
{
	u8 err = 0;

	pr_debug("In adv7604_init\n");
	printk(KERN_INFO "adv7604_init\n");

	/* Tells the i2c driver what functions to call for this driver. */
	err = i2c_add_driver(&adv7604_i2c_driver);
	if (err != 0)
		pr_err("%s:driver registration failed, error=%d\n",
			__func__, err);

	return err;
}

/* ---------------------- CLEANUP I2C driver -------------------------------- */
/*!
 * ADV7604 cleanup function.
 * Called on rmmod.
 *
 * @return   Error code indicating success or failure.
 */
static void mxc_v4l2_adv7604_i2c_clean(void)
{
	//struct adv7604_state *state = to_state(sd);
	//v4l2_int_device_unregister(&adv7604_int_device);
	printk(KERN_INFO "adv7604_clean\n");

	dev_dbg(&adv7604_data.i2c_client->dev, "In adv7604_clean\n");
	i2c_del_driver(&adv7604_i2c_driver);
}

/* ------------------- DRIVER DECLARATION --------------------------------- */

//module_init(mxc_v4l2_adv7604_i2c_init);
//module_exit(mxc_v4l2_adv7604_i2c_clean);
module_i2c_driver(adv7604_i2c_driver);

MODULE_AUTHOR("John Reep <john.reep@gmail.com");
MODULE_DESCRIPTION("ADV7604 Camera Driver");
MODULE_LICENSE("GPL");
MODULE_VERSION("1.1");
MODULE_ALIAS("CSI");


