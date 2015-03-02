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
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xc28b8cde, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x891d3927, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x8b69b687, __VMLINUX_SYMBOL_STR(hci_register_dev) },
	{ 0xe461ca86, __VMLINUX_SYMBOL_STR(tty_unthrottle) },
	{ 0x2a3aa678, __VMLINUX_SYMBOL_STR(_test_and_clear_bit) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x5231a1bb, __VMLINUX_SYMBOL_STR(hci_recv_frame) },
	{ 0xa25f1e62, __VMLINUX_SYMBOL_STR(hci_unregister_dev) },
	{ 0xa120d33c, __VMLINUX_SYMBOL_STR(tty_unregister_ldisc) },
	{ 0xb61a0c3b, __VMLINUX_SYMBOL_STR(bt_err) },
	{ 0x7c640527, __VMLINUX_SYMBOL_STR(bt_info) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x8810359e, __VMLINUX_SYMBOL_STR(skb_queue_purge) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x24932832, __VMLINUX_SYMBOL_STR(tty_ldisc_flush) },
	{ 0x385a7461, __VMLINUX_SYMBOL_STR(n_tty_ioctl_helper) },
	{ 0x97df8ee6, __VMLINUX_SYMBOL_STR(hci_alloc_dev) },
	{ 0x92281d58, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x6a7a7091, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x9ee13f47, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0x6fef2591, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x18c32f38, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x12c6211f, __VMLINUX_SYMBOL_STR(tty_driver_flush_buffer) },
	{ 0x5691cf25, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xc4a441f3, __VMLINUX_SYMBOL_STR(skb_dequeue) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0xa22750dc, __VMLINUX_SYMBOL_STR(hci_free_dev) },
	{ 0xd67dbf9b, __VMLINUX_SYMBOL_STR(tty_register_ldisc) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x6b77fa1b, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x4d56a0e4, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=bluetooth";


MODULE_INFO(srcversion, "FD04F21D080A00FE539F40C");
