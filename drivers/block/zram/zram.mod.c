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
	{ 0x79222a5, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xc341ae6d, __VMLINUX_SYMBOL_STR(zs_map_object) },
	{ 0xee18dea4, __VMLINUX_SYMBOL_STR(alloc_disk) },
	{ 0x22e1ae6f, __VMLINUX_SYMBOL_STR(up_read) },
	{ 0xb7bc4b6b, __VMLINUX_SYMBOL_STR(blk_cleanup_queue) },
	{ 0x609426c3, __VMLINUX_SYMBOL_STR(blk_queue_io_opt) },
	{ 0x27864d57, __VMLINUX_SYMBOL_STR(memparse) },
	{ 0xc69b7ee5, __VMLINUX_SYMBOL_STR(zs_destroy_pool) },
	{ 0x2ad1ece4, __VMLINUX_SYMBOL_STR(zs_get_total_size_bytes) },
	{ 0xafd4610, __VMLINUX_SYMBOL_STR(zs_malloc) },
	{ 0xb5198b77, __VMLINUX_SYMBOL_STR(_raw_read_lock) },
	{ 0xf5453613, __VMLINUX_SYMBOL_STR(blk_queue_io_min) },
	{ 0xf087137d, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x6f9a27f5, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x9dfe7307, __VMLINUX_SYMBOL_STR(lz4_decompress_unknownoutputsize) },
	{ 0xc82da105, __VMLINUX_SYMBOL_STR(sysfs_remove_group) },
	{ 0x455293f6, __VMLINUX_SYMBOL_STR(down_read) },
	{ 0x690bc82f, __VMLINUX_SYMBOL_STR(fsync_bdev) },
	{ 0x958df3ac, __VMLINUX_SYMBOL_STR(zs_free) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x48f68751, __VMLINUX_SYMBOL_STR(kmap_atomic) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x7f14d814, __VMLINUX_SYMBOL_STR(blk_alloc_queue) },
	{ 0xb840f323, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xe5dc0d99, __VMLINUX_SYMBOL_STR(sysfs_create_group) },
	{ 0x553448dc, __VMLINUX_SYMBOL_STR(del_gendisk) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xedd49930, __VMLINUX_SYMBOL_STR(zs_create_pool) },
	{ 0x10da615, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xd100acbd, __VMLINUX_SYMBOL_STR(_raw_write_lock) },
	{ 0xed93f29e, __VMLINUX_SYMBOL_STR(__kunmap_atomic) },
	{ 0xcbc5d521, __VMLINUX_SYMBOL_STR(lz4_compress) },
	{ 0x71a50dbc, __VMLINUX_SYMBOL_STR(register_blkdev) },
	{ 0x373db350, __VMLINUX_SYMBOL_STR(kstrtoint) },
	{ 0x83211609, __VMLINUX_SYMBOL_STR(up_write) },
	{ 0xa958ed4, __VMLINUX_SYMBOL_STR(down_write) },
	{ 0x6d6745a9, __VMLINUX_SYMBOL_STR(bio_endio) },
	{ 0xb5a459dc, __VMLINUX_SYMBOL_STR(unregister_blkdev) },
	{ 0x40a9b349, __VMLINUX_SYMBOL_STR(vzalloc) },
	{ 0x4d0d163d, __VMLINUX_SYMBOL_STR(copy_page) },
	{ 0x59992784, __VMLINUX_SYMBOL_STR(blk_queue_make_request) },
	{ 0x93fca811, __VMLINUX_SYMBOL_STR(__get_free_pages) },
	{ 0x741c742d, __VMLINUX_SYMBOL_STR(blk_queue_physical_block_size) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x86a4889a, __VMLINUX_SYMBOL_STR(kmalloc_order_trace) },
	{ 0x7f76dd5f, __VMLINUX_SYMBOL_STR(put_disk) },
	{ 0x5ac15bae, __VMLINUX_SYMBOL_STR(kstrtou16) },
	{ 0x47f03165, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x4302d0eb, __VMLINUX_SYMBOL_STR(free_pages) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x344b7739, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x5d58b685, __VMLINUX_SYMBOL_STR(add_disk) },
	{ 0x56b63670, __VMLINUX_SYMBOL_STR(lzo1x_1_compress) },
	{ 0xf9e73082, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0xf30fda27, __VMLINUX_SYMBOL_STR(lzo1x_decompress_safe) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x222e7ce2, __VMLINUX_SYMBOL_STR(sysfs_streq) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x1029793f, __VMLINUX_SYMBOL_STR(blk_queue_logical_block_size) },
	{ 0x47c8baf4, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x33a705c5, __VMLINUX_SYMBOL_STR(bdget_disk) },
	{ 0x2fb7544, __VMLINUX_SYMBOL_STR(bdput) },
	{ 0x924c46f8, __VMLINUX_SYMBOL_STR(zs_unmap_object) },
	{ 0x7d4e2276, __VMLINUX_SYMBOL_STR(__init_rwsem) },
	{ 0x95bf15f4, __VMLINUX_SYMBOL_STR(flush_dcache_page) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=lz4_compress";

