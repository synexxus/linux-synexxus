#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xe8d22f15, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xbda0a43c, __VMLINUX_SYMBOL_STR(iio_trigger_unregister) },
	{ 0x3a657fb3, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x972d654a, __VMLINUX_SYMBOL_STR(iio_trigger_alloc) },
	{ 0x9c0d73f8, __VMLINUX_SYMBOL_STR(sensor_hub_device_open) },
	{ 0xb226dcee, __VMLINUX_SYMBOL_STR(sensor_hub_device_close) },
	{ 0x46b4b4bf, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x3d877ea5, __VMLINUX_SYMBOL_STR(hid_sensor_get_usage_index) },
	{ 0xe050fdc4, __VMLINUX_SYMBOL_STR(iio_trigger_register) },
	{ 0xe755bdd7, __VMLINUX_SYMBOL_STR(sensor_hub_set_feature) },
	{ 0x9b64fb4c, __VMLINUX_SYMBOL_STR(iio_trigger_free) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x43c003ff, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=industrialio,hid-sensor-hub";

