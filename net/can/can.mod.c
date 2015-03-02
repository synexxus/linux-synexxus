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
	{ 0x209fa2e1, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0xd06990ae, __VMLINUX_SYMBOL_STR(sock_init_data) },
	{ 0x710dfb3f, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0x15692c87, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x91eb9b4, __VMLINUX_SYMBOL_STR(round_jiffies) },
	{ 0x60a13e90, __VMLINUX_SYMBOL_STR(rcu_barrier) },
	{ 0x4dda1cf6, __VMLINUX_SYMBOL_STR(single_release) },
	{ 0x431ae3a9, __VMLINUX_SYMBOL_STR(seq_puts) },
	{ 0x62a6f211, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0x7d2c0224, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xd2da1048, __VMLINUX_SYMBOL_STR(register_netdevice_notifier) },
	{ 0x2d99bdc8, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0xfa2bcf10, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xe1676390, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x41f3df3b, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x9d0d6206, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier) },
	{ 0x2f755dc7, __VMLINUX_SYMBOL_STR(sock_get_timestamp) },
	{ 0x95353732, __VMLINUX_SYMBOL_STR(PDE_DATA) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x6f0036d9, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0x8810359e, __VMLINUX_SYMBOL_STR(skb_queue_purge) },
	{ 0x2cd3834b, __VMLINUX_SYMBOL_STR(netif_rx_ni) },
	{ 0x217b870, __VMLINUX_SYMBOL_STR(proc_mkdir) },
	{ 0x360adfc4, __VMLINUX_SYMBOL_STR(sk_alloc) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x70e0ec02, __VMLINUX_SYMBOL_STR(seq_putc) },
	{ 0x6f621573, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0xfb88016a, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x83b90cfd, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0xb9ecd3b8, __VMLINUX_SYMBOL_STR(dev_remove_pack) },
	{ 0xc2cdbf1, __VMLINUX_SYMBOL_STR(synchronize_sched) },
	{ 0xc8fd727e, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x1dcc8ab3, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0xddfdb360, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0xfcf58fc5, __VMLINUX_SYMBOL_STR(proto_register) },
	{ 0x6fef2591, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x93fca811, __VMLINUX_SYMBOL_STR(__get_free_pages) },
	{ 0x4ec99e52, __VMLINUX_SYMBOL_STR(sock_register) },
	{ 0x72350130, __VMLINUX_SYMBOL_STR(___ratelimit) },
	{ 0x5691cf25, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x72ec83fc, __VMLINUX_SYMBOL_STR(proto_unregister) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xbc924747, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0x8bd0a3fd, __VMLINUX_SYMBOL_STR(_raw_write_unlock_bh) },
	{ 0x9f5d1a5b, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0xeaf9bce, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xa75312bc, __VMLINUX_SYMBOL_STR(call_rcu_sched) },
	{ 0x62737e1d, __VMLINUX_SYMBOL_STR(sock_unregister) },
	{ 0x85061b76, __VMLINUX_SYMBOL_STR(_raw_write_lock_bh) },
	{ 0xf992b6e9, __VMLINUX_SYMBOL_STR(dev_add_pack) },
	{ 0x7da3c46d, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x1f30f555, __VMLINUX_SYMBOL_STR(dev_queue_xmit) },
	{ 0xf698c68c, __VMLINUX_SYMBOL_STR(try_module_get) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "F0B8AA4135548BE4C4E8CC7");
