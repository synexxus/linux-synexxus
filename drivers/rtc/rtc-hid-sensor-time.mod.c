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
	{ 0xf473ffaf, __VMLINUX_SYMBOL_STR(down) },
	{ 0x3d9d606d, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xc66f4239, __VMLINUX_SYMBOL_STR(devm_rtc_device_register) },
	{ 0x4be7fb63, __VMLINUX_SYMBOL_STR(up) },
	{ 0x9c0d73f8, __VMLINUX_SYMBOL_STR(sensor_hub_device_open) },
	{ 0x80accb71, __VMLINUX_SYMBOL_STR(sensor_hub_register_callback) },
	{ 0x46b4b4bf, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xfd8e3e28, __VMLINUX_SYMBOL_STR(sensor_hub_input_get_attribute_info) },
	{ 0x123319e2, __VMLINUX_SYMBOL_STR(hid_sensor_parse_common_attributes) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x3a657fb3, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x564906d2, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xd4669fad, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xcb466063, __VMLINUX_SYMBOL_STR(wait_for_completion_killable_timeout) },
	{ 0xe6daf76e, __VMLINUX_SYMBOL_STR(sensor_hub_input_attr_get_raw_value) },
	{ 0x43c003ff, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xb6b0ecb1, __VMLINUX_SYMBOL_STR(sensor_hub_remove_callback) },
	{ 0xb226dcee, __VMLINUX_SYMBOL_STR(sensor_hub_device_close) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=hid-sensor-hub,hid-sensor-iio-common";

MODULE_ALIAS("platform:HID-SENSOR-2000a0");
