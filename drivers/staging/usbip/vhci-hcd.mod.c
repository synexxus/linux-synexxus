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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xe8d22f15, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x79222a5, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x5ec50213, __VMLINUX_SYMBOL_STR(usbip_event_happened) },
	{ 0xd02753dc, __VMLINUX_SYMBOL_STR(usbip_header_correct_endian) },
	{ 0xf61e5ac7, __VMLINUX_SYMBOL_STR(kernel_sendmsg) },
	{ 0xc80a98d7, __VMLINUX_SYMBOL_STR(sockfd_lookup) },
	{ 0xbfe5465b, __VMLINUX_SYMBOL_STR(usb_add_hcd) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x6f3442e3, __VMLINUX_SYMBOL_STR(usb_remove_hcd) },
	{ 0x9cf1dc93, __VMLINUX_SYMBOL_STR(usb_create_hcd) },
	{ 0xd68dacf1, __VMLINUX_SYMBOL_STR(usb_hcd_poll_rh_status) },
	{ 0x5c44234a, __VMLINUX_SYMBOL_STR(usbip_alloc_iso_desc_pdu) },
	{ 0xf087137d, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x4b0b22a7, __VMLINUX_SYMBOL_STR(usb_hcd_giveback_urb) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xc82da105, __VMLINUX_SYMBOL_STR(sysfs_remove_group) },
	{ 0x6d29635c, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x968a83d8, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x497cd078, __VMLINUX_SYMBOL_STR(usb_put_hcd) },
	{ 0xd25fe64b, __VMLINUX_SYMBOL_STR(usbip_event_add) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xe1ea0586, __VMLINUX_SYMBOL_STR(usbip_dump_header) },
	{ 0xe384a102, __VMLINUX_SYMBOL_STR(usb_speed_string) },
	{ 0x5b69f81, __VMLINUX_SYMBOL_STR(usb_hcd_link_urb_to_ep) },
	{ 0x46b4b4bf, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x9fbb077b, __VMLINUX_SYMBOL_STR(kthread_stop) },
	{ 0xe5dc0d99, __VMLINUX_SYMBOL_STR(sysfs_create_group) },
	{ 0xfd2074f9, __VMLINUX_SYMBOL_STR(kernel_sock_shutdown) },
	{ 0xd208fe27, __VMLINUX_SYMBOL_STR(usbip_stop_eh) },
	{ 0x685ec16e, __VMLINUX_SYMBOL_STR(dev_attr_usbip_debug) },
	{ 0x75857a1d, __VMLINUX_SYMBOL_STR(platform_device_unregister) },
	{ 0x82e5f1a3, __VMLINUX_SYMBOL_STR(fput) },
	{ 0x8e862f0, __VMLINUX_SYMBOL_STR(usbip_recv_iso) },
	{ 0x390007ec, __VMLINUX_SYMBOL_STR(usbip_pad_iso) },
	{ 0x40178ca1, __VMLINUX_SYMBOL_STR(usb_hcd_check_unlink_urb) },
	{ 0x6dc71b43, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x11321826, __VMLINUX_SYMBOL_STR(usbip_dump_urb) },
	{ 0x65417e0d, __VMLINUX_SYMBOL_STR(platform_device_register) },
	{ 0x7de4c5cf, __VMLINUX_SYMBOL_STR(usb_get_dev) },
	{ 0x2b8f1e1a, __VMLINUX_SYMBOL_STR(usbip_recv) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0x82deee0b, __VMLINUX_SYMBOL_STR(usb_put_dev) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x78eaeeb4, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0x47f03165, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x7c74d300, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xb3f7646e, __VMLINUX_SYMBOL_STR(kthread_should_stop) },
	{ 0x344b7739, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x19a304ba, __VMLINUX_SYMBOL_STR(usb_disabled) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x403128b2, __VMLINUX_SYMBOL_STR(usbip_recv_xbuff) },
	{ 0x19c34ac5, __VMLINUX_SYMBOL_STR(__put_task_struct) },
	{ 0x78b72f44, __VMLINUX_SYMBOL_STR(usbip_debug_flag) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x83ea2ea9, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x3675feac, __VMLINUX_SYMBOL_STR(usb_hcd_unlink_urb_from_ep) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x1bd8b840, __VMLINUX_SYMBOL_STR(usb_hcd_resume_root_hub) },
	{ 0x8f05906, __VMLINUX_SYMBOL_STR(usbip_start_eh) },
	{ 0x43c003ff, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x2b4566fa, __VMLINUX_SYMBOL_STR(usbip_pack_pdu) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbip-core";


MODULE_INFO(srcversion, "C359C8AF222720ACFA41889");
