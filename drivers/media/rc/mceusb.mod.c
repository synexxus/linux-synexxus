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
	{ 0xe495880d, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0xe67f1a0, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xeab84fda, __VMLINUX_SYMBOL_STR(rc_free_device) },
	{ 0xdad8ec5d, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x572e21a, __VMLINUX_SYMBOL_STR(usb_string) },
	{ 0x8064d1f2, __VMLINUX_SYMBOL_STR(device_set_wakeup_enable) },
	{ 0xbf592552, __VMLINUX_SYMBOL_STR(device_set_wakeup_capable) },
	{ 0x6eceebdd, __VMLINUX_SYMBOL_STR(rc_register_device) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xcc07f119, __VMLINUX_SYMBOL_STR(rc_allocate_device) },
	{ 0x407b57cf, __VMLINUX_SYMBOL_STR(usb_alloc_coherent) },
	{ 0x47f03165, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x79222a5, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x7be5470a, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0xe208a5bb, __VMLINUX_SYMBOL_STR(ir_raw_event_store) },
	{ 0x292b7adc, __VMLINUX_SYMBOL_STR(ir_raw_event_handle) },
	{ 0x47d26566, __VMLINUX_SYMBOL_STR(ir_raw_event_store_with_filter) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xe5915f15, __VMLINUX_SYMBOL_STR(usb_unlink_urb) },
	{ 0x46b4b4bf, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x7c74d300, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x67db1c26, __VMLINUX_SYMBOL_STR(usb_free_coherent) },
	{ 0xd2dd49fa, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x15bdea9b, __VMLINUX_SYMBOL_STR(rc_unregister_device) },
	{ 0x3a657fb3, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0xe1342755, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0x2448324c, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x6dc71b43, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x43c003ff, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v045Ep006Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p0608d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p060Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p060Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p060Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p0613d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p0815d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p206Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p2088d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p2093d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp0161d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0609p031Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0609p0322d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0609p0334d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0609p0338d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0609p0353d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1460p9150d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1308pC001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v051CpC001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v107Bp3009d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v03EEp2501d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1784p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1784p0006d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1784p0007d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1784p0008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1784p000Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1784p0011d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v179Dp0010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v195Dp7002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1509p9242d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v043Ep9803d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v045Ep00A0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v147ApE015d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v147ApE016d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v147ApE017d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v147ApE018d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v147ApE03Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v147ApE03Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v147ApE03Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v147ApE042d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1934p5168d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1934p0602d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1934p0702d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2304p0225d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1019p0F38d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FB8p0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v185Bp3020d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v185Bp3082d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04EBpE004d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v105Ap2000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p58A1d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p58A5d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2596p8008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2596p8016d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2596p8042d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB130d*dc*dsc*dp*ic*isc*ip*in*");
