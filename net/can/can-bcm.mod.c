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
	{ 0xc28b8cde, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x9a1b17c3, __VMLINUX_SYMBOL_STR(can_rx_register) },
	{ 0x710dfb3f, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0x9a47820d, __VMLINUX_SYMBOL_STR(hrtimer_forward) },
	{ 0x974111b5, __VMLINUX_SYMBOL_STR(sock_no_setsockopt) },
	{ 0xc9f92996, __VMLINUX_SYMBOL_STR(sock_no_getsockopt) },
	{ 0x4dda1cf6, __VMLINUX_SYMBOL_STR(single_release) },
	{ 0x4b0ac955, __VMLINUX_SYMBOL_STR(hrtimer_cancel) },
	{ 0x47939e0d, __VMLINUX_SYMBOL_STR(__tasklet_hi_schedule) },
	{ 0x10bc285, __VMLINUX_SYMBOL_STR(can_proto_unregister) },
	{ 0x7d2c0224, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xd2da1048, __VMLINUX_SYMBOL_STR(register_netdevice_notifier) },
	{ 0xf7b47146, __VMLINUX_SYMBOL_STR(sock_no_getname) },
	{ 0xc87c1f84, __VMLINUX_SYMBOL_STR(ktime_get) },
	{ 0x2d99bdc8, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0x525a40e, __VMLINUX_SYMBOL_STR(sock_queue_rcv_skb) },
	{ 0x3c0e54b0, __VMLINUX_SYMBOL_STR(skb_recv_datagram) },
	{ 0x1efd8802, __VMLINUX_SYMBOL_STR(sock_i_ino) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x41f3df3b, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x9d0d6206, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier) },
	{ 0x60ee869d, __VMLINUX_SYMBOL_STR(sock_no_sendpage) },
	{ 0xc0ff9eec, __VMLINUX_SYMBOL_STR(sock_no_mmap) },
	{ 0x95353732, __VMLINUX_SYMBOL_STR(PDE_DATA) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xbbd64246, __VMLINUX_SYMBOL_STR(sock_no_socketpair) },
	{ 0x217b870, __VMLINUX_SYMBOL_STR(proc_mkdir) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xd95f9e53, __VMLINUX_SYMBOL_STR(sock_no_bind) },
	{ 0xaca13a27, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0x70e0ec02, __VMLINUX_SYMBOL_STR(seq_putc) },
	{ 0x911db74e, __VMLINUX_SYMBOL_STR(sock_no_listen) },
	{ 0xe8b4449e, __VMLINUX_SYMBOL_STR(sock_no_accept) },
	{ 0x289ed752, __VMLINUX_SYMBOL_STR(dev_get_by_index_rcu) },
	{ 0x83b90cfd, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0xb7247761, __VMLINUX_SYMBOL_STR(dev_get_by_index) },
	{ 0x9545af6d, __VMLINUX_SYMBOL_STR(tasklet_init) },
	{ 0x1dcc8ab3, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0xf0b7cc6d, __VMLINUX_SYMBOL_STR(sock_no_shutdown) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0x71e342be, __VMLINUX_SYMBOL_STR(can_ioctl) },
	{ 0xb09e0f00, __VMLINUX_SYMBOL_STR(can_send) },
	{ 0xfcb629a6, __VMLINUX_SYMBOL_STR(__sock_recv_ts_and_drops) },
	{ 0x6fef2591, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x9ceb163c, __VMLINUX_SYMBOL_STR(memcpy_toiovec) },
	{ 0x18c32f38, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xab0f7c82, __VMLINUX_SYMBOL_STR(datagram_poll) },
	{ 0x5691cf25, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xb590822d, __VMLINUX_SYMBOL_STR(hrtimer_start) },
	{ 0x6f22711f, __VMLINUX_SYMBOL_STR(can_proto_register) },
	{ 0x8bd0a3fd, __VMLINUX_SYMBOL_STR(_raw_write_unlock_bh) },
	{ 0x9f5d1a5b, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0xeaf9bce, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x9fb3dd30, __VMLINUX_SYMBOL_STR(memcpy_fromiovec) },
	{ 0x54d8b7ba, __VMLINUX_SYMBOL_STR(hrtimer_init) },
	{ 0x85061b76, __VMLINUX_SYMBOL_STR(_raw_write_lock_bh) },
	{ 0xf46fe7c0, __VMLINUX_SYMBOL_STR(can_rx_unregister) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x6b77fa1b, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0xca0011ea, __VMLINUX_SYMBOL_STR(skb_free_datagram) },
	{ 0x4cdb3178, __VMLINUX_SYMBOL_STR(ns_to_timeval) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=can";


MODULE_INFO(srcversion, "2622C3350755F14B2405D20");
