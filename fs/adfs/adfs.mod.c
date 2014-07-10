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
	{ 0x11960b55, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0x79222a5, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x7129e5f8, __VMLINUX_SYMBOL_STR(hex_asc) },
	{ 0x1056a563, __VMLINUX_SYMBOL_STR(__bread) },
	{ 0xcfebce5, __VMLINUX_SYMBOL_STR(generic_file_llseek) },
	{ 0x3fd2b157, __VMLINUX_SYMBOL_STR(__mark_inode_dirty) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x60a13e90, __VMLINUX_SYMBOL_STR(rcu_barrier) },
	{ 0x27f15ec9, __VMLINUX_SYMBOL_STR(from_kuid_munged) },
	{ 0x815b5dd4, __VMLINUX_SYMBOL_STR(match_octal) },
	{ 0x9469482, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0x34184afe, __VMLINUX_SYMBOL_STR(current_kernel_time) },
	{ 0xb5198b77, __VMLINUX_SYMBOL_STR(_raw_read_lock) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x63e5d5bd, __VMLINUX_SYMBOL_STR(generic_file_aio_read) },
	{ 0x42b0bdd9, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x44e9a829, __VMLINUX_SYMBOL_STR(match_token) },
	{ 0x7d699df1, __VMLINUX_SYMBOL_STR(block_read_full_page) },
	{ 0x3f2a0f29, __VMLINUX_SYMBOL_STR(init_user_ns) },
	{ 0x39db205e, __VMLINUX_SYMBOL_STR(mount_bdev) },
	{ 0x85df9b6c, __VMLINUX_SYMBOL_STR(strsep) },
	{ 0x3fd8666f, __VMLINUX_SYMBOL_STR(generic_read_dir) },
	{ 0xf4c91ed, __VMLINUX_SYMBOL_STR(ns_to_timespec) },
	{ 0x587c7e08, __VMLINUX_SYMBOL_STR(generic_file_aio_write) },
	{ 0x3134ee44, __VMLINUX_SYMBOL_STR(truncate_setsize) },
	{ 0x16a2a1ba, __VMLINUX_SYMBOL_STR(from_kgid_munged) },
	{ 0x28124e6f, __VMLINUX_SYMBOL_STR(make_kgid) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x2216975b, __VMLINUX_SYMBOL_STR(__insert_inode_hash) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x93f9dbbe, __VMLINUX_SYMBOL_STR(d_rehash) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x8fc4ff01, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x2dbe2bff, __VMLINUX_SYMBOL_STR(set_nlink) },
	{ 0x626e0beb, __VMLINUX_SYMBOL_STR(sync_dirty_buffer) },
	{ 0x13ff315f, __VMLINUX_SYMBOL_STR(truncate_pagecache) },
	{ 0x4e3567f7, __VMLINUX_SYMBOL_STR(match_int) },
	{ 0xc89ab799, __VMLINUX_SYMBOL_STR(__brelse) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x5d6ff74e, __VMLINUX_SYMBOL_STR(inode_init_once) },
	{ 0x78f25a9, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x9e813231, __VMLINUX_SYMBOL_STR(generic_file_mmap) },
	{ 0x1bd3a0eb, __VMLINUX_SYMBOL_STR(block_write_full_page) },
	{ 0xdaf2fd26, __VMLINUX_SYMBOL_STR(make_kuid) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x58df5de4, __VMLINUX_SYMBOL_STR(generic_write_end) },
	{ 0xbfcfa370, __VMLINUX_SYMBOL_STR(do_sync_read) },
	{ 0xb602e3d0, __VMLINUX_SYMBOL_STR(kill_block_super) },
	{ 0x1e4156a8, __VMLINUX_SYMBOL_STR(inode_change_ok) },
	{ 0x47f03165, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x565e4259, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0x4849f2ef, __VMLINUX_SYMBOL_STR(register_filesystem) },
	{ 0x7afa89fc, __VMLINUX_SYMBOL_STR(vsnprintf) },
	{ 0xe6b73dbe, __VMLINUX_SYMBOL_STR(cont_write_begin) },
	{ 0xe24f7748, __VMLINUX_SYMBOL_STR(generic_file_fsync) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69974032, __VMLINUX_SYMBOL_STR(do_sync_write) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xa75312bc, __VMLINUX_SYMBOL_STR(call_rcu_sched) },
	{ 0xba068adc, __VMLINUX_SYMBOL_STR(sync_filesystem) },
	{ 0xbf3bdf02, __VMLINUX_SYMBOL_STR(sb_set_blocksize) },
	{ 0x3e04cd87, __VMLINUX_SYMBOL_STR(d_make_root) },
	{ 0x2f70176, __VMLINUX_SYMBOL_STR(mark_buffer_dirty) },
	{ 0xb1ee16b3, __VMLINUX_SYMBOL_STR(unregister_filesystem) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xbe2da885, __VMLINUX_SYMBOL_STR(new_inode) },
	{ 0x3b521640, __VMLINUX_SYMBOL_STR(generic_file_splice_read) },
	{ 0x7661c898, __VMLINUX_SYMBOL_STR(d_instantiate) },
	{ 0x98b160f2, __VMLINUX_SYMBOL_STR(generic_block_bmap) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

