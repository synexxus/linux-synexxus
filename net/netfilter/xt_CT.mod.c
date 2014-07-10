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
	{ 0xc15f90a8, __VMLINUX_SYMBOL_STR(xt_unregister_targets) },
	{ 0x19f981ab, __VMLINUX_SYMBOL_STR(xt_unregister_target) },
	{ 0xb2d5b25f, __VMLINUX_SYMBOL_STR(xt_register_targets) },
	{ 0xd9a6d2ea, __VMLINUX_SYMBOL_STR(xt_register_target) },
	{ 0x6d9e83dd, __VMLINUX_SYMBOL_STR(nf_ct_helper_ext_add) },
	{ 0xa7159abe, __VMLINUX_SYMBOL_STR(nf_conntrack_helper_try_module_get) },
	{ 0x3e1d1cf4, __VMLINUX_SYMBOL_STR(__nf_ct_l4proto_find) },
	{ 0x296bf547, __VMLINUX_SYMBOL_STR(nf_conntrack_free) },
	{ 0x351492d7, __VMLINUX_SYMBOL_STR(__nf_ct_ext_add_length) },
	{ 0x884e3518, __VMLINUX_SYMBOL_STR(nf_conntrack_tmpl_insert) },
	{ 0x40a230b5, __VMLINUX_SYMBOL_STR(nf_ct_timeout_find_get_hook) },
	{ 0x7b036232, __VMLINUX_SYMBOL_STR(nf_conntrack_alloc) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x78f9b710, __VMLINUX_SYMBOL_STR(nf_ct_l3proto_try_module_get) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x2a18c74, __VMLINUX_SYMBOL_STR(nf_conntrack_destroy) },
	{ 0xd714bba8, __VMLINUX_SYMBOL_STR(nf_ct_timeout_put_hook) },
	{ 0xb602c57e, __VMLINUX_SYMBOL_STR(nf_ct_l3proto_module_put) },
	{ 0x271c2372, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xd316dff3, __VMLINUX_SYMBOL_STR(nf_conntrack_untracked) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=x_tables,nf_conntrack";

