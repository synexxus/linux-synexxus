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
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x3a657fb3, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x3cce7ef1, __VMLINUX_SYMBOL_STR(of_parse_phandle) },
	{ 0xf4fe32bf, __VMLINUX_SYMBOL_STR(snd_soc_pm_ops) },
	{ 0xcfb1c0b7, __VMLINUX_SYMBOL_STR(snd_soc_jack_new) },
	{ 0xfeaad482, __VMLINUX_SYMBOL_STR(snd_soc_dapm_info_pin_switch) },
	{ 0xf816c866, __VMLINUX_SYMBOL_STR(gpio_to_desc) },
	{ 0xcd20674b, __VMLINUX_SYMBOL_STR(snd_soc_dapm_put_pin_switch) },
	{ 0xa12d929d, __VMLINUX_SYMBOL_STR(desc_to_gpio) },
	{ 0x968a83d8, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x46b4b4bf, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x5335e1f0, __VMLINUX_SYMBOL_STR(of_get_named_gpiod_flags) },
	{ 0x8aaefc52, __VMLINUX_SYMBOL_STR(tegra_asoc_utils_init) },
	{ 0xd4c78a52, __VMLINUX_SYMBOL_STR(snd_soc_jack_add_pins) },
	{ 0x39c6759e, __VMLINUX_SYMBOL_STR(snd_soc_unregister_card) },
	{ 0x9aba2ac3, __VMLINUX_SYMBOL_STR(devm_gpio_request_one) },
	{ 0x7a623eb5, __VMLINUX_SYMBOL_STR(snd_soc_dapm_get_pin_switch) },
	{ 0x10d53ea8, __VMLINUX_SYMBOL_STR(tegra_asoc_utils_fini) },
	{ 0x98f85f76, __VMLINUX_SYMBOL_STR(snd_soc_dai_set_sysclk) },
	{ 0xd9ea4d88, __VMLINUX_SYMBOL_STR(snd_soc_of_parse_audio_routing) },
	{ 0x71758e82, __VMLINUX_SYMBOL_STR(snd_soc_dapm_force_enable_pin) },
	{ 0xcded09b0, __VMLINUX_SYMBOL_STR(tegra_asoc_utils_set_rate) },
	{ 0x8950449d, __VMLINUX_SYMBOL_STR(snd_soc_jack_add_gpios) },
	{ 0x9730c462, __VMLINUX_SYMBOL_STR(gpiod_set_raw_value_cansleep) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x9f05f75e, __VMLINUX_SYMBOL_STR(snd_soc_jack_free_gpios) },
	{ 0x83ea2ea9, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x564906d2, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xaf22b5b6, __VMLINUX_SYMBOL_STR(snd_soc_register_card) },
	{ 0x43c003ff, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x6ddb60b4, __VMLINUX_SYMBOL_STR(wm8903_mic_detect) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-soc-core,snd-soc-tegra-utils,snd-soc-wm8903";

MODULE_ALIAS("of:N*T*Cnvidia,tegra-audio-wm8903*");
