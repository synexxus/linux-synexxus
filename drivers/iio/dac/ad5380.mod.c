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
	{ 0x7dbdade, __VMLINUX_SYMBOL_STR(iio_enum_available_read) },
	{ 0xf22d395c, __VMLINUX_SYMBOL_STR(iio_enum_write) },
	{ 0x6401ba77, __VMLINUX_SYMBOL_STR(iio_enum_read) },
	{ 0xd4370660, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0x17807ad1, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0x2e01cd89, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0x4ccc87eb, __VMLINUX_SYMBOL_STR(spi_register_driver) },
	{ 0x199fbf7d, __VMLINUX_SYMBOL_STR(devm_regmap_init_i2c) },
	{ 0x9271c1ae, __VMLINUX_SYMBOL_STR(devm_regmap_init_spi) },
	{ 0x621fbda6, __VMLINUX_SYMBOL_STR(spi_get_device_id) },
	{ 0x2c146145, __VMLINUX_SYMBOL_STR(iio_device_register) },
	{ 0xe8b07854, __VMLINUX_SYMBOL_STR(regulator_get_voltage) },
	{ 0x43ecd27b, __VMLINUX_SYMBOL_STR(regulator_enable) },
	{ 0xef845dad, __VMLINUX_SYMBOL_STR(devm_regulator_get) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x46b4b4bf, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x3a657fb3, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x8c4c6488, __VMLINUX_SYMBOL_STR(devm_iio_device_alloc) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x6f9a27f5, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x740bc2ca, __VMLINUX_SYMBOL_STR(regmap_write) },
	{ 0x10da615, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xa8232c78, __VMLINUX_SYMBOL_STR(strtobool) },
	{ 0x1abe3650, __VMLINUX_SYMBOL_STR(regmap_update_bits) },
	{ 0x7cc99ca1, __VMLINUX_SYMBOL_STR(regmap_read) },
	{ 0x5ddaadd2, __VMLINUX_SYMBOL_STR(regulator_disable) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xd4d0b387, __VMLINUX_SYMBOL_STR(iio_device_unregister) },
	{ 0x43c003ff, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=industrialio";

MODULE_ALIAS("i2c:ad5380-3");
MODULE_ALIAS("i2c:ad5380-5");
MODULE_ALIAS("i2c:ad5381-3");
MODULE_ALIAS("i2c:ad5381-5");
MODULE_ALIAS("i2c:ad5382-3");
MODULE_ALIAS("i2c:ad5382-5");
MODULE_ALIAS("i2c:ad5383-3");
MODULE_ALIAS("i2c:ad5383-5");
MODULE_ALIAS("i2c:ad5384-3");
MODULE_ALIAS("i2c:ad5384-5");
MODULE_ALIAS("i2c:ad5390-3");
MODULE_ALIAS("i2c:ad5390-5");
MODULE_ALIAS("i2c:ad5391-3");
MODULE_ALIAS("i2c:ad5391-5");
MODULE_ALIAS("i2c:ad5392-3");
MODULE_ALIAS("i2c:ad5392-5");
MODULE_ALIAS("spi:ad5380-3");
MODULE_ALIAS("spi:ad5380-5");
MODULE_ALIAS("spi:ad5381-3");
MODULE_ALIAS("spi:ad5381-5");
MODULE_ALIAS("spi:ad5382-3");
MODULE_ALIAS("spi:ad5382-5");
MODULE_ALIAS("spi:ad5383-3");
MODULE_ALIAS("spi:ad5383-5");
MODULE_ALIAS("spi:ad5384-3");
MODULE_ALIAS("spi:ad5384-5");
MODULE_ALIAS("spi:ad5390-3");
MODULE_ALIAS("spi:ad5390-5");
MODULE_ALIAS("spi:ad5391-3");
MODULE_ALIAS("spi:ad5391-5");
MODULE_ALIAS("spi:ad5392-3");
MODULE_ALIAS("spi:ad5392-5");
