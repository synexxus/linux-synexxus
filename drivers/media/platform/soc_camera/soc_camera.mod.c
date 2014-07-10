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
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0x79222a5, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0xf83362bd, __VMLINUX_SYMBOL_STR(__pm_runtime_disable) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xe117aa09, __VMLINUX_SYMBOL_STR(videobuf_mmap_mapper) },
	{ 0x3a657fb3, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x5bf6b4aa, __VMLINUX_SYMBOL_STR(vb2_mmap) },
	{ 0x41fd7a40, __VMLINUX_SYMBOL_STR(__pm_runtime_suspend) },
	{ 0x5f3e3558, __VMLINUX_SYMBOL_STR(soc_mbus_bytes_per_line) },
	{ 0xbaef4c07, __VMLINUX_SYMBOL_STR(video_device_release) },
	{ 0xd3dbfbc4, __VMLINUX_SYMBOL_STR(_find_first_zero_bit_le) },
	{ 0xe9b749ea, __VMLINUX_SYMBOL_STR(v4l2_clk_disable) },
	{ 0xf7e1939f, __VMLINUX_SYMBOL_STR(v4l2_device_unregister) },
	{ 0x51a1826e, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_free) },
	{ 0xf7c106af, __VMLINUX_SYMBOL_STR(vb2_create_bufs) },
	{ 0x2a3aa678, __VMLINUX_SYMBOL_STR(_test_and_clear_bit) },
	{ 0xc81adca2, __VMLINUX_SYMBOL_STR(videobuf_streamon) },
	{ 0xd8caf24e, __VMLINUX_SYMBOL_STR(__video_register_device) },
	{ 0x6f9a27f5, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x98bf483, __VMLINUX_SYMBOL_STR(__pm_runtime_resume) },
	{ 0xee47f1b5, __VMLINUX_SYMBOL_STR(i2c_put_adapter) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x968a83d8, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x4ea87d2a, __VMLINUX_SYMBOL_STR(v4l2_device_register) },
	{ 0x82210a07, __VMLINUX_SYMBOL_STR(devm_regulator_bulk_get) },
	{ 0xbf93dfee, __VMLINUX_SYMBOL_STR(regulator_bulk_enable) },
	{ 0x90b2e7c8, __VMLINUX_SYMBOL_STR(vb2_read) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x820a314c, __VMLINUX_SYMBOL_STR(vb2_prepare_buf) },
	{ 0xa8106b93, __VMLINUX_SYMBOL_STR(video_device_alloc) },
	{ 0x46b4b4bf, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x8288f5af, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0xb840f323, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x8b5b37f, __VMLINUX_SYMBOL_STR(videobuf_qbuf) },
	{ 0x61d41d0, __VMLINUX_SYMBOL_STR(video_unregister_device) },
	{ 0xf2eb9426, __VMLINUX_SYMBOL_STR(platform_device_alloc) },
	{ 0x897dfd24, __VMLINUX_SYMBOL_STR(v4l2_async_notifier_register) },
	{ 0xa1d80a0c, __VMLINUX_SYMBOL_STR(platform_device_add) },
	{ 0x502ce0bf, __VMLINUX_SYMBOL_STR(videobuf_querybuf) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x10da615, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xc6e7a03f, __VMLINUX_SYMBOL_STR(vb2_qbuf) },
	{ 0x75857a1d, __VMLINUX_SYMBOL_STR(platform_device_unregister) },
	{ 0xca9ed50c, __VMLINUX_SYMBOL_STR(i2c_unregister_device) },
	{ 0x2c02e7e8, __VMLINUX_SYMBOL_STR(vb2_querybuf) },
	{ 0x6fd3b08, __VMLINUX_SYMBOL_STR(v4l2_clk_unregister) },
	{ 0x240482a1, __VMLINUX_SYMBOL_STR(v4l2_device_unregister_subdev) },
	{ 0x6fc15cde, __VMLINUX_SYMBOL_STR(soc_mbus_get_fmtdesc) },
	{ 0x271c2372, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x6dc71b43, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x2baf24ed, __VMLINUX_SYMBOL_STR(vb2_streamon) },
	{ 0x99c24c7b, __VMLINUX_SYMBOL_STR(regulator_bulk_disable) },
	{ 0x7662a76, __VMLINUX_SYMBOL_STR(pm_runtime_enable) },
	{ 0xa9a285d, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0xb00b95fc, __VMLINUX_SYMBOL_STR(video_devdata) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x64b1672e, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_setup) },
	{ 0xd96f81f8, __VMLINUX_SYMBOL_STR(vb2_reqbufs) },
	{ 0x1bd4f641, __VMLINUX_SYMBOL_STR(v4l2_clk_enable) },
	{ 0x35f23b95, __VMLINUX_SYMBOL_STR(platform_device_add_data) },
	{ 0x47f03165, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x7c74d300, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xf54b8e17, __VMLINUX_SYMBOL_STR(videobuf_dqbuf) },
	{ 0x4e3e6b7a, __VMLINUX_SYMBOL_STR(get_device) },
	{ 0x4f8a7a7e, __VMLINUX_SYMBOL_STR(vb2_dqbuf) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x86f8cea5, __VMLINUX_SYMBOL_STR(videobuf_reqbufs) },
	{ 0xdd9af733, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_init_class) },
	{ 0x9c23a207, __VMLINUX_SYMBOL_STR(v4l2_clk_register) },
	{ 0xfeeb7d0c, __VMLINUX_SYMBOL_STR(v4l2_i2c_new_subdev_board) },
	{ 0x3d9d606d, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x19be89d5, __VMLINUX_SYMBOL_STR(v4l2_ctrl_add_handler) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x2863728e, __VMLINUX_SYMBOL_STR(soc_mbus_image_size) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x83ea2ea9, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x30d0db6d, __VMLINUX_SYMBOL_STR(i2c_get_adapter) },
	{ 0x564906d2, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x251c93fa, __VMLINUX_SYMBOL_STR(vb2_queue_release) },
	{ 0x64636a35, __VMLINUX_SYMBOL_STR(vb2_streamoff) },
	{ 0x43c003ff, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x5dc9107e, __VMLINUX_SYMBOL_STR(v4l2_async_notifier_unregister) },
	{ 0x677ee3a7, __VMLINUX_SYMBOL_STR(video_ioctl2) },
	{ 0xc17c6552, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0xd556940f, __VMLINUX_SYMBOL_STR(platform_device_put) },
	{ 0xa7e0b181, __VMLINUX_SYMBOL_STR(videobuf_streamoff) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videobuf-core,soc_mediabus";

