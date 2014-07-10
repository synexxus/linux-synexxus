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
	{ 0x4946abf7, __VMLINUX_SYMBOL_STR(sock_no_mmap) },
	{ 0xf5e1eabe, __VMLINUX_SYMBOL_STR(sock_no_recvmsg) },
	{ 0x77aa5b81, __VMLINUX_SYMBOL_STR(sock_no_sendmsg) },
	{ 0xbefd0e23, __VMLINUX_SYMBOL_STR(sock_no_getsockopt) },
	{ 0xa171f67e, __VMLINUX_SYMBOL_STR(sock_no_setsockopt) },
	{ 0x29da0440, __VMLINUX_SYMBOL_STR(sock_no_shutdown) },
	{ 0xf4561adb, __VMLINUX_SYMBOL_STR(sock_no_listen) },
	{ 0x6b6d57ad, __VMLINUX_SYMBOL_STR(pppox_ioctl) },
	{ 0xb6915058, __VMLINUX_SYMBOL_STR(sock_no_poll) },
	{ 0x5bd715a2, __VMLINUX_SYMBOL_STR(sock_no_accept) },
	{ 0xe14e84b8, __VMLINUX_SYMBOL_STR(sock_no_socketpair) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xe0ff7a18, __VMLINUX_SYMBOL_STR(unregister_pppox_proto) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0xc28b52f3, __VMLINUX_SYMBOL_STR(gre_del_protocol) },
	{ 0xf1f859ea, __VMLINUX_SYMBOL_STR(proto_unregister) },
	{ 0xfcb6fe5f, __VMLINUX_SYMBOL_STR(register_pppox_proto) },
	{ 0xab51c64c, __VMLINUX_SYMBOL_STR(proto_register) },
	{ 0x890bda2, __VMLINUX_SYMBOL_STR(gre_add_protocol) },
	{ 0x40a9b349, __VMLINUX_SYMBOL_STR(vzalloc) },
	{ 0x92647763, __VMLINUX_SYMBOL_STR(sk_receive_skb) },
	{ 0xbff781de, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0xc0056be5, __VMLINUX_SYMBOL_STR(_raw_write_unlock_bh) },
	{ 0x6ec9ccdb, __VMLINUX_SYMBOL_STR(_raw_write_lock_bh) },
	{ 0x2d6507b5, __VMLINUX_SYMBOL_STR(_find_next_zero_bit_le) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xb83e9046, __VMLINUX_SYMBOL_STR(ppp_register_channel) },
	{ 0x222d9b03, __VMLINUX_SYMBOL_STR(sk_setup_caps) },
	{ 0x2deda4a1, __VMLINUX_SYMBOL_STR(security_sk_classify_flow) },
	{ 0x1b6a0229, __VMLINUX_SYMBOL_STR(release_sock) },
	{ 0x10e410c7, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
	{ 0xd3f57a2, __VMLINUX_SYMBOL_STR(_find_next_bit_le) },
	{ 0x2a18c74, __VMLINUX_SYMBOL_STR(nf_conntrack_destroy) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x91820180, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0xc827d9bb, __VMLINUX_SYMBOL_STR(ip_local_out_sk) },
	{ 0x2124474, __VMLINUX_SYMBOL_STR(ip_send_check) },
	{ 0xd3296d3e, __VMLINUX_SYMBOL_STR(__ip_select_ident) },
	{ 0xf6388c56, __VMLINUX_SYMBOL_STR(sysctl_ip_default_ttl) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x42ffc6c3, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x7973c83, __VMLINUX_SYMBOL_STR(sock_wfree) },
	{ 0x30152641, __VMLINUX_SYMBOL_STR(skb_realloc_headroom) },
	{ 0xbf75475a, __VMLINUX_SYMBOL_STR(ip_route_output_flow) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xb6ecf069, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0xec57b2d1, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x7a38b312, __VMLINUX_SYMBOL_STR(ppp_input) },
	{ 0x109be486, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x906165c0, __VMLINUX_SYMBOL_STR(sock_queue_rcv_skb) },
	{ 0x7fc7bfa2, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x7ac9d215, __VMLINUX_SYMBOL_STR(skb_queue_purge) },
	{ 0x1198f522, __VMLINUX_SYMBOL_STR(pppox_unbind_sock) },
	{ 0xc2cdbf1, __VMLINUX_SYMBOL_STR(synchronize_sched) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x9341f9d, __VMLINUX_SYMBOL_STR(sock_init_data) },
	{ 0x5d157dae, __VMLINUX_SYMBOL_STR(sk_alloc) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x353e3fa5, __VMLINUX_SYMBOL_STR(__get_user_4) },
	{ 0xbc10dd97, __VMLINUX_SYMBOL_STR(__put_user_4) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=pppox,gre,ppp_generic";

