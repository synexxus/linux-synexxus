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
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x83f9ea8f, __VMLINUX_SYMBOL_STR(w1_unregister_family) },
	{ 0x8b6addd2, __VMLINUX_SYMBOL_STR(w1_register_family) },
	{ 0x6f9a27f5, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xcd3284b0, __VMLINUX_SYMBOL_STR(w1_read_8) },
	{ 0x3758cea0, __VMLINUX_SYMBOL_STR(w1_write_8) },
	{ 0x10da615, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x3a657fb3, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0xa1d80a0c, __VMLINUX_SYMBOL_STR(platform_device_add) },
	{ 0xd556940f, __VMLINUX_SYMBOL_STR(platform_device_put) },
	{ 0x35f23b95, __VMLINUX_SYMBOL_STR(platform_device_add_data) },
	{ 0xf2eb9426, __VMLINUX_SYMBOL_STR(platform_device_alloc) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x75857a1d, __VMLINUX_SYMBOL_STR(platform_device_unregister) },
	{ 0x43c003ff, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=wire";

