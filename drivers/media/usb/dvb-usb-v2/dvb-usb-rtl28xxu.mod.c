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
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x47d26566, __VMLINUX_SYMBOL_STR(ir_raw_event_store_with_filter) },
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x3a657fb3, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x9b361191, __VMLINUX_SYMBOL_STR(dvb_usbv2_resume) },
	{ 0x6f9a27f5, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x80047cbd, __VMLINUX_SYMBOL_STR(rtl2830_get_tuner_i2c_adapter) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xda2478d0, __VMLINUX_SYMBOL_STR(param_ops_short) },
	{ 0x46b4b4bf, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xe495880d, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x8288f5af, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x39968671, __VMLINUX_SYMBOL_STR(dvb_usbv2_probe) },
	{ 0xf75d0ebb, __VMLINUX_SYMBOL_STR(rc_keydown) },
	{ 0xdad8ec5d, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0xca9ed50c, __VMLINUX_SYMBOL_STR(i2c_unregister_device) },
	{ 0x868784cb, __VMLINUX_SYMBOL_STR(__symbol_get) },
	{ 0xb8a9fbb, __VMLINUX_SYMBOL_STR(dvb_usbv2_disconnect) },
	{ 0x271c2372, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x61b8c61b, __VMLINUX_SYMBOL_STR(rtl2832_get_i2c_adapter) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xf42be263, __VMLINUX_SYMBOL_STR(usb_clear_halt) },
	{ 0xf436bc4e, __VMLINUX_SYMBOL_STR(dvb_usbv2_suspend) },
	{ 0x7c74d300, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x20b2bb2d, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0xe67f1a0, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x6e9dd606, __VMLINUX_SYMBOL_STR(__symbol_put) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x7777f237, __VMLINUX_SYMBOL_STR(rtl2832_get_private_i2c_adapter) },
	{ 0x292b7adc, __VMLINUX_SYMBOL_STR(ir_raw_event_handle) },
	{ 0xb846cec4, __VMLINUX_SYMBOL_STR(i2c_new_device) },
	{ 0x43c003ff, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x72bb87c6, __VMLINUX_SYMBOL_STR(dvb_usbv2_reset_resume) },
	{ 0xc17c6552, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0x1972938a, __VMLINUX_SYMBOL_STR(ir_raw_event_set_idle) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dvb_usb_v2,rtl2830,rtl2832";

MODULE_ALIAS("usb:v0BDAp2831d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14AAp0160d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14AAp0161d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp2832d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp2838d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp00A9d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1F4DpB803d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp00B3d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp00E0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp00B4d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1F4DpC803d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1D19p1101d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0413p6680d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0413p6F0Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp00D3d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1D19p1102d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp00D7d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B80pD3A8d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B80pD393d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1D19p1104d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v185Bp0620d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B80pD394d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0413p6A03d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1F4DpA803d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0458p707Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B80pD395d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B80pD39Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B80pD3AFd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15F4p0131d*dc*dsc*dp*ic*isc*ip*in*");
