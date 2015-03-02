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
	{ 0xd46ddff9, __VMLINUX_SYMBOL_STR(registered_fb) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0xff178f6, __VMLINUX_SYMBOL_STR(__aeabi_idivmod) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x631cb49f, __VMLINUX_SYMBOL_STR(csi_enc_deselect) },
	{ 0xc77a97a, __VMLINUX_SYMBOL_STR(prp_enc_deselect) },
	{ 0x5f591b68, __VMLINUX_SYMBOL_STR(clk_disable) },
	{ 0x5be9608b, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xecec5d9a, __VMLINUX_SYMBOL_STR(device_create_file) },
	{ 0x30a6a98b, __VMLINUX_SYMBOL_STR(__video_register_device) },
	{ 0xc5dfee2c, __VMLINUX_SYMBOL_STR(v4l2_int_device_register) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x891d3927, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xc5dafa00, __VMLINUX_SYMBOL_STR(video_device_alloc) },
	{ 0x798209ab, __VMLINUX_SYMBOL_STR(ipu_get_soc) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xdac11bae, __VMLINUX_SYMBOL_STR(of_property_read_u32_array) },
	{ 0xec78630f, __VMLINUX_SYMBOL_STR(of_match_device) },
	{ 0x6fef2591, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xc28b8cde, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0x761b20eb, __VMLINUX_SYMBOL_STR(prp_still_deselect) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0xca55481b, __VMLINUX_SYMBOL_STR(prp_still_select) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0xdf180792, __VMLINUX_SYMBOL_STR(video_usercopy) },
	{ 0x5b83c39f, __VMLINUX_SYMBOL_STR(remap_pfn_range) },
	{ 0x1afae5e7, __VMLINUX_SYMBOL_STR(down_interruptible) },
	{ 0x5021d67d, __VMLINUX_SYMBOL_STR(clk_unprepare) },
	{ 0xfd1b4aba, __VMLINUX_SYMBOL_STR(clk_enable) },
	{ 0x7e14dc74, __VMLINUX_SYMBOL_STR(csi_enc_select) },
	{ 0x8f437d77, __VMLINUX_SYMBOL_STR(clk_prepare) },
	{ 0xafd9dc5e, __VMLINUX_SYMBOL_STR(prp_enc_select) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x499cb58c, __VMLINUX_SYMBOL_STR(prepare_to_wait) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xc8b57c27, __VMLINUX_SYMBOL_STR(autoremove_wake_function) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xd9196c84, __VMLINUX_SYMBOL_STR(video_devdata) },
	{ 0xbd317f6, __VMLINUX_SYMBOL_STR(ipu_csi_init_interface) },
	{ 0x3dbe433c, __VMLINUX_SYMBOL_STR(ipu_csi_set_window_pos) },
	{ 0xc3f04b77, __VMLINUX_SYMBOL_STR(ipu_csi_set_window_size) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x4f68e5c9, __VMLINUX_SYMBOL_STR(do_gettimeofday) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xd141b2f2, __VMLINUX_SYMBOL_STR(v4l2_int_ioctl_0) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xe753c93c, __VMLINUX_SYMBOL_STR(video_unregister_device) },
	{ 0xa67b4d86, __VMLINUX_SYMBOL_STR(v4l2_int_device_unregister) },
	{ 0x24409973, __VMLINUX_SYMBOL_STR(device_remove_file) },
	{ 0xc818417e, __VMLINUX_SYMBOL_STR(arm_dma_ops) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x5e4c9c09, __VMLINUX_SYMBOL_STR(ipu_csi_enable_mclk) },
	{ 0x4be7fb63, __VMLINUX_SYMBOL_STR(up) },
	{ 0x2f2ff304, __VMLINUX_SYMBOL_STR(v4l2_int_ioctl_1) },
	{ 0xf473ffaf, __VMLINUX_SYMBOL_STR(down) },
	{ 0x4d56a0e4, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xf0aa37df, __VMLINUX_SYMBOL_STR(bg_overlay_sdc_deselect) },
	{ 0xb9729003, __VMLINUX_SYMBOL_STR(foreground_sdc_deselect) },
	{ 0xd2a84747, __VMLINUX_SYMBOL_STR(bg_overlay_sdc_select) },
	{ 0x39d0857c, __VMLINUX_SYMBOL_STR(foreground_sdc_select) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ipu_csi_enc,ipu_prp_enc,v4l2-int-device,ipu_still,ipu_bg_overlay_sdc,ipu_fg_overlay_sdc";

MODULE_ALIAS("of:N*T*Cfsl,imx6q-v4l2-capture*");
MODULE_ALIAS("platform:v4l2-capture-imx5");
MODULE_ALIAS("platform:v4l2-capture-imx6");

MODULE_INFO(srcversion, "5D5696E17DBFDF99A97FC95");
