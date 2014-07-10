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
	{ 0xa5ec635f, __VMLINUX_SYMBOL_STR(unregister_tcf_proto_ops) },
	{ 0xc2c231d0, __VMLINUX_SYMBOL_STR(register_tcf_proto_ops) },
	{ 0x2e350ce0, __VMLINUX_SYMBOL_STR(skb_flow_dissect) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xf380a18a, __VMLINUX_SYMBOL_STR(__tcf_em_tree_match) },
	{ 0xdaf23bd8, __VMLINUX_SYMBOL_STR(from_kuid) },
	{ 0x4096bf3b, __VMLINUX_SYMBOL_STR(from_kgid) },
	{ 0xeb8e9f66, __VMLINUX_SYMBOL_STR(__skb_get_hash) },
	{ 0xc1a254ac, __VMLINUX_SYMBOL_STR(tcf_action_exec) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0xc996d097, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0x40288636, __VMLINUX_SYMBOL_STR(tcf_exts_change) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xc47db316, __VMLINUX_SYMBOL_STR(tcf_em_tree_validate) },
	{ 0xa75c1944, __VMLINUX_SYMBOL_STR(tcf_exts_validate) },
	{ 0x3f2a0f29, __VMLINUX_SYMBOL_STR(init_user_ns) },
	{ 0x74c134b9, __VMLINUX_SYMBOL_STR(__sw_hweight32) },
	{ 0x4f391d0e, __VMLINUX_SYMBOL_STR(nla_parse) },
	{ 0x47f03165, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x79222a5, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x8834396c, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x85670f1d, __VMLINUX_SYMBOL_STR(rtnl_is_locked) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xa57bd4e2, __VMLINUX_SYMBOL_STR(tcf_em_tree_destroy) },
	{ 0xe6acbfdc, __VMLINUX_SYMBOL_STR(tcf_exts_destroy) },
	{ 0xd5f2172f, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0x14557bfd, __VMLINUX_SYMBOL_STR(tcf_exts_dump_stats) },
	{ 0x3490451a, __VMLINUX_SYMBOL_STR(tcf_em_tree_dump) },
	{ 0x4c2f778e, __VMLINUX_SYMBOL_STR(tcf_exts_dump) },
	{ 0x1fccca06, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x2bc89550, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

