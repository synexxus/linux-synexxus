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
	{ 0xaeeca48c, __VMLINUX_SYMBOL_STR(videobuf_mmap_free) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0x79222a5, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x72792431, __VMLINUX_SYMBOL_STR(v4l2_event_unsubscribe) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xff178f6, __VMLINUX_SYMBOL_STR(__aeabi_idivmod) },
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xf15883e8, __VMLINUX_SYMBOL_STR(dvb_dmx_init) },
	{ 0xe47f06d5, __VMLINUX_SYMBOL_STR(dvb_unregister_adapter) },
	{ 0xe117aa09, __VMLINUX_SYMBOL_STR(videobuf_mmap_mapper) },
	{ 0x3a657fb3, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0xe7413584, __VMLINUX_SYMBOL_STR(v4l2_i2c_new_subdev) },
	{ 0x8a50b865, __VMLINUX_SYMBOL_STR(v4l2_ctrl_log_status) },
	{ 0xbaef4c07, __VMLINUX_SYMBOL_STR(video_device_release) },
	{ 0x547c3741, __VMLINUX_SYMBOL_STR(tveeprom_hauppauge_analog) },
	{ 0x9e6e10a8, __VMLINUX_SYMBOL_STR(dvb_register_frontend) },
	{ 0xf7e1939f, __VMLINUX_SYMBOL_STR(v4l2_device_unregister) },
	{ 0x51a1826e, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_free) },
	{ 0x62e6343e, __VMLINUX_SYMBOL_STR(videobuf_queue_vmalloc_init) },
	{ 0xe1342755, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0xc81adca2, __VMLINUX_SYMBOL_STR(videobuf_streamon) },
	{ 0x910459fc, __VMLINUX_SYMBOL_STR(dvb_unregister_frontend) },
	{ 0xd8caf24e, __VMLINUX_SYMBOL_STR(__video_register_device) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x4a5a0a15, __VMLINUX_SYMBOL_STR(videobuf_iolock) },
	{ 0x6f9a27f5, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xe5915f15, __VMLINUX_SYMBOL_STR(usb_unlink_urb) },
	{ 0x54afe047, __VMLINUX_SYMBOL_STR(dvb_net_release) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xf76655bc, __VMLINUX_SYMBOL_STR(i2c_add_adapter) },
	{ 0x4e7ae259, __VMLINUX_SYMBOL_STR(dvb_frontend_detach) },
	{ 0x4ea87d2a, __VMLINUX_SYMBOL_STR(v4l2_device_register) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xd5f2172f, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0x5e5dd095, __VMLINUX_SYMBOL_STR(v4l2_device_disconnect) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xda2478d0, __VMLINUX_SYMBOL_STR(param_ops_short) },
	{ 0xa8106b93, __VMLINUX_SYMBOL_STR(video_device_alloc) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xe495880d, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x31502053, __VMLINUX_SYMBOL_STR(dvb_dmxdev_release) },
	{ 0x8288f5af, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0xb840f323, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x8b5b37f, __VMLINUX_SYMBOL_STR(videobuf_qbuf) },
	{ 0x61d41d0, __VMLINUX_SYMBOL_STR(video_unregister_device) },
	{ 0xe23b54cb, __VMLINUX_SYMBOL_STR(dvb_net_init) },
	{ 0x7efc89c7, __VMLINUX_SYMBOL_STR(usb_set_interface) },
	{ 0xf5275c3, __VMLINUX_SYMBOL_STR(v4l2_fh_init) },
	{ 0x2f86a366, __VMLINUX_SYMBOL_STR(v4l2_ctrl_subscribe_event) },
	{ 0x502ce0bf, __VMLINUX_SYMBOL_STR(videobuf_querybuf) },
	{ 0xdad8ec5d, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x10da615, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8834396c, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x82e425cc, __VMLINUX_SYMBOL_STR(videobuf_read_stream) },
	{ 0x5d691f9a, __VMLINUX_SYMBOL_STR(tveeprom_read) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x67db1c26, __VMLINUX_SYMBOL_STR(usb_free_coherent) },
	{ 0x6a6ef8a0, __VMLINUX_SYMBOL_STR(dvb_dmx_release) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x868784cb, __VMLINUX_SYMBOL_STR(__symbol_get) },
	{ 0xb76a5eb6, __VMLINUX_SYMBOL_STR(videobuf_stop) },
	{ 0x4e988180, __VMLINUX_SYMBOL_STR(i2c_del_adapter) },
	{ 0x2448324c, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x871015a2, __VMLINUX_SYMBOL_STR(dvb_dmx_swfilter_packets) },
	{ 0xb00b95fc, __VMLINUX_SYMBOL_STR(video_devdata) },
	{ 0x86a4889a, __VMLINUX_SYMBOL_STR(kmalloc_order_trace) },
	{ 0x67aa18be, __VMLINUX_SYMBOL_STR(videobuf_vmalloc_free) },
	{ 0x5409938a, __VMLINUX_SYMBOL_STR(dvb_register_adapter) },
	{ 0x625afb2c, __VMLINUX_SYMBOL_STR(videobuf_to_vmalloc) },
	{ 0x47f03165, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xc155fcf4, __VMLINUX_SYMBOL_STR(i2c_master_recv) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xf54b8e17, __VMLINUX_SYMBOL_STR(videobuf_dqbuf) },
	{ 0x7f2b3ac6, __VMLINUX_SYMBOL_STR(videobuf_queue_is_busy) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x20b2bb2d, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0x86f8cea5, __VMLINUX_SYMBOL_STR(videobuf_reqbufs) },
	{ 0xdd9af733, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_init_class) },
	{ 0xe67f1a0, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xa22e88f1, __VMLINUX_SYMBOL_STR(v4l2_fh_add) },
	{ 0xc975f07d, __VMLINUX_SYMBOL_STR(v4l2_fh_del) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x6e9dd606, __VMLINUX_SYMBOL_STR(__symbol_put) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x407b57cf, __VMLINUX_SYMBOL_STR(usb_alloc_coherent) },
	{ 0x8dec8afb, __VMLINUX_SYMBOL_STR(v4l2_device_put) },
	{ 0x43c003ff, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xd2dd49fa, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x1c483a9, __VMLINUX_SYMBOL_STR(v4l2_get_timestamp) },
	{ 0x677ee3a7, __VMLINUX_SYMBOL_STR(video_ioctl2) },
	{ 0x4151360a, __VMLINUX_SYMBOL_STR(videobuf_poll_stream) },
	{ 0x1acbe134, __VMLINUX_SYMBOL_STR(v4l2_ctrl_poll) },
	{ 0x7be5470a, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0xe8a3aa85, __VMLINUX_SYMBOL_STR(dvb_dmxdev_init) },
	{ 0xce9e8b4, __VMLINUX_SYMBOL_STR(v4l2_fh_exit) },
	{ 0xa7e0b181, __VMLINUX_SYMBOL_STR(videobuf_streamoff) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videobuf-core,tveeprom,videobuf-vmalloc";

MODULE_ALIAS("usb:v2040p7200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7240d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FE9pD620d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7210d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7217d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p721Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p721Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p721Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7280d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FD9p0008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7201d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7211d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7281d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05E1p0480d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p8200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7260d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7213d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7270d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "05C70C245EF10282FCA11B3");
