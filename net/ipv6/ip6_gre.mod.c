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
	{ 0x33ba5cd4, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x5b099eed, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0x50dc2a1e, __VMLINUX_SYMBOL_STR(eth_mac_addr) },
	{ 0xdf47a34c, __VMLINUX_SYMBOL_STR(ip_tunnel_get_stats64) },
	{ 0x6a564ff8, __VMLINUX_SYMBOL_STR(unregister_pernet_device) },
	{ 0x14118c8d, __VMLINUX_SYMBOL_STR(inet6_del_protocol) },
	{ 0x19d28a22, __VMLINUX_SYMBOL_STR(rtnl_link_unregister) },
	{ 0xf9a6d6bd, __VMLINUX_SYMBOL_STR(rtnl_link_register) },
	{ 0xc3a42638, __VMLINUX_SYMBOL_STR(inet6_add_protocol) },
	{ 0xc68d9ded, __VMLINUX_SYMBOL_STR(register_pernet_device) },
	{ 0xf7a80925, __VMLINUX_SYMBOL_STR(netdev_state_change) },
	{ 0x91c8a1f8, __VMLINUX_SYMBOL_STR(ip6_tnl_dst_reset) },
	{ 0x609f1c7e, __VMLINUX_SYMBOL_STR(synchronize_net) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0xd2936c14, __VMLINUX_SYMBOL_STR(ns_capable) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0x9fdecc31, __VMLINUX_SYMBOL_STR(unregister_netdevice_many) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0x88f9811a, __VMLINUX_SYMBOL_STR(unregister_netdevice_queue) },
	{ 0x6476a72f, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0xec378eab, __VMLINUX_SYMBOL_STR(eth_type_trans) },
	{ 0xe34d9bfc, __VMLINUX_SYMBOL_STR(__skb_checksum_complete) },
	{ 0x80e54eb7, __VMLINUX_SYMBOL_STR(__xfrm_policy_check) },
	{ 0xce0ef0af, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0x3b22070f, __VMLINUX_SYMBOL_STR(ip6_tnl_rcv_ctl) },
	{ 0xb6ecf069, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x16f27c42, __VMLINUX_SYMBOL_STR(ether_setup) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x5012c961, __VMLINUX_SYMBOL_STR(register_netdevice) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xa667138e, __VMLINUX_SYMBOL_STR(alloc_netdev_mqs) },
	{ 0xe5090352, __VMLINUX_SYMBOL_STR(rt6_lookup) },
	{ 0xd542439, __VMLINUX_SYMBOL_STR(__ipv6_addr_type) },
	{ 0xf1edcc4c, __VMLINUX_SYMBOL_STR(ip6_tnl_get_cap) },
	{ 0xd3f57a2, __VMLINUX_SYMBOL_STR(_find_next_bit_le) },
	{ 0x341dbfa3, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0xd3e6f60d, __VMLINUX_SYMBOL_STR(cpu_possible_mask) },
	{ 0x50c89f23, __VMLINUX_SYMBOL_STR(__alloc_percpu) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0x153ef9d6, __VMLINUX_SYMBOL_STR(icmpv6_send) },
	{ 0x3398e60d, __VMLINUX_SYMBOL_STR(ip6_tnl_parse_tlv_enc_lim) },
	{ 0xd342ba66, __VMLINUX_SYMBOL_STR(icmp_send) },
	{ 0x7fc7bfa2, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xcfa97f70, __VMLINUX_SYMBOL_STR(ip6_tnl_xmit_ctl) },
	{ 0xc0481909, __VMLINUX_SYMBOL_STR(xfrm_lookup) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xa8c2bdf, __VMLINUX_SYMBOL_STR(__skb_dst_set_noref) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0x9d66dab2, __VMLINUX_SYMBOL_STR(ip6_tnl_dst_store) },
	{ 0x1809f291, __VMLINUX_SYMBOL_STR(ip6_local_out) },
	{ 0xe113bbbc, __VMLINUX_SYMBOL_STR(csum_partial) },
	{ 0xec57b2d1, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xd135a1e5, __VMLINUX_SYMBOL_STR(ipv6_push_nfrag_opts) },
	{ 0x42ffc6c3, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x7973c83, __VMLINUX_SYMBOL_STR(sock_wfree) },
	{ 0x30152641, __VMLINUX_SYMBOL_STR(skb_realloc_headroom) },
	{ 0x18baa623, __VMLINUX_SYMBOL_STR(skb_scrub_packet) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x6fdc3d72, __VMLINUX_SYMBOL_STR(ip6_tnl_dst_check) },
	{ 0x91820180, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0x2e783633, __VMLINUX_SYMBOL_STR(ip6_route_output) },
	{ 0x92db4323, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0xc9ec4e21, __VMLINUX_SYMBOL_STR(free_percpu) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xf1db1704, __VMLINUX_SYMBOL_STR(nla_memcpy) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x2bc89550, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ip6_tunnel";

