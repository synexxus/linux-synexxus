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
	{ 0x83ea2ea9, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x968a83d8, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x95491112, __VMLINUX_SYMBOL_STR(of_get_property) },
	{ 0xb92ddf20, __VMLINUX_SYMBOL_STR(of_get_next_child) },
	{ 0xd0b5fc1d, __VMLINUX_SYMBOL_STR(of_property_read_u32_array) },
	{ 0x72fecc3b, __VMLINUX_SYMBOL_STR(devm_kfree) },
	{ 0x763df15a, __VMLINUX_SYMBOL_STR(input_register_device) },
	{ 0x7662a76, __VMLINUX_SYMBOL_STR(pm_runtime_enable) },
	{ 0x147b4fa2, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0xb31e0771, __VMLINUX_SYMBOL_STR(platform_get_irq) },
	{ 0x3a657fb3, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x8db22421, __VMLINUX_SYMBOL_STR(input_set_capability) },
	{ 0x46b4b4bf, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x7a721d4f, __VMLINUX_SYMBOL_STR(matrix_keypad_build_keymap) },
	{ 0x2da47fc8, __VMLINUX_SYMBOL_STR(of_device_is_compatible) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xc9da0a86, __VMLINUX_SYMBOL_STR(clk_prepare) },
	{ 0x2f68d9d3, __VMLINUX_SYMBOL_STR(devm_clk_get) },
	{ 0x2c1d978, __VMLINUX_SYMBOL_STR(devm_ioremap) },
	{ 0x8061d568, __VMLINUX_SYMBOL_STR(platform_get_resource) },
	{ 0x32efbb71, __VMLINUX_SYMBOL_STR(devm_input_allocate_device) },
	{ 0x564906d2, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x7c74d300, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x344b7739, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0x971a15a3, __VMLINUX_SYMBOL_STR(input_event) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x7c02bd70, __VMLINUX_SYMBOL_STR(clk_unprepare) },
	{ 0x12640585, __VMLINUX_SYMBOL_STR(input_unregister_device) },
	{ 0xe213b845, __VMLINUX_SYMBOL_STR(device_init_wakeup) },
	{ 0xf83362bd, __VMLINUX_SYMBOL_STR(__pm_runtime_disable) },
	{ 0xfcec0987, __VMLINUX_SYMBOL_STR(enable_irq) },
	{ 0x3ce4ca6f, __VMLINUX_SYMBOL_STR(disable_irq) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x6f9a27f5, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x10da615, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x4bfb7c00, __VMLINUX_SYMBOL_STR(__pm_runtime_idle) },
	{ 0x98bf483, __VMLINUX_SYMBOL_STR(__pm_runtime_resume) },
	{ 0xad19866e, __VMLINUX_SYMBOL_STR(clk_disable) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xce2840e7, __VMLINUX_SYMBOL_STR(irq_set_irq_wake) },
	{ 0xac8f37b2, __VMLINUX_SYMBOL_STR(outer_cache) },
	{ 0x4cc8b5b0, __VMLINUX_SYMBOL_STR(clk_enable) },
	{ 0x43c003ff, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=matrix-keymap";

MODULE_ALIAS("platform:samsung-keypad");
MODULE_ALIAS("platform:s5pv210-keypad");
MODULE_ALIAS("of:N*T*Csamsung,s3c6410-keypad*");
MODULE_ALIAS("of:N*T*Csamsung,s5pv210-keypad*");
