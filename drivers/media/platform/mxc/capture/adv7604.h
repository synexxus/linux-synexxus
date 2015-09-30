/*
 * Copyright 2014 Synexxus, Inc. All Rights Reserved.
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
 * @defgroup MXC_V4L2_CAPTURE MXC V4L2 Video Capture Driver
 */
/*!
 * @file mxc_adv7604.h
 *
 * @brief ADV7604 Device Driver Header File for i.MX devices
 *
 *
 * @ingroup camera
 */

#ifndef _ADV7604_
#define _ADV7604_

	#include <linux/clk.h>
	#include <linux/delay.h>
	#include <linux/device.h>
	#include <linux/i2c.h>
	#include <linux/init.h>
	#include <linux/module.h>
	#include <linux/of_device.h>
	#include <linux/of_gpio.h>
	#include <linux/pinctrl/consumer.h>
	#include <linux/regulator/consumer.h>
	#include <media/v4l2-chip-ident.h>
	#include <media/v4l2-int-device.h>
	#include <linux/v4l2-dv-timings.h>
	#include "mxc_v4l2_capture.h"

	#define ADV7604_VOLTAGE_ANALOG               1800000
	#define ADV7604_VOLTAGE_DIGITAL_CORE         1800000
	#define ADV7604_VOLTAGE_DIGITAL_IO           3300000
	#define ADV7604_VOLTAGE_PLL                  1800000

	static int adv7604_probe(struct i2c_client *adapter,
				 const struct i2c_device_id *id);

	static int adv7604_remove(struct i2c_client *client);

	#define ADV7604_fsc			(28636360)		// Master Clock of device

	#define	ADV7604_RGB_OUT			(1 << 1)

	#define ADV7604_OP_FORMAT_SEL_8BIT	(0 << 0)
	#define ADV7604_OP_FORMAT_SEL_10BIT	(1 << 0)
	 
	 
	/* 	ADV7604_SW_RevF.pdf, Page 3
	 *
	 *	IO MAP
	 *	ADDR (0x40)
	 *	Regiser: Video Standard (0x00)
	 *		[5:0]VID_STD
	 */
	 #define ADV7604_REG_VIDEO_STANDARD		0x00
	 #define ADV7604_MASK_VID_STD			0b00111111
	
	/* 	ADV7604_SW_RevF.pdf, Page 3
	 *
	 *	IO MAP
	 *	ADDR (0x40)
	 *	Regiser: Primary Mode (0x01)
	 *		[7]ADC_HDMI_SIMULT_MODE
	 *		[6:4]V_FREQ
	 *		[3:0]PRIM_MODE
	 */
	 #define ADV7604_REG_PRIMARY_MODE		0x01
	 #define ADV7604_MASK_ADC_HDMI_SIMULT_MODE	0b10000000
	 #define ADV7604_MASK_V_FREQ			0b01110000
	 #define ADV7604_MASK_PRIM_MODE			0b00001111

	/* 	ADV7604_SW_RevF.pdf, Page 3
	 *
	 *	IO MAP
	 *	ADDR (0x40)
	 *	Regiser: IO_REG_02 (0x02)
	 *		[7:4]INP_COLOR_SPACE
	 *		[3]ALT_GAMMA
	 *		[2]OP_646_RANGE
	 *		[1]RGB_OUT
	 *		[0]ALT_DATA_SAT
	 */
	 #define ADV7604_REG_IO_REG_02			0x02
	 #define ADV7604_MASK_INP_COLOR_SPACE		0xF0
	 #define ADV7604_MASK_ALT_GAMMA			0x08
	 #define ADV7604_MASK_OP_656_RANGE		0x04
	 #define ADV7604_MASK_RGB_OUT			0x02
	 #define ADV7604_MASK_ALT_DATA_SAT		0x01

	enum adv7604_inp_color_space {
		ADV7604_INP_COLOR_SPACE_LIM_RGB 	= 0,
		ADV7604_INP_COLOR_SPACE_FULL_RGB 	= 1,
		ADV7604_INP_COLOR_SPACE_LIM_YCBCr_601 	= 2 ,
		ADV7604_INP_COLOR_SPACE_LIM_YCBCr_709 	= 3,
		ADV7604_INP_COLOR_SPACE_XVYCC_601 	= 4,
		ADV7604_INP_COLOR_SPACE_XVYCC_709 	= 5,
		ADV7604_INP_COLOR_SPACE_FULL_YCBCr_601 	= 6,
		ADV7604_INP_COLOR_SPACE_FULL_YCBCr_709	= 7,
		ADV7604_INP_COLOR_SPACE_AUTO 		= 0xf ,
	};

	/* 	ADV7604_SW_RevF.pdf, Page 3
	 *
	 *	IO MAP
	 *	ADDR (0x40)
	 *	Regiser: IO_REG_03 (0x03)
	 *		[7:0]OP_FORMAT_SEL
	 */
	 #define ADV7604_REG_IO_REG_03			0x03
	 #define ADV7604_MASK_OP_FORMAT_SEL			0xFF
	enum adv7604_op_format_sel {
		ADV7604_OP_FORMAT_SEL_SDR8_ITU656 	= 0,
		ADV7604_OP_FORMAT_SEL_SDR10_ITU656 	= 0b00000001,
		ADV7604_OP_FORMAT_SEL_SDR12_ITU656_0 	= 0b00000010,
		ADV7604_OP_FORMAT_SEL_SDR12_ITU656_1 	= 0b00000110,
		ADV7604_OP_FORMAT_SEL_SDR12_ITU656_2 	= 0b00001010,
		ADV7604_OP_FORMAT_SEL_DDR8_422	 	= 0b00100000,
		ADV7604_OP_FORMAT_SEL_DDR10_422	 	= 0b00100001,
		ADV7604_OP_FORMAT_SEL_DDR12_422_0 	= 0b00100010,
		ADV7604_OP_FORMAT_SEL_DDR12_422_1 	= 0b00100011,
		ADV7604_OP_FORMAT_SEL_DDR12_422_2 	= 0b00100100,
		ADV7604_OP_FORMAT_SEL_SDR24_444 	= 0b01000000,
		ADV7604_OP_FORMAT_SEL_SDR30_444 	= 0b01000001,
		ADV7604_OP_FORMAT_SEL_SDR36_444 	= 0b01000010,
		ADV7604_OP_FORMAT_SEL_DDR24_444		= 0b11000000,
		ADV7604_OP_FORMAT_SEL_DDR30_444		= 0b11000001,
		ADV7604_OP_FORMAT_SEL_DDR36_444		= 0b11000010,
		ADV7604_OP_FORMAT_SEL_SDR16_ITU656	= 0b10000000,
		ADV7604_OP_FORMAT_SEL_SDR20_ITU656	= 0b10000001,
		ADV7604_OP_FORMAT_SEL_SDR24_ITU656_0	= 0b10000010,
		ADV7604_OP_FORMAT_SEL_SDR24_ITU656_1	= 0b10000110,
		ADV7604_OP_FORMAT_SEL_SDR24_ITU656_2	= 0b10001010,
	};

	/* 	ADV7604_SW_RevF.pdf, Page 3
	 *
	 *	IO MAP
	 *	ADDR (0x40)
	 *	Regiser: IO_REG_04 (0x04)
	 *		[7:0]OP_FORMAT_SEL
	 */
	 #define ADV7604_REG_IO_REG_04			0x04
	 #define ADV7604_MASK_OP_CH_SEL				0xE0
	 #define ADV7604_MASK_XTAL_FREQ_SEL			0x06
	
	enum adv7604_op_ch_sel{
		ADV7604_OP_CH_SEL_G_B_R = 0,
		ADV7604_OP_CH_SEL_G_R_B = 1,
		ADV7604_OP_CH_SEL_B_G_R = 2,
		ADV7604_OP_CH_SEL_R_G_B = 3,
		ADV7604_OP_CH_SEL_B_R_G = 4,
		ADV7604_OP_CH_SEL_R_B_G = 5,
	};	

	/* 	ADV7604_SW_RevF.pdf, Page 3
	 *
	 *	IO MAP
	 *	ADDR (0x40)
	 *	Regiser: IO_REG_05 (0x05)
	 */
	 #define ADV7604_REG_IO_REG_05			0x05
	 #define ADV7604_MASK_F_OUT_SEL				0x10
	 #define ADV7604_MASK_DATA_BLANK_EN			0x08
	 #define ADV7604_MASK_AVCODE_INSERT_EN			0x04
	 #define ADV7604_MASK_REPL_AV_CODE			0x02
	 #define ADV7604_MASK_OP_SWAP_CB_CR			0x01

	/* 	ADV7604_SW_RevF.pdf, Page 3
	 *
	 *	IO MAP
	 *	ADDR (0x40)
	 *	Regiser: IO_REG_06 (0x06)
	 */
	 #define ADV7604_REG_IO_REG_06			0x06
	 #define ADV7604_MASK_VS_OUT_SEL			0x80
	 #define ADV7604_MASK_HS_OUT_SEL			0x60
	 #define ADV7604_MASK_INV_SYNC_OUT_POL			0x10
	 #define ADV7604_MASK_INV_F_POL				0x08
	 #define ADV7604_MASK_INV_VS_POL			0x04
	 #define ADV7604_MASK_INV_HS_POL			0x02
	 #define ADV7604_MASK_INV_LLC_POL			0x01

	/* 	ADV7604_SW_RevF.pdf, Page 3
	 *
	 *	IO MAP
	 *	ADDR (0x40)
	 *	Regiser: IO_REG_07 (0x07)
	 */
	 #define ADV7604_REG_IO_REG_07			0x07
	 #define ADV7604_MASK_SYNC_CH_AUTO_MODE			0x80
	 #define ADV7604_MASK_SYNC_CH1_PRIORITY			0x40
	 #define ADV7604_MASK_SYNC_CH1_HS_SEL			0x30
	 #define ADV7604_MASK_SYNC_CH1_VS_SEL			0x0C
	 #define ADV7604_MASK_SYNC_CH1_EMB_SYNC_SEL		0x03

	/* 	ADV7604_SW_RevF.pdf, Page 3
	 *
	 *	IO MAP
	 *	ADDR (0x40)
	 *	Regiser: IO_REG_08 (0x08)
	 */
	 #define ADV7604_REG_IO_REG_08			0x08
	 #define ADV7604_MASK_SYNC_CH2_HS_SEL			0x30
	 #define ADV7604_MASK_SYNC_CH2_VS_SEL			0x0C
	 #define ADV7604_MASK_SYNC_CH2_EMB_SYNC_SEL		0x03

	/* 	ADV7604_SW_RevF.pdf, Page 3
	 *
	 *	IO MAP
	 *	ADDR (0x40)
	 *	Regiser: IO_REG_0B (0x0B)
	 */
	 #define ADV7604_REG_IO_REG_0B			0x0B
	 #define ADV7604_MASK_SEL_RAW_CS			0x40
	 #define ADV7604_MASK_ESDP_PDN				0x04
	 #define ADV7604_MASK_CORE_PDN				0x02
	 #define ADV7604_MASK_XTAL_PDN				0x01

	/* 	ADV7604_SW_RevF.pdf, Page 3
	 *
	 *	IO MAP
	 *	ADDR (0x40)
	 *	Regiser: IO_REG_0C (0x0C)
	 */
	 #define ADV7604_REG_IO_REG_0C			0x0C
	 #define ADV7604_MASK_PWR_SAVE_SOG_SEL			0xC0
	 #define ADV7604_MASK_POWER_DOWN			0x20
	 #define ADV7604_MASK_PWR_SAVE_MODE			0x08
	 #define ADV7604_MASK_CP_PWRDN				0x04
	 #define ADV7604_MASK_VDP_PDN				0x02
	 #define ADV7604_MASK_PADS_PDN				0x01

	/* 	ADV7604_SW_RevF.pdf, Page 3
	 *
	 *	IO MAP
	 *	ADDR (0x40)
	 *	Regiser: IO_REG_0F (0x0F)
	 */
	 #define ADV7604_REG_IO_REG_0F			0x0F
	 #define ADV7604_MASK_ESDP_MODE				0x80
	 #define ADV7604_MASK_ESDP_FREERUN_MODE			0x40

	/* 	ADV7604_SW_RevF.pdf, Page 3
	 *
	 *	IO MAP
	 *	ADDR (0x40)
	 *	Regiser: IO_REG_11 (0x11)
	 */
	 #define ADV7604_REG_IO_REG_11			0x11
	 #define ADV7604_MASK_RD_INFO				0xFF

	/* 	ADV7604_SW_RevF.pdf, Page 3
	 *
	 *	IO MAP
	 *	ADDR (0x40)
	 *	Regiser: IO_REG_12 (0x12)
	 */
	 #define ADV7604_REG_IO_REG_12			0x12
	 #define ADV7604_MASK_SEL_SYNC_CHANNEL			0x80
	 #define ADV7604_MASK_CP_STDI_INTERLACED		0x10
	 #define ADV7604_MASK_CP_INTERLACED			0x08
	 #define ADV7604_MASK_CP_PROG_PARM_FOR_INT		0x04
	 #define ADV7604_MASK_CP_FORCE_INTERLACED		0x02
	 #define ADV7604_MASK_CP_NON_STD_VIDEO			0x01

	/* 	ADV7604_SW_RevF.pdf, Page 3
	 *
	 *	IO MAP
	 *	ADDR (0x40)
	 *	Regiser: IO_REG_13 (0x13)
	 */
	 #define ADV7604_REG_IO_REG_13			0x13
	 #define ADV7604_MASK_CP_CURRENT_SYNC_SRC		0x03

	/* 	ADV7604_SW_RevF.pdf, Page 3
	 *
	 *	IO MAP
	 *	ADDR (0x40)
	 *	Regiser: IO_REG_14 (0x14)
	 */
	 #define ADV7604_REG_IO_REG_14			0x14
	 #define ADV7604_MASK_DR_STR				0x30
	 #define ADV7604_MASK_DR_STR_CLK			0x0C
	 #define ADV7604_MASK_DR_STR_SYNC			0x03

	enum adv7604_drive_strength {
		ADV7604_DR_STR_MEDIUM_LOW = 1,
		ADV7604_DR_STR_MEDIUM_HIGH = 2,
		ADV7604_DR_STR_HIGH = 3,
	};


	/* 	ADV7604_SW_RevF.pdf, Page 3
	 *
	 *	IO MAP
	 *	ADDR (0x40)
	 *	Regiser: IO_REG_15 (0x15)
	 */
	 #define ADV7604_REG_IO_REG_15			0x15
	 #define ADV7604_MASK_TRI_AUDIO				0x10
	 #define ADV7604_MASK_TRI_SYNCS				0x08
	 #define ADV7604_MASK_TRI_LLC				0x04
	 #define ADV7604_MASK_TRI_PIX				0x02

	/* 	ADV7604_SW_RevF.pdf, Page 3
	 *
	 *	IO MAP
	 *	ADDR (0x40)
	 *	Regiser: IO_REG_16 (0x16)
	 */
	 #define ADV7604_REG_IO_REG_16			0x16
	 #define ADV7604_MASK_PLL_DIV_MAN_EN			0x80
	 #define ADV7604_MASK_PLL_DIV_RATIO_HB			0x1F

	/* 	ADV7604_SW_RevF.pdf, Page 3
	 *
	 *	IO MAP
	 *	ADDR (0x40)
	 *	Regiser: IO_REG_17 (0x17)
	 */
	 #define ADV7604_REG_IO_REG_17			0x17
	 #define ADV7604_MASK_PLL_DIV_RATIO_LB			0xFF

	/* 	ADV7604_SW_RevF.pdf, Page 3
	 *
	 *	IO MAP
	 *	ADDR (0x40)
	 *	Regiser: IO_REG_30 (0x30)
	 */
	 #define ADV7604_REG_IO_REG_30			0x30
	 #define ADV7604_MASK_VOLTAGE_CLAMP_EN			0x80
	 #define ADV7604_MASK_PIXBUS_ADI_CM_REORDER		0x20
	 #define ADV7604_MASK_PIXBUS_MSB_TO_LSB_REORDER		0x10
	 #define ADV7604_MASK_CURRENT_CLAMP_EN			0x08

	/* 	ADV7604_SW_RevF.pdf, Page 3
	 *
	 *	IO MAP
	 *	ADDR (0x40)
	 *	Regiser: IO_REG_33 (0x33)
	 */
	 #define ADV7604_REG_IO_REG_33			0x33
	 #define ADV7604_MASK_LLC_DLL_MUX			0x40

	/* 	ADV7604_SW_RevF.pdf, Page 3
	 *
	 *	IO MAP
	 *	ADDR (0x40)
	 *	Regiser: INT1_CONFIGURATION (0x40)
	 */
	 #define ADV7604_REG_INT1_CONFIGURATION		0x40
	 #define ADV7604_MASK_INTRQ_DUR_SEL			0xC0
	 #define ADV7604_MASK_STORE_UNMASKED_IRQS		0x10
	 #define ADV7604_MASK_EN_MUTE_OUT_INTRQ			0x08
	 #define ADV7604_MASK_MPU_STIM_INTRQ			0x04
	 #define ADV7604_MASK_INTRQ_OP_SEL			0x03

	enum adv7604_int1_config {
		ADV7604_INT1_CONFIG_OPEN_DRAIN,
		ADV7604_INT1_CONFIG_ACTIVE_LOW,
		ADV7604_INT1_CONFIG_ACTIVE_HIGH,
		ADV7604_INT1_CONFIG_DISABLED,
	};

	/* 	ADV7604_SW_RevF.pdf, Page 3
	 *
	 *	IO MAP
	 *	ADDR (0x40)
	 *	Regiser: INT2_CONFIGURATION (0x41)
	 */
	 #define ADV7604_REG_INT2_CONFIGURATION		0x41
	 #define ADV7604_MASK_INTRQ2_DUR_SEL			0xC0
	 #define ADV7604_MASK_STDI_DATA_VALID_EDGE_SEL		0x10
	 #define ADV7604_MASK_EN_MUTE_OUT_INTRQ2		0x08
	 #define ADV7604_MASK_INT2_EN				0x04
	 #define ADV7604_MASK_INTRQ2_OP_SEL			0x03

	/* 	ADV7604_SW_RevF.pdf, Page 3
	 *
	 *	IO MAP
	 *	ADDR (0x40)
	 *	Regiser: RAW_STATUS_1 (0x42)
	 */
	 #define ADV7604_REG_RAW_STATUS_1		0x42
	 #define ADV7604_MASK_SSPD_RSLT_CHNGD_RAW		0x80
	 #define ADV7604_MASK_MV_PS_DET_RAW			0x40
	 #define ADV7604_MASK_STDI_DATA_VALID_RAW		0x10
	 #define ADV7604_MASK_CP_UNLOCK_RAW			0x08
	 #define ADV7604_MASK_CP_LOCK_RAW			0x04
	 #define ADV7604_MASK_AFE_INTERRUPT_RAW			0x01

	/* 	ADV7604_SW_RevF.pdf, Page 4
	 *
	 *	IO MAP
	 *	ADDR (0x40)
	 *	Regiser: INTERRUPT_STATUS_1 (0x43)
	 */
	 #define ADV7604_REG_INTERRUPT_STATUS_1		0x43
	 #define ADV7604_MASK_SSPD_RSLT_CHNGD_ST		0x80
	 #define ADV7604_MASK_MV_PS_DET_ST			0x40
	 #define ADV7604_MASK_STDI_DATA_VALID_ST		0x10
	 #define ADV7604_MASK_CP_UNLOCK_ST			0x08
	 #define ADV7604_MASK_CP_LOCK_ST			0x04
	 #define ADV7604_MASK_AFE_INTERRUPT_ST			0x01

	/* 	ADV7604_SW_RevF.pdf, Page 4
	 *
	 *	IO MAP
	 *	ADDR (0x40)
	 *	Regiser: INTERRUPT_CLEAR_1 (0x44)
	 */
	 #define ADV7604_REG_INTERRUPT_CLEAR_1		0x44
	 #define ADV7604_MASK_SSPD_RSLT_CHNGD_CLR		0x80
	 #define ADV7604_MASK_MV_PS_DET_CLR			0x40
	 #define ADV7604_MASK_STDI_DATA_VALID_CLR		0x10
	 #define ADV7604_MASK_CP_UNLOCK_CLR			0x08
	 #define ADV7604_MASK_CP_LOCK_CLR			0x04
	 #define ADV7604_MASK_AFE_INTERRUPT_CLR			0x01

	/* 	ADV7604_SW_RevF.pdf, Page 4
	 *
	 *	IO MAP
	 *	ADDR (0x40)
	 *	Regiser: INTERRUPT2_MASKB_1 (0x45)
	 */
	 #define ADV7604_REG_INTERRUPT2_MASKB_1		0x45
	 #define ADV7604_MASK_SSPD_RSLT_CHNGD_MB2		0x80
	 #define ADV7604_MASK_MV_PS_DET_MB2			0x40
	 #define ADV7604_MASK_STDI_DATA_VALID_MB2		0x10
	 #define ADV7604_MASK_CP_UNLOCK_MB2			0x08
	 #define ADV7604_MASK_CP_LOCK_MB2			0x04
	 #define ADV7604_MASK_AFE_INTERRUPT_MB2			0x01

	/* 	ADV7604_SW_RevF.pdf, Page 4
	 *
	 *	IO MAP
	 *	ADDR (0x40)
	 *	Regiser: INTERRUPT_MASKB_1 (0x46)
	 */
	 #define ADV7604_REG_INTERRUPT_MASKB_1		0x46
	 #define ADV7604_MASK_SSPD_RSLT_CHNGD_MB1		0x80
	 #define ADV7604_MASK_MV_PS_DET_MB1			0x40
	 #define ADV7604_MASK_STDI_DATA_VALID_MB1		0x10
	 #define ADV7604_MASK_CP_UNLOCK_MB1			0x08
	 #define ADV7604_MASK_CP_LOCK_MB1			0x04
	 #define ADV7604_MASK_AFE_INTERRUPT_MB1			0x01

	/* 	ADV7604_SW_RevF.pdf, Page 3
	 *
	 *	IO MAP
	 *	ADDR (0x40)
	 *	Regiser: RAW_STATUS_2 (0x47)
	 */
	 #define ADV7604_REG_RAW_STATUS_2		0x47
	 #define ADV7604_MASK_MPU_STIM_INTRQ_RAW		0x80
	 #define ADV7604_MASK_MV_AGC_DET_RAW			0x40
	 #define ADV7604_MASK_CP_CGMS_CHNGD_RAW			0x04

	/* 	ADV7604_SW_RevF.pdf, Page 4
	 *
	 *	IO MAP
	 *	ADDR (0x40)
	 *	Regiser: INTERRUPT_STATUS_2 (0x48)
	 */
	 #define ADV7604_REG_INTERRUPT_STATUS_2		0x48
	 #define ADV7604_MASK_MPU_STIM_INTRQ_ST			0x80
	 #define ADV7604_MASK_MV_AGC_DET_ST			0x40
	 #define ADV7604_MASK_CP_CGMS_CHNGD_ST			0x04

	/* 	ADV7604_SW_RevF.pdf, Page 4
	 *
	 *	IO MAP
	 *	ADDR (0x40)
	 *	Regiser: INTERRUPT_CLEAR_2 (0x49)
	 */
	 #define ADV7604_REG_INTERRUPT_CLEAR_2		0x49
	 #define ADV7604_MASK_MPU_STIM_INTRQ_CLR		0x80
	 #define ADV7604_MASK_MV_AGC_DET_CLR			0x40
	 #define ADV7604_MASK_CP_CGMS_CHNGD_CLR			0x04

	/* 	ADV7604_SW_RevF.pdf, Page 4
	 *
	 *	IO MAP
	 *	ADDR (0x40)
	 *	Regiser: INTERRUPT2_MASKB_2 (0x4A)
	 */
	 #define ADV7604_REG_INTERRUPT2_MASKB_2		0x4A
	 #define ADV7604_MASK_MPU_STIM_INTRQ_MB2		0x80
	 #define ADV7604_MASK_MV_AGC_DET_MB2			0x40
	 #define ADV7604_MASK_CP_CGMS_CHNGD_MB2			0x04

	/* 	ADV7604_SW_RevF.pdf, Page 4
	 *
	 *	IO MAP
	 *	ADDR (0x40)
	 *	Regiser: INTERRUPT_MASKB_2 (0x4B)
	 */
	 #define ADV7604_REG_INTERRUPT_MASKB_2		0x4B
	 #define ADV7604_MASK_MPU_STIM_INTRQ_MB1		0x80
	 #define ADV7604_MASK_MV_AGC_DET_MB1			0x40
	 #define ADV7604_MASK_CP_CGMS_CHNGD_MB1			0x04

	/* 	ADV7604_SW_RevF.pdf, Page 3
	 *
	 *	IO MAP
	 *	ADDR (0x40)
	 *	Regiser: RAW_STATUS_3 (0x4C)
	 */
	 #define ADV7604_REG_RAW_STATUS_3		0x4C
	 #define ADV7604_MASK_AVLINK_RX_READY_RAW		0x80
	 #define ADV7604_MASK_AVLINK_TX_RETRY_TIMEOUT_RAW	0x40
	 #define ADV7604_MASK_AVLINK_TX_ARBITRATION_LOST_RAW	0x20
	 #define ADV7604_MASK_AVLINK_TX_READY_RAW		0x10
	 #define ADV7604_MASK_CEC_RX_READY_RAW			0x08
	 #define ADV7604_MASK_CEC_TX_RETRY_TIMEOUT_RAW		0x04
	 #define ADV7604_MASK_CEC_TX_ARBITRATION_LOST_RAW	0x02
	 #define ADV7604_MASK_CEC_TX_READY_RAW			0x01

	/* 	ADV7604_SW_RevF.pdf, Page 3
	 *
	 *	IO MAP
	 *	ADDR (0x40)
	 *	Regiser: INTERRUPT_STATUS_3 (0x4D)
	 */
	 #define ADV7604_REG_INTERRUPT_STATUS_3		0x4D
	 #define ADV7604_MASK_AVLINK_RX_READY_ST		0x80
	 #define ADV7604_MASK_AVLINK_TX_RETRY_TIMEOUT_ST	0x40
	 #define ADV7604_MASK_AVLINK_TX_ARBITRATION_LOST_ST	0x20
	 #define ADV7604_MASK_AVLINK_TX_READY_ST		0x10
	 #define ADV7604_MASK_CEC_RX_READY_ST			0x08
	 #define ADV7604_MASK_CEC_TX_RETRY_TIMEOUT_ST		0x04
	 #define ADV7604_MASK_CEC_TX_ARBITRATION_LOST_ST	0x02
	 #define ADV7604_MASK_CEC_TX_READY_ST			0x01

	/* 	ADV7604_SW_RevF.pdf, Page 3
	 *
	 *	IO MAP
	 *	ADDR (0x40)
	 *	Regiser: INTERRUPT_CLEAR_3 (0x4E)
	 */
	 #define ADV7604_REG_INTERRUPT_CLEAR_3		0x4E
	 #define ADV7604_MASK_AVLINK_TX_READY_CLR		0x80
	 #define ADV7604_MASK_AVLINK_TX_RETRY_TIMEOUT_CLR	0x40
	 #define ADV7604_MASK_AVLINK_TX_ARBITRATION_LOST_CLR	0x20
	 #define ADV7604_MASK_AVLINK_RX_READY_CLR		0x10
	 #define ADV7604_MASK_CEC_RX_READY_CLR			0x08
	 #define ADV7604_MASK_CEC_TX_RETRY_TIMEOUT_CLR		0x04
	 #define ADV7604_MASK_CEC_TX_ARBITRATION_LOST_CLR	0x02
	 #define ADV7604_MASK_CEC_TX_READY_CLR			0x01

	/* 	ADV7604_SW_RevF.pdf, Page 3
	 *
	 *	IO MAP
	 *	ADDR (0x40)
	 *	Regiser: INTERRUPT2_MASKB_3 (0x4F)
	 */
	 #define ADV7604_REG_INTERRUPT2_MASKB_3		0x4F
	 #define ADV7604_MASK_AVLINK_TX_READY_MB2		0x80
	 #define ADV7604_MASK_AVLINK_TX_RETRY_TIMEOUT_MB2	0x40
	 #define ADV7604_MASK_AVLINK_TX_ARBITRATION_LOST_MB2	0x20
	 #define ADV7604_MASK_AVLINK_RX_READY_MB2		0x10
	 #define ADV7604_MASK_CEC_RX_READY_MB2			0x08
	 #define ADV7604_MASK_CEC_TX_RETRY_TIMEOUT_MB2		0x04
	 #define ADV7604_MASK_CEC_TX_ARBITRATION_LOST_MB2	0x02
	 #define ADV7604_MASK_CEC_TX_READY_MB2			0x01

	/* 	ADV7604_SW_RevF.pdf, Page 3
	 *
	 *	IO MAP
	 *	ADDR (0x40)
	 *	Regiser: INTERRUPT_MASKB_3 (0x50)
	 */
	 #define ADV7604_REG_INTERRUPT_MASKB_3		0x50
	 #define ADV7604_MASK_AVLINK_TX_READY_MB1		0x80
	 #define ADV7604_MASK_AVLINK_TX_RETRY_TIMEOUT_MB1	0x40
	 #define ADV7604_MASK_AVLINK_TX_ARBITRATION_LOST_MB1	0x20
	 #define ADV7604_MASK_AVLINK_RX_READY_MB1		0x10
	 #define ADV7604_MASK_CEC_RX_READY_MB1			0x08
	 #define ADV7604_MASK_CEC_TX_RETRY_TIMEOUT_MB1		0x04
	 #define ADV7604_MASK_CEC_TX_ARBITRATION_LOST_MB1	0x02
	 #define ADV7604_MASK_CEC_TX_READY_MB1			0x01

	/* 	ADV7604_SW_RevF.pdf, Page 67
	 *
	 *	IO MAP
	 *	ADDR (0x40)
	 *	Regiser: HDMI_LVL_RAW_STATUS_3 (0x6A)
	 */
	 #define ADV7604_REG_HDMI_LVL_RAW_STATUS_3	0x6A
	 #define ADV7604_MASK_V_LOCKED_RAW			0x80	//RO: if(1) then Vertical Sync filter has locked!
	 #define ADV7604_MASK_DE_REGEN_LCK_RAW			0x40	//RO: if(1) DE block has locked to incoming DE
	 #define ADV7604_MASK_VIDEO_PLL_LCK_RAW			0x20	//RO: if(1) TMDS PLL is locked to the incoming HDMI clock
	 #define ADV7604_MASK_TMDS_CLK_A_RAW			0x10	//RO: if(1) then TMDS clock detected on port A
	 #define ADV7604_MASK_TMDS_CLK_B_RAW			0x08	//RO: if(1) then TMDS clock detected on port B
	 #define ADV7604_MASK_TMDS_CLK_C_RAW			0x04	//RO: if(1) then TMDS clock detected on port C
	 #define ADV7604_MASK_TMDS_CLK_D_RAW			0x02	//RO: if(1) then TMDS clock detected on port D
	 #define ADV7604_MASK_HDMI_MODE_RAW			0x01	//RO: if(1) then HDMI is being received

	/*
	 *	In the IOMap. The ADV7604 supports reprogrammable I2C addresses for all other maps
	 */
	#define ADV7604_IO_MAP_I2C_ADDR					0x40	// address 0x20
	#define ADV7604_DEFAULT_IO_MAP_I2C_ADDR				(ADV7604_IO_MAP_I2C_ADDR >> 1)	// address 0x20

	#define	ADV7604_REG_AVLINK_SLAVE_ADDRESS		0xF3
	#define	ADV7604_AVLINK_SLAVE_ADDRESS				0x84	// address 0x42
	#define ADV7604_DEFAULT_AVLINK_SLAVE_ADDRESS			(ADV7604_AVLINK_SLAVE_ADDRESS >> 1)	// address 0x20

	#define	ADV7604_REG_CEC_SLAVE_ADDRESS			0xF4
	#define	ADV7604_CEC_SLAVE_ADDRESS				0x80	// address 0x40
	#define	ADV7604_DEFAULT_CEC_SLAVE_ADDRESS			(ADV7604_CEC_SLAVE_ADDRESS >> 1)	// address 0x40

	#define	ADV7604_REG_INFOFRAME_SLAVE_ADDRESS		0xF5
	#define	ADV7604_INFOFRAME_SLAVE_ADDRESS			0x7C 	// address 0x3E
	#define	ADV7604_DEFAULT_INFOFRAME_SLAVE_ADDRESS			(ADV7604_INFOFRAME_SLAVE_ADDRESS >> 1)	// address 0x40

	#define	ADV7604_REG_ESDP_SLAVE_ADDRESS			0xF6
	#define	ADV7604_ESDP_SLAVE_ADDRESS			0x70 	// address 0x38
	#define	ADV7604_DEFAULT_ESDP_SLAVE_ADDRESS			(ADV7604_ESDP_SLAVE_ADDRESS >> 1)	// address 0x40

	#define	ADV7604_REG_DPP_SLAVE_ADDRESS			0xF7
	#define	ADV7604_DPP_SLAVE_ADDRESS			0x78	// address 0x3C
	#define	ADV7604_DEFAULT_DPP_SLAVE_ADDRESS			(ADV7604_DPP_SLAVE_ADDRESS >> 1)	// address 0x40

	#define	ADV7604_REG_AFE_SLAVE_ADDRESS			0xF8
	#define	ADV7604_AFE_SLAVE_ADDRESS			0x4C	// address: 0x26
	#define	ADV7604_DEFAULT_AFE_SLAVE_ADDRESS			(ADV7604_AFE_SLAVE_ADDRESS >> 1)	// address 0x40

	#define	ADV7604_REG_KSV_SLAVE_ADDRESS			0xF9
	#define	ADV7604_KSV_SLAVE_ADDRESS			0x64 	// address 0x32
	#define	ADV7604_DEFAULT_KSV_SLAVE_ADDRESS			(ADV7604_KSV_SLAVE_ADDRESS >> 1)	// address 0x40

	#define	ADV7604_REG_EDID_SLAVE_ADDRESS			0xFA
	#define	ADV7604_EDID_SLAVE_ADDRESS			0x6C	// address 0x36
	#define	ADV7604_DEFAULT_EDID_SLAVE_ADDRESS			(ADV7604_EDID_SLAVE_ADDRESS >> 1)	// address 0x40

	#define	ADV7604_REG_HDMI_SLAVE_ADDRESS			0xFB
	#define	ADV7604_HDMI_SLAVE_ADDRESS			0x68	// address 0x34
	#define	ADV7604_DEFAULT_HDMI_SLAVE_ADDRESS			(ADV7604_HDMI_SLAVE_ADDRESS >> 1)	// address 0x40

	#define	ADV7604_REG_TEST_SLAVE_ADDRESS			0xFC
	#define	ADV7604_TEST_SLAVE_ADDRESS			0x60	// address 0x30
	#define	ADV7604_DEFAULT_TEST_SLAVE_ADDRESS			(ADV7604_TEST_SLAVE_ADDRESS >> 1)	// address 0x40

	#define	ADV7604_REG_CP_SLAVE_ADDRESS			0xFD
	#define	ADV7604_CP_SLAVE_ADDRESS			0x44	// address 0x22
	#define	ADV7604_DEFAULT_CP_SLAVE_ADDRESS			(ADV7604_CP_SLAVE_ADDRESS >> 1)	// address 0x40

	#define	ADV7604_REG_VDP_SLAVE_ADDRESS			0xFE
	#define	ADV7604_VDP_SLAVE_ADDRESS			0x48	// address 0x24
	#define	ADV7604_DEFAULT_VDP_SLAVE_ADDRESS			(ADV7604_VDP_SLAVE_ADDRESS >> 1)	// address 0x40

	enum adv7604_page{
		ADV7604_PAGE_IO,
		ADV7604_PAGE_AVLINK,
		ADV7604_PAGE_INFOFRAME,
		ADV7604_PAGE_ESDP,
		ADV7604_PAGE_DPP,
		ADV7604_PAGE_AFE,
		ADV7604_PAGE_REP,
		ADV7604_PAGE_EDID,
		ADV7604_PAGE_HDMI,
		ADV7604_PAGE_TEST,
		ADV7604_PAGE_CP,
		ADV7604_PAGE_VDP,
		ADV7604_PAGE_MAX,
	};
	#define ADV7604_CLIENTS_MAX				ADV7604_PAGE_MAX

	/* TODO FINISH REG MAP Port from the ADV7604_SW.pdf */

	/* 	ADV7604_SW_RevF.pdf, Page 82
	 *
	 *	CP MAP
	 *	ADDR (0x40)
	 *	Regiser: INTERRUPT_MASKB_3 (0x4E)
	 */
	 #define ADV7604_REG_CP_CONTRAST		0x3A
	 #define ADV7604_REG_CP_SATURATION		0x3B
	 #define ADV7604_REG_CP_BRIGHTNESS		0x3C
	 #define ADV7604_REG_CP_HUE			0x3D
	
	 #define ADV7604_REG_CP_3E			0x3E
	 #define ADV7604_MASK_VID_ADJ_EN			0x80	// Set to 1 to enable video adjustment of color parameters found in 0x3A-0x3D registers of CP Map
	 #define ADV7604_MASK_CP_UV_ALIGN_SEL			0x30
	 #define ADV7604_MASK_CP_UV_DVAL_INV			0x08
	 #define ADV7604_MASK_CP_MODE_GAIN_ADJ_EN		0x04
	 #define ADV7604_MASK_CP_ALT_SAT_UV_MAN			0x02
	 #define ADV7604_MASK_CP_ALT_SAT_UV			0x01




	/* 	ADV7604_SW_RevF.pdf
	 *	Page 121
	 *
	 *	Analog input muxing modes 
	 *	AFE, DPLL MAP
	 *	Regiser 0x02
	 *	AIN_SEL[2:0]
	 */
	enum adv7604_ain_sel {
		ADV7604_AIN1_2_3_NC_SYNC_1_2 = 0,
		ADV7604_AIN4_5_6_NC_SYNC_2_1 = 1,
		ADV7604_AIN7_8_9_NC_SYNC_3_1 = 2,
		ADV7604_AIN10_11_12_NC_SYNC_4_1 = 3,
		ADV7604_AIN9_4_5_6_NC_SYNC_2_1 = 4,
	};

	/*
	 * Bus rotation and reordering. This is used to specify component reordering on the board
  	 * and describes the components order on the bus when the ADV7604 outputs RGB Data
	 */
	enum adv7604_bus_order {
		ADV7604_BUS_ORDER_RGB,
		ADV7604_BUS_ORDER_GRB,
		ADV7604_BUS_ORDER_RBG,
		ADV7604_BUS_ORDER_BGR,
		ADV7604_BUS_ORDER_BRG,
		ADV7604_BUS_ORDER_GBR,
	};

	enum adv7604_pad {
		ADV7604_PAD_HDMI_INPUT_PORT_A = 0,
		ADV7604_PAD_HDMI_INPUT_PORT_B = 1,
		ADV7604_PAD_HDMI_INPUT_PORT_C = 2,
		ADV7604_PAD_HDMI_INPUT_PORT_D = 3,
		ADV7604_PAD_VGA_RGB = 4,
		ADV7604_PAD_VGA_COMP = 5,
		ADV7604_PAD_SOURCE = 6,
		ADV7604_PAD_MAX = 7,
	};

/*
 * This can be used to adjust the V_FREQ setting based on the Frame Rate Desired
 */
enum adv7604_frame_rate {
	adv7604_60_fps=0,
	adv7604_50_fps,
	adv7604_30_fps,
	adv7604_25_fps,
	adv7604_24_fps,
	adv7604_reserved,
};

/* 
 * Reference: v4l2-dv-timings.h
 * Supported ADV7604 CEA and DMT timings 
 */
static const struct v4l2_dv_timings adv7604_timings[] = {
	V4L2_DV_BT_CEA_720X480P59_94,
	V4L2_DV_BT_CEA_720X576P50,
	V4L2_DV_BT_CEA_1280X720P24,
	V4L2_DV_BT_CEA_1280X720P25,
	V4L2_DV_BT_CEA_1280X720P50,
	V4L2_DV_BT_CEA_1280X720P60,
	V4L2_DV_BT_CEA_1920X1080P24,
	V4L2_DV_BT_CEA_1920X1080P25,
	V4L2_DV_BT_CEA_1920X1080P30,
	V4L2_DV_BT_CEA_1920X1080P50,
	V4L2_DV_BT_CEA_1920X1080P60,

	/* sorted by DMT ID */
	V4L2_DV_BT_DMT_640X350P85,
	V4L2_DV_BT_DMT_640X400P85,
	V4L2_DV_BT_DMT_720X400P85,
	V4L2_DV_BT_DMT_640X480P60,
	V4L2_DV_BT_DMT_640X480P72,
	V4L2_DV_BT_DMT_640X480P75,
	V4L2_DV_BT_DMT_640X480P85,
	V4L2_DV_BT_DMT_800X600P56,
	V4L2_DV_BT_DMT_800X600P60,
	V4L2_DV_BT_DMT_800X600P72,
	V4L2_DV_BT_DMT_800X600P75,
	V4L2_DV_BT_DMT_800X600P85,
	V4L2_DV_BT_DMT_848X480P60,
	V4L2_DV_BT_DMT_1024X768P60,
	V4L2_DV_BT_DMT_1024X768P70,
	V4L2_DV_BT_DMT_1024X768P75,
	V4L2_DV_BT_DMT_1024X768P85,
	V4L2_DV_BT_DMT_1152X864P75,
	V4L2_DV_BT_DMT_1280X768P60_RB,
	V4L2_DV_BT_DMT_1280X768P60,
	V4L2_DV_BT_DMT_1280X768P75,
	V4L2_DV_BT_DMT_1280X768P85,
	V4L2_DV_BT_DMT_1280X800P60_RB,
	V4L2_DV_BT_DMT_1280X800P60,
	V4L2_DV_BT_DMT_1280X800P75,
	V4L2_DV_BT_DMT_1280X800P85,
	V4L2_DV_BT_DMT_1280X960P60,
	V4L2_DV_BT_DMT_1280X960P85,
	V4L2_DV_BT_DMT_1280X1024P60,
	V4L2_DV_BT_DMT_1280X1024P75,
	V4L2_DV_BT_DMT_1280X1024P85,
	V4L2_DV_BT_DMT_1360X768P60,
	V4L2_DV_BT_DMT_1400X1050P60_RB,
	V4L2_DV_BT_DMT_1400X1050P60,
	V4L2_DV_BT_DMT_1400X1050P75,
	V4L2_DV_BT_DMT_1400X1050P85,
	V4L2_DV_BT_DMT_1440X900P60_RB,
	V4L2_DV_BT_DMT_1440X900P60,
	V4L2_DV_BT_DMT_1600X1200P60,
	V4L2_DV_BT_DMT_1680X1050P60_RB,
	V4L2_DV_BT_DMT_1680X1050P60,
	V4L2_DV_BT_DMT_1792X1344P60,
	V4L2_DV_BT_DMT_1856X1392P60,
	V4L2_DV_BT_DMT_1920X1200P60_RB,
	V4L2_DV_BT_DMT_1366X768P60,
	V4L2_DV_BT_DMT_1920X1080P60,
	{ },
};

struct adv7604_video_standards {
	struct v4l2_dv_timings timings;
	u8 vid_std;
	u8 v_freq;	//extended use case offset to 0
	u8 prim_mode;	//extended use case offset to 0
	u8 refresh;	// Refresh rate 0->255 Hz (should be within bounds of framerate/refresh rate)
};

/*
 * Structure taken from the mxc_v4l2_capture.h and based off of
 */
struct adv7604_sensor_data {
	const struct adv7604_platform_data *platform_data;
	struct v4l2_int_device *v4l2_int_device;
	struct i2c_client *i2c_client;			// This is the main client
	struct v4l2_pix_format pix;
	struct v4l2_sensor_dimension spix;
	struct v4l2_captureparm streamcap;
	bool on;

	/* control settings */
	int brightness;
	int hue;
	int contrast;
	int saturation;
	int red;
	int green;
	int blue;
	int ae_mode;

	u32 mclk;
	u8 mclk_source;
	struct clk *sensor_clk;
	int ipu_id;
	int csi;
	int last_reg;
	unsigned mipi_camera;
	unsigned virtual_channel;   /* Used with mipi */

	void (*io_init)(void);

	/* Custom Additions */
	v4l2_std_id std_id;
	int pwn_gpio;
	int rst_gpio;
	int prev_sysclk;

	int sensor_mode;
	int prim_mode;
	const struct adv7604_video_standards *curr_vid_std;	// Pointer to the complete list of videostandards.  
	u32 curr_vid_std_index;
	u32 curr_vid_std_size;
};


#define V4L2_CID_ADV_RX_ANALOG_SAMPLING_PHASE	(V4L2_CID_DV_CLASS_BASE + 0x1000)
#define V4L2_CID_ADV_RX_FREE_RUN_COLOR_MANUAL	(V4L2_CID_DV_CLASS_BASE + 0x1001)
#define V4L2_CID_ADV_RX_FREE_RUN_COLOR		(V4L2_CID_DV_CLASS_BASE + 0x1002)

/* notify events */
#define ADV7604_HOTPLUG		1
#define ADV7604_FMT_CHANGE	2

/* *****************************************************************************
   *** 			Supported Video Timings
   ***************************************************************************** */
#define DIGITAL_INPUT (sensor->sensor_mode == ADV7604_SENSOR_MODE_HDMI_GR)

#define ADV7604_XCLK_MIN  12000000
#define ADV7604_XCLK_MAX 170000000

#define DEFAULT_FPS 60
#define MIN_FPS 	24
#define MAX_FPS 	60

#define NELEMS(x)  (sizeof(x) / sizeof(x[0]))

/* Supported Sensor Modes:
 *		HDMI_GR	:0
 *		VGA_GR	:1
 */
#define ADV7604_SENSOR_MODE_SHIFT 8
#define ADV7604_SENSOR_MODE_MASK (0x3 << ADV7604_SENSOR_MODE_SHIFT)
#define ADV7604_PRIM_MODE_SHIFT 0
#define ADV7604_PRIM_MODE_MASK (0xFF << ADV7604_PRIM_MODE_SHIFT)
enum adv7604_sensor_modes {
	ADV7604_SENSOR_MODE_GR,			/* VGA Mode */
	ADV7604_SENSOR_MODE_HDMI_GR,	/* HDMI mode */
	ADV7604_SENSOR_MODE_MAX
};
/* Supported VGA Capture Modes */
enum adv7604_gr_capture_modes {
	ADV7604_CAPTURE_GR_VGA_60,		/* 640x480@60 */
	ADV7604_CAPTURE_GR_VGA_72,		/* 640x480@72 */
	ADV7604_CAPTURE_GR_VGA_75,		/* 640x480@75 */
	ADV7604_CAPTURE_GR_VGA_85,		/* 640x480@85 */

	ADV7604_CAPTURE_GR_SVGA_56,		/* 800x600@56 */
	ADV7604_CAPTURE_GR_SVGA_60,		/* 800x600@60 */
	ADV7604_CAPTURE_GR_SVGA_72,		/* 800x600@72 */
	ADV7604_CAPTURE_GR_SVGA_75,		/* 800x600@75 */
	ADV7604_CAPTURE_GR_SVGA_85,		/* 800x600@85 */

	ADV7604_CAPTURE_GR_XGA_60,		/* 1024x768@60 */
	ADV7604_CAPTURE_GR_XGA_70,		/* 1024x768@70 */
	ADV7604_CAPTURE_GR_XGA_75,		/* 1024x768@75 */
	ADV7604_CAPTURE_GR_XGA_85,		/* 1024x768@85 */

	ADV7604_CAPTURE_GR_SXGA_60,		/* 1280x1024@60 */
	ADV7604_CAPTURE_GR_SXGA_75,		/* 1280x1024@75 */

//	ADV7604_CAPTURE_GR_AUTO_GRAPH 	= 0x07,	/* VARIOUS */

	ADV7604_CAPTURE_GR_WXGA_60,		/* 1280x768@60 */	
	ADV7604_CAPTURE_GR_WXGAR_60,	/* 1280x768@60 R */ 

	ADV7604_CAPTURE_GR_WXGAP_60,	/* 1360x768@60 */
	ADV7604_CAPTURE_GR_WXGAP2_60,	/* 1366x768@60 */

	ADV7604_CAPTURE_GR_SXGAP_60,	/* 1400x1050@60 */
	ADV7604_CAPTURE_GR_SXGAP_75,	/* 1400x1050@75 */

	ADV7604_CAPTURE_GR_UXGA_60,		/* 1600x1200@60 */
//	ADV7604_CAPTURE_GR_UXGAR_60	= 0x17,	/* 1600x1200@60 reduced */
	ADV7604_CAPTURE_GR_WSXGA_60,	/* 1680x1050@60  */
	ADV7604_CAPTURE_GR_WUXGA_60,	/* 1920x1200@60 reduced */

	ADV7604_CAPTURE_GR_MAX_SIZE,
};

/* sorted by number of lines */
static const struct adv7604_video_standards adv7604_prim_mode_gr[] = {
	{ V4L2_DV_BT_DMT_640X480P60, 0x08, 0x00 , 2, 60},
	{ V4L2_DV_BT_DMT_640X480P72, 0x09, 0x00 , 2, 72},
	{ V4L2_DV_BT_DMT_640X480P75, 0x0a, 0x00 , 2, 75},
	{ V4L2_DV_BT_DMT_640X480P85, 0x0b, 0x00 , 2, 85},

	{ V4L2_DV_BT_DMT_800X600P56, 0x00, 0x00 , 2, 56},
	{ V4L2_DV_BT_DMT_800X600P60, 0x01, 0x00 , 2, 60},
	{ V4L2_DV_BT_DMT_800X600P72, 0x02, 0x00 , 2, 72},
	{ V4L2_DV_BT_DMT_800X600P75, 0x03, 0x00 , 2, 75},
	{ V4L2_DV_BT_DMT_800X600P85, 0x04, 0x00 , 2, 85},

	{ V4L2_DV_BT_DMT_1024X768P60, 0x0c, 0x00 , 2, 60},
	{ V4L2_DV_BT_DMT_1024X768P70, 0x0d, 0x00 , 2, 70},
	{ V4L2_DV_BT_DMT_1024X768P75, 0x0e, 0x00 , 2, 75},
	{ V4L2_DV_BT_DMT_1024X768P85, 0x0f, 0x00 , 2, 85},

	{ V4L2_DV_BT_DMT_1280X1024P60, 0x05, 0x00 , 2, 60},
	{ V4L2_DV_BT_DMT_1280X1024P75, 0x06, 0x00 , 2, 75},

	{ V4L2_DV_BT_DMT_1280X768P60, 	 0x10, 0x00 , 2, 60},
	{ V4L2_DV_BT_DMT_1280X768P60_RB, 0x11, 0x00 , 2, 60},

	{ V4L2_DV_BT_DMT_1360X768P60, 0x12, 0x00 , 2, 60},
	{ V4L2_DV_BT_DMT_1366X768P60, 0x13, 0x00 , 2, 60},

	{ V4L2_DV_BT_DMT_1400X1050P60, 0x14, 0x00 , 2, 60},
	{ V4L2_DV_BT_DMT_1400X1050P75, 0x15, 0x00 , 2, 75},

	{ V4L2_DV_BT_DMT_1600X1200P60, 0x16, 0x00 , 2, 60}, /* TODO not tested */
	/* TODO add 1600X1200P60_RB (not a DMT timing) */
	{ V4L2_DV_BT_DMT_1680X1050P60, 0x18, 0x00 , 2, 60},
	{ V4L2_DV_BT_DMT_1920X1200P60_RB, 0x19, 0x00 , 2, 60}, /* TODO not tested */
	{ },
};

/* Supported HDMI GR Capture Modes */
enum adv7604_hdmi_gr_capture_modes {
	ADV7604_CAPTURE_HDMI_GR_VGA_60,	/* 640x480@60 */
	ADV7604_CAPTURE_HDMI_GR_VGA_72,	/* 640x480@72 */
	ADV7604_CAPTURE_HDMI_GR_VGA_75,	/* 640x480@75 */
	ADV7604_CAPTURE_HDMI_GR_VGA_85,	/* 640x480@85 */

	ADV7604_CAPTURE_HDMI_GR_SVGA_56,	/* 800x600@56 */
	ADV7604_CAPTURE_HDMI_GR_SVGA_60,	/* 800x600@60 */
	ADV7604_CAPTURE_HDMI_GR_SVGA_72,	/* 800x600@72 */
	ADV7604_CAPTURE_HDMI_GR_SVGA_75,	/* 800x600@75 */
	ADV7604_CAPTURE_HDMI_GR_SVGA_85,	/* 800x600@85 */

	ADV7604_CAPTURE_HDMI_GR_XGA_60,	/* 1024x768@60 */
	ADV7604_CAPTURE_HDMI_GR_XGA_70,	/* 1024x768@70 */
	ADV7604_CAPTURE_HDMI_GR_XGA_75,	/* 1024x768@75 */
	ADV7604_CAPTURE_HDMI_GR_XGA_85,	/* 1024x768@85 */

	ADV7604_CAPTURE_HDMI_GR_SXGA_60,	/* 1280x1024@60 */
	ADV7604_CAPTURE_HDMI_GR_SXGA_75,	/* 1280x1024@75 */
	ADV7604_CAPTURE_HDMI_GR_MAX_SIZE,
};

/* sorted by number of lines */
static const struct adv7604_video_standards adv7604_prim_mode_hdmi_gr[] = {
	{ V4L2_DV_BT_DMT_640X480P60, 0x08, 0x00 , 6 , 60},
	{ V4L2_DV_BT_DMT_640X480P72, 0x09, 0x00 , 6, 72},
	{ V4L2_DV_BT_DMT_640X480P75, 0x0a, 0x00 , 6, 75},
	{ V4L2_DV_BT_DMT_640X480P85, 0x0b, 0x00 , 6, 85},

	{ V4L2_DV_BT_DMT_800X600P56, 0x00, 0x00 , 6, 56},
	{ V4L2_DV_BT_DMT_800X600P60, 0x01, 0x00 , 6, 60},
	{ V4L2_DV_BT_DMT_800X600P72, 0x02, 0x00 , 6, 72},
	{ V4L2_DV_BT_DMT_800X600P75, 0x03, 0x00 , 6, 75},
	{ V4L2_DV_BT_DMT_800X600P85, 0x04, 0x00 , 6, 85},

	{ V4L2_DV_BT_DMT_1024X768P60, 0x0c, 0x00 , 6, 60},
	{ V4L2_DV_BT_DMT_1024X768P70, 0x0d, 0x00 , 6, 70},
	{ V4L2_DV_BT_DMT_1024X768P75, 0x0e, 0x00 , 6, 75},
	{ V4L2_DV_BT_DMT_1024X768P85, 0x0f, 0x00 , 6, 85},

	{ V4L2_DV_BT_DMT_1280X1024P60, 0x05, 0x00 , 6, 60},
	{ V4L2_DV_BT_DMT_1280X1024P75, 0x06, 0x00 , 6, 75},
	{ },
};


#if 0 // HDMI Comp and Comp Mode not required to be supported now
static const enum adv7604_prim_comp {
		/* When PRIM_MODE[3:0] == 0b0001 */
	adv7604_comp_mode_SD_2x1_525i = 0x00,	
	adv7604_comp_mode_SD_2x1_625i,	
		//adv7604_comp_mode_SD_2x2_525i = 0x06,	
		//adv7604_comp_mode_SD_2x2_625i = 0x07,	
		//adv7604_comp_mode_SD_4x2_525i = 0x08,	/* 1440x480 */
		//adv7604_comp_mode_SD_4x2_625i = 0x09,	/* 1440x576 */

	adv7604_comp_mode_PR_2x1_525p,	/* 720x480 */
	adv7604_comp_mode_PR_2x1_625p,	/* 720x576 */
		//adv7604_comp_mode_PR_4x1_525p = 0x0E,	/* 720x480 */
		//adv7604_comp_mode_PR_4x1_625p = 0x0F,	/* 720x576 */
		//adv7604_comp_mode_PR_2x2_525p = 0x10,	/* 1440x480 */
		//adv7604_comp_mode_PR_2x2_625p = 0x11,	/* 1440x576 */

		//adv7604_comp_mode_HD_1x1_720p 	= 0x13,	/* 1280x720 */
		//adv7604_comp_mode_HD_1x1_1125 	= 0x14,	/* 1920x1080 */
		//adv7604_comp_mode_HD_1x1_1125b 	= 0x15,	/* 1920x1035 */
		//adv7604_comp_mode_HD_1x1_1250 	= 0x16,	/* 1920x1080 */
		//adv7604_comp_mode_HD_1x1_1125b 	= 0x17,	/* 1920x1152 */

	adv7604_comp_mode_HD_2x1_720p50,	/* 1280x720 */
	adv7604_comp_mode_HD_2x1_720p60,	/* 1280x720 */
		//adv7604_comp_mode_HD_2x1_1125 	= 0x1A,	/* 1920x1080 */
		//adv7604_comp_mode_HD_2x1_1125b 	= 0x1B,	/* 1920x1035 */
		//adv7604_comp_mode_HD_2x1_1250 	= 0x1C,	/* 1920x1080 */
		//adv7604_comp_mode_HD_2x1_1125b 	= 0x1D,	/* 1920x1152 */
	adv7604_comp_mode_HD_1x1_1125p24,	/* 1920x1080 */
	adv7604_comp_mode_HD_1x1_1125p25,	/* 1920x1080 */
	adv7604_comp_mode_HD_1x1_1125p30,	/* 1920x1080 */
	adv7604_comp_mode_HD_1x1_1125p50,	/* 1920x1080 */
	adv7604_comp_mode_HD_1x1_1125p60,	/* 1920x1080 */
		//adv7604_comp_mode_HD_1x1_1250p 	= 0x1F,	/* 1920x1080 */

	adv7604_comp_mode_size,
};

/* sorted by number of lines */
static const struct adv7604_video_standards adv7604_prim_mode_comp[] = {
	/* { V4L2_DV_BT_CEA_720X480P59_94, 0x0a, 0x00 }, TODO flickering */
	{ V4L2_DV_BT_CEA_720X480I59_94, 0x02, 0x00, 1, 60},	//added Interlace
	{ V4L2_DV_BT_CEA_720X576I50, 0x03, 0x00, 1, 60},	//added Interlace

	{ V4L2_DV_BT_CEA_720X480P59_94, 0x0C, 0x00, 1, 60},
	{ V4L2_DV_BT_CEA_720X576P50, 0x0D, 0x00 , 1, 60},	// was 0x0b, need to test

	{ V4L2_DV_BT_CEA_1280X720P50, 0x19, 0x01, 1, 50},
	{ V4L2_DV_BT_CEA_1280X720P60, 0x19, 0x00, 1, 60},

	{ V4L2_DV_BT_CEA_1920X1080P24, 0x1e, 0x04, 1, 24},
	{ V4L2_DV_BT_CEA_1920X1080P25, 0x1e, 0x03, 1, 25},
	{ V4L2_DV_BT_CEA_1920X1080P30, 0x1e, 0x02 , 1, 30},
	{ V4L2_DV_BT_CEA_1920X1080P50, 0x1e, 0x01, 1, 50},
	{ V4L2_DV_BT_CEA_1920X1080P60, 0x1e, 0x00, 1, 60},
	/* TODO add 1920x1080P60_RB (CVT timing) */
	{ },
};

static const enum adv7604_prim_hdmi_comp {
	/* When PRIM_MODE[3:0] == 0b0101 */
	adv7604_hdmi_comp_mode_SD_1x1_525i = 0x00,	/* 720x480 */
	adv7604_hdmi_comp_mode_SD_1x1_625i ,	/* 720x576 */
		//adv7604_hdmi_comp_mode_SD_2x1_525i = 0x02,	/* 720x480 */
		//adv7604_hdmi_comp_mode_SD_2x1_625i = 0x03,	/* 720x576 */

	adv7604_hdmi_comp_mode_PR_1x1_525p ,	/* 720x480 */
	adv7604_hdmi_comp_mode_PR_1x1_625p ,	/* 720x576 */
		//adv7604_hdmi_comp_mode_PR_2x1_525p = 0x0C,	/* 720x480 */
		//adv7604_hdmi_comp_mode_PR_2x1_625p = 0x0D,	/* 720x576 */

	adv7604_hdmi_comp_mode_HD_1x1_WXGA_50 ,
	adv7604_hdmi_comp_mode_HD_1x1_WXGA_60 ,

	adv7604_hdmi_comp_mode_HD_1x1_FULLHD_24,
	adv7604_hdmi_comp_mode_HD_1x1_FULLHD_30,
	adv7604_hdmi_comp_mode_HD_1x1_FULLHD_40,
	adv7604_hdmi_comp_mode_HD_1x1_FULLHD_50,
	adv7604_hdmi_comp_mode_HD_1x1_FULLHD_60,

	adv7604_hdmi_comp_mode_size,

};
/* sorted by number of lines */
static const struct adv7604_video_standards adv7604_prim_mode_hdmi_comp[] = {
	{ V4L2_DV_BT_CEA_720X480I59_94, 0x00, 0x00 , 5, 60},
	{ V4L2_DV_BT_CEA_720X576I50, 0x01, 0x00 , 5 , 60},

	{ V4L2_DV_BT_CEA_720X480P59_94, 0x0a, 0x00 , 5, 60},
	{ V4L2_DV_BT_CEA_720X576P50, 0x0b, 0x00 , 5 , 60},

	{ V4L2_DV_BT_CEA_1280X720P50, 0x13, 0x01 , 5 , 50},
	{ V4L2_DV_BT_CEA_1280X720P60, 0x13, 0x00  , 5, 60},

	{ V4L2_DV_BT_CEA_1920X1080P24, 0x1e, 0x04 , 5, 24},
	{ V4L2_DV_BT_CEA_1920X1080P25, 0x1e, 0x03 , 5 , 25},
	{ V4L2_DV_BT_CEA_1920X1080P30, 0x1e, 0x02 , 5 , 30},
	{ V4L2_DV_BT_CEA_1920X1080P50, 0x1e, 0x01 , 5 , 50},
	{ V4L2_DV_BT_CEA_1920X1080P60, 0x1e, 0x00 , 5 , 60},
	{ },
};
#endif

/* *********************************************************************
	Useful structures for supporting pixel width and choices
 ********************************************************************* */
struct reg_value {
	u8 u8i2caddr;
	u8 u8RegAddr;
	u8 u8Val;
	u8 u8Mask;
	u32 u32Delay_ms;
};


/* *****************************************************************************
   *** 			FUNCTION DECLARATIONS
   ***************************************************************************** */
static s32 adv7604_generic_i2c_byte_write(struct i2c_client *client, u8 addr, u8 reg, u8 val);

/*
	ADV7604 Helper Function declaraions
 */


static void adv7604_soft_reset(void);
static inline void adv7604_reset(void);

static inline void adv7604_power_down(int);

static int adv7604_change_mode(int prim_mode);

static void adv7604_update_pixel_values(void);

static inline int adv7604_read_byte_data(u8 addr, u8 reg);

static int adv7604_update_edid_timing_desc(const struct v4l2_bt_timings  *bt);
static int adv7604_update_edid(const struct v4l2_bt_timings  *bt);
static void enable_input(void);
static void disable_input(void);
static void select_input(void);
static int adv7604_s_dv_timings(const struct v4l2_dv_timings *timings);
static int configure_predefined_video_timings(const struct v4l2_dv_timings *timings);
static int find_and_set_predefined_video_timings(u8 prim_mode,
		        const struct adv7604_video_standards *predef_vid_timings,
		        const struct v4l2_dv_timings *timings);
	

#endif
/* END OF FILE */


