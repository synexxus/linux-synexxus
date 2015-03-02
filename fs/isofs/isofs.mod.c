#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
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
	{ 0x9cceacf4, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x209fa2e1, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0x97271225, __VMLINUX_SYMBOL_STR(iget_failed) },
	{ 0xc28b8cde, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xb2912ab4, __VMLINUX_SYMBOL_STR(sb_min_blocksize) },
	{ 0x77ecac9f, __VMLINUX_SYMBOL_STR(zlib_inflateEnd) },
	{ 0xe55b1901, __VMLINUX_SYMBOL_STR(__bread) },
	{ 0xecb351de, __VMLINUX_SYMBOL_STR(unload_nls) },
	{ 0x74dc2e0, __VMLINUX_SYMBOL_STR(save_mount_options) },
	{ 0x4b3a363, __VMLINUX_SYMBOL_STR(generic_file_llseek) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x60a13e90, __VMLINUX_SYMBOL_STR(rcu_barrier) },
	{ 0xfa89e512, __VMLINUX_SYMBOL_STR(page_address) },
	{ 0xbad09b8e, __VMLINUX_SYMBOL_STR(iget5_locked) },
	{ 0x580cfcc8, __VMLINUX_SYMBOL_STR(grab_cache_page_nowait) },
	{ 0xacf4d843, __VMLINUX_SYMBOL_STR(match_strdup) },
	{ 0x593a5b9c, __VMLINUX_SYMBOL_STR(ll_rw_block) },
	{ 0xcae232b, __VMLINUX_SYMBOL_STR(utf16s_to_utf8s) },
	{ 0x44e9a829, __VMLINUX_SYMBOL_STR(match_token) },
	{ 0x4e830a3e, __VMLINUX_SYMBOL_STR(strnicmp) },
	{ 0xe1676390, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xc61f636c, __VMLINUX_SYMBOL_STR(mount_bdev) },
	{ 0x85df9b6c, __VMLINUX_SYMBOL_STR(strsep) },
	{ 0xd14890d4, __VMLINUX_SYMBOL_STR(page_symlink_inode_operations) },
	{ 0x74e46f71, __VMLINUX_SYMBOL_STR(generic_read_dir) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xd58ed027, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0x114ad42f, __VMLINUX_SYMBOL_STR(mpage_readpages) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x8f2137c3, __VMLINUX_SYMBOL_STR(mpage_readpage) },
	{ 0x11089ac7, __VMLINUX_SYMBOL_STR(_ctype) },
	{ 0xd627480b, __VMLINUX_SYMBOL_STR(strncat) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xd00b410a, __VMLINUX_SYMBOL_STR(d_obtain_alias) },
	{ 0x322d0ddb, __VMLINUX_SYMBOL_STR(kunmap) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0xce5ac24f, __VMLINUX_SYMBOL_STR(zlib_inflate_workspacesize) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x6f621573, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x4a9fe05f, __VMLINUX_SYMBOL_STR(set_nlink) },
	{ 0xfb88016a, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xe77f363d, __VMLINUX_SYMBOL_STR(__wait_on_buffer) },
	{ 0x5123ffb6, __VMLINUX_SYMBOL_STR(generic_ro_fops) },
	{ 0x4e3567f7, __VMLINUX_SYMBOL_STR(match_int) },
	{ 0xfcb4b365, __VMLINUX_SYMBOL_STR(unlock_page) },
	{ 0x7e2d9c62, __VMLINUX_SYMBOL_STR(__brelse) },
	{ 0xeaceef3, __VMLINUX_SYMBOL_STR(contig_page_data) },
	{ 0x881039d0, __VMLINUX_SYMBOL_STR(zlib_inflate) },
	{ 0x59ed538, __VMLINUX_SYMBOL_STR(inode_init_once) },
	{ 0x6fef2591, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x3b3abecf, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0x6bc3c63e, __VMLINUX_SYMBOL_STR(kmap) },
	{ 0x93fca811, __VMLINUX_SYMBOL_STR(__get_free_pages) },
	{ 0xfe1ee198, __VMLINUX_SYMBOL_STR(load_nls) },
	{ 0x2d68e80f, __VMLINUX_SYMBOL_STR(unlock_new_inode) },
	{ 0x1581e8e9, __VMLINUX_SYMBOL_STR(kill_block_super) },
	{ 0x6f20960a, __VMLINUX_SYMBOL_STR(full_name_hash) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xf5da7fb2, __VMLINUX_SYMBOL_STR(generic_show_options) },
	{ 0xbc924747, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0x5ec249aa, __VMLINUX_SYMBOL_STR(register_filesystem) },
	{ 0x4211c3c1, __VMLINUX_SYMBOL_STR(zlib_inflateInit2) },
	{ 0x4302d0eb, __VMLINUX_SYMBOL_STR(free_pages) },
	{ 0xad4f5861, __VMLINUX_SYMBOL_STR(iput) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xa75312bc, __VMLINUX_SYMBOL_STR(call_rcu_sched) },
	{ 0x50816a6d, __VMLINUX_SYMBOL_STR(load_nls_default) },
	{ 0x66a42ac0, __VMLINUX_SYMBOL_STR(d_splice_alias) },
	{ 0x74a2305c, __VMLINUX_SYMBOL_STR(sb_set_blocksize) },
	{ 0x1d038d82, __VMLINUX_SYMBOL_STR(put_page) },
	{ 0x26b0a3a7, __VMLINUX_SYMBOL_STR(d_make_root) },
	{ 0x6c7e18a5, __VMLINUX_SYMBOL_STR(ioctl_by_bdev) },
	{ 0xbf69d8c8, __VMLINUX_SYMBOL_STR(unregister_filesystem) },
	{ 0x6e99acd7, __VMLINUX_SYMBOL_STR(init_special_inode) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x9057fbeb, __VMLINUX_SYMBOL_STR(__getblk) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x3e245187, __VMLINUX_SYMBOL_STR(flush_dcache_page) },
	{ 0x18c26a3c, __VMLINUX_SYMBOL_STR(generic_block_bmap) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "692F7D7CEEC43EAE9D644C1");
