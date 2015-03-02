#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
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
	{ 0x9cceacf4, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x316ef669, __VMLINUX_SYMBOL_STR(release_sock) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0x9a1b17c3, __VMLINUX_SYMBOL_STR(can_rx_register) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0x10bc285, __VMLINUX_SYMBOL_STR(can_proto_unregister) },
	{ 0x62a6f211, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0xd2da1048, __VMLINUX_SYMBOL_STR(register_netdevice_notifier) },
	{ 0x525a40e, __VMLINUX_SYMBOL_STR(sock_queue_rcv_skb) },
	{ 0x353e3fa5, __VMLINUX_SYMBOL_STR(__get_user_4) },
	{ 0x3c0e54b0, __VMLINUX_SYMBOL_STR(skb_recv_datagram) },
	{ 0x9d0d6206, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier) },
	{ 0x60ee869d, __VMLINUX_SYMBOL_STR(sock_no_sendpage) },
	{ 0xc0ff9eec, __VMLINUX_SYMBOL_STR(sock_no_mmap) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xbbd64246, __VMLINUX_SYMBOL_STR(sock_no_socketpair) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xaca13a27, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x911db74e, __VMLINUX_SYMBOL_STR(sock_no_listen) },
	{ 0xe8b4449e, __VMLINUX_SYMBOL_STR(sock_no_accept) },
	{ 0x83b90cfd, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0xb7247761, __VMLINUX_SYMBOL_STR(dev_get_by_index) },
	{ 0x1dcc8ab3, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0xf0b7cc6d, __VMLINUX_SYMBOL_STR(sock_no_shutdown) },
	{ 0x71e342be, __VMLINUX_SYMBOL_STR(can_ioctl) },
	{ 0xb09e0f00, __VMLINUX_SYMBOL_STR(can_send) },
	{ 0xfcb629a6, __VMLINUX_SYMBOL_STR(__sock_recv_ts_and_drops) },
	{ 0x9ceb163c, __VMLINUX_SYMBOL_STR(memcpy_toiovec) },
	{ 0xbc10dd97, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0xab0f7c82, __VMLINUX_SYMBOL_STR(datagram_poll) },
	{ 0x5691cf25, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x6f22711f, __VMLINUX_SYMBOL_STR(can_proto_register) },
	{ 0x67cf3ded, __VMLINUX_SYMBOL_STR(sock_alloc_send_skb) },
	{ 0x15a817af, __VMLINUX_SYMBOL_STR(sock_no_connect) },
	{ 0x8bd0a3fd, __VMLINUX_SYMBOL_STR(_raw_write_unlock_bh) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9fb3dd30, __VMLINUX_SYMBOL_STR(memcpy_fromiovec) },
	{ 0x85061b76, __VMLINUX_SYMBOL_STR(_raw_write_lock_bh) },
	{ 0xe2e8065e, __VMLINUX_SYMBOL_STR(memdup_user) },
	{ 0xf46fe7c0, __VMLINUX_SYMBOL_STR(can_rx_unregister) },
	{ 0xdfeebf2b, __VMLINUX_SYMBOL_STR(sock_tx_timestamp) },
	{ 0x6b77fa1b, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xca0011ea, __VMLINUX_SYMBOL_STR(skb_free_datagram) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=can";


MODULE_INFO(srcversion, "BA2C09AC2B64764CF913247");
