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
	{ 0x2c343a0a, __VMLINUX_SYMBOL_STR(ip_getsockopt) },
	{ 0xe6dc15d5, __VMLINUX_SYMBOL_STR(ip_setsockopt) },
	{ 0x36f400cd, __VMLINUX_SYMBOL_STR(udp_ioctl) },
	{ 0x4ce39368, __VMLINUX_SYMBOL_STR(sock_no_sendpage) },
	{ 0x4946abf7, __VMLINUX_SYMBOL_STR(sock_no_mmap) },
	{ 0xc07b6b4, __VMLINUX_SYMBOL_STR(sock_common_recvmsg) },
	{ 0x6baa687c, __VMLINUX_SYMBOL_STR(inet_sendmsg) },
	{ 0x23692ea4, __VMLINUX_SYMBOL_STR(sock_common_getsockopt) },
	{ 0x80c09f9d, __VMLINUX_SYMBOL_STR(sock_common_setsockopt) },
	{ 0xcf020c0f, __VMLINUX_SYMBOL_STR(inet_shutdown) },
	{ 0xf4561adb, __VMLINUX_SYMBOL_STR(sock_no_listen) },
	{ 0x6ce74a79, __VMLINUX_SYMBOL_STR(inet_ioctl) },
	{ 0xeaf6eed3, __VMLINUX_SYMBOL_STR(datagram_poll) },
	{ 0x5bd715a2, __VMLINUX_SYMBOL_STR(sock_no_accept) },
	{ 0xe14e84b8, __VMLINUX_SYMBOL_STR(sock_no_socketpair) },
	{ 0x8a4affff, __VMLINUX_SYMBOL_STR(inet_dgram_connect) },
	{ 0xe1e37a91, __VMLINUX_SYMBOL_STR(inet_bind) },
	{ 0x663a6ace, __VMLINUX_SYMBOL_STR(inet_release) },
	{ 0x6bced8ec, __VMLINUX_SYMBOL_STR(inet_del_protocol) },
	{ 0x5919253f, __VMLINUX_SYMBOL_STR(inet_unregister_protosw) },
	{ 0xf1f859ea, __VMLINUX_SYMBOL_STR(proto_unregister) },
	{ 0x4fa7216e, __VMLINUX_SYMBOL_STR(inet_register_protosw) },
	{ 0x2b1db369, __VMLINUX_SYMBOL_STR(inet_add_protocol) },
	{ 0xab51c64c, __VMLINUX_SYMBOL_STR(proto_register) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x906165c0, __VMLINUX_SYMBOL_STR(sock_queue_rcv_skb) },
	{ 0x67d976a6, __VMLINUX_SYMBOL_STR(sk_common_release) },
	{ 0x4185d4d7, __VMLINUX_SYMBOL_STR(ip4_datagram_connect) },
	{ 0xe24fcd75, __VMLINUX_SYMBOL_STR(udp_disconnect) },
	{ 0x28fe62fe, __VMLINUX_SYMBOL_STR(l2tp_tunnel_closeall) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0xfeaef677, __VMLINUX_SYMBOL_STR(__sk_dst_check) },
	{ 0x222d9b03, __VMLINUX_SYMBOL_STR(sk_setup_caps) },
	{ 0xbf75475a, __VMLINUX_SYMBOL_STR(ip_route_output_flow) },
	{ 0x2deda4a1, __VMLINUX_SYMBOL_STR(security_sk_classify_flow) },
	{ 0x2b287fca, __VMLINUX_SYMBOL_STR(ip_queue_xmit) },
	{ 0xa8c2bdf, __VMLINUX_SYMBOL_STR(__skb_dst_set_noref) },
	{ 0x9fb3dd30, __VMLINUX_SYMBOL_STR(memcpy_fromiovec) },
	{ 0xe463cc3f, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xb2f8e0d7, __VMLINUX_SYMBOL_STR(sock_wmalloc) },
	{ 0x655b9217, __VMLINUX_SYMBOL_STR(ip_cmsg_recv) },
	{ 0xdfcc6908, __VMLINUX_SYMBOL_STR(__sock_recv_wifi_status) },
	{ 0x4eed0b0e, __VMLINUX_SYMBOL_STR(__sock_recv_timestamp) },
	{ 0x750e2ba5, __VMLINUX_SYMBOL_STR(skb_free_datagram) },
	{ 0xf7667600, __VMLINUX_SYMBOL_STR(skb_copy_datagram_iovec) },
	{ 0x5e4603d8, __VMLINUX_SYMBOL_STR(skb_recv_datagram) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x91820180, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x3617c564, __VMLINUX_SYMBOL_STR(inet_addr_type) },
	{ 0x1b6a0229, __VMLINUX_SYMBOL_STR(release_sock) },
	{ 0x10e410c7, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
	{ 0xc0056be5, __VMLINUX_SYMBOL_STR(_raw_write_unlock_bh) },
	{ 0x6ec9ccdb, __VMLINUX_SYMBOL_STR(_raw_write_lock_bh) },
	{ 0xf087137d, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x4059792f, __VMLINUX_SYMBOL_STR(print_hex_dump) },
	{ 0xb6ecf069, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x4c233a44, __VMLINUX_SYMBOL_STR(_raw_read_unlock_bh) },
	{ 0x4c5fc58c, __VMLINUX_SYMBOL_STR(_raw_read_lock_bh) },
	{ 0x2a18c74, __VMLINUX_SYMBOL_STR(nf_conntrack_destroy) },
	{ 0x92647763, __VMLINUX_SYMBOL_STR(sk_receive_skb) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xbff781de, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0x80e54eb7, __VMLINUX_SYMBOL_STR(__xfrm_policy_check) },
	{ 0x17aa5c55, __VMLINUX_SYMBOL_STR(l2tp_tunnel_find) },
	{ 0x752c2f99, __VMLINUX_SYMBOL_STR(l2tp_recv_common) },
	{ 0xaf47b72d, __VMLINUX_SYMBOL_STR(l2tp_session_find) },
	{ 0x7fc7bfa2, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=l2tp_core";


MODULE_INFO(srcversion, "19A9A8E1BBBAFD0ED662C1F");
