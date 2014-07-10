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
	{ 0xd3b87c2c, __VMLINUX_SYMBOL_STR(nf_ct_tcp_seqadj_set) },
	{ 0x665cfc11, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0xf2ac5c7e, __VMLINUX_SYMBOL_STR(nfq_ct_hook) },
	{ 0xc40db4ce, __VMLINUX_SYMBOL_STR(nfnetlink_subsys_unregister) },
	{ 0xca872e04, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0xcfcfb447, __VMLINUX_SYMBOL_STR(nfnetlink_subsys_register) },
	{ 0xf087137d, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x351492d7, __VMLINUX_SYMBOL_STR(__nf_ct_ext_add_length) },
	{ 0x296bf547, __VMLINUX_SYMBOL_STR(nf_conntrack_free) },
	{ 0xfebab6fa, __VMLINUX_SYMBOL_STR(__nf_ct_try_assign_helper) },
	{ 0xcf3f2683, __VMLINUX_SYMBOL_STR(nf_conntrack_hash_check_insert) },
	{ 0x2447533c, __VMLINUX_SYMBOL_STR(ktime_get_real) },
	{ 0x6d9e83dd, __VMLINUX_SYMBOL_STR(nf_ct_helper_ext_add) },
	{ 0x7b036232, __VMLINUX_SYMBOL_STR(nf_conntrack_alloc) },
	{ 0x5ce3b588, __VMLINUX_SYMBOL_STR(nfnl_lock) },
	{ 0xdb065657, __VMLINUX_SYMBOL_STR(nfnl_unlock) },
	{ 0x24f3a9a5, __VMLINUX_SYMBOL_STR(nfnetlink_parse_nat_setup_hook) },
	{ 0xa7483b62, __VMLINUX_SYMBOL_STR(nf_ct_remove_expectations) },
	{ 0x8160419a, __VMLINUX_SYMBOL_STR(netlink_unicast) },
	{ 0x47f03165, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x79222a5, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x7cfd8c0, __VMLINUX_SYMBOL_STR(nf_conntrack_locks) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x51d52e08, __VMLINUX_SYMBOL_STR(nf_conntrack_flush_report) },
	{ 0x6c1fd07c, __VMLINUX_SYMBOL_STR(nf_ct_delete) },
	{ 0xbe2c0274, __VMLINUX_SYMBOL_STR(add_timer) },
	{ 0x43a4f4dc, __VMLINUX_SYMBOL_STR(__nf_ct_expect_find) },
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0x25b250e0, __VMLINUX_SYMBOL_STR(nf_conntrack_find_get) },
	{ 0x2a18c74, __VMLINUX_SYMBOL_STR(nf_conntrack_destroy) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xc18ac88d, __VMLINUX_SYMBOL_STR(nf_ct_expect_hsize) },
	{ 0x52939a18, __VMLINUX_SYMBOL_STR(nf_ct_unlink_expect_report) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xc996d097, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0xc2abd2fd, __VMLINUX_SYMBOL_STR(nf_conntrack_expect_lock) },
	{ 0x4a8f6ec9, __VMLINUX_SYMBOL_STR(nf_ct_expect_find_get) },
	{ 0x1ef26f93, __VMLINUX_SYMBOL_STR(__netlink_dump_start) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xd639dd5d, __VMLINUX_SYMBOL_STR(nf_ct_expect_register_notifier) },
	{ 0x8de54b4f, __VMLINUX_SYMBOL_STR(nf_conntrack_register_notifier) },
	{ 0x43073dff, __VMLINUX_SYMBOL_STR(nf_ct_helper_expectfn_find_by_symbol) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xc27fa351, __VMLINUX_SYMBOL_STR(nfnetlink_send) },
	{ 0xc69cac1c, __VMLINUX_SYMBOL_STR(nfnetlink_has_listeners) },
	{ 0x985112d2, __VMLINUX_SYMBOL_STR(nfnetlink_set_err) },
	{ 0x7fc7bfa2, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x708609aa, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x341dbfa3, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0xd3e6f60d, __VMLINUX_SYMBOL_STR(cpu_possible_mask) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0x1fccca06, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x4019836f, __VMLINUX_SYMBOL_STR(__nlmsg_put) },
	{ 0x9d733cf, __VMLINUX_SYMBOL_STR(nf_conntrack_unregister_notifier) },
	{ 0x4f60a4ba, __VMLINUX_SYMBOL_STR(nf_ct_expect_unregister_notifier) },
	{ 0x67d8d35, __VMLINUX_SYMBOL_STR(security_release_secctx) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xefdd70ce, __VMLINUX_SYMBOL_STR(security_secid_to_secctx) },
	{ 0x2bc89550, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0xa7210bf3, __VMLINUX_SYMBOL_STR(nf_connlabels_replace) },
	{ 0xd5750b96, __VMLINUX_SYMBOL_STR(nf_ct_expect_related_report) },
	{ 0x1effb1f0, __VMLINUX_SYMBOL_STR(__nf_conntrack_helper_find) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xbe52ac21, __VMLINUX_SYMBOL_STR(nf_ct_helper_expectfn_find_by_name) },
	{ 0x363c3284, __VMLINUX_SYMBOL_STR(nf_ct_expect_alloc) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x3e1d1cf4, __VMLINUX_SYMBOL_STR(__nf_ct_l4proto_find) },
	{ 0x347013de, __VMLINUX_SYMBOL_STR(nla_validate) },
	{ 0xa5bda22a, __VMLINUX_SYMBOL_STR(nf_conntrack_l3proto_generic) },
	{ 0x908c24a0, __VMLINUX_SYMBOL_STR(nf_ct_l3protos) },
	{ 0x4f391d0e, __VMLINUX_SYMBOL_STR(nla_parse) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x81e76ba1, __VMLINUX_SYMBOL_STR(nf_ct_expect_put) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_conntrack,nfnetlink";

