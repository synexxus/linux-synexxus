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
	{ 0x3cce7ef1, __VMLINUX_SYMBOL_STR(of_parse_phandle) },
	{ 0xd0b5fc1d, __VMLINUX_SYMBOL_STR(of_property_read_u32_array) },
	{ 0x30693bb7, __VMLINUX_SYMBOL_STR(imx_audmux_v1_configure_port) },
	{ 0x968a83d8, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x46b4b4bf, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x39c6759e, __VMLINUX_SYMBOL_STR(snd_soc_unregister_card) },
	{ 0x57670f96, __VMLINUX_SYMBOL_STR(of_find_compatible_node) },
	{ 0x98f85f76, __VMLINUX_SYMBOL_STR(snd_soc_dai_set_sysclk) },
	{ 0x58631dab, __VMLINUX_SYMBOL_STR(imx_audmux_v2_configure_port) },
	{ 0xb646bc8d, __VMLINUX_SYMBOL_STR(snd_soc_dai_set_fmt) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xef1e01fa, __VMLINUX_SYMBOL_STR(snd_soc_dai_set_tdm_slot) },
	{ 0x83ea2ea9, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0xaf22b5b6, __VMLINUX_SYMBOL_STR(snd_soc_register_card) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-soc-core,snd-soc-imx-audmux";

MODULE_ALIAS("of:N*T*Ceukrea,asoc-tlv320*");
