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
	{ 0x9a60f5d8, __VMLINUX_SYMBOL_STR(platform_driver_probe) },
	{ 0x11910c58, __VMLINUX_SYMBOL_STR(rtc_update_irq) },
	{ 0xb98a0185, __VMLINUX_SYMBOL_STR(rtc_tm_to_time) },
	{ 0xefe12ab1, __VMLINUX_SYMBOL_STR(devm_rtc_device_register) },
	{ 0x891d3927, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0xbb861c5e, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0xfd1b4aba, __VMLINUX_SYMBOL_STR(clk_enable) },
	{ 0x8f437d77, __VMLINUX_SYMBOL_STR(clk_prepare) },
	{ 0xa75b1ab1, __VMLINUX_SYMBOL_STR(devm_clk_get) },
	{ 0xef2d23fc, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x130e9ceb, __VMLINUX_SYMBOL_STR(platform_get_irq) },
	{ 0x37ffd571, __VMLINUX_SYMBOL_STR(devm_ioremap) },
	{ 0xaf790b2b, __VMLINUX_SYMBOL_STR(__devm_request_region) },
	{ 0x788fe103, __VMLINUX_SYMBOL_STR(iomem_resource) },
	{ 0x3c749c55, __VMLINUX_SYMBOL_STR(devm_kzalloc) },
	{ 0xdfa9dfd1, __VMLINUX_SYMBOL_STR(platform_get_resource) },
	{ 0x5be9608b, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x9d187112, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x499cb58c, __VMLINUX_SYMBOL_STR(prepare_to_wait) },
	{ 0xc8b57c27, __VMLINUX_SYMBOL_STR(autoremove_wake_function) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0x5021d67d, __VMLINUX_SYMBOL_STR(clk_unprepare) },
	{ 0x5f591b68, __VMLINUX_SYMBOL_STR(clk_disable) },
	{ 0x92b57248, __VMLINUX_SYMBOL_STR(flush_work) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xe1676390, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xfb88016a, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xabd0c91c, __VMLINUX_SYMBOL_STR(rtc_time_to_tm) },
	{ 0x4d56a0e4, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cfsl,imx25-rtc*");

MODULE_INFO(srcversion, "A36E8D516CBFE43A3633A55");
