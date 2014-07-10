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
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x99c24c7b, __VMLINUX_SYMBOL_STR(regulator_bulk_disable) },
	{ 0xc9dc93ce, __VMLINUX_SYMBOL_STR(lis3lv02d_init_device) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0xbf93dfee, __VMLINUX_SYMBOL_STR(regulator_bulk_enable) },
	{ 0x3a657fb3, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0xa8db0212, __VMLINUX_SYMBOL_STR(regulator_bulk_get) },
	{ 0xf4c99d6c, __VMLINUX_SYMBOL_STR(lis3lv02d_init_dt) },
	{ 0x4e7b3c05, __VMLINUX_SYMBOL_STR(of_match_device) },
	{ 0xdeb6065e, __VMLINUX_SYMBOL_STR(regulator_bulk_free) },
	{ 0x51948da5, __VMLINUX_SYMBOL_STR(lis3lv02d_remove_fs) },
	{ 0x8dfef636, __VMLINUX_SYMBOL_STR(lis3_dev) },
	{ 0xb8059eea, __VMLINUX_SYMBOL_STR(lis3lv02d_joystick_disable) },
	{ 0x6aacd7af, __VMLINUX_SYMBOL_STR(lis3lv02d_poweroff) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x3decd4fb, __VMLINUX_SYMBOL_STR(lis3lv02d_poweron) },
	{ 0x43c003ff, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x4a398fde, __VMLINUX_SYMBOL_STR(i2c_smbus_read_i2c_block_data) },
	{ 0xd9b2657, __VMLINUX_SYMBOL_STR(i2c_smbus_read_byte_data) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x78885352, __VMLINUX_SYMBOL_STR(i2c_smbus_write_byte_data) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=lis3lv02d";

MODULE_ALIAS("i2c:lis3lv02d");
MODULE_ALIAS("i2c:lis331dlh");
MODULE_ALIAS("of:N*T*Cst,lis3lv02d*");
