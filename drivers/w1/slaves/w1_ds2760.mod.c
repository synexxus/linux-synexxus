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
	{ 0xdd11f8c9, __VMLINUX_SYMBOL_STR(w1_reset_select_slave) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x3a657fb3, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x6f9a27f5, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x5b72009f, __VMLINUX_SYMBOL_STR(ida_simple_get) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x20df2681, __VMLINUX_SYMBOL_STR(ida_simple_remove) },
	{ 0xf2eb9426, __VMLINUX_SYMBOL_STR(platform_device_alloc) },
	{ 0xa1d80a0c, __VMLINUX_SYMBOL_STR(platform_device_add) },
	{ 0x10da615, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x75857a1d, __VMLINUX_SYMBOL_STR(platform_device_unregister) },
	{ 0x37cbf86a, __VMLINUX_SYMBOL_STR(w1_write_block) },
	{ 0x3758cea0, __VMLINUX_SYMBOL_STR(w1_write_8) },
	{ 0x13362108, __VMLINUX_SYMBOL_STR(w1_read_block) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8e5c580a, __VMLINUX_SYMBOL_STR(ida_init) },
	{ 0xeb9e7cdd, __VMLINUX_SYMBOL_STR(ida_destroy) },
	{ 0x8b6addd2, __VMLINUX_SYMBOL_STR(w1_register_family) },
	{ 0x43c003ff, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xd556940f, __VMLINUX_SYMBOL_STR(platform_device_put) },
	{ 0x83f9ea8f, __VMLINUX_SYMBOL_STR(w1_unregister_family) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=wire";

