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
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x19e372d, __VMLINUX_SYMBOL_STR(snd_soc_dapm_get_enum_double) },
	{ 0x3a657fb3, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x89054e18, __VMLINUX_SYMBOL_STR(regmap_register_patch) },
	{ 0xd4370660, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0x6d58577a, __VMLINUX_SYMBOL_STR(snd_soc_dapm_get_volsw) },
	{ 0xf816c866, __VMLINUX_SYMBOL_STR(gpio_to_desc) },
	{ 0xf087137d, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xa12d929d, __VMLINUX_SYMBOL_STR(desc_to_gpio) },
	{ 0x744369c6, __VMLINUX_SYMBOL_STR(snd_soc_put_volsw) },
	{ 0x7cc99ca1, __VMLINUX_SYMBOL_STR(regmap_read) },
	{ 0x9f0a2ba1, __VMLINUX_SYMBOL_STR(snd_soc_get_volsw) },
	{ 0xcb6182df, __VMLINUX_SYMBOL_STR(snd_soc_info_enum_double) },
	{ 0xc3583421, __VMLINUX_SYMBOL_STR(snd_soc_read) },
	{ 0x46b4b4bf, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x5335e1f0, __VMLINUX_SYMBOL_STR(of_get_named_gpiod_flags) },
	{ 0x9df59151, __VMLINUX_SYMBOL_STR(snd_soc_update_bits) },
	{ 0xbbd76c90, __VMLINUX_SYMBOL_STR(of_find_property) },
	{ 0x82d6a114, __VMLINUX_SYMBOL_STR(snd_soc_dapm_put_volsw) },
	{ 0x9aba2ac3, __VMLINUX_SYMBOL_STR(devm_gpio_request_one) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x1b952ded, __VMLINUX_SYMBOL_STR(snd_soc_info_volsw) },
	{ 0x2e01cd89, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0xd7b24056, __VMLINUX_SYMBOL_STR(snd_soc_get_enum_double) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0x199fbf7d, __VMLINUX_SYMBOL_STR(devm_regmap_init_i2c) },
	{ 0x7c74d300, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xeb2f6ee3, __VMLINUX_SYMBOL_STR(snd_soc_unregister_codec) },
	{ 0xc8269f94, __VMLINUX_SYMBOL_STR(snd_soc_params_to_frame_size) },
	{ 0xf66a2e3b, __VMLINUX_SYMBOL_STR(regcache_mark_dirty) },
	{ 0xa3db5c6b, __VMLINUX_SYMBOL_STR(snd_soc_put_enum_double) },
	{ 0x3d9d606d, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x9730c462, __VMLINUX_SYMBOL_STR(gpiod_set_raw_value_cansleep) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x66e77516, __VMLINUX_SYMBOL_STR(snd_soc_register_codec) },
	{ 0x564906d2, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x1abe3650, __VMLINUX_SYMBOL_STR(regmap_update_bits) },
	{ 0x740bc2ca, __VMLINUX_SYMBOL_STR(regmap_write) },
	{ 0x43c003ff, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xcb6585b9, __VMLINUX_SYMBOL_STR(regcache_sync) },
	{ 0x75022a52, __VMLINUX_SYMBOL_STR(regcache_cache_only) },
	{ 0x783ee1a6, __VMLINUX_SYMBOL_STR(snd_soc_write) },
	{ 0x5b2caa6f, __VMLINUX_SYMBOL_STR(snd_soc_dapm_put_enum_double) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-soc-core";

MODULE_ALIAS("of:N*T*Crealtek,rt5640*");
MODULE_ALIAS("i2c:rt5640");
