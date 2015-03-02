#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
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
	{ 0x9cceacf4, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x798209ab, __VMLINUX_SYMBOL_STR(ipu_get_soc) },
	{ 0xc818417e, __VMLINUX_SYMBOL_STR(arm_dma_ops) },
	{ 0x760a38cc, __VMLINUX_SYMBOL_STR(ipu_init_channel) },
	{ 0xc2fd719b, __VMLINUX_SYMBOL_STR(ipu_clear_buffer_ready) },
	{ 0x850e85bb, __VMLINUX_SYMBOL_STR(ipu_uninit_channel) },
	{ 0xfa6e801e, __VMLINUX_SYMBOL_STR(ipu_init_channel_buffer) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x67a0acb, __VMLINUX_SYMBOL_STR(ipu_disable_channel) },
	{ 0x7a565a56, __VMLINUX_SYMBOL_STR(ipu_enable_channel) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x21870f17, __VMLINUX_SYMBOL_STR(mipi_csi2_get_bind_csi) },
	{ 0xe90897dc, __VMLINUX_SYMBOL_STR(ipu_disable_csi) },
	{ 0x108dc41e, __VMLINUX_SYMBOL_STR(ipu_clear_irq) },
	{ 0xe3759947, __VMLINUX_SYMBOL_STR(ipu_update_channel_buffer) },
	{ 0xfbe4b342, __VMLINUX_SYMBOL_STR(ipu_free_irq) },
	{ 0xb695c17a, __VMLINUX_SYMBOL_STR(mipi_csi2_get_bind_ipu) },
	{ 0x81963ee6, __VMLINUX_SYMBOL_STR(mipi_csi2_pixelclk_enable) },
	{ 0x87be9cb9, __VMLINUX_SYMBOL_STR(ipu_csi_get_sensor_protocol) },
	{ 0xbf9cd5c1, __VMLINUX_SYMBOL_STR(mipi_csi2_get_status) },
	{ 0x74b2551d, __VMLINUX_SYMBOL_STR(mipi_csi2_get_info) },
	{ 0x710a379c, __VMLINUX_SYMBOL_STR(ipu_enable_csi) },
	{ 0x7182d1b0, __VMLINUX_SYMBOL_STR(mipi_csi2_pixelclk_disable) },
	{ 0xc1f2a7ef, __VMLINUX_SYMBOL_STR(ipu_select_buffer) },
	{ 0x86106c8c, __VMLINUX_SYMBOL_STR(mipi_csi2_get_virtual_channel) },
	{ 0xdc2b9c93, __VMLINUX_SYMBOL_STR(ipu_request_irq) },
	{ 0xaf89abd6, __VMLINUX_SYMBOL_STR(mipi_csi2_get_datatype) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "F51F4C32344B0A821AFD833");
