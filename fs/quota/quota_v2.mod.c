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
	{ 0x208d6cb7, __VMLINUX_SYMBOL_STR(unregister_quota_format) },
	{ 0xaac309f9, __VMLINUX_SYMBOL_STR(register_quota_format) },
	{ 0xdaf2fd26, __VMLINUX_SYMBOL_STR(make_kuid) },
	{ 0x28124e6f, __VMLINUX_SYMBOL_STR(make_kgid) },
	{ 0x8d55bb8a, __VMLINUX_SYMBOL_STR(qid_eq) },
	{ 0xad3fe455, __VMLINUX_SYMBOL_STR(make_kprojid) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x47f03165, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x79222a5, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd3b72176, __VMLINUX_SYMBOL_STR(qtree_entry_unused) },
	{ 0x7ce18c9f, __VMLINUX_SYMBOL_STR(from_kqid) },
	{ 0x3f2a0f29, __VMLINUX_SYMBOL_STR(init_user_ns) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xedc7f4ec, __VMLINUX_SYMBOL_STR(dq_data_lock) },
	{ 0x93d4f81d, __VMLINUX_SYMBOL_STR(__quota_error) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xca62908f, __VMLINUX_SYMBOL_STR(qtree_read_dquot) },
	{ 0x7b45499a, __VMLINUX_SYMBOL_STR(qtree_write_dquot) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x98c02a33, __VMLINUX_SYMBOL_STR(qtree_release_dquot) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=quota_tree";

