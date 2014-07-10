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
	{ 0x20f48b10, __VMLINUX_SYMBOL_STR(tcp_unregister_congestion_control) },
	{ 0x1383d8f7, __VMLINUX_SYMBOL_STR(tcp_register_congestion_control) },
	{ 0x1f4709a2, __VMLINUX_SYMBOL_STR(tcp_slow_start) },
	{ 0xdec00d36, __VMLINUX_SYMBOL_STR(tcp_cong_avoid_ai) },
	{ 0xd2d70f28, __VMLINUX_SYMBOL_STR(tcp_is_cwnd_limited) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

