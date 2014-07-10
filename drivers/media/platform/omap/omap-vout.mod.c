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
	{ 0x69b6f8d9, __VMLINUX_SYMBOL_STR(omap_set_dma_transfer_params) },
	{ 0x3f47222, __VMLINUX_SYMBOL_STR(platform_driver_probe) },
	{ 0xaeeca48c, __VMLINUX_SYMBOL_STR(videobuf_mmap_free) },
	{ 0xc0a6a8c5, __VMLINUX_SYMBOL_STR(omap_set_dma_dest_burst_mode) },
	{ 0x79222a5, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xf4a7fc6d, __VMLINUX_SYMBOL_STR(omapdss_compat_init) },
	{ 0x22e1ae6f, __VMLINUX_SYMBOL_STR(up_read) },
	{ 0xc9341eea, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x8dc07f95, __VMLINUX_SYMBOL_STR(page_address) },
	{ 0x3a657fb3, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x9e4148be, __VMLINUX_SYMBOL_STR(omap_dss_get_overlay_manager) },
	{ 0xffd2cf99, __VMLINUX_SYMBOL_STR(omap_dss_get_num_overlay_managers) },
	{ 0xbaef4c07, __VMLINUX_SYMBOL_STR(video_device_release) },
	{ 0x5fb99b53, __VMLINUX_SYMBOL_STR(arm_dma_ops) },
	{ 0xf7e1939f, __VMLINUX_SYMBOL_STR(v4l2_device_unregister) },
	{ 0x3530f2e, __VMLINUX_SYMBOL_STR(omap_dss_get_overlay) },
	{ 0x67a12b7f, __VMLINUX_SYMBOL_STR(videobuf_queue_cancel) },
	{ 0xee2bc2d0, __VMLINUX_SYMBOL_STR(omapdss_is_initialized) },
	{ 0x407a3275, __VMLINUX_SYMBOL_STR(omap_start_dma) },
	{ 0xc81adca2, __VMLINUX_SYMBOL_STR(videobuf_streamon) },
	{ 0xd8caf24e, __VMLINUX_SYMBOL_STR(__video_register_device) },
	{ 0x205ec8de, __VMLINUX_SYMBOL_STR(omap_dispc_register_isr) },
	{ 0x33ba5cd4, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x43b5aede, __VMLINUX_SYMBOL_STR(videobuf_queue_dma_contig_init) },
	{ 0x6f9a27f5, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x197dc3b3, __VMLINUX_SYMBOL_STR(omap_set_dma_src_burst_mode) },
	{ 0x87966b9b, __VMLINUX_SYMBOL_STR(omapdss_get_version) },
	{ 0xf6f3cef6, __VMLINUX_SYMBOL_STR(omap_vrfb_setup) },
	{ 0x455293f6, __VMLINUX_SYMBOL_STR(down_read) },
	{ 0xc52da066, __VMLINUX_SYMBOL_STR(omap_set_dma_dest_params) },
	{ 0x4ea87d2a, __VMLINUX_SYMBOL_STR(v4l2_device_register) },
	{ 0x7b1dcfe3, __VMLINUX_SYMBOL_STR(omap_dss_put_device) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xa8106b93, __VMLINUX_SYMBOL_STR(video_device_alloc) },
	{ 0x4a39e5a1, __VMLINUX_SYMBOL_STR(omap_set_dma_src_params) },
	{ 0x46b4b4bf, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xb9a8f03b, __VMLINUX_SYMBOL_STR(omap_stop_dma) },
	{ 0xb840f323, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xc0cf95f9, __VMLINUX_SYMBOL_STR(omap_vrfb_request_ctx) },
	{ 0x8b5b37f, __VMLINUX_SYMBOL_STR(videobuf_qbuf) },
	{ 0x61d41d0, __VMLINUX_SYMBOL_STR(video_unregister_device) },
	{ 0xc3129f5f, __VMLINUX_SYMBOL_STR(omap_dss_get_next_device) },
	{ 0xfacd2e14, __VMLINUX_SYMBOL_STR(pgprot_user) },
	{ 0x502ce0bf, __VMLINUX_SYMBOL_STR(videobuf_querybuf) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x10da615, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x80d81308, __VMLINUX_SYMBOL_STR(omap_vrfb_release_ctx) },
	{ 0xa61e4362, __VMLINUX_SYMBOL_STR(omap_request_dma) },
	{ 0xe37d10ae, __VMLINUX_SYMBOL_STR(omap_dispc_unregister_isr) },
	{ 0x2206e91f, __VMLINUX_SYMBOL_STR(find_vma) },
	{ 0x6dc71b43, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x93fca811, __VMLINUX_SYMBOL_STR(__get_free_pages) },
	{ 0xb00b95fc, __VMLINUX_SYMBOL_STR(video_devdata) },
	{ 0x60cf71dc, __VMLINUX_SYMBOL_STR(get_user_pages) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0xabe27502, __VMLINUX_SYMBOL_STR(v4l2_ctrl_query_fill) },
	{ 0x47f03165, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xf54b8e17, __VMLINUX_SYMBOL_STR(videobuf_dqbuf) },
	{ 0x4302d0eb, __VMLINUX_SYMBOL_STR(free_pages) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x344b7739, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x4c33081d, __VMLINUX_SYMBOL_STR(omapdss_compat_uninit) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xb92f93a7, __VMLINUX_SYMBOL_STR(remap_pfn_range) },
	{ 0x8313937a, __VMLINUX_SYMBOL_STR(omap_dss_get_device) },
	{ 0x8cd8c339, __VMLINUX_SYMBOL_STR(omap_free_dma) },
	{ 0x86f8cea5, __VMLINUX_SYMBOL_STR(videobuf_reqbufs) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x3d9d606d, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x636b3461, __VMLINUX_SYMBOL_STR(omap_dss_get_num_overlays) },
	{ 0x83ea2ea9, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x47c8baf4, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x43c003ff, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x1c483a9, __VMLINUX_SYMBOL_STR(v4l2_get_timestamp) },
	{ 0x677ee3a7, __VMLINUX_SYMBOL_STR(video_ioctl2) },
	{ 0x4151360a, __VMLINUX_SYMBOL_STR(videobuf_poll_stream) },
	{ 0xa48f5b09, __VMLINUX_SYMBOL_STR(omap_dma_set_global_params) },
	{ 0xa7e0b181, __VMLINUX_SYMBOL_STR(videobuf_streamoff) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videobuf-core,videobuf-dma-contig";

