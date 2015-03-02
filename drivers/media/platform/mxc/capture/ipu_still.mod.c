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
	{ 0x760a38cc, __VMLINUX_SYMBOL_STR(ipu_init_channel) },
	{ 0x850e85bb, __VMLINUX_SYMBOL_STR(ipu_uninit_channel) },
	{ 0xfa6e801e, __VMLINUX_SYMBOL_STR(ipu_init_channel_buffer) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x67a0acb, __VMLINUX_SYMBOL_STR(ipu_disable_channel) },
	{ 0x7a565a56, __VMLINUX_SYMBOL_STR(ipu_enable_channel) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xe90897dc, __VMLINUX_SYMBOL_STR(ipu_disable_csi) },
	{ 0x108dc41e, __VMLINUX_SYMBOL_STR(ipu_clear_irq) },
	{ 0xfbe4b342, __VMLINUX_SYMBOL_STR(ipu_free_irq) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x710a379c, __VMLINUX_SYMBOL_STR(ipu_enable_csi) },
	{ 0xc1f2a7ef, __VMLINUX_SYMBOL_STR(ipu_select_buffer) },
	{ 0xdc2b9c93, __VMLINUX_SYMBOL_STR(ipu_request_irq) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "0EC871A3AE265631410319B");
