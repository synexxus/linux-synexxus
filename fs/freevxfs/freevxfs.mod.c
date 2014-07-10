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
	{ 0x4dd09d5, __VMLINUX_SYMBOL_STR(sb_min_blocksize) },
	{ 0x1056a563, __VMLINUX_SYMBOL_STR(__bread) },
	{ 0xcfebce5, __VMLINUX_SYMBOL_STR(generic_file_llseek) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x60a13e90, __VMLINUX_SYMBOL_STR(rcu_barrier) },
	{ 0x8dc07f95, __VMLINUX_SYMBOL_STR(page_address) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x7d699df1, __VMLINUX_SYMBOL_STR(block_read_full_page) },
	{ 0x3f2a0f29, __VMLINUX_SYMBOL_STR(init_user_ns) },
	{ 0x39db205e, __VMLINUX_SYMBOL_STR(mount_bdev) },
	{ 0xe7dbdbd2, __VMLINUX_SYMBOL_STR(page_symlink_inode_operations) },
	{ 0x3fd8666f, __VMLINUX_SYMBOL_STR(generic_read_dir) },
	{ 0x28124e6f, __VMLINUX_SYMBOL_STR(make_kgid) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x93f9dbbe, __VMLINUX_SYMBOL_STR(d_rehash) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x7646d580, __VMLINUX_SYMBOL_STR(kunmap) },
	{ 0x8fc4ff01, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x2dbe2bff, __VMLINUX_SYMBOL_STR(set_nlink) },
	{ 0x62b2c9d9, __VMLINUX_SYMBOL_STR(generic_ro_fops) },
	{ 0x1c77112, __VMLINUX_SYMBOL_STR(unlock_page) },
	{ 0xc89ab799, __VMLINUX_SYMBOL_STR(__brelse) },
	{ 0x78f25a9, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xc72c034a, __VMLINUX_SYMBOL_STR(kmap) },
	{ 0x6bad5a16, __VMLINUX_SYMBOL_STR(truncate_inode_pages_final) },
	{ 0xdaf2fd26, __VMLINUX_SYMBOL_STR(make_kuid) },
	{ 0xb8bb7a94, __VMLINUX_SYMBOL_STR(unlock_new_inode) },
	{ 0xb602e3d0, __VMLINUX_SYMBOL_STR(kill_block_super) },
	{ 0x47f03165, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x565e4259, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0x4849f2ef, __VMLINUX_SYMBOL_STR(register_filesystem) },
	{ 0xe953b21f, __VMLINUX_SYMBOL_STR(get_next_ino) },
	{ 0x9a6e05c4, __VMLINUX_SYMBOL_STR(iput) },
	{ 0xc690d9ad, __VMLINUX_SYMBOL_STR(read_cache_page) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xa75312bc, __VMLINUX_SYMBOL_STR(call_rcu_sched) },
	{ 0xba068adc, __VMLINUX_SYMBOL_STR(sync_filesystem) },
	{ 0xbf3bdf02, __VMLINUX_SYMBOL_STR(sb_set_blocksize) },
	{ 0xbc0f8342, __VMLINUX_SYMBOL_STR(generic_readlink) },
	{ 0x22406eb5, __VMLINUX_SYMBOL_STR(put_page) },
	{ 0x3e04cd87, __VMLINUX_SYMBOL_STR(d_make_root) },
	{ 0xb1ee16b3, __VMLINUX_SYMBOL_STR(unregister_filesystem) },
	{ 0x9aa76ab2, __VMLINUX_SYMBOL_STR(init_special_inode) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xbe2da885, __VMLINUX_SYMBOL_STR(new_inode) },
	{ 0x4de8eeaa, __VMLINUX_SYMBOL_STR(clear_inode) },
	{ 0x7661c898, __VMLINUX_SYMBOL_STR(d_instantiate) },
	{ 0x95bf15f4, __VMLINUX_SYMBOL_STR(flush_dcache_page) },
	{ 0x98b160f2, __VMLINUX_SYMBOL_STR(generic_block_bmap) },
	{ 0xf36e1cda, __VMLINUX_SYMBOL_STR(iget_locked) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

