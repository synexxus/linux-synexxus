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
	{ 0x385bf3c3, __VMLINUX_SYMBOL_STR(d_path) },
	{ 0x24409973, __VMLINUX_SYMBOL_STR(device_remove_file) },
	{ 0xc28b8cde, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x7e9efe8e, __VMLINUX_SYMBOL_STR(complete_and_exit) },
	{ 0x22e1ae6f, __VMLINUX_SYMBOL_STR(up_read) },
	{ 0x4f5a3ba1, __VMLINUX_SYMBOL_STR(usb_free_all_descriptors) },
	{ 0x7c873b45, __VMLINUX_SYMBOL_STR(dequeue_signal) },
	{ 0x1c6ffdfe, __VMLINUX_SYMBOL_STR(usb_add_config) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x891d3927, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0xc8b57c27, __VMLINUX_SYMBOL_STR(autoremove_wake_function) },
	{ 0x7ab88a45, __VMLINUX_SYMBOL_STR(system_freezing_cnt) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x2a3aa678, __VMLINUX_SYMBOL_STR(_test_and_clear_bit) },
	{ 0x1976aa06, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x58a24dad, __VMLINUX_SYMBOL_STR(vfs_fsync) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x8323559e, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x455293f6, __VMLINUX_SYMBOL_STR(down_read) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x1fab5905, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0x35b6b772, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0xf484a033, __VMLINUX_SYMBOL_STR(vfs_read) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x64e042a6, __VMLINUX_SYMBOL_STR(device_register) },
	{ 0x5be9608b, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x2bf77618, __VMLINUX_SYMBOL_STR(freezing_slow_path) },
	{ 0x4346abf8, __VMLINUX_SYMBOL_STR(usb_ep_autoconfig) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x83211609, __VMLINUX_SYMBOL_STR(up_write) },
	{ 0xa958ed4, __VMLINUX_SYMBOL_STR(down_write) },
	{ 0x20d8b0f2, __VMLINUX_SYMBOL_STR(fput) },
	{ 0x44c5ce8a, __VMLINUX_SYMBOL_STR(usb_composite_setup_continue) },
	{ 0xd79b5a02, __VMLINUX_SYMBOL_STR(allow_signal) },
	{ 0x8ffd45c, __VMLINUX_SYMBOL_STR(usb_composite_overwrite_options) },
	{ 0xecec5d9a, __VMLINUX_SYMBOL_STR(device_create_file) },
	{ 0x3f346ce4, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x6fef2591, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x96cf579, __VMLINUX_SYMBOL_STR(usb_composite_probe) },
	{ 0xc6e68079, __VMLINUX_SYMBOL_STR(usb_add_function) },
	{ 0x36ead4ba, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0x93fca811, __VMLINUX_SYMBOL_STR(__get_free_pages) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x3507a132, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x4482cdb, __VMLINUX_SYMBOL_STR(__refrigerator) },
	{ 0xcc8acea8, __VMLINUX_SYMBOL_STR(config_ep_by_speed) },
	{ 0x33e59e8f, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0x713f1b9b, __VMLINUX_SYMBOL_STR(usb_composite_unregister) },
	{ 0xcc5005fe, __VMLINUX_SYMBOL_STR(msleep_interruptible) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xa46f2f1b, __VMLINUX_SYMBOL_STR(kstrtouint) },
	{ 0xb0b4e876, __VMLINUX_SYMBOL_STR(usb_string_ids_tab) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x499cb58c, __VMLINUX_SYMBOL_STR(prepare_to_wait) },
	{ 0x4845c423, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0x206732b9, __VMLINUX_SYMBOL_STR(send_sig_info) },
	{ 0x9e61bb05, __VMLINUX_SYMBOL_STR(set_freezable) },
	{ 0x169b0da8, __VMLINUX_SYMBOL_STR(usb_string_id) },
	{ 0x7f0d9ed5, __VMLINUX_SYMBOL_STR(invalidate_mapping_pages) },
	{ 0x9f3be1c4, __VMLINUX_SYMBOL_STR(usb_assign_descriptors) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x8073d44a, __VMLINUX_SYMBOL_STR(usb_interface_id) },
	{ 0x9d187112, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xc6f42183, __VMLINUX_SYMBOL_STR(device_unregister) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0x487d9343, __VMLINUX_SYMBOL_STR(param_ops_ushort) },
	{ 0x5e42acb3, __VMLINUX_SYMBOL_STR(dev_set_name) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x6d044c26, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x4d56a0e4, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x7d4e2276, __VMLINUX_SYMBOL_STR(__init_rwsem) },
	{ 0xc850778e, __VMLINUX_SYMBOL_STR(vfs_write) },
	{ 0x2c3b824e, __VMLINUX_SYMBOL_STR(filp_open) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libcomposite";


MODULE_INFO(srcversion, "FB829FADF2543D79E84C34E");
