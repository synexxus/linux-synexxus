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
	{ 0x17807ad1, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0x4ccc87eb, __VMLINUX_SYMBOL_STR(spi_register_driver) },
	{ 0x34f4f01e, __VMLINUX_SYMBOL_STR(ad_sigma_delta_single_conversion) },
	{ 0x46b4b4bf, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x9aba2ac3, __VMLINUX_SYMBOL_STR(devm_gpio_request_one) },
	{ 0x2c146145, __VMLINUX_SYMBOL_STR(iio_device_register) },
	{ 0x3d9d606d, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xf7c72922, __VMLINUX_SYMBOL_STR(ad_sd_setup_buffer_and_trigger) },
	{ 0x3a657fb3, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x621fbda6, __VMLINUX_SYMBOL_STR(spi_get_device_id) },
	{ 0xe8b07854, __VMLINUX_SYMBOL_STR(regulator_get_voltage) },
	{ 0x43ecd27b, __VMLINUX_SYMBOL_STR(regulator_enable) },
	{ 0xef845dad, __VMLINUX_SYMBOL_STR(devm_regulator_get) },
	{ 0xb4040877, __VMLINUX_SYMBOL_STR(ad_sd_init) },
	{ 0x8c4c6488, __VMLINUX_SYMBOL_STR(devm_iio_device_alloc) },
	{ 0x687934e9, __VMLINUX_SYMBOL_STR(gpiod_set_raw_value) },
	{ 0xf816c866, __VMLINUX_SYMBOL_STR(gpio_to_desc) },
	{ 0x5ddaadd2, __VMLINUX_SYMBOL_STR(regulator_disable) },
	{ 0xc1978060, __VMLINUX_SYMBOL_STR(ad_sd_cleanup_buffer_and_trigger) },
	{ 0xd4d0b387, __VMLINUX_SYMBOL_STR(iio_device_unregister) },
	{ 0x43c003ff, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ad_sigma_delta,industrialio";

MODULE_ALIAS("spi:ad7170");
MODULE_ALIAS("spi:ad7171");
MODULE_ALIAS("spi:ad7780");
MODULE_ALIAS("spi:ad7781");
