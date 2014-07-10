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
	{ 0x3b7239c1, __VMLINUX_SYMBOL_STR(led_classdev_register) },
	{ 0x3a657fb3, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0xb840f323, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xe0a68bd5, __VMLINUX_SYMBOL_STR(regulator_is_enabled) },
	{ 0x27386d8, __VMLINUX_SYMBOL_STR(regulator_count_voltages) },
	{ 0x564906d2, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xe5c3512c, __VMLINUX_SYMBOL_STR(regulator_get_exclusive) },
	{ 0x7c74d300, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x43ecd27b, __VMLINUX_SYMBOL_STR(regulator_enable) },
	{ 0xddc23d74, __VMLINUX_SYMBOL_STR(regulator_set_voltage) },
	{ 0x2d6fc63e, __VMLINUX_SYMBOL_STR(regulator_list_voltage) },
	{ 0x6f9a27f5, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x10da615, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x3a87edf5, __VMLINUX_SYMBOL_STR(regulator_put) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x44b98a15, __VMLINUX_SYMBOL_STR(led_classdev_unregister) },
	{ 0x43c003ff, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x46b4b4bf, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x5ddaadd2, __VMLINUX_SYMBOL_STR(regulator_disable) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

