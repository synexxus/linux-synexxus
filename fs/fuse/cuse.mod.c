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
	{ 0x4c249ea6, __VMLINUX_SYMBOL_STR(fuse_file_poll) },
	{ 0xd181e812, __VMLINUX_SYMBOL_STR(noop_llseek) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xac0aef42, __VMLINUX_SYMBOL_STR(misc_deregister) },
	{ 0x78a82936, __VMLINUX_SYMBOL_STR(class_destroy) },
	{ 0x31fb5227, __VMLINUX_SYMBOL_STR(misc_register) },
	{ 0x65f6a2cc, __VMLINUX_SYMBOL_STR(__class_create) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x6ab2a58, __VMLINUX_SYMBOL_STR(fuse_dev_operations) },
	{ 0xe6b27c05, __VMLINUX_SYMBOL_STR(contig_page_data) },
	{ 0xca7b2efe, __VMLINUX_SYMBOL_STR(fuse_put_request) },
	{ 0xc13c14ee, __VMLINUX_SYMBOL_STR(fuse_request_send_background) },
	{ 0x8a210f93, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0x7a65b5ed, __VMLINUX_SYMBOL_STR(fuse_get_req_for_background) },
	{ 0x48e57c50, __VMLINUX_SYMBOL_STR(fuse_conn_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x51764329, __VMLINUX_SYMBOL_STR(kobject_uevent) },
	{ 0xe32f8e9b, __VMLINUX_SYMBOL_STR(cdev_add) },
	{ 0xe931feb5, __VMLINUX_SYMBOL_STR(cdev_alloc) },
	{ 0xb36ccdfd, __VMLINUX_SYMBOL_STR(device_add) },
	{ 0x29537c9e, __VMLINUX_SYMBOL_STR(alloc_chrdev_region) },
	{ 0xa9a285d, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0xe9b3a371, __VMLINUX_SYMBOL_STR(dev_set_name) },
	{ 0x3a657fb3, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x5e4aae6e, __VMLINUX_SYMBOL_STR(device_initialize) },
	{ 0x47f03165, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x79222a5, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd8e484f0, __VMLINUX_SYMBOL_STR(register_chrdev_region) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x77bc13a0, __VMLINUX_SYMBOL_STR(strim) },
	{ 0x85df9b6c, __VMLINUX_SYMBOL_STR(strsep) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x8dc07f95, __VMLINUX_SYMBOL_STR(page_address) },
	{ 0x6c343956, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0x4d048a65, __VMLINUX_SYMBOL_STR(fuse_conn_kill) },
	{ 0xd2d05ad0, __VMLINUX_SYMBOL_STR(fuse_direct_io) },
	{ 0x1a67c57b, __VMLINUX_SYMBOL_STR(fuse_do_ioctl) },
	{ 0x9d110681, __VMLINUX_SYMBOL_STR(fuse_do_open) },
	{ 0xa5392ad2, __VMLINUX_SYMBOL_STR(fuse_conn_get) },
	{ 0xb1ff3fd, __VMLINUX_SYMBOL_STR(fuse_conn_put) },
	{ 0x316d3ad, __VMLINUX_SYMBOL_STR(fuse_sync_release) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9469482, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0x95820ab4, __VMLINUX_SYMBOL_STR(fuse_dev_release) },
	{ 0x8418ac76, __VMLINUX_SYMBOL_STR(cdev_del) },
	{ 0x7485e15e, __VMLINUX_SYMBOL_STR(unregister_chrdev_region) },
	{ 0xc4aa6175, __VMLINUX_SYMBOL_STR(device_unregister) },
	{ 0x6f9a27f5, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x10da615, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x20a6abaf, __VMLINUX_SYMBOL_STR(fuse_abort_conn) },
	{ 0x43c003ff, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

