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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xe8d22f15, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x6ba408e9, __VMLINUX_SYMBOL_STR(adt7316_pm_ops) },
	{ 0xd4370660, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0x2e01cd89, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0xb9bad5ac, __VMLINUX_SYMBOL_STR(i2c_smbus_read_byte) },
	{ 0x1bce6aec, __VMLINUX_SYMBOL_STR(i2c_smbus_write_byte) },
	{ 0x46b4b4bf, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x78885352, __VMLINUX_SYMBOL_STR(i2c_smbus_write_byte_data) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x5d494b8f, __VMLINUX_SYMBOL_STR(adt7316_probe) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=adt7316";

MODULE_ALIAS("i2c:adt7316");
MODULE_ALIAS("i2c:adt7317");
MODULE_ALIAS("i2c:adt7318");
MODULE_ALIAS("i2c:adt7516");
MODULE_ALIAS("i2c:adt7517");
MODULE_ALIAS("i2c:adt7519");
