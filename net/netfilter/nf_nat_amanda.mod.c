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
	{ 0xc2cdbf1, __VMLINUX_SYMBOL_STR(synchronize_sched) },
	{ 0xa40e1afe, __VMLINUX_SYMBOL_STR(nf_nat_amanda_hook) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xf59d628b, __VMLINUX_SYMBOL_STR(nf_ct_unexpect_related) },
	{ 0xfae63dbd, __VMLINUX_SYMBOL_STR(nf_ct_helper_log) },
	{ 0x706be937, __VMLINUX_SYMBOL_STR(nf_nat_mangle_udp_packet) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xd5750b96, __VMLINUX_SYMBOL_STR(nf_ct_expect_related_report) },
	{ 0x5d3ebc03, __VMLINUX_SYMBOL_STR(nf_nat_follow_master) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_conntrack_amanda,nf_conntrack,nf_nat";

