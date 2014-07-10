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
	{ 0xc0ffa495, __VMLINUX_SYMBOL_STR(no_llseek) },
	{ 0x44110594, __VMLINUX_SYMBOL_STR(input_unregister_handler) },
	{ 0x244cd770, __VMLINUX_SYMBOL_STR(input_register_handler) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x8a7d1c31, __VMLINUX_SYMBOL_STR(high_memory) },
	{ 0x7cc4a5d, __VMLINUX_SYMBOL_STR(printk_timed_ratelimit) },
	{ 0xb9acd3d9, __VMLINUX_SYMBOL_STR(__put_user_2) },
	{ 0x7de9c88f, __VMLINUX_SYMBOL_STR(input_ff_upload) },
	{ 0x38a9c2c7, __VMLINUX_SYMBOL_STR(input_ff_effect_from_user) },
	{ 0x5dd6ff3, __VMLINUX_SYMBOL_STR(input_release_device) },
	{ 0xb7fdff0, __VMLINUX_SYMBOL_STR(input_ff_erase) },
	{ 0xf2730ec7, __VMLINUX_SYMBOL_STR(input_grab_device) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x40a9b349, __VMLINUX_SYMBOL_STR(vzalloc) },
	{ 0x1e26d6d8, __VMLINUX_SYMBOL_STR(input_open_device) },
	{ 0xd7fd90d9, __VMLINUX_SYMBOL_STR(nonseekable_open) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xb36ccdfd, __VMLINUX_SYMBOL_STR(device_add) },
	{ 0xe32f8e9b, __VMLINUX_SYMBOL_STR(cdev_add) },
	{ 0xb0931994, __VMLINUX_SYMBOL_STR(cdev_init) },
	{ 0xa51933e1, __VMLINUX_SYMBOL_STR(input_register_handle) },
	{ 0x5e4aae6e, __VMLINUX_SYMBOL_STR(device_initialize) },
	{ 0x14e70ecf, __VMLINUX_SYMBOL_STR(input_class) },
	{ 0x4e3e6b7a, __VMLINUX_SYMBOL_STR(get_device) },
	{ 0xe9b3a371, __VMLINUX_SYMBOL_STR(dev_set_name) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xb840f323, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x47f03165, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x79222a5, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xf7f16b3f, __VMLINUX_SYMBOL_STR(input_get_new_minor) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x344b7739, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x5d12e48f, __VMLINUX_SYMBOL_STR(input_event_to_user) },
	{ 0x3507a132, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0xf751aea, __VMLINUX_SYMBOL_STR(input_event_from_user) },
	{ 0x1967ae7, __VMLINUX_SYMBOL_STR(input_inject_event) },
	{ 0x115d2c8a, __VMLINUX_SYMBOL_STR(input_set_keycode) },
	{ 0x353e3fa5, __VMLINUX_SYMBOL_STR(__get_user_4) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xbc10dd97, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0xb9ac0f7d, __VMLINUX_SYMBOL_STR(input_get_keycode) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xbae62b1, __VMLINUX_SYMBOL_STR(ktime_get_monotonic_offset) },
	{ 0xc87c1f84, __VMLINUX_SYMBOL_STR(ktime_get) },
	{ 0x4cdb3178, __VMLINUX_SYMBOL_STR(ns_to_timeval) },
	{ 0x8288f5af, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0xc2cdbf1, __VMLINUX_SYMBOL_STR(synchronize_sched) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xfba6a5f0, __VMLINUX_SYMBOL_STR(fasync_helper) },
	{ 0xa9a285d, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0x133f7499, __VMLINUX_SYMBOL_STR(input_unregister_handle) },
	{ 0x5cf53ce2, __VMLINUX_SYMBOL_STR(input_free_minor) },
	{ 0xde4f57ce, __VMLINUX_SYMBOL_STR(device_del) },
	{ 0x12928c79, __VMLINUX_SYMBOL_STR(input_close_device) },
	{ 0xcbd8a4ef, __VMLINUX_SYMBOL_STR(input_flush_device) },
	{ 0x8418ac76, __VMLINUX_SYMBOL_STR(cdev_del) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x73f9b2e7, __VMLINUX_SYMBOL_STR(kill_fasync) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x6f9a27f5, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x10da615, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("input:b*v*p*e*-e*k*r*a*m*l*s*f*w*");
