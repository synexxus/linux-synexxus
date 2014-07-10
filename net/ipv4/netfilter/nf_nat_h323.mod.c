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
	{ 0x85fa84f0, __VMLINUX_SYMBOL_STR(nf_ct_helper_expectfn_unregister) },
	{ 0x5e20b3ec, __VMLINUX_SYMBOL_STR(nf_ct_helper_expectfn_register) },
	{ 0x84f8235d, __VMLINUX_SYMBOL_STR(nat_q931_hook) },
	{ 0xf7948c92, __VMLINUX_SYMBOL_STR(nat_callforwarding_hook) },
	{ 0xc17dfd03, __VMLINUX_SYMBOL_STR(nat_h245_hook) },
	{ 0xc77354e, __VMLINUX_SYMBOL_STR(nat_t120_hook) },
	{ 0x27ecd23, __VMLINUX_SYMBOL_STR(nat_rtp_rtcp_hook) },
	{ 0xedd15c8d, __VMLINUX_SYMBOL_STR(set_ras_addr_hook) },
	{ 0x6ea6c8a4, __VMLINUX_SYMBOL_STR(set_sig_addr_hook) },
	{ 0xa08a64a6, __VMLINUX_SYMBOL_STR(set_h225_addr_hook) },
	{ 0x9a3c1f2e, __VMLINUX_SYMBOL_STR(set_h245_addr_hook) },
	{ 0xf59d628b, __VMLINUX_SYMBOL_STR(nf_ct_unexpect_related) },
	{ 0xf087137d, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x6d1ab0b1, __VMLINUX_SYMBOL_STR(get_h225_addr) },
	{ 0xd5750b96, __VMLINUX_SYMBOL_STR(nf_ct_expect_related_report) },
	{ 0xc028a9bf, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0x10c7b0fb, __VMLINUX_SYMBOL_STR(__nf_nat_mangle_tcp_packet) },
	{ 0x706be937, __VMLINUX_SYMBOL_STR(nf_nat_mangle_udp_packet) },
	{ 0x5d3ebc03, __VMLINUX_SYMBOL_STR(nf_nat_follow_master) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x4e2b0c4, __VMLINUX_SYMBOL_STR(nf_nat_setup_info) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_conntrack,nf_conntrack_h323,nf_nat";

