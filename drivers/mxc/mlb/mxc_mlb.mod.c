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
	{ 0x61c23aed, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x9155e50, __VMLINUX_SYMBOL_STR(platform_driver_register) },
	{ 0x891d3927, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x31be35d5, __VMLINUX_SYMBOL_STR(of_get_named_gen_pool) },
	{ 0xa75b1ab1, __VMLINUX_SYMBOL_STR(devm_clk_get) },
	{ 0xca16dbe7, __VMLINUX_SYMBOL_STR(regulator_enable) },
	{ 0x98cc564a, __VMLINUX_SYMBOL_STR(regulator_set_voltage) },
	{ 0xc88150d3, __VMLINUX_SYMBOL_STR(devm_regulator_get) },
	{ 0xab21175e, __VMLINUX_SYMBOL_STR(devm_request_and_ioremap) },
	{ 0xdfa9dfd1, __VMLINUX_SYMBOL_STR(platform_get_resource) },
	{ 0xbb861c5e, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0x130e9ceb, __VMLINUX_SYMBOL_STR(platform_get_irq) },
	{ 0x5be9608b, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x845a0a38, __VMLINUX_SYMBOL_STR(device_create) },
	{ 0x6c514728, __VMLINUX_SYMBOL_STR(__class_create) },
	{ 0x59571636, __VMLINUX_SYMBOL_STR(cdev_add) },
	{ 0xb918d66e, __VMLINUX_SYMBOL_STR(cdev_init) },
	{ 0x29537c9e, __VMLINUX_SYMBOL_STR(alloc_chrdev_region) },
	{ 0xec78630f, __VMLINUX_SYMBOL_STR(of_match_device) },
	{ 0x3c749c55, __VMLINUX_SYMBOL_STR(devm_kzalloc) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x3330a47d, __VMLINUX_SYMBOL_STR(gen_pool_free) },
	{ 0x3ce4ca6f, __VMLINUX_SYMBOL_STR(disable_irq) },
	{ 0xfcec0987, __VMLINUX_SYMBOL_STR(enable_irq) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xe292fb9f, __VMLINUX_SYMBOL_STR(gen_pool_virt_to_phys) },
	{ 0xf4f71fc3, __VMLINUX_SYMBOL_STR(gen_pool_alloc) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0x499cb58c, __VMLINUX_SYMBOL_STR(prepare_to_wait) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xc8b57c27, __VMLINUX_SYMBOL_STR(autoremove_wake_function) },
	{ 0x572d0104, __VMLINUX_SYMBOL_STR(_raw_write_unlock_irqrestore) },
	{ 0x2f3857e2, __VMLINUX_SYMBOL_STR(_raw_write_lock_irqsave) },
	{ 0xd41fe818, __VMLINUX_SYMBOL_STR(_raw_read_unlock_irqrestore) },
	{ 0x2e7be112, __VMLINUX_SYMBOL_STR(_raw_read_lock_irqsave) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x1ea06663, __VMLINUX_SYMBOL_STR(_raw_write_lock) },
	{ 0x7b6646bb, __VMLINUX_SYMBOL_STR(_raw_read_lock) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x7485e15e, __VMLINUX_SYMBOL_STR(unregister_chrdev_region) },
	{ 0xd6afd377, __VMLINUX_SYMBOL_STR(cdev_del) },
	{ 0x4b08b6f8, __VMLINUX_SYMBOL_STR(class_destroy) },
	{ 0x49efcaf9, __VMLINUX_SYMBOL_STR(device_destroy) },
	{ 0x1258d9d9, __VMLINUX_SYMBOL_STR(regulator_disable) },
	{ 0x5f591b68, __VMLINUX_SYMBOL_STR(clk_disable) },
	{ 0x5021d67d, __VMLINUX_SYMBOL_STR(clk_unprepare) },
	{ 0xfd1b4aba, __VMLINUX_SYMBOL_STR(clk_enable) },
	{ 0x8f437d77, __VMLINUX_SYMBOL_STR(clk_prepare) },
	{ 0x4d56a0e4, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cfsl,imx6q-mlb150*");
MODULE_ALIAS("of:N*T*Cfsl,imx6sx-mlb50*");
MODULE_ALIAS("platform:imx6q-mlb150");
MODULE_ALIAS("platform:imx6sx-mlb50");

MODULE_INFO(srcversion, "2B7500A2C50033938951050");
