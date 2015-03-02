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
	{ 0xd06990ae, __VMLINUX_SYMBOL_STR(sock_init_data) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0x22e1ae6f, __VMLINUX_SYMBOL_STR(up_read) },
	{ 0x495ba03e, __VMLINUX_SYMBOL_STR(kernel_sendmsg) },
	{ 0xf56a224d, __VMLINUX_SYMBOL_STR(sockfd_lookup) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0x974111b5, __VMLINUX_SYMBOL_STR(sock_no_setsockopt) },
	{ 0xc9f92996, __VMLINUX_SYMBOL_STR(sock_no_getsockopt) },
	{ 0x4c86184b, __VMLINUX_SYMBOL_STR(remove_wait_queue) },
	{ 0x616eedc3, __VMLINUX_SYMBOL_STR(eth_change_mtu) },
	{ 0x2a3aa678, __VMLINUX_SYMBOL_STR(_test_and_clear_bit) },
	{ 0xf7b47146, __VMLINUX_SYMBOL_STR(sock_no_getname) },
	{ 0x1976aa06, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x44d41fbd, __VMLINUX_SYMBOL_STR(bt_sock_register) },
	{ 0x8323559e, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x200333f1, __VMLINUX_SYMBOL_STR(sock_no_poll) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x455293f6, __VMLINUX_SYMBOL_STR(down_read) },
	{ 0xb61a0c3b, __VMLINUX_SYMBOL_STR(bt_err) },
	{ 0x7c640527, __VMLINUX_SYMBOL_STR(bt_info) },
	{ 0xbbca194a, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0xc0ff9eec, __VMLINUX_SYMBOL_STR(sock_no_mmap) },
	{ 0xffd5a395, __VMLINUX_SYMBOL_STR(default_wake_function) },
	{ 0x6192b2f5, __VMLINUX_SYMBOL_STR(sock_no_recvmsg) },
	{ 0x32ec6731, __VMLINUX_SYMBOL_STR(bt_sock_unlink) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xd93389da, __VMLINUX_SYMBOL_STR(hci_get_route) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x2cd3834b, __VMLINUX_SYMBOL_STR(netif_rx_ni) },
	{ 0xbbd64246, __VMLINUX_SYMBOL_STR(sock_no_socketpair) },
	{ 0x360adfc4, __VMLINUX_SYMBOL_STR(sk_alloc) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xd95f9e53, __VMLINUX_SYMBOL_STR(sock_no_bind) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xcc1fb551, __VMLINUX_SYMBOL_STR(baswap) },
	{ 0xe4985b20, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0xec10ed52, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0x911db74e, __VMLINUX_SYMBOL_STR(sock_no_listen) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xe8b4449e, __VMLINUX_SYMBOL_STR(sock_no_accept) },
	{ 0x83b90cfd, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0x8fea24bd, __VMLINUX_SYMBOL_STR(bt_sock_unregister) },
	{ 0x6a7a7091, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x83211609, __VMLINUX_SYMBOL_STR(up_write) },
	{ 0x1dcc8ab3, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0xa958ed4, __VMLINUX_SYMBOL_STR(down_write) },
	{ 0x20d8b0f2, __VMLINUX_SYMBOL_STR(fput) },
	{ 0xf0b7cc6d, __VMLINUX_SYMBOL_STR(sock_no_shutdown) },
	{ 0x2e2e2b0f, __VMLINUX_SYMBOL_STR(bt_sock_link) },
	{ 0xddfdb360, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x9ee13f47, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0xfcf58fc5, __VMLINUX_SYMBOL_STR(proto_register) },
	{ 0x18c32f38, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x36ead4ba, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x5691cf25, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x72ec83fc, __VMLINUX_SYMBOL_STR(proto_unregister) },
	{ 0x787a629b, __VMLINUX_SYMBOL_STR(alloc_netdev_mqs) },
	{ 0x2cca728c, __VMLINUX_SYMBOL_STR(eth_type_trans) },
	{ 0xe06a9d15, __VMLINUX_SYMBOL_STR(__module_put_and_exit) },
	{ 0x33e59e8f, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0x6bf89b79, __VMLINUX_SYMBOL_STR(ether_setup) },
	{ 0x2565cc3a, __VMLINUX_SYMBOL_STR(__module_get) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x15a817af, __VMLINUX_SYMBOL_STR(sock_no_connect) },
	{ 0x8bd0a3fd, __VMLINUX_SYMBOL_STR(_raw_write_unlock_bh) },
	{ 0x63749a14, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0xc7bcbc8d, __VMLINUX_SYMBOL_STR(add_wait_queue) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xb7b61546, __VMLINUX_SYMBOL_STR(crc32_be) },
	{ 0x6d7626a9, __VMLINUX_SYMBOL_STR(sock_no_sendmsg) },
	{ 0xc5a3ed28, __VMLINUX_SYMBOL_STR(set_user_nice) },
	{ 0x85061b76, __VMLINUX_SYMBOL_STR(_raw_write_lock_bh) },
	{ 0x2d07ef2b, __VMLINUX_SYMBOL_STR(bt_procfs_init) },
	{ 0xc4a441f3, __VMLINUX_SYMBOL_STR(skb_dequeue) },
	{ 0x1ee16a75, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xfa3c643b, __VMLINUX_SYMBOL_STR(__netif_schedule) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x7af6a36d, __VMLINUX_SYMBOL_STR(bt_procfs_cleanup) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=bluetooth";


MODULE_INFO(srcversion, "9A67591FF670B4767494C8C");
