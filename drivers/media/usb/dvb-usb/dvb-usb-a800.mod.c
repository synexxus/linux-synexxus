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
	{ 0x79222a5, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xae7b77f8, __VMLINUX_SYMBOL_STR(dvb_usb_device_exit) },
	{ 0xfaf7477d, __VMLINUX_SYMBOL_STR(dvb_usb_device_init) },
	{ 0xc2e27534, __VMLINUX_SYMBOL_STR(dibusb_pid_filter) },
	{ 0xda2478d0, __VMLINUX_SYMBOL_STR(param_ops_short) },
	{ 0xe495880d, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0xdad8ec5d, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x13067b90, __VMLINUX_SYMBOL_STR(dibusb_dib3000mc_frontend_attach) },
	{ 0x47f03165, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x20b2bb2d, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0x958ca2c8, __VMLINUX_SYMBOL_STR(dibusb_dib3000mc_tuner_attach) },
	{ 0x3ea8f368, __VMLINUX_SYMBOL_STR(dibusb2_0_streaming_ctrl) },
	{ 0xe67f1a0, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xd3847e96, __VMLINUX_SYMBOL_STR(dvb_usb_nec_rc_key_to_event) },
	{ 0xd30f3c9c, __VMLINUX_SYMBOL_STR(dibusb_i2c_algo) },
	{ 0x16718e32, __VMLINUX_SYMBOL_STR(dibusb_pid_filter_ctrl) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dvb-usb,dvb-usb-dibusb-common";

MODULE_ALIAS("usb:v07CApA800d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07CApA801d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "E8408010A49C25F5B2AEC11");
