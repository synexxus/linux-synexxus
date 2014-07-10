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
	{ 0x75948548, __VMLINUX_SYMBOL_STR(pnfs_unregister_layoutdriver) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xccb15a12, __VMLINUX_SYMBOL_STR(pnfs_generic_pg_init_write) },
	{ 0x51546b3, __VMLINUX_SYMBOL_STR(fs_bio_set) },
	{ 0x79222a5, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0xaf5bf6ef, __VMLINUX_SYMBOL_STR(nfs_debug) },
	{ 0x4827558e, __VMLINUX_SYMBOL_STR(bio_alloc_bioset) },
	{ 0x68550d53, __VMLINUX_SYMBOL_STR(page_cache_next_hole) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xaaa14361, __VMLINUX_SYMBOL_STR(nfs_dreq_bytes_left) },
	{ 0x8dc07f95, __VMLINUX_SYMBOL_STR(page_address) },
	{ 0x4c86184b, __VMLINUX_SYMBOL_STR(remove_wait_queue) },
	{ 0xd1222a95, __VMLINUX_SYMBOL_STR(rpc_unlink) },
	{ 0xf452556d, __VMLINUX_SYMBOL_STR(pnfs_ld_write_done) },
	{ 0x8c84c970, __VMLINUX_SYMBOL_STR(__lock_page) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0xe4dfbb85, __VMLINUX_SYMBOL_STR(dput) },
	{ 0x3ca31f35, __VMLINUX_SYMBOL_STR(nfs_net_id) },
	{ 0x759f04a5, __VMLINUX_SYMBOL_STR(nfs4_proc_getdevicelist) },
	{ 0x38a19a07, __VMLINUX_SYMBOL_STR(nfs4_proc_getdeviceinfo) },
	{ 0xd6bbbacf, __VMLINUX_SYMBOL_STR(rpc_mkpipe_data) },
	{ 0xe3b1fe26, __VMLINUX_SYMBOL_STR(rpc_mkpipe_dentry) },
	{ 0x8a210f93, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0xf1945591, __VMLINUX_SYMBOL_STR(xdr_reserve_space) },
	{ 0x662ff795, __VMLINUX_SYMBOL_STR(pnfs_generic_pg_test) },
	{ 0xe932ec1c, __VMLINUX_SYMBOL_STR(end_page_writeback) },
	{ 0xfc3f65a0, __VMLINUX_SYMBOL_STR(rpc_get_sb_net) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xffd5a395, __VMLINUX_SYMBOL_STR(default_wake_function) },
	{ 0x48f68751, __VMLINUX_SYMBOL_STR(kmap_atomic) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xd7ee005e, __VMLINUX_SYMBOL_STR(xdr_init_decode_pages) },
	{ 0x15d27eb4, __VMLINUX_SYMBOL_STR(rpc_queue_upcall) },
	{ 0x665cfc11, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x60fba957, __VMLINUX_SYMBOL_STR(bio_add_page) },
	{ 0xfe7fecb9, __VMLINUX_SYMBOL_STR(find_or_create_page) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xc3fbb46d, __VMLINUX_SYMBOL_STR(nfs_pageio_reset_write_mds) },
	{ 0xed93f29e, __VMLINUX_SYMBOL_STR(__kunmap_atomic) },
	{ 0x6065b4bf, __VMLINUX_SYMBOL_STR(rpc_d_lookup_sb) },
	{ 0xd3bdc3d5, __VMLINUX_SYMBOL_STR(blkdev_get_by_dev) },
	{ 0x2d3fe694, __VMLINUX_SYMBOL_STR(wait_on_page_bit) },
	{ 0x1c77112, __VMLINUX_SYMBOL_STR(unlock_page) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0xe6b27c05, __VMLINUX_SYMBOL_STR(contig_page_data) },
	{ 0xf2481c38, __VMLINUX_SYMBOL_STR(bio_put) },
	{ 0x59e5070d, __VMLINUX_SYMBOL_STR(__do_div64) },
	{ 0x3796a5c2, __VMLINUX_SYMBOL_STR(bh_submit_read) },
	{ 0x170f3ed6, __VMLINUX_SYMBOL_STR(nfs41_maxgetdevinfo_overhead) },
	{ 0x271c2372, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x7f4d13a2, __VMLINUX_SYMBOL_STR(rpc_pipe_generic_upcall) },
	{ 0xb90c9128, __VMLINUX_SYMBOL_STR(submit_bio) },
	{ 0x387e1639, __VMLINUX_SYMBOL_STR(rpc_pipefs_notifier_register) },
	{ 0x6c343956, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0xebd94e1c, __VMLINUX_SYMBOL_STR(rpc_destroy_pipe_data) },
	{ 0xdb38a1da, __VMLINUX_SYMBOL_STR(blkdev_put) },
	{ 0x3b958503, __VMLINUX_SYMBOL_STR(free_buffer_head) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xca872e04, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0x71eec781, __VMLINUX_SYMBOL_STR(rpc_put_sb_net) },
	{ 0x78ae9372, __VMLINUX_SYMBOL_STR(pnfs_generic_pg_readpages) },
	{ 0x47f03165, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x65994f1, __VMLINUX_SYMBOL_STR(xdr_encode_opaque_fixed) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x58332cde, __VMLINUX_SYMBOL_STR(__test_set_page_writeback) },
	{ 0xc7bcbc8d, __VMLINUX_SYMBOL_STR(add_wait_queue) },
	{ 0x845e19e, __VMLINUX_SYMBOL_STR(pnfs_generic_pg_writepages) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xc2b3cd08, __VMLINUX_SYMBOL_STR(pnfs_generic_pg_init_read) },
	{ 0x22406eb5, __VMLINUX_SYMBOL_STR(put_page) },
	{ 0xb51a3724, __VMLINUX_SYMBOL_STR(rpc_pipefs_notifier_unregister) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xf2bc6b4f, __VMLINUX_SYMBOL_STR(xdr_inline_decode) },
	{ 0x7603bc97, __VMLINUX_SYMBOL_STR(find_get_page) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x5f1b2c0c, __VMLINUX_SYMBOL_STR(nfs_pageio_reset_read_mds) },
	{ 0xd28836ff, __VMLINUX_SYMBOL_STR(pnfs_set_lo_fail) },
	{ 0x432e3e47, __VMLINUX_SYMBOL_STR(xdr_set_scratch_buffer) },
	{ 0x95bf15f4, __VMLINUX_SYMBOL_STR(flush_dcache_page) },
	{ 0xe1a16c72, __VMLINUX_SYMBOL_STR(pnfs_ld_read_done) },
	{ 0xb13ec32d, __VMLINUX_SYMBOL_STR(alloc_page_buffers) },
	{ 0xc17c6552, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0x434c6485, __VMLINUX_SYMBOL_STR(pnfs_register_layoutdriver) },
	{ 0x9029dfd4, __VMLINUX_SYMBOL_STR(bh_uptodate_or_lock) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

