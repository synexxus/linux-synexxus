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
	{ 0x5817531b, __VMLINUX_SYMBOL_STR(sdio_unregister_driver) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xd31bb2d0, __VMLINUX_SYMBOL_STR(sdio_register_driver) },
	{ 0x7c640527, __VMLINUX_SYMBOL_STR(bt_info) },
	{ 0xa9c62b6a, __VMLINUX_SYMBOL_STR(skb_queue_head) },
	{ 0x109be486, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x5b4396b8, __VMLINUX_SYMBOL_STR(sdio_writesb) },
	{ 0xec57b2d1, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x70468b57, __VMLINUX_SYMBOL_STR(skb_dequeue) },
	{ 0x7fc7bfa2, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x2b53db30, __VMLINUX_SYMBOL_STR(hci_recv_frame) },
	{ 0xe463cc3f, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x708609aa, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xab714ee2, __VMLINUX_SYMBOL_STR(sdio_readsb) },
	{ 0xc75b8480, __VMLINUX_SYMBOL_STR(sdio_readb) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xde7a548f, __VMLINUX_SYMBOL_STR(hci_register_dev) },
	{ 0xa1d391f8, __VMLINUX_SYMBOL_STR(hci_alloc_dev) },
	{ 0x564906d2, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0xab46a255, __VMLINUX_SYMBOL_STR(sdio_claim_irq) },
	{ 0x9e83215e, __VMLINUX_SYMBOL_STR(sdio_enable_func) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x27090d9c, __VMLINUX_SYMBOL_STR(sdio_release_host) },
	{ 0x3f2147f1, __VMLINUX_SYMBOL_STR(sdio_disable_func) },
	{ 0x8cbb3b27, __VMLINUX_SYMBOL_STR(sdio_release_irq) },
	{ 0x78bf520d, __VMLINUX_SYMBOL_STR(sdio_writeb) },
	{ 0x11946f7, __VMLINUX_SYMBOL_STR(sdio_claim_host) },
	{ 0x2a3aa678, __VMLINUX_SYMBOL_STR(_test_and_clear_bit) },
	{ 0x7ac9d215, __VMLINUX_SYMBOL_STR(skb_queue_purge) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x979c23ba, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xf087137d, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x29ac4e0b, __VMLINUX_SYMBOL_STR(hci_free_dev) },
	{ 0x29f6f577, __VMLINUX_SYMBOL_STR(hci_unregister_dev) },
	{ 0x3a657fb3, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x43c003ff, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=bluetooth";

MODULE_ALIAS("sdio:c02v*d*");
MODULE_ALIAS("sdio:c03v*d*");
MODULE_ALIAS("sdio:c09v*d*");

MODULE_INFO(srcversion, "279853D597594F161355581");
