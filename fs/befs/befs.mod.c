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
	{ 0xc4b4116, __VMLINUX_SYMBOL_STR(iget_failed) },
	{ 0x79222a5, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x4dd09d5, __VMLINUX_SYMBOL_STR(sb_min_blocksize) },
	{ 0x1056a563, __VMLINUX_SYMBOL_STR(__bread) },
	{ 0x321ff45a, __VMLINUX_SYMBOL_STR(unload_nls) },
	{ 0x860435d, __VMLINUX_SYMBOL_STR(save_mount_options) },
	{ 0xcfebce5, __VMLINUX_SYMBOL_STR(generic_file_llseek) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x60a13e90, __VMLINUX_SYMBOL_STR(rcu_barrier) },
	{ 0xacf4d843, __VMLINUX_SYMBOL_STR(match_strdup) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x44e9a829, __VMLINUX_SYMBOL_STR(match_token) },
	{ 0x7d699df1, __VMLINUX_SYMBOL_STR(block_read_full_page) },
	{ 0x3f2a0f29, __VMLINUX_SYMBOL_STR(init_user_ns) },
	{ 0x39db205e, __VMLINUX_SYMBOL_STR(mount_bdev) },
	{ 0x85df9b6c, __VMLINUX_SYMBOL_STR(strsep) },
	{ 0x3fd8666f, __VMLINUX_SYMBOL_STR(generic_read_dir) },
	{ 0x28124e6f, __VMLINUX_SYMBOL_STR(make_kgid) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x93f9dbbe, __VMLINUX_SYMBOL_STR(d_rehash) },
	{ 0x328a05f1, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x8fc4ff01, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x2dbe2bff, __VMLINUX_SYMBOL_STR(set_nlink) },
	{ 0x62b2c9d9, __VMLINUX_SYMBOL_STR(generic_ro_fops) },
	{ 0x4e3567f7, __VMLINUX_SYMBOL_STR(match_int) },
	{ 0xc89ab799, __VMLINUX_SYMBOL_STR(__brelse) },
	{ 0xb2682405, __VMLINUX_SYMBOL_STR(utf8_to_utf32) },
	{ 0x5d6ff74e, __VMLINUX_SYMBOL_STR(inode_init_once) },
	{ 0x78f25a9, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xdaf2fd26, __VMLINUX_SYMBOL_STR(make_kuid) },
	{ 0x282c8678, __VMLINUX_SYMBOL_STR(load_nls) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xb8bb7a94, __VMLINUX_SYMBOL_STR(unlock_new_inode) },
	{ 0xb602e3d0, __VMLINUX_SYMBOL_STR(kill_block_super) },
	{ 0x47f03165, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9d8e96e9, __VMLINUX_SYMBOL_STR(generic_show_options) },
	{ 0x565e4259, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0x4849f2ef, __VMLINUX_SYMBOL_STR(register_filesystem) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xa75312bc, __VMLINUX_SYMBOL_STR(call_rcu_sched) },
	{ 0xbef1a31a, __VMLINUX_SYMBOL_STR(load_nls_default) },
	{ 0xba068adc, __VMLINUX_SYMBOL_STR(sync_filesystem) },
	{ 0xbf3bdf02, __VMLINUX_SYMBOL_STR(sb_set_blocksize) },
	{ 0xbc0f8342, __VMLINUX_SYMBOL_STR(generic_readlink) },
	{ 0x3e04cd87, __VMLINUX_SYMBOL_STR(d_make_root) },
	{ 0xfcc2a43c, __VMLINUX_SYMBOL_STR(utf32_to_utf8) },
	{ 0xb1ee16b3, __VMLINUX_SYMBOL_STR(unregister_filesystem) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xb2126907, __VMLINUX_SYMBOL_STR(kfree_put_link) },
	{ 0x7661c898, __VMLINUX_SYMBOL_STR(d_instantiate) },
	{ 0x98b160f2, __VMLINUX_SYMBOL_STR(generic_block_bmap) },
	{ 0xf36e1cda, __VMLINUX_SYMBOL_STR(iget_locked) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

