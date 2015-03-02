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
	{ 0xb4184d93, __VMLINUX_SYMBOL_STR(fat_detach) },
	{ 0x405c1144, __VMLINUX_SYMBOL_STR(get_seconds) },
	{ 0x1290e2c6, __VMLINUX_SYMBOL_STR(drop_nlink) },
	{ 0x7f24bca, __VMLINUX_SYMBOL_STR(mark_buffer_dirty_inode) },
	{ 0x726014cd, __VMLINUX_SYMBOL_STR(__mark_inode_dirty) },
	{ 0x349cba85, __VMLINUX_SYMBOL_STR(strchr) },
	{ 0x5a831c03, __VMLINUX_SYMBOL_STR(fat_flush_inodes) },
	{ 0x94e239b1, __VMLINUX_SYMBOL_STR(inc_nlink) },
	{ 0xe1676390, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xc61f636c, __VMLINUX_SYMBOL_STR(mount_bdev) },
	{ 0x4becebea, __VMLINUX_SYMBOL_STR(fat_sync_inode) },
	{ 0x50a076f, __VMLINUX_SYMBOL_STR(fat_add_entries) },
	{ 0xe720ac89, __VMLINUX_SYMBOL_STR(fat_remove_entries) },
	{ 0x2d0285d5, __VMLINUX_SYMBOL_STR(fat_alloc_new_dir) },
	{ 0xeb9f266b, __VMLINUX_SYMBOL_STR(fat_fill_super) },
	{ 0x75589c5e, __VMLINUX_SYMBOL_STR(fat_build_inode) },
	{ 0x800bdb98, __VMLINUX_SYMBOL_STR(fat_attach) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xfb88016a, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x4a9fe05f, __VMLINUX_SYMBOL_STR(set_nlink) },
	{ 0x81707e10, __VMLINUX_SYMBOL_STR(sync_dirty_buffer) },
	{ 0xe8f51041, __VMLINUX_SYMBOL_STR(fat_getattr) },
	{ 0x7e2d9c62, __VMLINUX_SYMBOL_STR(__brelse) },
	{ 0x1581e8e9, __VMLINUX_SYMBOL_STR(kill_block_super) },
	{ 0x6f20960a, __VMLINUX_SYMBOL_STR(full_name_hash) },
	{ 0x8e50e11, __VMLINUX_SYMBOL_STR(fat_scan) },
	{ 0x5ec249aa, __VMLINUX_SYMBOL_STR(register_filesystem) },
	{ 0xe4a02581, __VMLINUX_SYMBOL_STR(__fat_fs_error) },
	{ 0x66a42ac0, __VMLINUX_SYMBOL_STR(d_splice_alias) },
	{ 0xec4cbeab, __VMLINUX_SYMBOL_STR(fat_setattr) },
	{ 0x7e7188db, __VMLINUX_SYMBOL_STR(fat_free_clusters) },
	{ 0xf255eca8, __VMLINUX_SYMBOL_STR(fat_get_dotdot_entry) },
	{ 0xbf69d8c8, __VMLINUX_SYMBOL_STR(unregister_filesystem) },
	{ 0x523d8c58, __VMLINUX_SYMBOL_STR(fat_time_unix2fat) },
	{ 0x7f670bdb, __VMLINUX_SYMBOL_STR(fat_dir_empty) },
	{ 0xfc81553e, __VMLINUX_SYMBOL_STR(d_instantiate) },
	{ 0x259fa20b, __VMLINUX_SYMBOL_STR(clear_nlink) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "880BEF7976D282420615997");
