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
	{ 0x9c9ec2a0, __VMLINUX_SYMBOL_STR(proc_dointvec_minmax) },
	{ 0x609f1c7e, __VMLINUX_SYMBOL_STR(synchronize_net) },
	{ 0x9f5c102e, __VMLINUX_SYMBOL_STR(nf_conntrack_in) },
	{ 0xa5bda22a, __VMLINUX_SYMBOL_STR(nf_conntrack_l3proto_generic) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x65b965b6, __VMLINUX_SYMBOL_STR(__nf_ct_refresh_acct) },
	{ 0x18c83f7d, __VMLINUX_SYMBOL_STR(nf_ct_l4proto_pernet_register) },
	{ 0xe43274bc, __VMLINUX_SYMBOL_STR(proc_dointvec) },
	{ 0xc36b821b, __VMLINUX_SYMBOL_STR(nf_ct_get_tuplepr) },
	{ 0x42b0bdd9, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x47bd4ef0, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0xf087137d, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0x1f84db5, __VMLINUX_SYMBOL_STR(nf_conntrack_set_hashsize) },
	{ 0x18e60f8, __VMLINUX_SYMBOL_STR(nf_ct_deliver_cached_events) },
	{ 0x7aa48271, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0xea054b22, __VMLINUX_SYMBOL_STR(nla_policy_len) },
	{ 0x8dea315d, __VMLINUX_SYMBOL_STR(nf_conntrack_l4proto_tcp4) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x39ae0c1a, __VMLINUX_SYMBOL_STR(nf_ip_checksum) },
	{ 0xd40d48aa, __VMLINUX_SYMBOL_STR(nf_log_packet) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0x7dc60194, __VMLINUX_SYMBOL_STR(print_tuple) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5cd81751, __VMLINUX_SYMBOL_STR(nf_ct_l4proto_unregister) },
	{ 0x665cfc11, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0x4edb5302, __VMLINUX_SYMBOL_STR(nf_ct_invert_tuple) },
	{ 0x832e67bf, __VMLINUX_SYMBOL_STR(__nf_conntrack_confirm) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x194ded23, __VMLINUX_SYMBOL_STR(nf_ct_l4proto_pernet_unregister) },
	{ 0xc18ac88d, __VMLINUX_SYMBOL_STR(nf_ct_expect_hsize) },
	{ 0x2bc89550, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0xd30d2db2, __VMLINUX_SYMBOL_STR(seq_putc) },
	{ 0xa81dbae, __VMLINUX_SYMBOL_STR(nf_ct_l4proto_register) },
	{ 0x9daae8b3, __VMLINUX_SYMBOL_STR(seq_release_net) },
	{ 0x8ffe7e89, __VMLINUX_SYMBOL_STR(nf_conntrack_htable_size) },
	{ 0xd0348437, __VMLINUX_SYMBOL_STR(nf_ct_l3proto_unregister) },
	{ 0x1bbac06, __VMLINUX_SYMBOL_STR(nf_unregister_hooks) },
	{ 0x67d8d35, __VMLINUX_SYMBOL_STR(security_release_secctx) },
	{ 0xefdd70ce, __VMLINUX_SYMBOL_STR(security_secid_to_secctx) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xd3e6f60d, __VMLINUX_SYMBOL_STR(cpu_possible_mask) },
	{ 0x6e224a7a, __VMLINUX_SYMBOL_STR(need_conntrack) },
	{ 0xcb0c5d50, __VMLINUX_SYMBOL_STR(param_get_uint) },
	{ 0x401bc710, __VMLINUX_SYMBOL_STR(nf_unregister_sockopt) },
	{ 0x908c24a0, __VMLINUX_SYMBOL_STR(nf_ct_l3protos) },
	{ 0xef283ed2, __VMLINUX_SYMBOL_STR(nf_ct_l3proto_pernet_register) },
	{ 0xca872e04, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0x341dbfa3, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0x2a18c74, __VMLINUX_SYMBOL_STR(nf_conntrack_destroy) },
	{ 0xae5930ec, __VMLINUX_SYMBOL_STR(nf_ct_seq_adjust) },
	{ 0x9267b0d0, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0x3bd247d7, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xbc39c43f, __VMLINUX_SYMBOL_STR(seq_open_net) },
	{ 0x6b6c3d10, __VMLINUX_SYMBOL_STR(nf_defrag_ipv4_enable) },
	{ 0x1da5c6f4, __VMLINUX_SYMBOL_STR(nf_register_hooks) },
	{ 0xf38bcdf3, __VMLINUX_SYMBOL_STR(nf_conntrack_max) },
	{ 0x91f1c8c2, __VMLINUX_SYMBOL_STR(nf_ct_l3proto_pernet_unregister) },
	{ 0x9a141896, __VMLINUX_SYMBOL_STR(nf_conntrack_l4proto_udp4) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xcbf14374, __VMLINUX_SYMBOL_STR(nf_register_sockopt) },
	{ 0x9cf1b46, __VMLINUX_SYMBOL_STR(proc_dointvec_jiffies) },
	{ 0xc028a9bf, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0xa555f158, __VMLINUX_SYMBOL_STR(seq_print_acct) },
	{ 0xb19011db, __VMLINUX_SYMBOL_STR(nf_ct_l3proto_register) },
	{ 0x25b250e0, __VMLINUX_SYMBOL_STR(nf_conntrack_find_get) },
	{ 0x3e1d1cf4, __VMLINUX_SYMBOL_STR(__nf_ct_l4proto_find) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_conntrack,nf_defrag_ipv4";

