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
	{ 0x67dab48d, __VMLINUX_SYMBOL_STR(inet_unhash) },
	{ 0x71fa5ace, __VMLINUX_SYMBOL_STR(inet_hash) },
	{ 0x9d9ce9b5, __VMLINUX_SYMBOL_STR(ipv6_getsockopt) },
	{ 0xb7f4aa19, __VMLINUX_SYMBOL_STR(ipv6_setsockopt) },
	{ 0x36f400cd, __VMLINUX_SYMBOL_STR(udp_ioctl) },
	{ 0x4ce39368, __VMLINUX_SYMBOL_STR(sock_no_sendpage) },
	{ 0x4946abf7, __VMLINUX_SYMBOL_STR(sock_no_mmap) },
	{ 0xc07b6b4, __VMLINUX_SYMBOL_STR(sock_common_recvmsg) },
	{ 0x6baa687c, __VMLINUX_SYMBOL_STR(inet_sendmsg) },
	{ 0x23692ea4, __VMLINUX_SYMBOL_STR(sock_common_getsockopt) },
	{ 0x80c09f9d, __VMLINUX_SYMBOL_STR(sock_common_setsockopt) },
	{ 0xcf020c0f, __VMLINUX_SYMBOL_STR(inet_shutdown) },
	{ 0xf4561adb, __VMLINUX_SYMBOL_STR(sock_no_listen) },
	{ 0x726d1d6a, __VMLINUX_SYMBOL_STR(inet6_ioctl) },
	{ 0xeaf6eed3, __VMLINUX_SYMBOL_STR(datagram_poll) },
	{ 0x5bd715a2, __VMLINUX_SYMBOL_STR(sock_no_accept) },
	{ 0xe14e84b8, __VMLINUX_SYMBOL_STR(sock_no_socketpair) },
	{ 0x8a4affff, __VMLINUX_SYMBOL_STR(inet_dgram_connect) },
	{ 0xa171c96a, __VMLINUX_SYMBOL_STR(inet6_bind) },
	{ 0x3009a0ef, __VMLINUX_SYMBOL_STR(inet6_release) },
	{ 0x14118c8d, __VMLINUX_SYMBOL_STR(inet6_del_protocol) },
	{ 0x74567ef6, __VMLINUX_SYMBOL_STR(inet6_unregister_protosw) },
	{ 0xf1f859ea, __VMLINUX_SYMBOL_STR(proto_unregister) },
	{ 0x81cf053b, __VMLINUX_SYMBOL_STR(inet6_register_protosw) },
	{ 0xc3a42638, __VMLINUX_SYMBOL_STR(inet6_add_protocol) },
	{ 0xab51c64c, __VMLINUX_SYMBOL_STR(proto_register) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xf087137d, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x4059792f, __VMLINUX_SYMBOL_STR(print_hex_dump) },
	{ 0xb6ecf069, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x2a18c74, __VMLINUX_SYMBOL_STR(nf_conntrack_destroy) },
	{ 0x92647763, __VMLINUX_SYMBOL_STR(sk_receive_skb) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x80e54eb7, __VMLINUX_SYMBOL_STR(__xfrm_policy_check) },
	{ 0x17aa5c55, __VMLINUX_SYMBOL_STR(l2tp_tunnel_find) },
	{ 0x752c2f99, __VMLINUX_SYMBOL_STR(l2tp_recv_common) },
	{ 0xaf47b72d, __VMLINUX_SYMBOL_STR(l2tp_session_find) },
	{ 0x5b8b3ae8, __VMLINUX_SYMBOL_STR(ipv6_chk_addr) },
	{ 0x405abfa6, __VMLINUX_SYMBOL_STR(dev_get_by_index_rcu) },
	{ 0x4c233a44, __VMLINUX_SYMBOL_STR(_raw_read_unlock_bh) },
	{ 0x4c5fc58c, __VMLINUX_SYMBOL_STR(_raw_read_lock_bh) },
	{ 0xa0df6cdd, __VMLINUX_SYMBOL_STR(ip6_datagram_connect) },
	{ 0x7fc7bfa2, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0x7e18060c, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0x906165c0, __VMLINUX_SYMBOL_STR(sock_queue_rcv_skb) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x67d976a6, __VMLINUX_SYMBOL_STR(sk_common_release) },
	{ 0xe24fcd75, __VMLINUX_SYMBOL_STR(udp_disconnect) },
	{ 0xbff781de, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0x502562da, __VMLINUX_SYMBOL_STR(inet6_destroy_sock) },
	{ 0x28fe62fe, __VMLINUX_SYMBOL_STR(l2tp_tunnel_closeall) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x7f55a76e, __VMLINUX_SYMBOL_STR(ip6_push_pending_frames) },
	{ 0x99b20393, __VMLINUX_SYMBOL_STR(ip6_flush_pending_frames) },
	{ 0xef0c0cce, __VMLINUX_SYMBOL_STR(ip6_dst_hoplimit) },
	{ 0xd10c8457, __VMLINUX_SYMBOL_STR(ip6_datagram_send_ctl) },
	{ 0xe068c2e9, __VMLINUX_SYMBOL_STR(fl6_sock_lookup) },
	{ 0x91820180, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0x1b6a0229, __VMLINUX_SYMBOL_STR(release_sock) },
	{ 0x527f8c96, __VMLINUX_SYMBOL_STR(ip6_append_data) },
	{ 0xf46d3ffa, __VMLINUX_SYMBOL_STR(ip_generic_getfrag) },
	{ 0x10e410c7, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
	{ 0x453ec2ad, __VMLINUX_SYMBOL_STR(ip6_dst_lookup_flow) },
	{ 0x2deda4a1, __VMLINUX_SYMBOL_STR(security_sk_classify_flow) },
	{ 0xd8525ea7, __VMLINUX_SYMBOL_STR(fl6_update_dst) },
	{ 0x58413099, __VMLINUX_SYMBOL_STR(ipv6_fixup_options) },
	{ 0xedd05a9, __VMLINUX_SYMBOL_STR(fl6_merge_options) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x4176b468, __VMLINUX_SYMBOL_STR(ip6_datagram_recv_ctl) },
	{ 0xdfcc6908, __VMLINUX_SYMBOL_STR(__sock_recv_wifi_status) },
	{ 0x4eed0b0e, __VMLINUX_SYMBOL_STR(__sock_recv_timestamp) },
	{ 0xcf57944e, __VMLINUX_SYMBOL_STR(ipv6_recv_error) },
	{ 0x750e2ba5, __VMLINUX_SYMBOL_STR(skb_free_datagram) },
	{ 0xf7667600, __VMLINUX_SYMBOL_STR(skb_copy_datagram_iovec) },
	{ 0x5e4603d8, __VMLINUX_SYMBOL_STR(skb_recv_datagram) },
	{ 0xc0056be5, __VMLINUX_SYMBOL_STR(_raw_write_unlock_bh) },
	{ 0x6ec9ccdb, __VMLINUX_SYMBOL_STR(_raw_write_lock_bh) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xd542439, __VMLINUX_SYMBOL_STR(__ipv6_addr_type) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=l2tp_core";


MODULE_INFO(srcversion, "25AA7CF3E2EFCF68770AA2D");
