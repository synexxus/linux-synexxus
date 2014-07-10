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
	{ 0xeada0ee2, __VMLINUX_SYMBOL_STR(devm_snd_soc_register_card) },
	{ 0xe37bdfc7, __VMLINUX_SYMBOL_STR(snd_soc_of_parse_card_name) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x3cce7ef1, __VMLINUX_SYMBOL_STR(of_parse_phandle) },
	{ 0xf4fe32bf, __VMLINUX_SYMBOL_STR(snd_soc_pm_ops) },
	{ 0xcfb1c0b7, __VMLINUX_SYMBOL_STR(snd_soc_jack_new) },
	{ 0xa12d929d, __VMLINUX_SYMBOL_STR(desc_to_gpio) },
	{ 0x968a83d8, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x46b4b4bf, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x5335e1f0, __VMLINUX_SYMBOL_STR(of_get_named_gpiod_flags) },
	{ 0xbbd76c90, __VMLINUX_SYMBOL_STR(of_find_property) },
	{ 0xd4c78a52, __VMLINUX_SYMBOL_STR(snd_soc_jack_add_pins) },
	{ 0xd9ea4d88, __VMLINUX_SYMBOL_STR(snd_soc_of_parse_audio_routing) },
	{ 0x48bad527, __VMLINUX_SYMBOL_STR(snd_soc_dapm_disable_pin) },
	{ 0xb646bc8d, __VMLINUX_SYMBOL_STR(snd_soc_dai_set_fmt) },
	{ 0x8950449d, __VMLINUX_SYMBOL_STR(snd_soc_jack_add_gpios) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x9f05f75e, __VMLINUX_SYMBOL_STR(snd_soc_jack_free_gpios) },
	{ 0x83ea2ea9, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x564906d2, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x43c003ff, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-soc-core";

MODULE_ALIAS("of:N*T*Cti,omap-twl4030*");
