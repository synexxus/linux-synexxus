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
	{ 0x4bfb7c00, __VMLINUX_SYMBOL_STR(__pm_runtime_idle) },
	{ 0xeb711ae7, __VMLINUX_SYMBOL_STR(snd_soc_params_to_bclk) },
	{ 0xf83362bd, __VMLINUX_SYMBOL_STR(__pm_runtime_disable) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x788fe103, __VMLINUX_SYMBOL_STR(iomem_resource) },
	{ 0x3a657fb3, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0xd0b5fc1d, __VMLINUX_SYMBOL_STR(of_property_read_u32_array) },
	{ 0x2e1ca751, __VMLINUX_SYMBOL_STR(clk_put) },
	{ 0x98bf483, __VMLINUX_SYMBOL_STR(__pm_runtime_resume) },
	{ 0xf2a7b7a8, __VMLINUX_SYMBOL_STR(snd_soc_register_component) },
	{ 0x968a83d8, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x46b4b4bf, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x86abf4d3, __VMLINUX_SYMBOL_STR(davinci_soc_platform_unregister) },
	{ 0x8061d568, __VMLINUX_SYMBOL_STR(platform_get_resource) },
	{ 0x2da32148, __VMLINUX_SYMBOL_STR(snd_soc_unregister_component) },
	{ 0x4e7b3c05, __VMLINUX_SYMBOL_STR(of_match_device) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x7662a76, __VMLINUX_SYMBOL_STR(pm_runtime_enable) },
	{ 0x54451015, __VMLINUX_SYMBOL_STR(clk_set_parent) },
	{ 0xfbc095db, __VMLINUX_SYMBOL_STR(__devm_request_region) },
	{ 0x95491112, __VMLINUX_SYMBOL_STR(of_get_property) },
	{ 0x4d6d6b39, __VMLINUX_SYMBOL_STR(clk_get) },
	{ 0xa597a12d, __VMLINUX_SYMBOL_STR(platform_get_resource_byname) },
	{ 0x2c1d978, __VMLINUX_SYMBOL_STR(devm_ioremap) },
	{ 0x4fda3b75, __VMLINUX_SYMBOL_STR(of_parse_phandle_with_args) },
	{ 0x3d9d606d, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x9877540, __VMLINUX_SYMBOL_STR(davinci_soc_platform_register) },
	{ 0xc1a69b3b, __VMLINUX_SYMBOL_STR(of_property_match_string) },
	{ 0x83ea2ea9, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x564906d2, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x43c003ff, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-soc-core,snd-soc-davinci";

MODULE_ALIAS("of:N*T*Cti,dm646x-mcasp-audio*");
MODULE_ALIAS("of:N*T*Cti,da830-mcasp-audio*");
MODULE_ALIAS("of:N*T*Cti,am33xx-mcasp-audio*");
MODULE_ALIAS("of:N*T*Cti,dra7-mcasp-audio*");
