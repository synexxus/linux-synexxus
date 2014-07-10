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
	{ 0xd4370660, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0x2e01cd89, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0x3a657fb3, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x97725418, __VMLINUX_SYMBOL_STR(ad714x_probe) },
	{ 0xc155fcf4, __VMLINUX_SYMBOL_STR(i2c_master_recv) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x46b4b4bf, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x6c432ffa, __VMLINUX_SYMBOL_STR(i2c_master_send) },
	{ 0x8ee3438b, __VMLINUX_SYMBOL_STR(ad714x_remove) },
	{ 0x4ce8e65e, __VMLINUX_SYMBOL_STR(ad714x_disable) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x5c7a8205, __VMLINUX_SYMBOL_STR(ad714x_enable) },
	{ 0x43c003ff, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ad714x";

MODULE_ALIAS("i2c:ad7142_captouch");
MODULE_ALIAS("i2c:ad7143_captouch");
MODULE_ALIAS("i2c:ad7147_captouch");
MODULE_ALIAS("i2c:ad7147a_captouch");
MODULE_ALIAS("i2c:ad7148_captouch");
