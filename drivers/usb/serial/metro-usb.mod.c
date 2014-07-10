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
	{ 0xea090fd8, __VMLINUX_SYMBOL_STR(usb_serial_deregister_drivers) },
	{ 0xead3450, __VMLINUX_SYMBOL_STR(usb_serial_register_drivers) },
	{ 0xe1342755, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0xe5915f15, __VMLINUX_SYMBOL_STR(usb_unlink_urb) },
	{ 0xf42be263, __VMLINUX_SYMBOL_STR(usb_clear_halt) },
	{ 0xe5787779, __VMLINUX_SYMBOL_STR(usb_interrupt_msg) },
	{ 0xdad8ec5d, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x3a657fb3, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x47f03165, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x79222a5, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9cadb41b, __VMLINUX_SYMBOL_STR(tty_flip_buffer_push) },
	{ 0xd2bd263b, __VMLINUX_SYMBOL_STR(tty_insert_flip_string_fixed_flag) },
	{ 0x46b4b4bf, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x2448324c, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x7c74d300, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x43c003ff, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x3d9d606d, __VMLINUX_SYMBOL_STR(dev_warn) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbserial";

MODULE_ALIAS("usb:v0C2Ep0720d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C2Ep0700d*dc*dsc*dp*ic*isc*ip*in*");
