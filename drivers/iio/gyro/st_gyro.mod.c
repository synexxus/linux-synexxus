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
	{ 0xcd6ab03a, __VMLINUX_SYMBOL_STR(iio_triggered_buffer_cleanup) },
	{ 0x6051002e, __VMLINUX_SYMBOL_STR(st_sensors_set_dataready_irq) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xdf76bbeb, __VMLINUX_SYMBOL_STR(iio_pollfunc_store_time) },
	{ 0xecbd374, __VMLINUX_SYMBOL_STR(st_sensors_set_enable) },
	{ 0xe764442a, __VMLINUX_SYMBOL_STR(st_sensors_sysfs_set_sampling_frequency) },
	{ 0x74d7047, __VMLINUX_SYMBOL_STR(st_sensors_trigger_handler) },
	{ 0xec350ed, __VMLINUX_SYMBOL_STR(st_sensors_deallocate_trigger) },
	{ 0x7d8c86a6, __VMLINUX_SYMBOL_STR(st_sensors_sysfs_sampling_frequency_avail) },
	{ 0x2c146145, __VMLINUX_SYMBOL_STR(iio_device_register) },
	{ 0x21385bd5, __VMLINUX_SYMBOL_STR(st_sensors_allocate_trigger) },
	{ 0xd4d0b387, __VMLINUX_SYMBOL_STR(iio_device_unregister) },
	{ 0x71c90fa8, __VMLINUX_SYMBOL_STR(st_sensors_set_fullscale_by_gain) },
	{ 0x7e6a5522, __VMLINUX_SYMBOL_STR(st_sensors_check_device_support) },
	{ 0x46a9ddf0, __VMLINUX_SYMBOL_STR(iio_triggered_buffer_postenable) },
	{ 0x2a4e604e, __VMLINUX_SYMBOL_STR(st_sensors_init_sensor) },
	{ 0x19827b5c, __VMLINUX_SYMBOL_STR(iio_triggered_buffer_predisable) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xc79b86ce, __VMLINUX_SYMBOL_STR(st_sensors_sysfs_get_sampling_frequency) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xb9215769, __VMLINUX_SYMBOL_STR(st_sensors_sysfs_scale_avail) },
	{ 0xffa7428d, __VMLINUX_SYMBOL_STR(st_sensors_set_axis_enable) },
	{ 0x827ecc90, __VMLINUX_SYMBOL_STR(st_sensors_read_info_raw) },
	{ 0x43c003ff, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x4b2b9fe6, __VMLINUX_SYMBOL_STR(iio_triggered_buffer_setup) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=industrialio-triggered-buffer,st_sensors,industrialio";

