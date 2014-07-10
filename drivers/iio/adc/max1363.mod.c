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
	{ 0xc5570a83, __VMLINUX_SYMBOL_STR(iio_read_const_attr) },
	{ 0xd4370660, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0x2e01cd89, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0x2c146145, __VMLINUX_SYMBOL_STR(iio_device_register) },
	{ 0x147b4fa2, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0x4b2b9fe6, __VMLINUX_SYMBOL_STR(iio_triggered_buffer_setup) },
	{ 0x564906d2, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x6c432ffa, __VMLINUX_SYMBOL_STR(i2c_master_send) },
	{ 0xc155fcf4, __VMLINUX_SYMBOL_STR(i2c_master_recv) },
	{ 0xe8b07854, __VMLINUX_SYMBOL_STR(regulator_get_voltage) },
	{ 0x8c20e555, __VMLINUX_SYMBOL_STR(devm_regulator_get_optional) },
	{ 0x3a657fb3, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x43ecd27b, __VMLINUX_SYMBOL_STR(regulator_enable) },
	{ 0xef845dad, __VMLINUX_SYMBOL_STR(devm_regulator_get) },
	{ 0x30b12134, __VMLINUX_SYMBOL_STR(iio_map_array_register) },
	{ 0x8c4c6488, __VMLINUX_SYMBOL_STR(devm_iio_device_alloc) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x996bdb64, __VMLINUX_SYMBOL_STR(_kstrtoul) },
	{ 0x6f9a27f5, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x10da615, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x1bce6aec, __VMLINUX_SYMBOL_STR(i2c_smbus_write_byte) },
	{ 0xb9bad5ac, __VMLINUX_SYMBOL_STR(i2c_smbus_read_byte) },
	{ 0x14e99942, __VMLINUX_SYMBOL_STR(iio_trigger_notify_done) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x5b3e7a77, __VMLINUX_SYMBOL_STR(iio_push_to_buffers) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x74c134b9, __VMLINUX_SYMBOL_STR(__sw_hweight32) },
	{ 0xd3f57a2, __VMLINUX_SYMBOL_STR(_find_next_bit_le) },
	{ 0xf575b77e, __VMLINUX_SYMBOL_STR(iio_push_event) },
	{ 0x6d662533, __VMLINUX_SYMBOL_STR(_find_first_bit_le) },
	{ 0x46608fa0, __VMLINUX_SYMBOL_STR(getnstimeofday) },
	{ 0xa9606876, __VMLINUX_SYMBOL_STR(iio_map_array_unregister) },
	{ 0x5ddaadd2, __VMLINUX_SYMBOL_STR(regulator_disable) },
	{ 0xcd6ab03a, __VMLINUX_SYMBOL_STR(iio_triggered_buffer_cleanup) },
	{ 0xd4d0b387, __VMLINUX_SYMBOL_STR(iio_device_unregister) },
	{ 0x43c003ff, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=industrialio,industrialio-triggered-buffer";

MODULE_ALIAS("i2c:max1361");
MODULE_ALIAS("i2c:max1362");
MODULE_ALIAS("i2c:max1363");
MODULE_ALIAS("i2c:max1364");
MODULE_ALIAS("i2c:max1036");
MODULE_ALIAS("i2c:max1037");
MODULE_ALIAS("i2c:max1038");
MODULE_ALIAS("i2c:max1039");
MODULE_ALIAS("i2c:max1136");
MODULE_ALIAS("i2c:max1137");
MODULE_ALIAS("i2c:max1138");
MODULE_ALIAS("i2c:max1139");
MODULE_ALIAS("i2c:max1236");
MODULE_ALIAS("i2c:max1237");
MODULE_ALIAS("i2c:max1238");
MODULE_ALIAS("i2c:max1239");
MODULE_ALIAS("i2c:max11600");
MODULE_ALIAS("i2c:max11601");
MODULE_ALIAS("i2c:max11602");
MODULE_ALIAS("i2c:max11603");
MODULE_ALIAS("i2c:max11604");
MODULE_ALIAS("i2c:max11605");
MODULE_ALIAS("i2c:max11606");
MODULE_ALIAS("i2c:max11607");
MODULE_ALIAS("i2c:max11608");
MODULE_ALIAS("i2c:max11609");
MODULE_ALIAS("i2c:max11610");
MODULE_ALIAS("i2c:max11611");
MODULE_ALIAS("i2c:max11612");
MODULE_ALIAS("i2c:max11613");
MODULE_ALIAS("i2c:max11614");
MODULE_ALIAS("i2c:max11615");
MODULE_ALIAS("i2c:max11616");
MODULE_ALIAS("i2c:max11617");
