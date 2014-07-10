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
	{ 0xf59d628b, __VMLINUX_SYMBOL_STR(nf_ct_unexpect_related) },
	{ 0xf2a18aed, __VMLINUX_SYMBOL_STR(nf_conntrack_helper_register) },
	{ 0xc996d097, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0x81223a88, __VMLINUX_SYMBOL_STR(nf_ct_gre_keymap_add) },
	{ 0x9bb322a5, __VMLINUX_SYMBOL_STR(nf_conntrack_helper_unregister) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0xf087137d, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x38931c2b, __VMLINUX_SYMBOL_STR(nf_ct_expect_init) },
	{ 0x4a8f6ec9, __VMLINUX_SYMBOL_STR(nf_ct_expect_find_get) },
	{ 0x81e76ba1, __VMLINUX_SYMBOL_STR(nf_ct_expect_put) },
	{ 0x363c3284, __VMLINUX_SYMBOL_STR(nf_ct_expect_alloc) },
	{ 0xd5750b96, __VMLINUX_SYMBOL_STR(nf_ct_expect_related_report) },
	{ 0xbc9ca5ad, __VMLINUX_SYMBOL_STR(nf_ct_gre_keymap_destroy) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x2a18c74, __VMLINUX_SYMBOL_STR(nf_conntrack_destroy) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xc028a9bf, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0x25b250e0, __VMLINUX_SYMBOL_STR(nf_conntrack_find_get) },
	{ 0x90ff6c9f, __VMLINUX_SYMBOL_STR(nf_ct_invert_tuplepr) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_conntrack,nf_conntrack_proto_gre";

