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
	{ 0x3f47222, __VMLINUX_SYMBOL_STR(platform_driver_probe) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x19e372d, __VMLINUX_SYMBOL_STR(snd_soc_dapm_get_enum_double) },
	{ 0x3a657fb3, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x6d58577a, __VMLINUX_SYMBOL_STR(snd_soc_dapm_get_volsw) },
	{ 0x744369c6, __VMLINUX_SYMBOL_STR(snd_soc_put_volsw) },
	{ 0x9f0a2ba1, __VMLINUX_SYMBOL_STR(snd_soc_get_volsw) },
	{ 0xcb6182df, __VMLINUX_SYMBOL_STR(snd_soc_info_enum_double) },
	{ 0x46b4b4bf, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x9df59151, __VMLINUX_SYMBOL_STR(snd_soc_update_bits) },
	{ 0xdee07176, __VMLINUX_SYMBOL_STR(mc13xxx_reg_rmw) },
	{ 0x4a3c6831, __VMLINUX_SYMBOL_STR(dev_get_regmap) },
	{ 0x82d6a114, __VMLINUX_SYMBOL_STR(snd_soc_dapm_put_volsw) },
	{ 0x1b952ded, __VMLINUX_SYMBOL_STR(snd_soc_info_volsw) },
	{ 0xd7b24056, __VMLINUX_SYMBOL_STR(snd_soc_get_enum_double) },
	{ 0x5961e70d, __VMLINUX_SYMBOL_STR(snd_soc_codec_set_cache_io) },
	{ 0xeb2f6ee3, __VMLINUX_SYMBOL_STR(snd_soc_unregister_codec) },
	{ 0xa3db5c6b, __VMLINUX_SYMBOL_STR(snd_soc_put_enum_double) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x83ea2ea9, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x1a0944ff, __VMLINUX_SYMBOL_STR(mc13xxx_reg_write) },
	{ 0x66e77516, __VMLINUX_SYMBOL_STR(snd_soc_register_codec) },
	{ 0x564906d2, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x43c003ff, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x5b2caa6f, __VMLINUX_SYMBOL_STR(snd_soc_dapm_put_enum_double) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-soc-core";

