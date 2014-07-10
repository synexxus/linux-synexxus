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
	{ 0xb1c1fb04, __VMLINUX_SYMBOL_STR(pmbus_do_remove) },
	{ 0xd4370660, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0x2e01cd89, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0xff6c2cd3, __VMLINUX_SYMBOL_STR(pmbus_do_probe) },
	{ 0x564906d2, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x5d8e1075, __VMLINUX_SYMBOL_STR(pmbus_set_page) },
	{ 0x8cc8c430, __VMLINUX_SYMBOL_STR(pmbus_read_byte_data) },
	{ 0xcdf8a04c, __VMLINUX_SYMBOL_STR(pmbus_check_word_register) },
	{ 0xb9ebaaf7, __VMLINUX_SYMBOL_STR(pmbus_check_byte_register) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=pmbus_core";

MODULE_ALIAS("i2c:adp4000");
MODULE_ALIAS("i2c:bmr453");
MODULE_ALIAS("i2c:bmr454");
MODULE_ALIAS("i2c:mdt040");
MODULE_ALIAS("i2c:ncp4200");
MODULE_ALIAS("i2c:ncp4208");
MODULE_ALIAS("i2c:pdt003");
MODULE_ALIAS("i2c:pdt006");
MODULE_ALIAS("i2c:pdt012");
MODULE_ALIAS("i2c:pmbus");
MODULE_ALIAS("i2c:tps40400");
MODULE_ALIAS("i2c:tps40422");
MODULE_ALIAS("i2c:udt020");
