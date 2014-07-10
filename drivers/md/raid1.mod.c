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
	{ 0xbd920140, __VMLINUX_SYMBOL_STR(blk_queue_merge_bvec) },
	{ 0x79222a5, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf3eba8e0, __VMLINUX_SYMBOL_STR(submit_bio_wait) },
	{ 0x4827558e, __VMLINUX_SYMBOL_STR(bio_alloc_bioset) },
	{ 0x894e4040, __VMLINUX_SYMBOL_STR(mddev_congested) },
	{ 0xec717ee1, __VMLINUX_SYMBOL_STR(rdev_set_badblocks) },
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xd2260e3, __VMLINUX_SYMBOL_STR(md_is_badblock) },
	{ 0x8dc07f95, __VMLINUX_SYMBOL_STR(page_address) },
	{ 0x873edadb, __VMLINUX_SYMBOL_STR(bio_clone_mddev) },
	{ 0xc8b57c27, __VMLINUX_SYMBOL_STR(autoremove_wake_function) },
	{ 0xd1e12cc4, __VMLINUX_SYMBOL_STR(bio_alloc_mddev) },
	{ 0xc5e685ec, __VMLINUX_SYMBOL_STR(md_check_recovery) },
	{ 0x4232955e, __VMLINUX_SYMBOL_STR(md_write_end) },
	{ 0x2a3aa678, __VMLINUX_SYMBOL_STR(_test_and_clear_bit) },
	{ 0x42b0bdd9, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xf087137d, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x1d814f23, __VMLINUX_SYMBOL_STR(bitmap_endwrite) },
	{ 0xa58fea9d, __VMLINUX_SYMBOL_STR(mempool_destroy) },
	{ 0x41ffbd8b, __VMLINUX_SYMBOL_STR(bitmap_unplug) },
	{ 0xb5a6462e, __VMLINUX_SYMBOL_STR(bio_trim) },
	{ 0xfa11a04d, __VMLINUX_SYMBOL_STR(unregister_md_personality) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x73427209, __VMLINUX_SYMBOL_STR(revalidate_disk) },
	{ 0x8a210f93, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0x87cf2437, __VMLINUX_SYMBOL_STR(bitmap_resize) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x8709f95c, __VMLINUX_SYMBOL_STR(bio_reset) },
	{ 0x55cd506, __VMLINUX_SYMBOL_STR(bitmap_start_sync) },
	{ 0xd27b25dd, __VMLINUX_SYMBOL_STR(blk_check_plugged) },
	{ 0xe86ee437, __VMLINUX_SYMBOL_STR(md_register_thread) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x60fba957, __VMLINUX_SYMBOL_STR(bio_add_page) },
	{ 0x7646d580, __VMLINUX_SYMBOL_STR(kunmap) },
	{ 0x5414deac, __VMLINUX_SYMBOL_STR(disk_stack_limits) },
	{ 0xca8e6ebb, __VMLINUX_SYMBOL_STR(bitmap_close_sync) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0xc2cdbf1, __VMLINUX_SYMBOL_STR(synchronize_sched) },
	{ 0x230815a, __VMLINUX_SYMBOL_STR(generic_make_request) },
	{ 0x8149a98b, __VMLINUX_SYMBOL_STR(sysfs_remove_link) },
	{ 0x9eab143e, __VMLINUX_SYMBOL_STR(md_wait_for_blocked_rdev) },
	{ 0x3ffc5670, __VMLINUX_SYMBOL_STR(md_integrity_add_rdev) },
	{ 0xe6b27c05, __VMLINUX_SYMBOL_STR(contig_page_data) },
	{ 0x6d6745a9, __VMLINUX_SYMBOL_STR(bio_endio) },
	{ 0xf2481c38, __VMLINUX_SYMBOL_STR(bio_put) },
	{ 0xcb9538e4, __VMLINUX_SYMBOL_STR(md_done_sync) },
	{ 0x5f1b3c99, __VMLINUX_SYMBOL_STR(flush_signals) },
	{ 0xe7f4193f, __VMLINUX_SYMBOL_STR(sysfs_create_link) },
	{ 0xce900af, __VMLINUX_SYMBOL_STR(blk_finish_plug) },
	{ 0x6c343956, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0xe584e78d, __VMLINUX_SYMBOL_STR(bitmap_cond_end_sync) },
	{ 0x3026722, __VMLINUX_SYMBOL_STR(mempool_alloc) },
	{ 0x892ab8f7, __VMLINUX_SYMBOL_STR(md_write_start) },
	{ 0xc72c034a, __VMLINUX_SYMBOL_STR(kmap) },
	{ 0xdde6322, __VMLINUX_SYMBOL_STR(bdevname) },
	{ 0x12bcd7f3, __VMLINUX_SYMBOL_STR(rdev_clear_badblocks) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x266fa988, __VMLINUX_SYMBOL_STR(md_allow_write) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x72350130, __VMLINUX_SYMBOL_STR(___ratelimit) },
	{ 0x683b00a9, __VMLINUX_SYMBOL_STR(md_set_array_sectors) },
	{ 0x2b4e956e, __VMLINUX_SYMBOL_STR(mempool_create) },
	{ 0x3507a132, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x6b4a28c7, __VMLINUX_SYMBOL_STR(md_wakeup_thread) },
	{ 0xcc5005fe, __VMLINUX_SYMBOL_STR(msleep_interruptible) },
	{ 0x7f645482, __VMLINUX_SYMBOL_STR(kernfs_notify) },
	{ 0x47f03165, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x2232a8a5, __VMLINUX_SYMBOL_STR(mempool_free) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x344b7739, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0xd1fdcbaf, __VMLINUX_SYMBOL_STR(sync_page_io) },
	{ 0x122b1b86, __VMLINUX_SYMBOL_STR(md_unregister_thread) },
	{ 0xc516bf41, __VMLINUX_SYMBOL_STR(bio_alloc_pages) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x4d2285bf, __VMLINUX_SYMBOL_STR(bitmap_startwrite) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x499cb58c, __VMLINUX_SYMBOL_STR(prepare_to_wait) },
	{ 0x2a21703b, __VMLINUX_SYMBOL_STR(md_error) },
	{ 0x22406eb5, __VMLINUX_SYMBOL_STR(put_page) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x4ce44d21, __VMLINUX_SYMBOL_STR(bio_copy_data) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x925520d2, __VMLINUX_SYMBOL_STR(blk_start_plug) },
	{ 0xaedff2e5, __VMLINUX_SYMBOL_STR(blk_queue_max_write_same_sectors) },
	{ 0xe70be165, __VMLINUX_SYMBOL_STR(md_integrity_register) },
	{ 0x329c0ab, __VMLINUX_SYMBOL_STR(register_md_personality) },
	{ 0xa17ed144, __VMLINUX_SYMBOL_STR(bitmap_end_sync) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=md-mod";

