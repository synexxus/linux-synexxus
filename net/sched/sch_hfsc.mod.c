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
	{ 0x6d98a110, __VMLINUX_SYMBOL_STR(gen_new_estimator) },
	{ 0x47f03165, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x79222a5, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x25f673fc, __VMLINUX_SYMBOL_STR(gen_replace_estimator) },
	{ 0x4f391d0e, __VMLINUX_SYMBOL_STR(nla_parse) },
	{ 0x6bdcfd99, __VMLINUX_SYMBOL_STR(qdisc_class_hash_remove) },
	{ 0xebbc0a85, __VMLINUX_SYMBOL_STR(qdisc_tree_decrease_qlen) },
	{ 0xdf2c2742, __VMLINUX_SYMBOL_STR(rb_last) },
	{ 0x88856a85, __VMLINUX_SYMBOL_STR(__qdisc_calculate_pkt_len) },
	{ 0x7fc7bfa2, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x22905e3c, __VMLINUX_SYMBOL_STR(tc_classify) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xca227282, __VMLINUX_SYMBOL_STR(qdisc_watchdog_schedule_ns) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0xca9360b5, __VMLINUX_SYMBOL_STR(rb_next) },
	{ 0xc87c1f84, __VMLINUX_SYMBOL_STR(ktime_get) },
	{ 0xece784c2, __VMLINUX_SYMBOL_STR(rb_first) },
	{ 0x9e46cd59, __VMLINUX_SYMBOL_STR(gnet_stats_copy_app) },
	{ 0xe4ae0ad7, __VMLINUX_SYMBOL_STR(gnet_stats_copy_queue) },
	{ 0x3bb091e1, __VMLINUX_SYMBOL_STR(gnet_stats_copy_rate_est) },
	{ 0xde227738, __VMLINUX_SYMBOL_STR(gnet_stats_copy_basic) },
	{ 0x59e5070d, __VMLINUX_SYMBOL_STR(__do_div64) },
	{ 0xc609e1dd, __VMLINUX_SYMBOL_STR(qdisc_warn_nonwc) },
	{ 0xa5526619, __VMLINUX_SYMBOL_STR(rb_insert_color) },
	{ 0x4d9b652b, __VMLINUX_SYMBOL_STR(rb_erase) },
	{ 0x4baea287, __VMLINUX_SYMBOL_STR(qdisc_watchdog_init) },
	{ 0x29af79d5, __VMLINUX_SYMBOL_STR(qdisc_class_hash_grow) },
	{ 0xa04a01bd, __VMLINUX_SYMBOL_STR(qdisc_class_hash_insert) },
	{ 0xa5f090a3, __VMLINUX_SYMBOL_STR(noop_qdisc) },
	{ 0xe2bfce41, __VMLINUX_SYMBOL_STR(qdisc_create_dflt) },
	{ 0x3cdfc9ff, __VMLINUX_SYMBOL_STR(pfifo_qdisc_ops) },
	{ 0x117093be, __VMLINUX_SYMBOL_STR(qdisc_class_hash_init) },
	{ 0xd020f46a, __VMLINUX_SYMBOL_STR(qdisc_reset) },
	{ 0x4aa98dff, __VMLINUX_SYMBOL_STR(qdisc_watchdog_cancel) },
	{ 0xf53d4c26, __VMLINUX_SYMBOL_STR(qdisc_class_hash_destroy) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x17b1125d, __VMLINUX_SYMBOL_STR(gen_kill_estimator) },
	{ 0x7754b2e7, __VMLINUX_SYMBOL_STR(qdisc_destroy) },
	{ 0x376d0337, __VMLINUX_SYMBOL_STR(tcf_destroy_chain) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x85670f1d, __VMLINUX_SYMBOL_STR(rtnl_is_locked) },
	{ 0x1fccca06, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x2bc89550, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

