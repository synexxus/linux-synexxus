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
	{ 0x9026436b, __VMLINUX_SYMBOL_STR(vb2_ioctl_reqbufs) },
	{ 0x3bbc70ea, __VMLINUX_SYMBOL_STR(em28xx_read_reg) },
	{ 0x79222a5, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x72792431, __VMLINUX_SYMBOL_STR(v4l2_event_unsubscribe) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x3a657fb3, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0xe7413584, __VMLINUX_SYMBOL_STR(v4l2_i2c_new_subdev) },
	{ 0xcd75ef7f, __VMLINUX_SYMBOL_STR(em28xx_free_device) },
	{ 0x614dd5a, __VMLINUX_SYMBOL_STR(v4l2_video_std_frame_period) },
	{ 0x1a427bf7, __VMLINUX_SYMBOL_STR(em28xx_write_regs) },
	{ 0xcb2061da, __VMLINUX_SYMBOL_STR(v4l2_ctrl_notify) },
	{ 0xdb09ec9e, __VMLINUX_SYMBOL_STR(em28xx_setup_xc3028) },
	{ 0xbaef4c07, __VMLINUX_SYMBOL_STR(video_device_release) },
	{ 0xf7e1939f, __VMLINUX_SYMBOL_STR(v4l2_device_unregister) },
	{ 0x51a1826e, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_free) },
	{ 0x7fc8652c, __VMLINUX_SYMBOL_STR(em28xx_tuner_callback) },
	{ 0xf2a353ac, __VMLINUX_SYMBOL_STR(v4l2_i2c_tuner_addrs) },
	{ 0x2e30fe46, __VMLINUX_SYMBOL_STR(v4l2_ctrl_new_std) },
	{ 0xbf1675da, __VMLINUX_SYMBOL_STR(vb2_fop_poll) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0xdaafe7c7, __VMLINUX_SYMBOL_STR(vb2_ioctl_streamon) },
	{ 0xbc8f6c0f, __VMLINUX_SYMBOL_STR(vb2_ops_wait_prepare) },
	{ 0x76de067c, __VMLINUX_SYMBOL_STR(em28xx_init_usb_xfer) },
	{ 0xd8caf24e, __VMLINUX_SYMBOL_STR(__video_register_device) },
	{ 0x6f9a27f5, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xc6dfb03c, __VMLINUX_SYMBOL_STR(em28xx_register_extension) },
	{ 0x4ea87d2a, __VMLINUX_SYMBOL_STR(v4l2_device_register) },
	{ 0x4170fab4, __VMLINUX_SYMBOL_STR(vb2_fop_read) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5e5dd095, __VMLINUX_SYMBOL_STR(v4l2_device_disconnect) },
	{ 0xe4e5dcc0, __VMLINUX_SYMBOL_STR(vb2_vmalloc_memops) },
	{ 0xa8106b93, __VMLINUX_SYMBOL_STR(video_device_alloc) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x2755861c, __VMLINUX_SYMBOL_STR(vb2_fop_mmap) },
	{ 0x68ad1445, __VMLINUX_SYMBOL_STR(vb2_ioctl_qbuf) },
	{ 0x8288f5af, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x61d41d0, __VMLINUX_SYMBOL_STR(video_unregister_device) },
	{ 0x7efc89c7, __VMLINUX_SYMBOL_STR(usb_set_interface) },
	{ 0xf5275c3, __VMLINUX_SYMBOL_STR(v4l2_fh_init) },
	{ 0x2f86a366, __VMLINUX_SYMBOL_STR(v4l2_ctrl_subscribe_event) },
	{ 0x63e42b4, __VMLINUX_SYMBOL_STR(vb2_plane_vaddr) },
	{ 0x71c6d748, __VMLINUX_SYMBOL_STR(vb2_buffer_done) },
	{ 0xa0df404, __VMLINUX_SYMBOL_STR(em28xx_unregister_extension) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x13bd961e, __VMLINUX_SYMBOL_STR(em28xx_write_reg_bits) },
	{ 0x10da615, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8d1f9b3b, __VMLINUX_SYMBOL_STR(vb2_ioctl_prepare_buf) },
	{ 0xea80312a, __VMLINUX_SYMBOL_STR(em28xx_uninit_usb_xfer) },
	{ 0x7b46274f, __VMLINUX_SYMBOL_STR(vb2_ioctl_create_bufs) },
	{ 0xf75411a5, __VMLINUX_SYMBOL_STR(vb2_ioctl_dqbuf) },
	{ 0x123959a1, __VMLINUX_SYMBOL_STR(v4l2_type_names) },
	{ 0xa129c828, __VMLINUX_SYMBOL_STR(v4l2_ctrl_find) },
	{ 0xf5ef842e, __VMLINUX_SYMBOL_STR(v4l_bound_align_image) },
	{ 0xc975469b, __VMLINUX_SYMBOL_STR(vb2_fop_release) },
	{ 0xb00b95fc, __VMLINUX_SYMBOL_STR(video_devdata) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xd9256010, __VMLINUX_SYMBOL_STR(em28xx_audio_setup) },
	{ 0xa66722a, __VMLINUX_SYMBOL_STR(v4l2_clk_unregister_fixed) },
	{ 0x64b1672e, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_setup) },
	{ 0x87a8b51d, __VMLINUX_SYMBOL_STR(v4l2_i2c_subdev_addr) },
	{ 0x47f03165, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x2414278e, __VMLINUX_SYMBOL_STR(em28xx_set_mode) },
	{ 0x3a37c540, __VMLINUX_SYMBOL_STR(vb2_ioctl_querybuf) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x20b2bb2d, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0xdd9af733, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_init_class) },
	{ 0x402baa86, __VMLINUX_SYMBOL_STR(vb2_ops_wait_finish) },
	{ 0xa22e88f1, __VMLINUX_SYMBOL_STR(v4l2_fh_add) },
	{ 0xd248d26, __VMLINUX_SYMBOL_STR(em28xx_stop_urbs) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xdc68d156, __VMLINUX_SYMBOL_STR(em28xx_write_reg) },
	{ 0x9eb72ba7, __VMLINUX_SYMBOL_STR(em28xx_audio_analog_set) },
	{ 0xe4e9dc01, __VMLINUX_SYMBOL_STR(vb2_ioctl_streamoff) },
	{ 0x43c003ff, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x1c483a9, __VMLINUX_SYMBOL_STR(v4l2_get_timestamp) },
	{ 0x677ee3a7, __VMLINUX_SYMBOL_STR(video_ioctl2) },
	{ 0x6d578f78, __VMLINUX_SYMBOL_STR(em28xx_boards) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0xbb30d247, __VMLINUX_SYMBOL_STR(em28xx_init_camera) },
	{ 0xe5de2fae, __VMLINUX_SYMBOL_STR(vb2_queue_init) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=em28xx,videobuf2-vmalloc";


MODULE_INFO(srcversion, "7AE1EC7342FE275FB32D1E8");
