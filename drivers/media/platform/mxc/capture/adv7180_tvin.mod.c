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
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x98cc564a, __VMLINUX_SYMBOL_STR(regulator_set_voltage) },
	{ 0xfd1b4aba, __VMLINUX_SYMBOL_STR(clk_enable) },
	{ 0x498105d9, __VMLINUX_SYMBOL_STR(i2c_smbus_read_byte_data) },
	{ 0xb2deb163, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0x1258d9d9, __VMLINUX_SYMBOL_STR(regulator_disable) },
	{ 0x9f68d24b, __VMLINUX_SYMBOL_STR(pinctrl_select_state) },
	{ 0xfde041ce, __VMLINUX_SYMBOL_STR(i2c_smbus_write_byte_data) },
	{ 0x5f591b68, __VMLINUX_SYMBOL_STR(clk_disable) },
	{ 0x3d156227, __VMLINUX_SYMBOL_STR(devm_pinctrl_get) },
	{ 0xdac11bae, __VMLINUX_SYMBOL_STR(of_property_read_u32_array) },
	{ 0xe1676390, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xd2c45f36, __VMLINUX_SYMBOL_STR(pinctrl_lookup_state) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x3441c3d6, __VMLINUX_SYMBOL_STR(gpio_set_value_cansleep) },
	{ 0x5be9608b, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xc5dfee2c, __VMLINUX_SYMBOL_STR(v4l2_int_device_register) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xfb88016a, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xa67b4d86, __VMLINUX_SYMBOL_STR(v4l2_int_device_unregister) },
	{ 0xbbbb8179, __VMLINUX_SYMBOL_STR(devm_gpio_request_one) },
	{ 0x7066709d, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0xc88150d3, __VMLINUX_SYMBOL_STR(devm_regulator_get) },
	{ 0x8f437d77, __VMLINUX_SYMBOL_STR(clk_prepare) },
	{ 0x3757c9b, __VMLINUX_SYMBOL_STR(of_get_named_gpio_flags) },
	{ 0xa75b1ab1, __VMLINUX_SYMBOL_STR(devm_clk_get) },
	{ 0xbb1e46f1, __VMLINUX_SYMBOL_STR(devm_pinctrl_put) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x9d187112, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xca16dbe7, __VMLINUX_SYMBOL_STR(regulator_enable) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=v4l2-int-device";

MODULE_ALIAS("i2c:adv7180");

MODULE_INFO(srcversion, "8C6A82BAE73B346E3BBB6EE");
