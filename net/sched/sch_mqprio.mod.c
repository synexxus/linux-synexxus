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
	{ 0xdc2e0cfe, __VMLINUX_SYMBOL_STR(unregister_qdisc) },
	{ 0x173bbd33, __VMLINUX_SYMBOL_STR(register_qdisc) },
	{ 0xe2bfce41, __VMLINUX_SYMBOL_STR(qdisc_create_dflt) },
	{ 0x4c103832, __VMLINUX_SYMBOL_STR(default_qdisc_ops) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x1a669b0a, __VMLINUX_SYMBOL_STR(dev_deactivate) },
	{ 0xb7ed9849, __VMLINUX_SYMBOL_STR(dev_activate) },
	{ 0xe4ae0ad7, __VMLINUX_SYMBOL_STR(gnet_stats_copy_queue) },
	{ 0xde227738, __VMLINUX_SYMBOL_STR(gnet_stats_copy_basic) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xf092979f, __VMLINUX_SYMBOL_STR(qdisc_list_add) },
	{ 0x7754b2e7, __VMLINUX_SYMBOL_STR(qdisc_destroy) },
	{ 0xb88fb1b1, __VMLINUX_SYMBOL_STR(dev_graft_qdisc) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x1fccca06, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x2bc89550, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

