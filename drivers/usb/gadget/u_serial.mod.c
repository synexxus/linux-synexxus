#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
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
	{ 0x9cceacf4, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xc28b8cde, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xc8b57c27, __VMLINUX_SYMBOL_STR(autoremove_wake_function) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x74b5ede4, __VMLINUX_SYMBOL_STR(tty_register_driver) },
	{ 0xe1676390, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x61cf505f, __VMLINUX_SYMBOL_STR(put_tty_driver) },
	{ 0x45f3c4, __VMLINUX_SYMBOL_STR(tty_set_operations) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xef2d23fc, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x3b6776e3, __VMLINUX_SYMBOL_STR(tty_port_register_device) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0x2a12ec6c, __VMLINUX_SYMBOL_STR(tty_port_init) },
	{ 0x7bd60752, __VMLINUX_SYMBOL_STR(tty_insert_flip_string_fixed_flag) },
	{ 0x81b772db, __VMLINUX_SYMBOL_STR(tty_port_destroy) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xfb88016a, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x9545af6d, __VMLINUX_SYMBOL_STR(tasklet_init) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0xbb20732a, __VMLINUX_SYMBOL_STR(tty_unregister_device) },
	{ 0x6fef2591, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x67b27ec1, __VMLINUX_SYMBOL_STR(tty_std_termios) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x3507a132, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xd86bf91e, __VMLINUX_SYMBOL_STR(tty_unregister_driver) },
	{ 0x50a20d56, __VMLINUX_SYMBOL_STR(tty_hangup) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x6652cb90, __VMLINUX_SYMBOL_STR(__tty_alloc_driver) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x499cb58c, __VMLINUX_SYMBOL_STR(prepare_to_wait) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x196031ad, __VMLINUX_SYMBOL_STR(tty_flip_buffer_push) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0xf9ece494, __VMLINUX_SYMBOL_STR(tty_wakeup) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "05FA2B43A8BDEF38C0F96EE");
