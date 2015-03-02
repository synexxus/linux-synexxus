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
	{ 0x5021d67d, __VMLINUX_SYMBOL_STR(clk_unprepare) },
	{ 0x1c55f26b, __VMLINUX_SYMBOL_STR(i2c_master_send) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x98cc564a, __VMLINUX_SYMBOL_STR(regulator_set_voltage) },
	{ 0xfd1b4aba, __VMLINUX_SYMBOL_STR(clk_enable) },
	{ 0xb2deb163, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0x1258d9d9, __VMLINUX_SYMBOL_STR(regulator_disable) },
	{ 0x9f68d24b, __VMLINUX_SYMBOL_STR(pinctrl_select_state) },
	{ 0x5f591b68, __VMLINUX_SYMBOL_STR(clk_disable) },
	{ 0x3d156227, __VMLINUX_SYMBOL_STR(devm_pinctrl_get) },
	{ 0xdac11bae, __VMLINUX_SYMBOL_STR(of_property_read_u32_array) },
	{ 0x432fd7f6, __VMLINUX_SYMBOL_STR(__gpio_set_value) },
	{ 0xd2c45f36, __VMLINUX_SYMBOL_STR(pinctrl_lookup_state) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5be9608b, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xc5dfee2c, __VMLINUX_SYMBOL_STR(v4l2_int_device_register) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0xa67b4d86, __VMLINUX_SYMBOL_STR(v4l2_int_device_unregister) },
	{ 0xbbbb8179, __VMLINUX_SYMBOL_STR(devm_gpio_request_one) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x7066709d, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0xc88150d3, __VMLINUX_SYMBOL_STR(devm_regulator_get) },
	{ 0x8f437d77, __VMLINUX_SYMBOL_STR(clk_prepare) },
	{ 0x3757c9b, __VMLINUX_SYMBOL_STR(of_get_named_gpio_flags) },
	{ 0xa75b1ab1, __VMLINUX_SYMBOL_STR(devm_clk_get) },
	{ 0x2d49d9cd, __VMLINUX_SYMBOL_STR(i2c_master_recv) },
	{ 0xbb1e46f1, __VMLINUX_SYMBOL_STR(devm_pinctrl_put) },
	{ 0x9d187112, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xca16dbe7, __VMLINUX_SYMBOL_STR(regulator_enable) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=v4l2-int-device";

MODULE_ALIAS("i2c:ov5642");
MODULE_ALIAS("i2c:ov564x");

MODULE_INFO(srcversion, "9B7129C4ADA1C480E9A3BCD");
