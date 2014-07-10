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
	{ 0x5fe345b, __VMLINUX_SYMBOL_STR(adis_update_scan_mode) },
	{ 0x17807ad1, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0x4ccc87eb, __VMLINUX_SYMBOL_STR(spi_register_driver) },
	{ 0x2c146145, __VMLINUX_SYMBOL_STR(iio_device_register) },
	{ 0x7e9be2ca, __VMLINUX_SYMBOL_STR(adis_initial_startup) },
	{ 0xa15bb52c, __VMLINUX_SYMBOL_STR(adis_setup_buffer_and_trigger) },
	{ 0xf27932b8, __VMLINUX_SYMBOL_STR(adis_init) },
	{ 0x3a657fb3, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x8c4c6488, __VMLINUX_SYMBOL_STR(devm_iio_device_alloc) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x6f9a27f5, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x10da615, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xa46f2f1b, __VMLINUX_SYMBOL_STR(kstrtouint) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x621fbda6, __VMLINUX_SYMBOL_STR(spi_get_device_id) },
	{ 0xa9a288e3, __VMLINUX_SYMBOL_STR(adis_single_conversion) },
	{ 0x5b32961, __VMLINUX_SYMBOL_STR(adis_read_reg) },
	{ 0x42629402, __VMLINUX_SYMBOL_STR(adis_cleanup_buffer_and_trigger) },
	{ 0x46b4b4bf, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xd4d0b387, __VMLINUX_SYMBOL_STR(iio_device_unregister) },
	{ 0x43c003ff, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x1ac10c04, __VMLINUX_SYMBOL_STR(adis_write_reg) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=adis_lib,industrialio";

MODULE_ALIAS("spi:adis16260");
MODULE_ALIAS("spi:adis16265");
MODULE_ALIAS("spi:adis16250");
MODULE_ALIAS("spi:adis16255");
MODULE_ALIAS("spi:adis16251");
