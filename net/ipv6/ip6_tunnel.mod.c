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
	{ 0x5012c961, __VMLINUX_SYMBOL_STR(register_netdevice) },
	{ 0x609f1c7e, __VMLINUX_SYMBOL_STR(synchronize_net) },
	{ 0x153ef9d6, __VMLINUX_SYMBOL_STR(icmpv6_send) },
	{ 0x3f7fc990, __VMLINUX_SYMBOL_STR(xfrm6_tunnel_deregister) },
	{ 0xc68d9ded, __VMLINUX_SYMBOL_STR(register_pernet_device) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x5b8b3ae8, __VMLINUX_SYMBOL_STR(ipv6_chk_addr) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0xa8c2bdf, __VMLINUX_SYMBOL_STR(__skb_dst_set_noref) },
	{ 0x91820180, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0xd342ba66, __VMLINUX_SYMBOL_STR(icmp_send) },
	{ 0xb3a9772a, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0xd3f57a2, __VMLINUX_SYMBOL_STR(_find_next_bit_le) },
	{ 0x50c89f23, __VMLINUX_SYMBOL_STR(__alloc_percpu) },
	{ 0x33ba5cd4, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x30152641, __VMLINUX_SYMBOL_STR(skb_realloc_headroom) },
	{ 0x18baa623, __VMLINUX_SYMBOL_STR(skb_scrub_packet) },
	{ 0xc9ec4e21, __VMLINUX_SYMBOL_STR(free_percpu) },
	{ 0xce0ef0af, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0xb6ecf069, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0xf1db1704, __VMLINUX_SYMBOL_STR(nla_memcpy) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x9fdecc31, __VMLINUX_SYMBOL_STR(unregister_netdevice_many) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x6a564ff8, __VMLINUX_SYMBOL_STR(unregister_pernet_device) },
	{ 0x99591a7a, __VMLINUX_SYMBOL_STR(ipv6_ext_hdr) },
	{ 0xd2936c14, __VMLINUX_SYMBOL_STR(ns_capable) },
	{ 0x92db4323, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0x6476a72f, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0x2bc89550, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xec57b2d1, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x405abfa6, __VMLINUX_SYMBOL_STR(dev_get_by_index_rcu) },
	{ 0x109be486, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x19d28a22, __VMLINUX_SYMBOL_STR(rtnl_link_unregister) },
	{ 0x2e783633, __VMLINUX_SYMBOL_STR(ip6_route_output) },
	{ 0xd135a1e5, __VMLINUX_SYMBOL_STR(ipv6_push_nfrag_opts) },
	{ 0x7d37fb4b, __VMLINUX_SYMBOL_STR(ip_route_input_noref) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xd3e6f60d, __VMLINUX_SYMBOL_STR(cpu_possible_mask) },
	{ 0x7fc7bfa2, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xa667138e, __VMLINUX_SYMBOL_STR(alloc_netdev_mqs) },
	{ 0xf7a80925, __VMLINUX_SYMBOL_STR(netdev_state_change) },
	{ 0x341dbfa3, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0x88f9811a, __VMLINUX_SYMBOL_STR(unregister_netdevice_queue) },
	{ 0xbf75475a, __VMLINUX_SYMBOL_STR(ip_route_output_flow) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0x80e54eb7, __VMLINUX_SYMBOL_STR(__xfrm_policy_check) },
	{ 0xe5090352, __VMLINUX_SYMBOL_STR(rt6_lookup) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xf9a6d6bd, __VMLINUX_SYMBOL_STR(rtnl_link_register) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x1809f291, __VMLINUX_SYMBOL_STR(ip6_local_out) },
	{ 0x42ffc6c3, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x7973c83, __VMLINUX_SYMBOL_STR(sock_wfree) },
	{ 0x1f557861, __VMLINUX_SYMBOL_STR(xfrm6_tunnel_register) },
	{ 0xc0481909, __VMLINUX_SYMBOL_STR(xfrm_lookup) },
	{ 0xd542439, __VMLINUX_SYMBOL_STR(__ipv6_addr_type) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=tunnel6";

