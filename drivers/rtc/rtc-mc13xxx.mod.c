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
	{ 0x3f47222, __VMLINUX_SYMBOL_STR(platform_driver_probe) },
	{ 0xb98a0185, __VMLINUX_SYMBOL_STR(rtc_tm_to_time) },
	{ 0xc66f4239, __VMLINUX_SYMBOL_STR(devm_rtc_device_register) },
	{ 0x2881a472, __VMLINUX_SYMBOL_STR(mc13xxx_irq_request_nounmask) },
	{ 0xdc3642f8, __VMLINUX_SYMBOL_STR(mc13xxx_irq_request) },
	{ 0x3a657fb3, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x564906d2, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x80354c70, __VMLINUX_SYMBOL_STR(rtc_update_irq) },
	{ 0x5838f6c9, __VMLINUX_SYMBOL_STR(rtc_valid_tm) },
	{ 0x7c74d300, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xabd0c91c, __VMLINUX_SYMBOL_STR(rtc_time_to_tm) },
	{ 0xb5964db3, __VMLINUX_SYMBOL_STR(mc13xxx_irq_status) },
	{ 0xd0c7c250, __VMLINUX_SYMBOL_STR(mc13xxx_irq_unmask) },
	{ 0x9ec5503c, __VMLINUX_SYMBOL_STR(mc13xxx_irq_ack) },
	{ 0x1a0944ff, __VMLINUX_SYMBOL_STR(mc13xxx_reg_write) },
	{ 0x3f13a9ff, __VMLINUX_SYMBOL_STR(mc13xxx_reg_read) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x1bfc759b, __VMLINUX_SYMBOL_STR(mc13xxx_irq_mask) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xccbab888, __VMLINUX_SYMBOL_STR(mc13xxx_unlock) },
	{ 0xe2ed0902, __VMLINUX_SYMBOL_STR(mc13xxx_irq_free) },
	{ 0xad662dfb, __VMLINUX_SYMBOL_STR(mc13xxx_lock) },
	{ 0x43c003ff, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("platform:mc13783-rtc");
MODULE_ALIAS("platform:mc13892-rtc");
MODULE_ALIAS("platform:mc34708-rtc");
