#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
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
	{ 0xe8d22f15, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x33ba5cd4, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x8c9b4b47, __VMLINUX_SYMBOL_STR(rt2x00usb_resume) },
	{ 0xd4f4ecec, __VMLINUX_SYMBOL_STR(rt2x00usb_suspend) },
	{ 0xa5100f5e, __VMLINUX_SYMBOL_STR(rt2x00usb_disconnect) },
	{ 0xac039a11, __VMLINUX_SYMBOL_STR(rt2x00mac_tx_frames_pending) },
	{ 0x4d66b3ca, __VMLINUX_SYMBOL_STR(rt2x00mac_get_ringparam) },
	{ 0x76d9253b, __VMLINUX_SYMBOL_STR(rt2x00mac_get_antenna) },
	{ 0x5fc0ae14, __VMLINUX_SYMBOL_STR(rt2x00mac_set_antenna) },
	{ 0x78d56beb, __VMLINUX_SYMBOL_STR(rt2x00mac_flush) },
	{ 0xb79b49d8, __VMLINUX_SYMBOL_STR(rt2x00mac_rfkill_poll) },
	{ 0xf343062c, __VMLINUX_SYMBOL_STR(rt2x00mac_conf_tx) },
	{ 0x6c65f754, __VMLINUX_SYMBOL_STR(rt2x00mac_get_stats) },
	{ 0xf4ecbddd, __VMLINUX_SYMBOL_STR(rt2x00mac_sw_scan_complete) },
	{ 0xd49b7026, __VMLINUX_SYMBOL_STR(rt2x00mac_sw_scan_start) },
	{ 0x306245c9, __VMLINUX_SYMBOL_STR(rt2x00mac_set_key) },
	{ 0xfa1513b8, __VMLINUX_SYMBOL_STR(rt2x00mac_set_tim) },
	{ 0xb88a26c, __VMLINUX_SYMBOL_STR(rt2x00mac_configure_filter) },
	{ 0x83268556, __VMLINUX_SYMBOL_STR(rt2x00mac_bss_info_changed) },
	{ 0x3415ff57, __VMLINUX_SYMBOL_STR(rt2x00mac_config) },
	{ 0x11a9eab7, __VMLINUX_SYMBOL_STR(rt2x00mac_remove_interface) },
	{ 0x1df1aa65, __VMLINUX_SYMBOL_STR(rt2x00mac_add_interface) },
	{ 0x66b00e09, __VMLINUX_SYMBOL_STR(rt2x00mac_stop) },
	{ 0x6c4ed164, __VMLINUX_SYMBOL_STR(rt2x00mac_start) },
	{ 0xeee06a69, __VMLINUX_SYMBOL_STR(rt2x00mac_tx) },
	{ 0xcae12734, __VMLINUX_SYMBOL_STR(rt2x00usb_flush_queue) },
	{ 0x312c235d, __VMLINUX_SYMBOL_STR(rt2x00usb_kick_queue) },
	{ 0x5050be76, __VMLINUX_SYMBOL_STR(rt2x00usb_watchdog) },
	{ 0x642bbf67, __VMLINUX_SYMBOL_STR(rt2x00usb_clear_entry) },
	{ 0x36e56276, __VMLINUX_SYMBOL_STR(rt2x00usb_uninitialize) },
	{ 0x57b75678, __VMLINUX_SYMBOL_STR(rt2x00usb_initialize) },
	{ 0xe495880d, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0xe67f1a0, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x7c74d300, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0x6dc71b43, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xe45b3d6f, __VMLINUX_SYMBOL_STR(rt2x00usb_vendor_request) },
	{ 0x8ea954bd, __VMLINUX_SYMBOL_STR(rt2x00usb_disable_radio) },
	{ 0x6f9a27f5, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x10da615, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x46b4b4bf, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x4014475d, __VMLINUX_SYMBOL_STR(rt2x00usb_vendor_req_buff_lock) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x42ffc6c3, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x2448324c, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xec57b2d1, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x1fccca06, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xb3c539f6, __VMLINUX_SYMBOL_STR(rt2x00usb_vendor_request_buff) },
	{ 0x54e67543, __VMLINUX_SYMBOL_STR(rt2x00usb_probe) },
	{ 0xff178f6, __VMLINUX_SYMBOL_STR(__aeabi_idivmod) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rt2x00usb,rt2x00lib";

MODULE_ALIAS("usb:v0B05p1706d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p1707d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp7050d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp7051d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p000Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p0011d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p001Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14B2p3C02d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3C00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1044p8001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1044p8007d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06F8pE000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p005Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0066d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0067d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p008Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0097d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p6861d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p6865d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p6869d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp1706d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp2570d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp9020d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v079Bp004Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0681p3C06d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0707pEE13d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v114Bp0110d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0769p11F3d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0EB0p9020d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0F88p3012d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v5A57p0260d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "5C01515AC42CE4076B7D5CF");
