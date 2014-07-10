#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
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
	{ 0xc42787a8, __VMLINUX_SYMBOL_STR(blk_init_queue) },
	{ 0xee18dea4, __VMLINUX_SYMBOL_STR(alloc_disk) },
	{ 0xb7bc4b6b, __VMLINUX_SYMBOL_STR(blk_cleanup_queue) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x64e67401, __VMLINUX_SYMBOL_STR(mtd_table_mutex) },
	{ 0xf3267f8b, __VMLINUX_SYMBOL_STR(rq_flush_dcache_pages) },
	{ 0x6f9a27f5, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x1b3eaba5, __VMLINUX_SYMBOL_STR(__put_mtd_device) },
	{ 0x78637d49, __VMLINUX_SYMBOL_STR(blk_start_queue) },
	{ 0x7ba5bf26, __VMLINUX_SYMBOL_STR(__get_mtd_device) },
	{ 0xc82da105, __VMLINUX_SYMBOL_STR(sysfs_remove_group) },
	{ 0xd03a5c4e, __VMLINUX_SYMBOL_STR(mutex_trylock) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xb840f323, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xe5dc0d99, __VMLINUX_SYMBOL_STR(sysfs_create_group) },
	{ 0x553448dc, __VMLINUX_SYMBOL_STR(del_gendisk) },
	{ 0x6a940645, __VMLINUX_SYMBOL_STR(register_mtd_user) },
	{ 0xcf0c5954, __VMLINUX_SYMBOL_STR(__mtd_next_device) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x10da615, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x71a50dbc, __VMLINUX_SYMBOL_STR(register_blkdev) },
	{ 0x35c41682, __VMLINUX_SYMBOL_STR(unregister_mtd_user) },
	{ 0xb5a459dc, __VMLINUX_SYMBOL_STR(unregister_blkdev) },
	{ 0x271c2372, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x7f76dd5f, __VMLINUX_SYMBOL_STR(put_disk) },
	{ 0x3507a132, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0xf21465c6, __VMLINUX_SYMBOL_STR(__blk_end_request_cur) },
	{ 0x79b2ba90, __VMLINUX_SYMBOL_STR(blk_fetch_request) },
	{ 0x11ae80f9, __VMLINUX_SYMBOL_STR(__blk_end_request_all) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xfb7dae73, __VMLINUX_SYMBOL_STR(__module_get) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x5d58b685, __VMLINUX_SYMBOL_STR(add_disk) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x1029793f, __VMLINUX_SYMBOL_STR(blk_queue_logical_block_size) },
	{ 0xa9706a70, __VMLINUX_SYMBOL_STR(set_disk_ro) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

