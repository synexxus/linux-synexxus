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
	{ 0x6818a5, __VMLINUX_SYMBOL_STR(kobject_put) },
	{ 0x209fa2e1, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0x50e0f7c1, __VMLINUX_SYMBOL_STR(simple_pin_fs) },
	{ 0xc28b8cde, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x9b388444, __VMLINUX_SYMBOL_STR(get_zeroed_page) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0x22e1ae6f, __VMLINUX_SYMBOL_STR(up_read) },
	{ 0x528c709d, __VMLINUX_SYMBOL_STR(simple_read_from_buffer) },
	{ 0x4b3a363, __VMLINUX_SYMBOL_STR(generic_file_llseek) },
	{ 0x188a3dfb, __VMLINUX_SYMBOL_STR(timespec_trunc) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xae02ecc0, __VMLINUX_SYMBOL_STR(simple_write_end) },
	{ 0x808e9e5b, __VMLINUX_SYMBOL_STR(simple_release_fs) },
	{ 0x34184afe, __VMLINUX_SYMBOL_STR(current_kernel_time) },
	{ 0x5edec570, __VMLINUX_SYMBOL_STR(generic_delete_inode) },
	{ 0x6f5fbb6, __VMLINUX_SYMBOL_STR(dput) },
	{ 0x94e239b1, __VMLINUX_SYMBOL_STR(inc_nlink) },
	{ 0xe1676390, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xac778013, __VMLINUX_SYMBOL_STR(mount_single) },
	{ 0x74e46f71, __VMLINUX_SYMBOL_STR(generic_read_dir) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x455293f6, __VMLINUX_SYMBOL_STR(down_read) },
	{ 0x6be59bed, __VMLINUX_SYMBOL_STR(kobject_create_and_add) },
	{ 0x6824e88a, __VMLINUX_SYMBOL_STR(d_delete) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xdec9849b, __VMLINUX_SYMBOL_STR(kern_path) },
	{ 0xda09b7b2, __VMLINUX_SYMBOL_STR(kill_litter_super) },
	{ 0xc593f2c2, __VMLINUX_SYMBOL_STR(simple_write_begin) },
	{ 0xef2d23fc, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x5b052ee6, __VMLINUX_SYMBOL_STR(d_rehash) },
	{ 0x328a05f1, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x18e67948, __VMLINUX_SYMBOL_STR(bdi_init) },
	{ 0x6f621573, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xfb88016a, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x12670186, __VMLINUX_SYMBOL_STR(simple_readpage) },
	{ 0xddfdb360, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0x6fef2591, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x9f657b12, __VMLINUX_SYMBOL_STR(simple_unlink) },
	{ 0x2dc94045, __VMLINUX_SYMBOL_STR(d_alloc) },
	{ 0x61cc8f85, __VMLINUX_SYMBOL_STR(simple_setattr) },
	{ 0x93fca811, __VMLINUX_SYMBOL_STR(__get_free_pages) },
	{ 0x3ec16c3b, __VMLINUX_SYMBOL_STR(in_group_p) },
	{ 0x3b7a1f40, __VMLINUX_SYMBOL_STR(d_drop) },
	{ 0x6f20960a, __VMLINUX_SYMBOL_STR(full_name_hash) },
	{ 0x8a800f50, __VMLINUX_SYMBOL_STR(path_put) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xbc924747, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0x5ec249aa, __VMLINUX_SYMBOL_STR(register_filesystem) },
	{ 0x7afa89fc, __VMLINUX_SYMBOL_STR(vsnprintf) },
	{ 0x4302d0eb, __VMLINUX_SYMBOL_STR(free_pages) },
	{ 0xe953b21f, __VMLINUX_SYMBOL_STR(get_next_ino) },
	{ 0xdcb83c11, __VMLINUX_SYMBOL_STR(kernel_kobj) },
	{ 0xad4f5861, __VMLINUX_SYMBOL_STR(iput) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x3055562, __VMLINUX_SYMBOL_STR(iunique) },
	{ 0x5fef5c78, __VMLINUX_SYMBOL_STR(generic_readlink) },
	{ 0x26b0a3a7, __VMLINUX_SYMBOL_STR(d_make_root) },
	{ 0xcd95eecb, __VMLINUX_SYMBOL_STR(simple_statfs) },
	{ 0x5f19162d, __VMLINUX_SYMBOL_STR(bdi_destroy) },
	{ 0xbf69d8c8, __VMLINUX_SYMBOL_STR(unregister_filesystem) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x6fe4b280, __VMLINUX_SYMBOL_STR(new_inode) },
	{ 0xfc81553e, __VMLINUX_SYMBOL_STR(d_instantiate) },
	{ 0xf698c68c, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0xec590da0, __VMLINUX_SYMBOL_STR(simple_rmdir) },
	{ 0xce6011fd, __VMLINUX_SYMBOL_STR(__d_drop) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "E7E74769F90D2D98E9DAC6F");
