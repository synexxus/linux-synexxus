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
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x33ba5cd4, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0xe327c68, __VMLINUX_SYMBOL_STR(blk_mq_map_queue) },
	{ 0x7f76dd5f, __VMLINUX_SYMBOL_STR(put_disk) },
	{ 0x553448dc, __VMLINUX_SYMBOL_STR(del_gendisk) },
	{ 0xb5a459dc, __VMLINUX_SYMBOL_STR(unregister_blkdev) },
	{ 0x5d58b685, __VMLINUX_SYMBOL_STR(add_disk) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x59e5070d, __VMLINUX_SYMBOL_STR(__do_div64) },
	{ 0x741c742d, __VMLINUX_SYMBOL_STR(blk_queue_physical_block_size) },
	{ 0x1029793f, __VMLINUX_SYMBOL_STR(blk_queue_logical_block_size) },
	{ 0x6f9a27f5, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x10da615, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x241095c1, __VMLINUX_SYMBOL_STR(alloc_disk_node) },
	{ 0xb7bc4b6b, __VMLINUX_SYMBOL_STR(blk_cleanup_queue) },
	{ 0x8c967515, __VMLINUX_SYMBOL_STR(blk_queue_softirq_done) },
	{ 0x694db6c, __VMLINUX_SYMBOL_STR(blk_queue_prep_rq) },
	{ 0x33953e95, __VMLINUX_SYMBOL_STR(blk_init_queue_node) },
	{ 0x59992784, __VMLINUX_SYMBOL_STR(blk_queue_make_request) },
	{ 0x3bca9510, __VMLINUX_SYMBOL_STR(blk_alloc_queue_node) },
	{ 0xa85382c1, __VMLINUX_SYMBOL_STR(blk_mq_init_queue) },
	{ 0x447e41f1, __VMLINUX_SYMBOL_STR(blk_mq_free_single_hw_queue) },
	{ 0xe11c1d3e, __VMLINUX_SYMBOL_STR(blk_mq_alloc_single_hw_queue) },
	{ 0x71a50dbc, __VMLINUX_SYMBOL_STR(register_blkdev) },
	{ 0xfc3bd35, __VMLINUX_SYMBOL_STR(hrtimer_init) },
	{ 0xd3f57a2, __VMLINUX_SYMBOL_STR(_find_next_bit_le) },
	{ 0xd3e6f60d, __VMLINUX_SYMBOL_STR(cpu_possible_mask) },
	{ 0xb840f323, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x499cb58c, __VMLINUX_SYMBOL_STR(prepare_to_wait) },
	{ 0x93a6e0b2, __VMLINUX_SYMBOL_STR(io_schedule) },
	{ 0xc8b57c27, __VMLINUX_SYMBOL_STR(autoremove_wake_function) },
	{ 0xd3dbfbc4, __VMLINUX_SYMBOL_STR(_find_first_zero_bit_le) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x79b2ba90, __VMLINUX_SYMBOL_STR(blk_fetch_request) },
	{ 0x3507a132, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0xddb1cd7, __VMLINUX_SYMBOL_STR(llist_reverse_order) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x68d9c0fc, __VMLINUX_SYMBOL_STR(blk_mq_complete_request) },
	{ 0x60931dfa, __VMLINUX_SYMBOL_STR(blk_complete_request) },
	{ 0x1143c90a, __VMLINUX_SYMBOL_STR(blk_end_request_all) },
	{ 0xd5e2863e, __VMLINUX_SYMBOL_STR(blk_mq_end_io_partial) },
	{ 0x6d6745a9, __VMLINUX_SYMBOL_STR(bio_endio) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x47f03165, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x79222a5, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x94e1823c, __VMLINUX_SYMBOL_STR(hrtimer_start) },
	{ 0xc7a1840e, __VMLINUX_SYMBOL_STR(llist_add_batch) },
	{ 0x341dbfa3, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

