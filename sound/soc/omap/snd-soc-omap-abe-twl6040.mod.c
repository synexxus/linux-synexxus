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
	{ 0xe37bdfc7, __VMLINUX_SYMBOL_STR(snd_soc_of_parse_card_name) },
	{ 0x3cce7ef1, __VMLINUX_SYMBOL_STR(of_parse_phandle) },
	{ 0xf4fe32bf, __VMLINUX_SYMBOL_STR(snd_soc_pm_ops) },
	{ 0xcfb1c0b7, __VMLINUX_SYMBOL_STR(snd_soc_jack_new) },
	{ 0xd0b5fc1d, __VMLINUX_SYMBOL_STR(of_property_read_u32_array) },
	{ 0xd85c358e, __VMLINUX_SYMBOL_STR(platform_device_register_full) },
	{ 0x968a83d8, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0xc81e8435, __VMLINUX_SYMBOL_STR(twl6040_get_clk_id) },
	{ 0x5c5dacd0, __VMLINUX_SYMBOL_STR(snd_soc_dapm_add_routes) },
	{ 0x46b4b4bf, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x744cd39, __VMLINUX_SYMBOL_STR(twl6040_hs_jack_detect) },
	{ 0x6544196c, __VMLINUX_SYMBOL_STR(omap_mcpdm_configure_dn_offsets) },
	{ 0xbbd76c90, __VMLINUX_SYMBOL_STR(of_find_property) },
	{ 0x75857a1d, __VMLINUX_SYMBOL_STR(platform_device_unregister) },
	{ 0xd4c78a52, __VMLINUX_SYMBOL_STR(snd_soc_jack_add_pins) },
	{ 0x39c6759e, __VMLINUX_SYMBOL_STR(snd_soc_unregister_card) },
	{ 0x98f85f76, __VMLINUX_SYMBOL_STR(snd_soc_dai_set_sysclk) },
	{ 0xd9ea4d88, __VMLINUX_SYMBOL_STR(snd_soc_of_parse_audio_routing) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x83ea2ea9, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x1ab14fee, __VMLINUX_SYMBOL_STR(twl6040_get_trim_value) },
	{ 0x564906d2, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xaf22b5b6, __VMLINUX_SYMBOL_STR(snd_soc_register_card) },
	{ 0x43c003ff, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-soc-core,snd-soc-twl6040,snd-soc-omap-mcpdm";

MODULE_ALIAS("of:N*T*Cti,abe-twl6040*");
