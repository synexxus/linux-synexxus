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
	{ 0x7c02bd70, __VMLINUX_SYMBOL_STR(clk_unprepare) },
	{ 0xeada0ee2, __VMLINUX_SYMBOL_STR(devm_snd_soc_register_card) },
	{ 0x4cc8b5b0, __VMLINUX_SYMBOL_STR(clk_enable) },
	{ 0xe37bdfc7, __VMLINUX_SYMBOL_STR(snd_soc_of_parse_card_name) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x3cce7ef1, __VMLINUX_SYMBOL_STR(of_parse_phandle) },
	{ 0xf4fe32bf, __VMLINUX_SYMBOL_STR(snd_soc_pm_ops) },
	{ 0xad19866e, __VMLINUX_SYMBOL_STR(clk_disable) },
	{ 0xd0b5fc1d, __VMLINUX_SYMBOL_STR(of_property_read_u32_array) },
	{ 0x19deb9c0, __VMLINUX_SYMBOL_STR(snd_soc_dapm_new_controls) },
	{ 0x42b879a5, __VMLINUX_SYMBOL_STR(clk_get_rate) },
	{ 0x968a83d8, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x9045f463, __VMLINUX_SYMBOL_STR(snd_soc_dapm_nc_pin) },
	{ 0x5c5dacd0, __VMLINUX_SYMBOL_STR(snd_soc_dapm_add_routes) },
	{ 0x46b4b4bf, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x75857a1d, __VMLINUX_SYMBOL_STR(platform_device_unregister) },
	{ 0x39c6759e, __VMLINUX_SYMBOL_STR(snd_soc_unregister_card) },
	{ 0x4e7b3c05, __VMLINUX_SYMBOL_STR(of_match_device) },
	{ 0xc9da0a86, __VMLINUX_SYMBOL_STR(clk_prepare) },
	{ 0x2f68d9d3, __VMLINUX_SYMBOL_STR(devm_clk_get) },
	{ 0x7c74d300, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x98f85f76, __VMLINUX_SYMBOL_STR(snd_soc_dai_set_sysclk) },
	{ 0x6e1dc6fb, __VMLINUX_SYMBOL_STR(clk_set_rate) },
	{ 0xd9ea4d88, __VMLINUX_SYMBOL_STR(snd_soc_of_parse_audio_routing) },
	{ 0x3d9d606d, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x83ea2ea9, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x564906d2, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x43c003ff, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xb397e550, __VMLINUX_SYMBOL_STR(of_allnodes) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-soc-core";

MODULE_ALIAS("of:N*T*Cti,da830-evm-audio*");
