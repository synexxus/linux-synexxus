
enum adv7604_comp_mode {
	/* When PRIM_MODE[3:0] == 0b0001 */
	adv7604_comp_mode_SD_2x1_525i = 0x02,	/* 720x480 */
	adv7604_comp_mode_SD_2x1_625i = 0x03,	/* 720x576 */
	adv7604_comp_mode_SD_4x1_525i = 0x04,	/* 720x480 */
	adv7604_comp_mode_SD_4x1_625i = 0x05,	/* 720x576 */
	adv7604_comp_mode_SD_2x2_525i = 0x06,	/* 1440x480 */
	adv7604_comp_mode_SD_2x2_625i = 0x07,	/* 1440x576 */
	adv7604_comp_mode_SD_4x2_525i = 0x08,	/* 1440x480 */
	adv7604_comp_mode_SD_4x2_625i = 0x09,	/* 1440x576 */

	adv7604_comp_mode_PR_2x1_525p = 0x0C,	/* 720x480 */
	adv7604_comp_mode_PR_2x1_625p = 0x0D,	/* 720x576 */
	adv7604_comp_mode_PR_4x1_525p = 0x0E,	/* 720x480 */
	adv7604_comp_mode_PR_4x1_625p = 0x0F,	/* 720x576 */
	adv7604_comp_mode_PR_2x2_525p = 0x10,	/* 1440x480 */
	adv7604_comp_mode_PR_2x2_625p = 0x11,	/* 1440x576 */

	adv7604_comp_mode_HD_1x1_720p 	= 0x13,	/* 1280x720 */
	adv7604_comp_mode_HD_1x1_1125 	= 0x14,	/* 1920x1080 */
	adv7604_comp_mode_HD_1x1_1125b 	= 0x15,	/* 1920x1035 */
	adv7604_comp_mode_HD_1x1_1250 	= 0x16,	/* 1920x1080 */
	adv7604_comp_mode_HD_1x1_1125b 	= 0x17,	/* 1920x1152 */

	adv7604_comp_mode_HD_2x1_720p 	= 0x19,	/* 1280x720 */
	adv7604_comp_mode_HD_2x1_1125 	= 0x1A,	/* 1920x1080 */
	adv7604_comp_mode_HD_2x1_1125b 	= 0x1B,	/* 1920x1035 */
	adv7604_comp_mode_HD_2x1_1250 	= 0x1C,	/* 1920x1080 */
	adv7604_comp_mode_HD_2x1_1125b 	= 0x1D,	/* 1920x1152 */
	adv7604_comp_mode_HD_1x1_1125p	= 0x1E,	/* 1920x1080 */
	adv7604_comp_mode_HD_1x1_1250p 	= 0x1F,	/* 1920x1080 */
};

enum adv7604_gr_mode {
	/* When PRIM_MODE[3:0] == 0b0010 */
	adv7604_gr_mode_SVGA_56		= 0x00,	/* 800x600@56 */
	adv7604_gr_mode_SVGA_60	 	= 0x01,	/* 800x600@60 */
	adv7604_gr_mode_SVGA_72	 	= 0x02,	/* 800x600@72 */
	adv7604_gr_mode_SVGA_75	 	= 0x03,	/* 800x600@75 */
	adv7604_gr_mode_SVGA_85	 	= 0x04,	/* 800x600@85 */

	adv7604_gr_mode_SXGA_60	 	= 0x05,	/* 1280x1024@60 */
	adv7604_gr_mode_SXGA_75 	= 0x06,	/* 1280x1024@75 */

	adv7604_gr_mode_AUTO_GRAPH 	= 0x07,	/* VARIOUS */

	adv7604_gr_mode_VGA_60 		= 0x08,	/* 640x480@60 */
	adv7604_gr_mode_VGA_72 		= 0x09,	/* 640x480@72 */
	adv7604_gr_mode_VGA_75 		= 0x0A,	/* 640x480@75 */
	adv7604_gr_mode_VGA_85 		= 0x0B,	/* 640x480@85 */

	adv7604_gr_mode_XGA_60 		= 0x0C,	/* 1024x768@60 */
	adv7604_gr_mode_XGA_70 		= 0x0D,	/* 1024x768@70 */
	adv7604_gr_mode_XGA_75 		= 0x0E,	/* 1024x768@75 */
	adv7604_gr_mode_XGA_85 		= 0x0F,	/* 1024x768@85 */

	adv7604_gr_mode_WXGA_60		= 0x10,	/* 1280x768@60 */
	adv7604_gr_mode_WXGAR_60	= 0x11,	/* 1280x768@60 R */
	adv7604_gr_mode_WXGAp_60	= 0x12,	/* 1360x768@60 */
	adv7604_gr_mode_WXGAp2_60	= 0x13,	/* 1360x768@60 */

	adv7604_gr_mode_SXGAp_60	= 0x14,	/* 1400x1050@60 */
	adv7604_gr_mode_SXGAp_75	= 0x15,	/* 1400x1050@75 */

	adv7604_gr_mode_UXGA_60		= 0x16,	/* 1600x1200@60 */
	adv7604_gr_mode_UXGAR_60	= 0x17,	/* 1600x1200@60 reduced */
	adv7604_gr_mode_WSXGA_60	= 0x18,	/* 1680x1050@60  */
	adv7604_gr_mode_WUXGA_60	= 0x19,	/* 1920x1200@60 reduced */
};

enum adv7604_hdmi_comp_mode {
	/* When PRIM_MODE[3:0] == 0b0101 */
	adv7604_hdmi_comp_mode_SD_1x1_525i = 0x00,	/* 720x480 */
	adv7604_hdmi_comp_mode_SD_1x1_625i = 0x01,	/* 720x576 */
	adv7604_hdmi_comp_mode_SD_2x1_525i = 0x02,	/* 720x480 */
	adv7604_hdmi_comp_mode_SD_2x1_625i = 0x03,	/* 720x576 */

	adv7604_hdmi_comp_mode_PR_1x1_525p = 0x0A,	/* 720x480 */
	adv7604_hdmi_comp_mode_PR_1x1_625p = 0x0B,	/* 720x576 */
	adv7604_hdmi_comp_mode_PR_2x1_525p = 0x0C,	/* 720x480 */
	adv7604_hdmi_comp_mode_PR_2x1_625p = 0x0D,	/* 720x576 */
};

enum adv7604_hdmi_mode {
	/* When PRIM_MODE[3:0] == 0b0110 */
	adv7604_hdmi_mode_SVGA_56		= 0x00,	/* 800x600@56 */
	adv7604_hdmi_mode_SVGA_60	 	= 0x01,	/* 800x600@60 */
	adv7604_hdmi_mode_SVGA_72	 	= 0x02,	/* 800x600@72 */
	adv7604_hdmi_mode_SVGA_75	 	= 0x03,	/* 800x600@75 */
	adv7604_hdmi_mode_SVGA_85	 	= 0x04,	/* 800x600@85 */

	adv7604_hdmi_mode_SXGA_60	 	= 0x05,	/* 1280x1024@60 */
	adv7604_hdmi_mode_SXGA_75 		= 0x06,	/* 1280x1024@75 */

	adv7604_hdmi_mode_VGA_60 		= 0x08,	/* 640x480@60 */
	adv7604_hdmi_mode_VGA_72 		= 0x09,	/* 640x480@72 */
	adv7604_hdmi_mode_VGA_75 		= 0x0A,	/* 640x480@75 */
	adv7604_hdmi_mode_VGA_85 		= 0x0B,	/* 640x480@85 */

	adv7604_hdmi_mode_XGA_60 		= 0x0C,	/* 1024x768@60 */
	adv7604_hdmi_mode_XGA_70 		= 0x0D,	/* 1024x768@70 */
	adv7604_hdmi_mode_XGA_75 		= 0x0E,	/* 1024x768@75 */
	adv7604_hdmi_mode_XGA_85 		= 0x0F,	/* 1024x768@85 */
};



