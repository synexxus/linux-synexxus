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
	{ 0x21a16d89, __VMLINUX_SYMBOL_STR(simple_open) },
	{ 0xc0ffa495, __VMLINUX_SYMBOL_STR(no_llseek) },
	{ 0x78a82936, __VMLINUX_SYMBOL_STR(class_destroy) },
	{ 0xb984f638, __VMLINUX_SYMBOL_STR(debugfs_remove_recursive) },
	{ 0xc5399cf2, __VMLINUX_SYMBOL_STR(unregister_virtio_driver) },
	{ 0x609a8b0a, __VMLINUX_SYMBOL_STR(register_virtio_driver) },
	{ 0x6a797d7c, __VMLINUX_SYMBOL_STR(debugfs_create_dir) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x65f6a2cc, __VMLINUX_SYMBOL_STR(__class_create) },
	{ 0x2f3f73a, __VMLINUX_SYMBOL_STR(hvc_instantiate) },
	{ 0x51764329, __VMLINUX_SYMBOL_STR(kobject_uevent) },
	{ 0xe5dc0d99, __VMLINUX_SYMBOL_STR(sysfs_create_group) },
	{ 0x328a05f1, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x7c74d300, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xd4669fad, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x9833bc0c, __VMLINUX_SYMBOL_STR(hvc_kick) },
	{ 0xa764bfde, __VMLINUX_SYMBOL_STR(hvc_poll) },
	{ 0xe8459d49, __VMLINUX_SYMBOL_STR(debugfs_remove) },
	{ 0xc82da105, __VMLINUX_SYMBOL_STR(sysfs_remove_group) },
	{ 0x4c689a90, __VMLINUX_SYMBOL_STR(hvc_remove) },
	{ 0x73f9b2e7, __VMLINUX_SYMBOL_STR(kill_fasync) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xd7fd90d9, __VMLINUX_SYMBOL_STR(nonseekable_open) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xebf54ef5, __VMLINUX_SYMBOL_STR(__splice_from_pipe) },
	{ 0xf88c3301, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0xea76f75e, __VMLINUX_SYMBOL_STR(pipe_unlock) },
	{ 0xb1e7874d, __VMLINUX_SYMBOL_STR(pipe_lock) },
	{ 0x1fab5905, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0x6bc3fbc0, __VMLINUX_SYMBOL_STR(__unregister_chrdev) },
	{ 0xe074807d, __VMLINUX_SYMBOL_STR(__register_chrdev) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x8418ac76, __VMLINUX_SYMBOL_STR(cdev_del) },
	{ 0xbdf3369e, __VMLINUX_SYMBOL_STR(device_destroy) },
	{ 0x3c68c6a4, __VMLINUX_SYMBOL_STR(debugfs_create_file) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x709e5548, __VMLINUX_SYMBOL_STR(device_create) },
	{ 0xe32f8e9b, __VMLINUX_SYMBOL_STR(cdev_add) },
	{ 0xe931feb5, __VMLINUX_SYMBOL_STR(cdev_alloc) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x4e3e6b7a, __VMLINUX_SYMBOL_STR(get_device) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0xb27fda01, __VMLINUX_SYMBOL_STR(virtqueue_disable_cb) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0x4482cdb, __VMLINUX_SYMBOL_STR(__refrigerator) },
	{ 0xc56a9da1, __VMLINUX_SYMBOL_STR(freezing_slow_path) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x344b7739, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x7ab88a45, __VMLINUX_SYMBOL_STR(system_freezing_cnt) },
	{ 0x46b4b4bf, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x64a2c058, __VMLINUX_SYMBOL_STR(hvc_alloc) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xf5ce2706, __VMLINUX_SYMBOL_STR(virtqueue_detach_unused_buf) },
	{ 0x3507a132, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x3d9d606d, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x8666606b, __VMLINUX_SYMBOL_STR(__hvc_resize) },
	{ 0x597b9d43, __VMLINUX_SYMBOL_STR(virtio_check_driver_offered_feature) },
	{ 0xfba6a5f0, __VMLINUX_SYMBOL_STR(fasync_helper) },
	{ 0xe6b27c05, __VMLINUX_SYMBOL_STR(contig_page_data) },
	{ 0xbbe8dd5d, __VMLINUX_SYMBOL_STR(__get_page_tail) },
	{ 0xed93f29e, __VMLINUX_SYMBOL_STR(__kunmap_atomic) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x8dc07f95, __VMLINUX_SYMBOL_STR(page_address) },
	{ 0x48f68751, __VMLINUX_SYMBOL_STR(kmap_atomic) },
	{ 0x8a210f93, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0x1c77112, __VMLINUX_SYMBOL_STR(unlock_page) },
	{ 0x528c709d, __VMLINUX_SYMBOL_STR(simple_read_from_buffer) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x47f03165, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x79222a5, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x43c003ff, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x8bc98970, __VMLINUX_SYMBOL_STR(virtqueue_add_inbuf) },
	{ 0xefdd2345, __VMLINUX_SYMBOL_STR(sg_init_one) },
	{ 0x1cbd59d9, __VMLINUX_SYMBOL_STR(virtqueue_is_broken) },
	{ 0xcd65ee4b, __VMLINUX_SYMBOL_STR(virtqueue_kick) },
	{ 0xc91f50f1, __VMLINUX_SYMBOL_STR(virtqueue_add_outbuf) },
	{ 0xa9dce2fc, __VMLINUX_SYMBOL_STR(virtqueue_get_buf) },
	{ 0xa9a285d, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0x5fb99b53, __VMLINUX_SYMBOL_STR(arm_dma_ops) },
	{ 0x22406eb5, __VMLINUX_SYMBOL_STR(put_page) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("virtio:d00000003v*");
