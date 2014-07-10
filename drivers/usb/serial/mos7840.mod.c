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
	{ 0x5bcd490b, __VMLINUX_SYMBOL_STR(usb_serial_generic_get_icount) },
	{ 0xeedd15e3, __VMLINUX_SYMBOL_STR(usb_serial_generic_tiocmiwait) },
	{ 0xea090fd8, __VMLINUX_SYMBOL_STR(usb_serial_deregister_drivers) },
	{ 0xead3450, __VMLINUX_SYMBOL_STR(usb_serial_register_drivers) },
	{ 0xd5f2172f, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x3a657fb3, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x9cadb41b, __VMLINUX_SYMBOL_STR(tty_flip_buffer_push) },
	{ 0xd2bd263b, __VMLINUX_SYMBOL_STR(tty_insert_flip_string_fixed_flag) },
	{ 0x8834396c, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0xe1342755, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0x409873e3, __VMLINUX_SYMBOL_STR(tty_termios_baud_rate) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0xd2dd49fa, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x46b4b4bf, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x2448324c, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x7be5470a, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0xf42be263, __VMLINUX_SYMBOL_STR(usb_clear_halt) },
	{ 0x2065da23, __VMLINUX_SYMBOL_STR(tty_port_tty_wakeup) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xf087137d, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x47f03165, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x79222a5, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x43c003ff, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xdad8ec5d, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x7c74d300, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbserial";

MODULE_ALIAS("usb:v9710p7840d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v9710p7820d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v9710p7810d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0856pAC22d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0856pBC00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0856pAC24d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0856pBC01d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0856pAC29d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0856pAC30d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0856pAC31d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0856pAC32d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0856pAC42d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0856pBC02d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0856pAC44d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0856pBC03d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0856pAC24d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0557p2011d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0557p7820d*dc*dsc*dp*ic*isc*ip*in*");
