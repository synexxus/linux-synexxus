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
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xbd7eb7a6, __VMLINUX_SYMBOL_STR(device_remove_file) },
	{ 0x79222a5, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x15bdea9b, __VMLINUX_SYMBOL_STR(rc_unregister_device) },
	{ 0x7129e5f8, __VMLINUX_SYMBOL_STR(hex_asc) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0xcfebce5, __VMLINUX_SYMBOL_STR(generic_file_llseek) },
	{ 0x827d769f, __VMLINUX_SYMBOL_STR(hid_open_report) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0x5b5dd944, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xe3e94dd3, __VMLINUX_SYMBOL_STR(framebuffer_release) },
	{ 0x3a657fb3, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x3b7239c1, __VMLINUX_SYMBOL_STR(led_classdev_register) },
	{ 0x187c4b52, __VMLINUX_SYMBOL_STR(single_release) },
	{ 0x14e4fe1b, __VMLINUX_SYMBOL_STR(fb_sys_read) },
	{ 0xb00907d1, __VMLINUX_SYMBOL_STR(backlight_device_register) },
	{ 0x42b0bdd9, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x287c0697, __VMLINUX_SYMBOL_STR(__hid_request) },
	{ 0x6f9a27f5, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x3c68c6a4, __VMLINUX_SYMBOL_STR(debugfs_create_file) },
	{ 0x26e2ca7c, __VMLINUX_SYMBOL_STR(sys_copyarea) },
	{ 0x7aa48271, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0xcc07f119, __VMLINUX_SYMBOL_STR(rc_allocate_device) },
	{ 0x8b109d0f, __VMLINUX_SYMBOL_STR(hid_debug_event) },
	{ 0x5495392, __VMLINUX_SYMBOL_STR(hid_debug) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x971a15a3, __VMLINUX_SYMBOL_STR(input_event) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xeab84fda, __VMLINUX_SYMBOL_STR(rc_free_device) },
	{ 0x46b4b4bf, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xb840f323, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xdbfeb11d, __VMLINUX_SYMBOL_STR(register_framebuffer) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0xe8459d49, __VMLINUX_SYMBOL_STR(debugfs_remove) },
	{ 0x6eceebdd, __VMLINUX_SYMBOL_STR(rc_register_device) },
	{ 0x8db22421, __VMLINUX_SYMBOL_STR(input_set_capability) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x10da615, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x7552aec, __VMLINUX_SYMBOL_STR(hid_disconnect) },
	{ 0xb676aba9, __VMLINUX_SYMBOL_STR(hid_set_field) },
	{ 0x21a16d89, __VMLINUX_SYMBOL_STR(simple_open) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0xd2b6de94, __VMLINUX_SYMBOL_STR(device_create_file) },
	{ 0x647c3043, __VMLINUX_SYMBOL_STR(hid_alloc_report_buf) },
	{ 0x6dc71b43, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xfdd2e26, __VMLINUX_SYMBOL_STR(sys_fillrect) },
	{ 0xe851bb05, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x763df15a, __VMLINUX_SYMBOL_STR(input_register_device) },
	{ 0x62878cf4, __VMLINUX_SYMBOL_STR(sys_imageblit) },
	{ 0x74ce05b8, __VMLINUX_SYMBOL_STR(flush_delayed_work) },
	{ 0x4d048269, __VMLINUX_SYMBOL_STR(fb_sys_write) },
	{ 0x2eb494fe, __VMLINUX_SYMBOL_STR(input_free_device) },
	{ 0x6c6cdd4d, __VMLINUX_SYMBOL_STR(wait_for_completion_interruptible_timeout) },
	{ 0x47f03165, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x959dd28, __VMLINUX_SYMBOL_STR(framebuffer_alloc) },
	{ 0xf8c416e1, __VMLINUX_SYMBOL_STR(fb_deferred_io_cleanup) },
	{ 0xec768c91, __VMLINUX_SYMBOL_STR(fb_deferred_io_init) },
	{ 0x44b98a15, __VMLINUX_SYMBOL_STR(led_classdev_unregister) },
	{ 0x3bd247d7, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x12640585, __VMLINUX_SYMBOL_STR(input_unregister_device) },
	{ 0x22f72302, __VMLINUX_SYMBOL_STR(__hid_register_driver) },
	{ 0xe208a5bb, __VMLINUX_SYMBOL_STR(ir_raw_event_store) },
	{ 0x3d9d606d, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xd4669fad, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xd37fa1bf, __VMLINUX_SYMBOL_STR(hid_unregister_driver) },
	{ 0x496b1571, __VMLINUX_SYMBOL_STR(backlight_device_unregister) },
	{ 0x292b7adc, __VMLINUX_SYMBOL_STR(ir_raw_event_handle) },
	{ 0x43c003ff, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x17a1312a, __VMLINUX_SYMBOL_STR(hid_output_report) },
	{ 0x8156188a, __VMLINUX_SYMBOL_STR(input_allocate_device) },
	{ 0x6289907f, __VMLINUX_SYMBOL_STR(unregister_framebuffer) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("hid:b0003g*v000004D8p0000C002");
MODULE_ALIAS("hid:b0003g*v000004D8p0000F002");
