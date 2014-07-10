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
	{ 0x17807ad1, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0x4ccc87eb, __VMLINUX_SYMBOL_STR(spi_register_driver) },
	{ 0xc9dc93ce, __VMLINUX_SYMBOL_STR(lis3lv02d_init_device) },
	{ 0x3a657fb3, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0xf4c99d6c, __VMLINUX_SYMBOL_STR(lis3lv02d_init_dt) },
	{ 0x4e7b3c05, __VMLINUX_SYMBOL_STR(of_match_device) },
	{ 0x1f4a1b8, __VMLINUX_SYMBOL_STR(spi_setup) },
	{ 0x6b40c90f, __VMLINUX_SYMBOL_STR(spi_write_then_read) },
	{ 0xeb31a83c, __VMLINUX_SYMBOL_STR(spi_sync) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x51948da5, __VMLINUX_SYMBOL_STR(lis3lv02d_remove_fs) },
	{ 0xb8059eea, __VMLINUX_SYMBOL_STR(lis3lv02d_joystick_disable) },
	{ 0x6aacd7af, __VMLINUX_SYMBOL_STR(lis3lv02d_poweroff) },
	{ 0x8dfef636, __VMLINUX_SYMBOL_STR(lis3_dev) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x3decd4fb, __VMLINUX_SYMBOL_STR(lis3lv02d_poweron) },
	{ 0x43c003ff, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=lis3lv02d";

MODULE_ALIAS("of:N*T*Cst,lis302dl-spi*");
