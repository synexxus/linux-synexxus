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
	{ 0x609f1c7e, __VMLINUX_SYMBOL_STR(synchronize_net) },
	{ 0x9f5c102e, __VMLINUX_SYMBOL_STR(nf_conntrack_in) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0x65b965b6, __VMLINUX_SYMBOL_STR(__nf_ct_refresh_acct) },
	{ 0x18c83f7d, __VMLINUX_SYMBOL_STR(nf_ct_l4proto_pernet_register) },
	{ 0xc36b821b, __VMLINUX_SYMBOL_STR(nf_ct_get_tuplepr) },
	{ 0x6eb85693, __VMLINUX_SYMBOL_STR(nf_defrag_ipv6_enable) },
	{ 0x42b0bdd9, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xf087137d, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0x18e60f8, __VMLINUX_SYMBOL_STR(nf_ct_deliver_cached_events) },
	{ 0xea054b22, __VMLINUX_SYMBOL_STR(nla_policy_len) },
	{ 0xd40d48aa, __VMLINUX_SYMBOL_STR(nf_log_packet) },
	{ 0x5cd81751, __VMLINUX_SYMBOL_STR(nf_ct_l4proto_unregister) },
	{ 0x665cfc11, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0x4edb5302, __VMLINUX_SYMBOL_STR(nf_ct_invert_tuple) },
	{ 0x832e67bf, __VMLINUX_SYMBOL_STR(__nf_conntrack_confirm) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x194ded23, __VMLINUX_SYMBOL_STR(nf_ct_l4proto_pernet_unregister) },
	{ 0x2bc89550, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0xa81dbae, __VMLINUX_SYMBOL_STR(nf_ct_l4proto_register) },
	{ 0xd0348437, __VMLINUX_SYMBOL_STR(nf_ct_l3proto_unregister) },
	{ 0x1bbac06, __VMLINUX_SYMBOL_STR(nf_unregister_hooks) },
	{ 0xd889b686, __VMLINUX_SYMBOL_STR(ipv6_skip_exthdr) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x6e224a7a, __VMLINUX_SYMBOL_STR(need_conntrack) },
	{ 0x401bc710, __VMLINUX_SYMBOL_STR(nf_unregister_sockopt) },
	{ 0xbfdc53df, __VMLINUX_SYMBOL_STR(nf_conntrack_l4proto_tcp6) },
	{ 0xef283ed2, __VMLINUX_SYMBOL_STR(nf_ct_l3proto_pernet_register) },
	{ 0xca872e04, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0x2a18c74, __VMLINUX_SYMBOL_STR(nf_conntrack_destroy) },
	{ 0xae5930ec, __VMLINUX_SYMBOL_STR(nf_ct_seq_adjust) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0xd316dff3, __VMLINUX_SYMBOL_STR(nf_conntrack_untracked) },
	{ 0x1da5c6f4, __VMLINUX_SYMBOL_STR(nf_register_hooks) },
	{ 0x91f1c8c2, __VMLINUX_SYMBOL_STR(nf_ct_l3proto_pernet_unregister) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xcbf14374, __VMLINUX_SYMBOL_STR(nf_register_sockopt) },
	{ 0xa8227a14, __VMLINUX_SYMBOL_STR(nf_conntrack_l4proto_udp6) },
	{ 0x9cf1b46, __VMLINUX_SYMBOL_STR(proc_dointvec_jiffies) },
	{ 0xc028a9bf, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0x24da67ec, __VMLINUX_SYMBOL_STR(nf_ip6_checksum) },
	{ 0xd542439, __VMLINUX_SYMBOL_STR(__ipv6_addr_type) },
	{ 0xb19011db, __VMLINUX_SYMBOL_STR(nf_ct_l3proto_register) },
	{ 0x25b250e0, __VMLINUX_SYMBOL_STR(nf_conntrack_find_get) },
	{ 0x3e1d1cf4, __VMLINUX_SYMBOL_STR(__nf_ct_l4proto_find) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_conntrack,nf_defrag_ipv6";

