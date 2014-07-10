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
	{ 0x19827b5c, __VMLINUX_SYMBOL_STR(iio_triggered_buffer_predisable) },
	{ 0x46a9ddf0, __VMLINUX_SYMBOL_STR(iio_triggered_buffer_postenable) },
	{ 0x17807ad1, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0x4ccc87eb, __VMLINUX_SYMBOL_STR(spi_register_driver) },
	{ 0x6d662533, __VMLINUX_SYMBOL_STR(_find_first_bit_le) },
	{ 0x687934e9, __VMLINUX_SYMBOL_STR(gpiod_set_raw_value) },
	{ 0xf816c866, __VMLINUX_SYMBOL_STR(gpio_to_desc) },
	{ 0x14e99942, __VMLINUX_SYMBOL_STR(iio_trigger_notify_done) },
	{ 0x5b3e7a77, __VMLINUX_SYMBOL_STR(iio_push_to_buffers) },
	{ 0x2c146145, __VMLINUX_SYMBOL_STR(iio_device_register) },
	{ 0x4b2b9fe6, __VMLINUX_SYMBOL_STR(iio_triggered_buffer_setup) },
	{ 0xdf76bbeb, __VMLINUX_SYMBOL_STR(iio_pollfunc_store_time) },
	{ 0x621fbda6, __VMLINUX_SYMBOL_STR(spi_get_device_id) },
	{ 0x3a657fb3, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x8574ca6c, __VMLINUX_SYMBOL_STR(gpio_request_array) },
	{ 0xe8b07854, __VMLINUX_SYMBOL_STR(regulator_get_voltage) },
	{ 0x43ecd27b, __VMLINUX_SYMBOL_STR(regulator_enable) },
	{ 0xef845dad, __VMLINUX_SYMBOL_STR(devm_regulator_get) },
	{ 0x8c4c6488, __VMLINUX_SYMBOL_STR(devm_iio_device_alloc) },
	{ 0xeb31a83c, __VMLINUX_SYMBOL_STR(spi_sync) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x9dfdf722, __VMLINUX_SYMBOL_STR(gpio_free_array) },
	{ 0x5ddaadd2, __VMLINUX_SYMBOL_STR(regulator_disable) },
	{ 0xcd6ab03a, __VMLINUX_SYMBOL_STR(iio_triggered_buffer_cleanup) },
	{ 0xd4d0b387, __VMLINUX_SYMBOL_STR(iio_device_unregister) },
	{ 0x43c003ff, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=industrialio,industrialio-triggered-buffer";

MODULE_ALIAS("spi:ad7265");
MODULE_ALIAS("spi:ad7266");
