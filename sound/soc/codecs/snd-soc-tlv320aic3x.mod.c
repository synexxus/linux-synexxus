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
	{ 0xeb3b8060, __VMLINUX_SYMBOL_STR(snd_soc_test_bits) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x19e372d, __VMLINUX_SYMBOL_STR(snd_soc_dapm_get_enum_double) },
	{ 0xb5c3334e, __VMLINUX_SYMBOL_STR(snd_soc_dapm_mixer_update_power) },
	{ 0x3a657fb3, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x89054e18, __VMLINUX_SYMBOL_STR(regmap_register_patch) },
	{ 0xd4370660, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0x6d58577a, __VMLINUX_SYMBOL_STR(snd_soc_dapm_get_volsw) },
	{ 0x47229b5c, __VMLINUX_SYMBOL_STR(gpio_request) },
	{ 0xf816c866, __VMLINUX_SYMBOL_STR(gpio_to_desc) },
	{ 0x773396ff, __VMLINUX_SYMBOL_STR(regulator_register_notifier) },
	{ 0xc2e4d78c, __VMLINUX_SYMBOL_STR(snd_soc_add_codec_controls) },
	{ 0xd0b5fc1d, __VMLINUX_SYMBOL_STR(of_property_read_u32_array) },
	{ 0x19deb9c0, __VMLINUX_SYMBOL_STR(snd_soc_dapm_new_controls) },
	{ 0xa12d929d, __VMLINUX_SYMBOL_STR(desc_to_gpio) },
	{ 0x744369c6, __VMLINUX_SYMBOL_STR(snd_soc_put_volsw) },
	{ 0x9f0a2ba1, __VMLINUX_SYMBOL_STR(snd_soc_get_volsw) },
	{ 0x82210a07, __VMLINUX_SYMBOL_STR(devm_regulator_bulk_get) },
	{ 0xbf93dfee, __VMLINUX_SYMBOL_STR(regulator_bulk_enable) },
	{ 0xcb6182df, __VMLINUX_SYMBOL_STR(snd_soc_info_enum_double) },
	{ 0xda17f1e7, __VMLINUX_SYMBOL_STR(regulator_unregister_notifier) },
	{ 0x5c5dacd0, __VMLINUX_SYMBOL_STR(snd_soc_dapm_add_routes) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xc3583421, __VMLINUX_SYMBOL_STR(snd_soc_read) },
	{ 0x46b4b4bf, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x834f4624, __VMLINUX_SYMBOL_STR(snd_soc_dapm_kcontrol_codec) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x5335e1f0, __VMLINUX_SYMBOL_STR(of_get_named_gpiod_flags) },
	{ 0x9df59151, __VMLINUX_SYMBOL_STR(snd_soc_update_bits) },
	{ 0x82d6a114, __VMLINUX_SYMBOL_STR(snd_soc_dapm_put_volsw) },
	{ 0xc3cd5c70, __VMLINUX_SYMBOL_STR(gpiod_direction_output_raw) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x1b952ded, __VMLINUX_SYMBOL_STR(snd_soc_info_volsw) },
	{ 0x2e01cd89, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0xd7b24056, __VMLINUX_SYMBOL_STR(snd_soc_get_enum_double) },
	{ 0x99c24c7b, __VMLINUX_SYMBOL_STR(regulator_bulk_disable) },
	{ 0x199fbf7d, __VMLINUX_SYMBOL_STR(devm_regmap_init_i2c) },
	{ 0xeb2f6ee3, __VMLINUX_SYMBOL_STR(snd_soc_unregister_codec) },
	{ 0xfe990052, __VMLINUX_SYMBOL_STR(gpio_free) },
	{ 0xf66a2e3b, __VMLINUX_SYMBOL_STR(regcache_mark_dirty) },
	{ 0xa3db5c6b, __VMLINUX_SYMBOL_STR(snd_soc_put_enum_double) },
	{ 0x5d4b41c, __VMLINUX_SYMBOL_STR(dapm_reg_event) },
	{ 0x687934e9, __VMLINUX_SYMBOL_STR(gpiod_set_raw_value) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x66e77516, __VMLINUX_SYMBOL_STR(snd_soc_register_codec) },
	{ 0x564906d2, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
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

MODULE_ALIAS("of:N*T*Cti,tlv320aic3x*");
MODULE_ALIAS("of:N*T*Cti,tlv320aic33*");
MODULE_ALIAS("of:N*T*Cti,tlv320aic3007*");
MODULE_ALIAS("of:N*T*Cti,tlv320aic3106*");
MODULE_ALIAS("i2c:tlv320aic3x");
MODULE_ALIAS("i2c:tlv320aic33");
MODULE_ALIAS("i2c:tlv320aic3007");
MODULE_ALIAS("i2c:tlv320aic3106");
