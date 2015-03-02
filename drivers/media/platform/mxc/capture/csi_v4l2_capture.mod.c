#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x9cceacf4, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x15692c87, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x831916d9, __VMLINUX_SYMBOL_STR(video_device_release) },
	{ 0x61c23aed, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x9155e50, __VMLINUX_SYMBOL_STR(platform_driver_register) },
	{ 0xb162df75, __VMLINUX_SYMBOL_STR(__dma_request_channel) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xc7d778af, __VMLINUX_SYMBOL_STR(dma_release_channel) },
	{ 0x7cf9099, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0xa8a2c9f4, __VMLINUX_SYMBOL_STR(csi_format_swap16) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x2cd18f57, __VMLINUX_SYMBOL_STR(csi_dmareq_rff_enable) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xff178f6, __VMLINUX_SYMBOL_STR(__aeabi_idivmod) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x81da52a7, __VMLINUX_SYMBOL_STR(csi_tvdec_enable) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x60f2d94d, __VMLINUX_SYMBOL_STR(csi_dmareq_rff_disable) },
	{ 0x5be9608b, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xf88c3301, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0x30a6a98b, __VMLINUX_SYMBOL_STR(__video_register_device) },
	{ 0xc5dfee2c, __VMLINUX_SYMBOL_STR(v4l2_int_device_register) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x662214be, __VMLINUX_SYMBOL_STR(csi_start_callback) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xc5dafa00, __VMLINUX_SYMBOL_STR(video_device_alloc) },
	{ 0x157dd406, __VMLINUX_SYMBOL_STR(csi_get_soc) },
	{ 0xdac11bae, __VMLINUX_SYMBOL_STR(of_property_read_u32_array) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x6fef2591, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xc28b8cde, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0x32530136, __VMLINUX_SYMBOL_STR(csi_enable) },
	{ 0xc818417e, __VMLINUX_SYMBOL_STR(arm_dma_ops) },
	{ 0x7d8acc75, __VMLINUX_SYMBOL_STR(csi_deinterlace_enable) },
	{ 0x1e61caa3, __VMLINUX_SYMBOL_STR(csi_deinterlace_mode) },
	{ 0xbfc16b28, __VMLINUX_SYMBOL_STR(csi_buf_stride_set) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0x1e6d26a8, __VMLINUX_SYMBOL_STR(strstr) },
	{ 0xd4669fad, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xa1230321, __VMLINUX_SYMBOL_STR(csi_set_32bit_imagpara) },
	{ 0x88acc01e, __VMLINUX_SYMBOL_STR(csi_set_12bit_imagpara) },
	{ 0x24b98eec, __VMLINUX_SYMBOL_STR(csi_set_16bit_imagpara) },
	{ 0xdf180792, __VMLINUX_SYMBOL_STR(video_usercopy) },
	{ 0x5b83c39f, __VMLINUX_SYMBOL_STR(remap_pfn_range) },
	{ 0x1afae5e7, __VMLINUX_SYMBOL_STR(down_interruptible) },
	{ 0xfd1b4aba, __VMLINUX_SYMBOL_STR(clk_enable) },
	{ 0x4be7fb63, __VMLINUX_SYMBOL_STR(up) },
	{ 0x8f437d77, __VMLINUX_SYMBOL_STR(clk_prepare) },
	{ 0xfeb49f08, __VMLINUX_SYMBOL_STR(csi_clk_enable) },
	{ 0xf473ffaf, __VMLINUX_SYMBOL_STR(down) },
	{ 0x5021d67d, __VMLINUX_SYMBOL_STR(clk_unprepare) },
	{ 0x5f591b68, __VMLINUX_SYMBOL_STR(clk_disable) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x499cb58c, __VMLINUX_SYMBOL_STR(prepare_to_wait) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xc8b57c27, __VMLINUX_SYMBOL_STR(autoremove_wake_function) },
	{ 0xd9196c84, __VMLINUX_SYMBOL_STR(video_devdata) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xd141b2f2, __VMLINUX_SYMBOL_STR(v4l2_int_ioctl_0) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x891d3927, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0xe753c93c, __VMLINUX_SYMBOL_STR(video_unregister_device) },
	{ 0x3793c801, __VMLINUX_SYMBOL_STR(csi_stop_callback) },
	{ 0xa67b4d86, __VMLINUX_SYMBOL_STR(v4l2_int_device_unregister) },
	{ 0x4d56a0e4, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x2f2ff304, __VMLINUX_SYMBOL_STR(v4l2_int_ioctl_1) },
	{ 0xe0458857, __VMLINUX_SYMBOL_STR(csi_disable_int) },
	{ 0xd59f24c0, __VMLINUX_SYMBOL_STR(csi_enable_int) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=fsl_csi,v4l2-int-device";

MODULE_ALIAS("of:N*T*Cfsl,imx6sl-csi-v4l2*");

MODULE_INFO(srcversion, "63CB74E234989EAF1BA892B");
