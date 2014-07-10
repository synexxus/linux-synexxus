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
	{ 0x237f367a, __VMLINUX_SYMBOL_STR(usb_stor_post_reset) },
	{ 0x1bc3edc2, __VMLINUX_SYMBOL_STR(usb_stor_sense_invalidCDB) },
	{ 0x5cf2e042, __VMLINUX_SYMBOL_STR(usb_stor_disconnect) },
	{ 0xd4d1c9f5, __VMLINUX_SYMBOL_STR(scsi_eh_restore_cmnd) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xe495880d, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xa9141b79, __VMLINUX_SYMBOL_STR(usb_stor_probe2) },
	{ 0xf2eff367, __VMLINUX_SYMBOL_STR(usb_stor_transparent_scsi_command) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x80f631bf, __VMLINUX_SYMBOL_STR(usb_stor_pre_reset) },
	{ 0x168ae405, __VMLINUX_SYMBOL_STR(usb_stor_reset_resume) },
	{ 0xf81fde95, __VMLINUX_SYMBOL_STR(usb_stor_suspend) },
	{ 0xc23e7559, __VMLINUX_SYMBOL_STR(usb_stor_probe1) },
	{ 0xb1fbc183, __VMLINUX_SYMBOL_STR(scsi_eh_prep_cmnd) },
	{ 0xa9aaf519, __VMLINUX_SYMBOL_STR(usb_stor_resume) },
	{ 0xe67f1a0, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v04B4p6830d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B4p6831d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14CDp6116d0160dc*dsc*dp*ic*isc*ip*in*");
