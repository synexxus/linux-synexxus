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
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xbbd76c90, __VMLINUX_SYMBOL_STR(of_find_property) },
	{ 0x95491112, __VMLINUX_SYMBOL_STR(of_get_property) },
	{ 0x3d9d606d, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x3a657fb3, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x74701b64, __VMLINUX_SYMBOL_STR(gpiochip_add) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xb840f323, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x564906d2, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x59674989, __VMLINUX_SYMBOL_STR(i2c_smbus_read_word_data) },
	{ 0xd9b2657, __VMLINUX_SYMBOL_STR(i2c_smbus_read_byte_data) },
	{ 0x4a398fde, __VMLINUX_SYMBOL_STR(i2c_smbus_read_i2c_block_data) },
	{ 0x6f9a27f5, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x10da615, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x5e532f8a, __VMLINUX_SYMBOL_STR(i2c_smbus_write_word_data) },
	{ 0x78885352, __VMLINUX_SYMBOL_STR(i2c_smbus_write_byte_data) },
	{ 0x4d5f701f, __VMLINUX_SYMBOL_STR(i2c_smbus_write_i2c_block_data) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x46b4b4bf, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xeed1cd8e, __VMLINUX_SYMBOL_STR(gpiochip_remove) },
	{ 0x43c003ff, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cnxp,pca9505*");
MODULE_ALIAS("of:N*T*Cnxp,pca9534*");
MODULE_ALIAS("of:N*T*Cnxp,pca9535*");
MODULE_ALIAS("of:N*T*Cnxp,pca9536*");
MODULE_ALIAS("of:N*T*Cnxp,pca9537*");
MODULE_ALIAS("of:N*T*Cnxp,pca9538*");
MODULE_ALIAS("of:N*T*Cnxp,pca9539*");
MODULE_ALIAS("of:N*T*Cnxp,pca9554*");
MODULE_ALIAS("of:N*T*Cnxp,pca9555*");
MODULE_ALIAS("of:N*T*Cnxp,pca9556*");
MODULE_ALIAS("of:N*T*Cnxp,pca9557*");
MODULE_ALIAS("of:N*T*Cnxp,pca9574*");
MODULE_ALIAS("of:N*T*Cnxp,pca9575*");
MODULE_ALIAS("of:N*T*Cnxp,pca9698*");
MODULE_ALIAS("of:N*T*Cmaxim,max7310*");
MODULE_ALIAS("of:N*T*Cmaxim,max7312*");
MODULE_ALIAS("of:N*T*Cmaxim,max7313*");
MODULE_ALIAS("of:N*T*Cmaxim,max7315*");
MODULE_ALIAS("of:N*T*Cti,pca6107*");
MODULE_ALIAS("of:N*T*Cti,tca6408*");
MODULE_ALIAS("of:N*T*Cti,tca6416*");
MODULE_ALIAS("of:N*T*Cti,tca6424*");
MODULE_ALIAS("of:N*T*Cexar,xra1202*");
MODULE_ALIAS("i2c:pca9505");
MODULE_ALIAS("i2c:pca9534");
MODULE_ALIAS("i2c:pca9535");
MODULE_ALIAS("i2c:pca9536");
MODULE_ALIAS("i2c:pca9537");
MODULE_ALIAS("i2c:pca9538");
MODULE_ALIAS("i2c:pca9539");
MODULE_ALIAS("i2c:pca9554");
MODULE_ALIAS("i2c:pca9555");
MODULE_ALIAS("i2c:pca9556");
MODULE_ALIAS("i2c:pca9557");
MODULE_ALIAS("i2c:pca9574");
MODULE_ALIAS("i2c:pca9575");
MODULE_ALIAS("i2c:pca9698");
MODULE_ALIAS("i2c:max7310");
MODULE_ALIAS("i2c:max7312");
MODULE_ALIAS("i2c:max7313");
MODULE_ALIAS("i2c:max7315");
MODULE_ALIAS("i2c:pca6107");
MODULE_ALIAS("i2c:tca6408");
MODULE_ALIAS("i2c:tca6416");
MODULE_ALIAS("i2c:tca6424");
MODULE_ALIAS("i2c:xra1202");
