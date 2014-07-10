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
	{ 0x83ea2ea9, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x968a83d8, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x80accb71, __VMLINUX_SYMBOL_STR(sensor_hub_register_callback) },
	{ 0x2c146145, __VMLINUX_SYMBOL_STR(iio_device_register) },
	{ 0xf5fdff27, __VMLINUX_SYMBOL_STR(hid_sensor_setup_trigger) },
	{ 0x4b2b9fe6, __VMLINUX_SYMBOL_STR(iio_triggered_buffer_setup) },
	{ 0xdf76bbeb, __VMLINUX_SYMBOL_STR(iio_pollfunc_store_time) },
	{ 0x46b4b4bf, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xfd8e3e28, __VMLINUX_SYMBOL_STR(sensor_hub_input_get_attribute_info) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0x123319e2, __VMLINUX_SYMBOL_STR(hid_sensor_parse_common_attributes) },
	{ 0x3a657fb3, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x8c4c6488, __VMLINUX_SYMBOL_STR(devm_iio_device_alloc) },
	{ 0x7c74d300, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x5b3e7a77, __VMLINUX_SYMBOL_STR(iio_push_to_buffers) },
	{ 0x5421b0f7, __VMLINUX_SYMBOL_STR(hid_sensor_read_samp_freq_value) },
	{ 0xe6daf76e, __VMLINUX_SYMBOL_STR(sensor_hub_input_attr_get_raw_value) },
	{ 0x83d32d14, __VMLINUX_SYMBOL_STR(hid_sensor_read_raw_hyst_value) },
	{ 0x17c3a094, __VMLINUX_SYMBOL_STR(hid_sensor_write_samp_freq_value) },
	{ 0x9738234, __VMLINUX_SYMBOL_STR(hid_sensor_write_raw_hyst_value) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xcd6ab03a, __VMLINUX_SYMBOL_STR(iio_triggered_buffer_cleanup) },
	{ 0x726f25d8, __VMLINUX_SYMBOL_STR(hid_sensor_remove_trigger) },
	{ 0xd4d0b387, __VMLINUX_SYMBOL_STR(iio_device_unregister) },
	{ 0xb6b0ecb1, __VMLINUX_SYMBOL_STR(sensor_hub_remove_callback) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x43c003ff, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=hid-sensor-hub,industrialio,hid-sensor-trigger,industrialio-triggered-buffer,hid-sensor-iio-common";

MODULE_ALIAS("platform:HID-SENSOR-200086");
