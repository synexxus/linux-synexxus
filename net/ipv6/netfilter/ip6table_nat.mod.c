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
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x1bbac06, __VMLINUX_SYMBOL_STR(nf_unregister_hooks) },
	{ 0x665cfc11, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0x1da5c6f4, __VMLINUX_SYMBOL_STR(nf_register_hooks) },
	{ 0xca872e04, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0x4a4faca1, __VMLINUX_SYMBOL_STR(nf_xfrm_me_harder) },
	{ 0x42ea222c, __VMLINUX_SYMBOL_STR(ip6_route_me_harder) },
	{ 0x91820180, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x5d8ee276, __VMLINUX_SYMBOL_STR(ip6t_register_table) },
	{ 0xa0e25833, __VMLINUX_SYMBOL_STR(ip6t_alloc_initial_table) },
	{ 0x5675cff7, __VMLINUX_SYMBOL_STR(ip6t_unregister_table) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x4e2b0c4, __VMLINUX_SYMBOL_STR(nf_nat_setup_info) },
	{ 0xf3077871, __VMLINUX_SYMBOL_STR(nf_nat_icmpv6_reply_translation) },
	{ 0x351492d7, __VMLINUX_SYMBOL_STR(__nf_ct_ext_add_length) },
	{ 0x3260726, __VMLINUX_SYMBOL_STR(nf_nat_packet) },
	{ 0x15edee32, __VMLINUX_SYMBOL_STR(ip6t_do_table) },
	{ 0xf087137d, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xd889b686, __VMLINUX_SYMBOL_STR(ipv6_skip_exthdr) },
	{ 0x6d3ca2f5, __VMLINUX_SYMBOL_STR(__nf_ct_kill_acct) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_nat,ip6_tables,nf_nat_ipv6,nf_conntrack";

