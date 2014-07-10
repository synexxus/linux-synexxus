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
	{ 0x33ba5cd4, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x677ee3a7, __VMLINUX_SYMBOL_STR(video_ioctl2) },
	{ 0x83ea2ea9, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x968a83d8, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0xe5de2fae, __VMLINUX_SYMBOL_STR(vb2_queue_init) },
	{ 0x5b73cf32, __VMLINUX_SYMBOL_STR(vb2_dma_contig_memops) },
	{ 0xb98f7b07, __VMLINUX_SYMBOL_STR(v4l2_m2m_get_vq) },
	{ 0x1d309abe, __VMLINUX_SYMBOL_STR(v4l2_m2m_ctx_init) },
	{ 0x17eb0eee, __VMLINUX_SYMBOL_STR(v4l2_m2m_init) },
	{ 0x1c35e8f0, __VMLINUX_SYMBOL_STR(vb2_dma_contig_init_ctx) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x3a657fb3, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0xbaef4c07, __VMLINUX_SYMBOL_STR(video_device_release) },
	{ 0xd8caf24e, __VMLINUX_SYMBOL_STR(__video_register_device) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xa8106b93, __VMLINUX_SYMBOL_STR(video_device_alloc) },
	{ 0xb840f323, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x4ea87d2a, __VMLINUX_SYMBOL_STR(v4l2_device_register) },
	{ 0xeece4d66, __VMLINUX_SYMBOL_STR(__dma_request_channel) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x47f03165, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x79222a5, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x99e024a6, __VMLINUX_SYMBOL_STR(v4l2_m2m_poll) },
	{ 0x738d9391, __VMLINUX_SYMBOL_STR(v4l2_m2m_mmap) },
	{ 0x457df65b, __VMLINUX_SYMBOL_STR(v4l2_m2m_buf_queue) },
	{ 0xdb069eb2, __VMLINUX_SYMBOL_STR(v4l2_m2m_ctx_release) },
	{ 0xb00b95fc, __VMLINUX_SYMBOL_STR(video_devdata) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x867895cc, __VMLINUX_SYMBOL_STR(v4l2_m2m_reqbufs) },
	{ 0xc787429, __VMLINUX_SYMBOL_STR(v4l2_m2m_querybuf) },
	{ 0xa572cbe1, __VMLINUX_SYMBOL_STR(v4l2_m2m_qbuf) },
	{ 0xaf11a2ff, __VMLINUX_SYMBOL_STR(v4l2_m2m_dqbuf) },
	{ 0xf3c76518, __VMLINUX_SYMBOL_STR(v4l2_m2m_streamon) },
	{ 0xbe8fda76, __VMLINUX_SYMBOL_STR(v4l2_m2m_streamoff) },
	{ 0x47986654, __VMLINUX_SYMBOL_STR(vb2_plane_cookie) },
	{ 0x193ea1bf, __VMLINUX_SYMBOL_STR(v4l2_m2m_next_buf) },
	{ 0x71c6d748, __VMLINUX_SYMBOL_STR(vb2_buffer_done) },
	{ 0xfd23e4b0, __VMLINUX_SYMBOL_STR(v4l2_m2m_buf_remove) },
	{ 0xc4f8dede, __VMLINUX_SYMBOL_STR(v4l2_m2m_job_finish) },
	{ 0x10da615, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x6f9a27f5, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x7aa13692, __VMLINUX_SYMBOL_STR(dma_release_channel) },
	{ 0xe57f0426, __VMLINUX_SYMBOL_STR(vb2_dma_contig_cleanup_ctx) },
	{ 0xf7e1939f, __VMLINUX_SYMBOL_STR(v4l2_device_unregister) },
	{ 0x61d41d0, __VMLINUX_SYMBOL_STR(video_unregister_device) },
	{ 0xc6fca5ad, __VMLINUX_SYMBOL_STR(v4l2_m2m_release) },
	{ 0x43c003ff, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "61179CCBEB895C118BD5448");
