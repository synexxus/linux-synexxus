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
	{ 0x17807ad1, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0x4ccc87eb, __VMLINUX_SYMBOL_STR(spi_register_driver) },
	{ 0xeb31a83c, __VMLINUX_SYMBOL_STR(spi_sync) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x98dd395a, __VMLINUX_SYMBOL_STR(ad_dpot_probe) },
	{ 0x621fbda6, __VMLINUX_SYMBOL_STR(spi_get_device_id) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x397fba64, __VMLINUX_SYMBOL_STR(ad_dpot_remove) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ad525x_dpot";

MODULE_ALIAS("spi:ad5160");
MODULE_ALIAS("spi:ad5161");
MODULE_ALIAS("spi:ad5162");
MODULE_ALIAS("spi:ad5165");
MODULE_ALIAS("spi:ad5200");
MODULE_ALIAS("spi:ad5201");
MODULE_ALIAS("spi:ad5203");
MODULE_ALIAS("spi:ad5204");
MODULE_ALIAS("spi:ad5206");
MODULE_ALIAS("spi:ad5207");
MODULE_ALIAS("spi:ad5231");
MODULE_ALIAS("spi:ad5232");
MODULE_ALIAS("spi:ad5233");
MODULE_ALIAS("spi:ad5235");
MODULE_ALIAS("spi:ad5260");
MODULE_ALIAS("spi:ad5262");
MODULE_ALIAS("spi:ad5263");
MODULE_ALIAS("spi:ad5290");
MODULE_ALIAS("spi:ad5291");
MODULE_ALIAS("spi:ad5292");
MODULE_ALIAS("spi:ad5293");
MODULE_ALIAS("spi:ad7376");
MODULE_ALIAS("spi:ad8400");
MODULE_ALIAS("spi:ad8402");
MODULE_ALIAS("spi:ad8403");
MODULE_ALIAS("spi:adn2850");
MODULE_ALIAS("spi:ad5270");
MODULE_ALIAS("spi:ad5271");
