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
	{ 0xbc947939, __VMLINUX_SYMBOL_STR(kmap_to_page) },
	{ 0x79222a5, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf88c3301, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0xc9341eea, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xb4ecf90d, __VMLINUX_SYMBOL_STR(p9_client_cb) },
	{ 0x592344ba, __VMLINUX_SYMBOL_STR(v9fs_unregister_trans) },
	{ 0xaad0bf8a, __VMLINUX_SYMBOL_STR(p9_payload_gup) },
	{ 0x51764329, __VMLINUX_SYMBOL_STR(kobject_uevent) },
	{ 0x597b9d43, __VMLINUX_SYMBOL_STR(virtio_check_driver_offered_feature) },
	{ 0x15a3cc6, __VMLINUX_SYMBOL_STR(v9fs_register_trans) },
	{ 0x6f9a27f5, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xcd65ee4b, __VMLINUX_SYMBOL_STR(virtqueue_kick) },
	{ 0xa9dce2fc, __VMLINUX_SYMBOL_STR(virtqueue_get_buf) },
	{ 0x1264714f, __VMLINUX_SYMBOL_STR(p9_tag_lookup) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x18db0d02, __VMLINUX_SYMBOL_STR(virtqueue_add_sgs) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x10da615, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xd235483a, __VMLINUX_SYMBOL_STR(p9_release_pages) },
	{ 0x977a0030, __VMLINUX_SYMBOL_STR(p9_nr_pages) },
	{ 0xc5399cf2, __VMLINUX_SYMBOL_STR(unregister_virtio_driver) },
	{ 0xae2d363d, __VMLINUX_SYMBOL_STR(sysfs_remove_file_ns) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x8a7d1c31, __VMLINUX_SYMBOL_STR(high_memory) },
	{ 0x47f03165, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x344b7739, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x42e4dde5, __VMLINUX_SYMBOL_STR(vmalloc_to_page) },
	{ 0x1f4103bb, __VMLINUX_SYMBOL_STR(sysfs_create_file_ns) },
	{ 0x27fa66e1, __VMLINUX_SYMBOL_STR(nr_free_buffer_pages) },
	{ 0x609a8b0a, __VMLINUX_SYMBOL_STR(register_virtio_driver) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=9pnet";

MODULE_ALIAS("virtio:d00000009v*");
