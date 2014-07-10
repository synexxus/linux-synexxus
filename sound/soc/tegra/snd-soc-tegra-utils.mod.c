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
	{ 0x7c02bd70, __VMLINUX_SYMBOL_STR(clk_unprepare) },
	{ 0xd31ccb06, __VMLINUX_SYMBOL_STR(of_machine_is_compatible) },
	{ 0x4cc8b5b0, __VMLINUX_SYMBOL_STR(clk_enable) },
	{ 0xad19866e, __VMLINUX_SYMBOL_STR(clk_disable) },
	{ 0x2e1ca751, __VMLINUX_SYMBOL_STR(clk_put) },
	{ 0x46b4b4bf, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xc9da0a86, __VMLINUX_SYMBOL_STR(clk_prepare) },
	{ 0x4d6d6b39, __VMLINUX_SYMBOL_STR(clk_get) },
	{ 0x6e1dc6fb, __VMLINUX_SYMBOL_STR(clk_set_rate) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

