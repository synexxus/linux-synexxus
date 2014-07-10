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
	{ 0xf2a18aed, __VMLINUX_SYMBOL_STR(nf_conntrack_helper_register) },
	{ 0x65b965b6, __VMLINUX_SYMBOL_STR(__nf_ct_refresh_acct) },
	{ 0x9bb322a5, __VMLINUX_SYMBOL_STR(nf_conntrack_helper_unregister) },
	{ 0x20000329, __VMLINUX_SYMBOL_STR(simple_strtoul) },
	{ 0x38931c2b, __VMLINUX_SYMBOL_STR(nf_ct_expect_init) },
	{ 0x1060a1a1, __VMLINUX_SYMBOL_STR(textsearch_prepare) },
	{ 0xacc8c776, __VMLINUX_SYMBOL_STR(skb_find_text) },
	{ 0x5d41c87c, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x81e76ba1, __VMLINUX_SYMBOL_STR(nf_ct_expect_put) },
	{ 0x363c3284, __VMLINUX_SYMBOL_STR(nf_ct_expect_alloc) },
	{ 0xd5750b96, __VMLINUX_SYMBOL_STR(nf_ct_expect_related_report) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xfae63dbd, __VMLINUX_SYMBOL_STR(nf_ct_helper_log) },
	{ 0x9431aa60, __VMLINUX_SYMBOL_STR(textsearch_destroy) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x47c8baf4, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0xc028a9bf, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_conntrack";

