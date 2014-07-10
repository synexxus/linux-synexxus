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
	{ 0x1b6a0229, __VMLINUX_SYMBOL_STR(release_sock) },
	{ 0xe02c0bb6, __VMLINUX_SYMBOL_STR(dev_load) },
	{ 0x9341f9d, __VMLINUX_SYMBOL_STR(sock_init_data) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xc4307046, __VMLINUX_SYMBOL_STR(dev_getbyhwaddr_rcu) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0xb5198b77, __VMLINUX_SYMBOL_STR(_raw_read_lock) },
	{ 0x91820180, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0xc5f8c21e, __VMLINUX_SYMBOL_STR(dev_get_by_name) },
	{ 0xb3a9772a, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0xf545989f, __VMLINUX_SYMBOL_STR(sock_no_getname) },
	{ 0xf087137d, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x906165c0, __VMLINUX_SYMBOL_STR(sock_queue_rcv_skb) },
	{ 0x353e3fa5, __VMLINUX_SYMBOL_STR(__get_user_4) },
	{ 0x5e4603d8, __VMLINUX_SYMBOL_STR(skb_recv_datagram) },
	{ 0x67d976a6, __VMLINUX_SYMBOL_STR(sk_common_release) },
	{ 0xc07b6b4, __VMLINUX_SYMBOL_STR(sock_common_recvmsg) },
	{ 0x4ce39368, __VMLINUX_SYMBOL_STR(sock_no_sendpage) },
	{ 0x939eddda, __VMLINUX_SYMBOL_STR(sock_get_timestamp) },
	{ 0x4946abf7, __VMLINUX_SYMBOL_STR(sock_no_mmap) },
	{ 0xff73a629, __VMLINUX_SYMBOL_STR(ieee802154_hdr_pull) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xe14e84b8, __VMLINUX_SYMBOL_STR(sock_no_socketpair) },
	{ 0x5d157dae, __VMLINUX_SYMBOL_STR(sk_alloc) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x487fb73b, __VMLINUX_SYMBOL_STR(sock_no_bind) },
	{ 0x10e410c7, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
	{ 0x82817024, __VMLINUX_SYMBOL_STR(sock_prot_inuse_add) },
	{ 0xf4561adb, __VMLINUX_SYMBOL_STR(sock_no_listen) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xec57b2d1, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x5bd715a2, __VMLINUX_SYMBOL_STR(sock_no_accept) },
	{ 0x402adbf0, __VMLINUX_SYMBOL_STR(dev_get_by_index) },
	{ 0x1030aefe, __VMLINUX_SYMBOL_STR(dev_remove_pack) },
	{ 0x7e18060c, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0x29da0440, __VMLINUX_SYMBOL_STR(sock_no_shutdown) },
	{ 0x93537a5f, __VMLINUX_SYMBOL_STR(__sock_recv_ts_and_drops) },
	{ 0xab51c64c, __VMLINUX_SYMBOL_STR(proto_register) },
	{ 0xbc10dd97, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xa974b62a, __VMLINUX_SYMBOL_STR(sock_get_timestampns) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xeaf6eed3, __VMLINUX_SYMBOL_STR(datagram_poll) },
	{ 0x4f0c3219, __VMLINUX_SYMBOL_STR(sock_register) },
	{ 0xf648f47a, __VMLINUX_SYMBOL_STR(dev_getfirstbyhwtype) },
	{ 0x7fc7bfa2, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xf1f859ea, __VMLINUX_SYMBOL_STR(proto_unregister) },
	{ 0x48bbe5bd, __VMLINUX_SYMBOL_STR(sock_alloc_send_skb) },
	{ 0xf7667600, __VMLINUX_SYMBOL_STR(skb_copy_datagram_iovec) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x80c09f9d, __VMLINUX_SYMBOL_STR(sock_common_setsockopt) },
	{ 0xc0056be5, __VMLINUX_SYMBOL_STR(_raw_write_unlock_bh) },
	{ 0x62737e1d, __VMLINUX_SYMBOL_STR(sock_unregister) },
	{ 0x9fb3dd30, __VMLINUX_SYMBOL_STR(memcpy_fromiovec) },
	{ 0x23692ea4, __VMLINUX_SYMBOL_STR(sock_common_getsockopt) },
	{ 0x6ec9ccdb, __VMLINUX_SYMBOL_STR(_raw_write_lock_bh) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x223b89e7, __VMLINUX_SYMBOL_STR(dev_add_pack) },
	{ 0x42ffc6c3, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0xf73e44f9, __VMLINUX_SYMBOL_STR(dev_queue_xmit) },
	{ 0xe463cc3f, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0x750e2ba5, __VMLINUX_SYMBOL_STR(skb_free_datagram) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ieee802154";

