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
	{ 0x6bdcfd99, __VMLINUX_SYMBOL_STR(qdisc_class_hash_remove) },
	{ 0x29af79d5, __VMLINUX_SYMBOL_STR(qdisc_class_hash_grow) },
	{ 0x6d98a110, __VMLINUX_SYMBOL_STR(gen_new_estimator) },
	{ 0x47f03165, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x79222a5, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x25f673fc, __VMLINUX_SYMBOL_STR(gen_replace_estimator) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xfc3bd35, __VMLINUX_SYMBOL_STR(hrtimer_init) },
	{ 0x4baea287, __VMLINUX_SYMBOL_STR(qdisc_watchdog_init) },
	{ 0xa5f090a3, __VMLINUX_SYMBOL_STR(noop_qdisc) },
	{ 0x117093be, __VMLINUX_SYMBOL_STR(qdisc_class_hash_init) },
	{ 0xed597524, __VMLINUX_SYMBOL_STR(qdisc_get_rtab) },
	{ 0x4f391d0e, __VMLINUX_SYMBOL_STR(nla_parse) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x1fccca06, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x2bc89550, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x86ffbf0b, __VMLINUX_SYMBOL_STR(hrtimer_start_range_ns) },
	{ 0x97704c40, __VMLINUX_SYMBOL_STR(hrtimer_try_to_cancel) },
	{ 0xe2bfce41, __VMLINUX_SYMBOL_STR(qdisc_create_dflt) },
	{ 0x3cdfc9ff, __VMLINUX_SYMBOL_STR(pfifo_qdisc_ops) },
	{ 0xebbc0a85, __VMLINUX_SYMBOL_STR(qdisc_tree_decrease_qlen) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x85670f1d, __VMLINUX_SYMBOL_STR(rtnl_is_locked) },
	{ 0xe4ae0ad7, __VMLINUX_SYMBOL_STR(gnet_stats_copy_queue) },
	{ 0x3bb091e1, __VMLINUX_SYMBOL_STR(gnet_stats_copy_rate_est) },
	{ 0xde227738, __VMLINUX_SYMBOL_STR(gnet_stats_copy_basic) },
	{ 0x7fc7bfa2, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x5e205de7, __VMLINUX_SYMBOL_STR(tc_classify_compat) },
	{ 0x88856a85, __VMLINUX_SYMBOL_STR(__qdisc_calculate_pkt_len) },
	{ 0xca227282, __VMLINUX_SYMBOL_STR(qdisc_watchdog_schedule_ns) },
	{ 0xa04a01bd, __VMLINUX_SYMBOL_STR(qdisc_class_hash_insert) },
	{ 0x13b7234f, __VMLINUX_SYMBOL_STR(__netif_schedule) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x94e1823c, __VMLINUX_SYMBOL_STR(hrtimer_start) },
	{ 0xd020f46a, __VMLINUX_SYMBOL_STR(qdisc_reset) },
	{ 0x7840b42c, __VMLINUX_SYMBOL_STR(hrtimer_cancel) },
	{ 0x4aa98dff, __VMLINUX_SYMBOL_STR(qdisc_watchdog_cancel) },
	{ 0xc87c1f84, __VMLINUX_SYMBOL_STR(ktime_get) },
	{ 0xf53d4c26, __VMLINUX_SYMBOL_STR(qdisc_class_hash_destroy) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x17b1125d, __VMLINUX_SYMBOL_STR(gen_kill_estimator) },
	{ 0x521b36b5, __VMLINUX_SYMBOL_STR(qdisc_put_rtab) },
	{ 0x7754b2e7, __VMLINUX_SYMBOL_STR(qdisc_destroy) },
	{ 0x376d0337, __VMLINUX_SYMBOL_STR(tcf_destroy_chain) },
	{ 0x9e46cd59, __VMLINUX_SYMBOL_STR(gnet_stats_copy_app) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

