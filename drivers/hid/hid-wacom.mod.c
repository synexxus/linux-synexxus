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
	{ 0xd37fa1bf, __VMLINUX_SYMBOL_STR(hid_unregister_driver) },
	{ 0x22f72302, __VMLINUX_SYMBOL_STR(__hid_register_driver) },
	{ 0x971a15a3, __VMLINUX_SYMBOL_STR(input_event) },
	{ 0x3b7239c1, __VMLINUX_SYMBOL_STR(led_classdev_register) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xafd4055c, __VMLINUX_SYMBOL_STR(power_supply_powers) },
	{ 0x4da4c742, __VMLINUX_SYMBOL_STR(power_supply_register) },
	{ 0xd2b6de94, __VMLINUX_SYMBOL_STR(device_create_file) },
	{ 0x6355ae38, __VMLINUX_SYMBOL_STR(hid_connect) },
	{ 0x46b4b4bf, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x827d769f, __VMLINUX_SYMBOL_STR(hid_open_report) },
	{ 0x3a657fb3, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x47f03165, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x79222a5, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x73510028, __VMLINUX_SYMBOL_STR(power_supply_unregister) },
	{ 0x7552aec, __VMLINUX_SYMBOL_STR(hid_disconnect) },
	{ 0xbd7eb7a6, __VMLINUX_SYMBOL_STR(device_remove_file) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x44b98a15, __VMLINUX_SYMBOL_STR(led_classdev_unregister) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xd9ce8f0c, __VMLINUX_SYMBOL_STR(strnlen) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x3d9d606d, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x43c003ff, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x88227655, __VMLINUX_SYMBOL_STR(input_set_abs_params) },
	{ 0x8db22421, __VMLINUX_SYMBOL_STR(input_set_capability) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("hid:b0005g*v0000056Ap00000081");
MODULE_ALIAS("hid:b0005g*v0000056Ap000000BD");
