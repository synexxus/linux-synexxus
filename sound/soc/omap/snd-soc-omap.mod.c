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
	{ 0xe56c49e4, __VMLINUX_SYMBOL_STR(snd_soc_unregister_platform) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x53fb0660, __VMLINUX_SYMBOL_STR(snd_dmaengine_pcm_set_config_from_dai_data) },
	{ 0x5fb99b53, __VMLINUX_SYMBOL_STR(arm_dma_ops) },
	{ 0x15334e5f, __VMLINUX_SYMBOL_STR(snd_soc_set_runtime_hwparams) },
	{ 0xe75cfaf9, __VMLINUX_SYMBOL_STR(snd_hwparams_to_dma_slave_config) },
	{ 0x968a83d8, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x81b92f0f, __VMLINUX_SYMBOL_STR(snd_dmaengine_pcm_pointer) },
	{ 0x9f92b814, __VMLINUX_SYMBOL_STR(snd_dmaengine_pcm_open_request_chan) },
	{ 0x7326e0ec, __VMLINUX_SYMBOL_STR(snd_dmaengine_pcm_open) },
	{ 0xc171524b, __VMLINUX_SYMBOL_STR(dma_request_slave_channel) },
	{ 0x3cb917c9, __VMLINUX_SYMBOL_STR(snd_pcm_lib_ioctl) },
	{ 0xdb6f3aab, __VMLINUX_SYMBOL_STR(omap_dma_filter_fn) },
	{ 0xd15b1172, __VMLINUX_SYMBOL_STR(snd_soc_register_platform) },
	{ 0xc1a3e5ad, __VMLINUX_SYMBOL_STR(snd_dmaengine_pcm_get_chan) },
	{ 0xcdb8f1b6, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0xeb9ab4db, __VMLINUX_SYMBOL_STR(snd_dmaengine_pcm_trigger) },
	{ 0xc16b4234, __VMLINUX_SYMBOL_STR(dma_common_mmap) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x83ea2ea9, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0xd4f7b103, __VMLINUX_SYMBOL_STR(snd_dmaengine_pcm_close_release_chan) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-soc-core,snd-pcm-dmaengine,snd-pcm";

