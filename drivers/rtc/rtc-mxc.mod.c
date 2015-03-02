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
	{ 0xb98a0185, __VMLINUX_SYMBOL_STR(rtc_tm_to_time) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x11910c58, __VMLINUX_SYMBOL_STR(rtc_update_irq) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x9d187112, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xefe12ab1, __VMLINUX_SYMBOL_STR(devm_rtc_device_register) },
	{ 0xbc2f7b88, __VMLINUX_SYMBOL_STR(device_init_wakeup) },
	{ 0xbb861c5e, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0x130e9ceb, __VMLINUX_SYMBOL_STR(platform_get_irq) },
	{ 0xfd1b4aba, __VMLINUX_SYMBOL_STR(clk_enable) },
	{ 0x5be9608b, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x95790f76, __VMLINUX_SYMBOL_STR(clk_get_rate) },
	{ 0x8f437d77, __VMLINUX_SYMBOL_STR(clk_prepare) },
	{ 0xa75b1ab1, __VMLINUX_SYMBOL_STR(devm_clk_get) },
	{ 0x37ffd571, __VMLINUX_SYMBOL_STR(devm_ioremap) },
	{ 0xaf790b2b, __VMLINUX_SYMBOL_STR(__devm_request_region) },
	{ 0x788fe103, __VMLINUX_SYMBOL_STR(iomem_resource) },
	{ 0x3c749c55, __VMLINUX_SYMBOL_STR(devm_kzalloc) },
	{ 0xdfa9dfd1, __VMLINUX_SYMBOL_STR(platform_get_resource) },
	{ 0xabd0c91c, __VMLINUX_SYMBOL_STR(rtc_time_to_tm) },
	{ 0xac8f37b2, __VMLINUX_SYMBOL_STR(outer_cache) },
	{ 0x3507a132, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x891d3927, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x5021d67d, __VMLINUX_SYMBOL_STR(clk_unprepare) },
	{ 0x5f591b68, __VMLINUX_SYMBOL_STR(clk_disable) },
	{ 0xce2840e7, __VMLINUX_SYMBOL_STR(irq_set_irq_wake) },
	{ 0x4d56a0e4, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("platform:imx1-rtc");
MODULE_ALIAS("platform:imx21-rtc");

MODULE_INFO(srcversion, "E39BDCC65AAEFAD3FCE5ACC");
