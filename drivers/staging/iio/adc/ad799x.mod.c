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
	{ 0xcd6ab03a, __VMLINUX_SYMBOL_STR(iio_triggered_buffer_cleanup) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xd9b2657, __VMLINUX_SYMBOL_STR(i2c_smbus_read_byte_data) },
	{ 0x3a657fb3, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0xd4370660, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0xc5570a83, __VMLINUX_SYMBOL_STR(iio_read_const_attr) },
	{ 0x4a398fde, __VMLINUX_SYMBOL_STR(i2c_smbus_read_i2c_block_data) },
	{ 0x14e99942, __VMLINUX_SYMBOL_STR(iio_trigger_notify_done) },
	{ 0x5ddaadd2, __VMLINUX_SYMBOL_STR(regulator_disable) },
	{ 0x5e532f8a, __VMLINUX_SYMBOL_STR(i2c_smbus_write_word_data) },
	{ 0x46608fa0, __VMLINUX_SYMBOL_STR(getnstimeofday) },
	{ 0x78885352, __VMLINUX_SYMBOL_STR(i2c_smbus_write_byte_data) },
	{ 0x6f9a27f5, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x2c146145, __VMLINUX_SYMBOL_STR(iio_device_register) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xd4d0b387, __VMLINUX_SYMBOL_STR(iio_device_unregister) },
	{ 0x59674989, __VMLINUX_SYMBOL_STR(i2c_smbus_read_word_data) },
	{ 0x8c4c6488, __VMLINUX_SYMBOL_STR(devm_iio_device_alloc) },
	{ 0x46b4b4bf, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x11a13e31, __VMLINUX_SYMBOL_STR(_kstrtol) },
	{ 0x10da615, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x2e01cd89, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0xef845dad, __VMLINUX_SYMBOL_STR(devm_regulator_get) },
	{ 0xe8b07854, __VMLINUX_SYMBOL_STR(regulator_get_voltage) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x5b3e7a77, __VMLINUX_SYMBOL_STR(iio_push_to_buffers) },
	{ 0x4cbbd171, __VMLINUX_SYMBOL_STR(__bitmap_weight) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xf575b77e, __VMLINUX_SYMBOL_STR(iio_push_event) },
	{ 0x147b4fa2, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0x43c003ff, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x4b2b9fe6, __VMLINUX_SYMBOL_STR(iio_triggered_buffer_setup) },
	{ 0x43ecd27b, __VMLINUX_SYMBOL_STR(regulator_enable) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=industrialio-triggered-buffer,industrialio";

MODULE_ALIAS("i2c:ad7991");
MODULE_ALIAS("i2c:ad7995");
MODULE_ALIAS("i2c:ad7999");
MODULE_ALIAS("i2c:ad7992");
MODULE_ALIAS("i2c:ad7993");
MODULE_ALIAS("i2c:ad7994");
MODULE_ALIAS("i2c:ad7997");
MODULE_ALIAS("i2c:ad7998");
