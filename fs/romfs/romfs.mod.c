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
	{ 0x1056a563, __VMLINUX_SYMBOL_STR(__bread) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x60a13e90, __VMLINUX_SYMBOL_STR(rcu_barrier) },
	{ 0x39db205e, __VMLINUX_SYMBOL_STR(mount_bdev) },
	{ 0xe7dbdbd2, __VMLINUX_SYMBOL_STR(page_symlink_inode_operations) },
	{ 0x3fd8666f, __VMLINUX_SYMBOL_STR(generic_read_dir) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xf251d048, __VMLINUX_SYMBOL_STR(default_llseek) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x93f9dbbe, __VMLINUX_SYMBOL_STR(d_rehash) },
	{ 0xff0903f2, __VMLINUX_SYMBOL_STR(mtd_read) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x7646d580, __VMLINUX_SYMBOL_STR(kunmap) },
	{ 0x8fc4ff01, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x2dbe2bff, __VMLINUX_SYMBOL_STR(set_nlink) },
	{ 0xdd27fa87, __VMLINUX_SYMBOL_STR(memchr) },
	{ 0x62b2c9d9, __VMLINUX_SYMBOL_STR(generic_ro_fops) },
	{ 0x1c77112, __VMLINUX_SYMBOL_STR(unlock_page) },
	{ 0xc89ab799, __VMLINUX_SYMBOL_STR(__brelse) },
	{ 0x5d6ff74e, __VMLINUX_SYMBOL_STR(inode_init_once) },
	{ 0x78f25a9, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xd9ce8f0c, __VMLINUX_SYMBOL_STR(strnlen) },
	{ 0xc72c034a, __VMLINUX_SYMBOL_STR(kmap) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x7d58d116, __VMLINUX_SYMBOL_STR(kill_mtd_super) },
	{ 0xb8bb7a94, __VMLINUX_SYMBOL_STR(unlock_new_inode) },
	{ 0xb602e3d0, __VMLINUX_SYMBOL_STR(kill_block_super) },
	{ 0xb3812390, __VMLINUX_SYMBOL_STR(mount_mtd) },
	{ 0x47f03165, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x565e4259, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0x4849f2ef, __VMLINUX_SYMBOL_STR(register_filesystem) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xa75312bc, __VMLINUX_SYMBOL_STR(call_rcu_sched) },
	{ 0xba068adc, __VMLINUX_SYMBOL_STR(sync_filesystem) },
	{ 0xbf3bdf02, __VMLINUX_SYMBOL_STR(sb_set_blocksize) },
	{ 0x3e04cd87, __VMLINUX_SYMBOL_STR(d_make_root) },
	{ 0xb1ee16b3, __VMLINUX_SYMBOL_STR(unregister_filesystem) },
	{ 0x9aa76ab2, __VMLINUX_SYMBOL_STR(init_special_inode) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x7661c898, __VMLINUX_SYMBOL_STR(d_instantiate) },
	{ 0x95bf15f4, __VMLINUX_SYMBOL_STR(flush_dcache_page) },
	{ 0xf36e1cda, __VMLINUX_SYMBOL_STR(iget_locked) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

