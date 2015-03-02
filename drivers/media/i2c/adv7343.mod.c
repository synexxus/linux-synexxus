#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
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
	{ 0x9cceacf4, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x15692c87, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x897c1a28, __VMLINUX_SYMBOL_STR(v4l2_subdev_querymenu) },
	{ 0xcb0bd95c, __VMLINUX_SYMBOL_STR(v4l2_subdev_try_ext_ctrls) },
	{ 0x9383ba24, __VMLINUX_SYMBOL_STR(v4l2_subdev_s_ext_ctrls) },
	{ 0xe00e9df2, __VMLINUX_SYMBOL_STR(v4l2_subdev_g_ext_ctrls) },
	{ 0x6d6981f9, __VMLINUX_SYMBOL_STR(v4l2_subdev_s_ctrl) },
	{ 0x76a9ede6, __VMLINUX_SYMBOL_STR(v4l2_subdev_g_ctrl) },
	{ 0x401405d6, __VMLINUX_SYMBOL_STR(v4l2_subdev_queryctrl) },
	{ 0xb2deb163, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0x7066709d, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0xda7a574b, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_setup) },
	{ 0x88f00053, __VMLINUX_SYMBOL_STR(v4l2_ctrl_new_std) },
	{ 0xd0e46a3f, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_init_class) },
	{ 0xbd8582e1, __VMLINUX_SYMBOL_STR(v4l2_i2c_subdev_init) },
	{ 0x3c749c55, __VMLINUX_SYMBOL_STR(devm_kzalloc) },
	{ 0x571c7023, __VMLINUX_SYMBOL_STR(v4l2_chip_ident_i2c_client) },
	{ 0xfde041ce, __VMLINUX_SYMBOL_STR(i2c_smbus_write_byte_data) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x38c09b30, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_free) },
	{ 0xf042979d, __VMLINUX_SYMBOL_STR(v4l2_device_unregister_subdev) },
	{ 0x4d56a0e4, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("i2c:adv7343");

MODULE_INFO(srcversion, "60DD9AE714500AD6196D78F");
