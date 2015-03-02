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
	{ 0x1976aa06, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x369d4dd3, __VMLINUX_SYMBOL_STR(usb_ep_autoconfig_reset) },
	{ 0x35b6b772, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0xd5c91b15, __VMLINUX_SYMBOL_STR(usb_put_function_instance) },
	{ 0x8ffd45c, __VMLINUX_SYMBOL_STR(usb_composite_overwrite_options) },
	{ 0x3f346ce4, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x96cf579, __VMLINUX_SYMBOL_STR(usb_composite_probe) },
	{ 0xc6e68079, __VMLINUX_SYMBOL_STR(usb_add_function) },
	{ 0xaa38a5fb, __VMLINUX_SYMBOL_STR(usb_put_function) },
	{ 0x713f1b9b, __VMLINUX_SYMBOL_STR(usb_composite_unregister) },
	{ 0x91cf209b, __VMLINUX_SYMBOL_STR(usb_get_function) },
	{ 0xb0b4e876, __VMLINUX_SYMBOL_STR(usb_string_ids_tab) },
	{ 0x9f0b1dc1, __VMLINUX_SYMBOL_STR(usb_add_config_only) },
	{ 0x41c79a19, __VMLINUX_SYMBOL_STR(usb_get_function_instance) },
	{ 0x487d9343, __VMLINUX_SYMBOL_STR(param_ops_ushort) },
	{ 0x6d044c26, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x92dfbd33, __VMLINUX_SYMBOL_STR(usb_remove_function) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libcomposite";


MODULE_INFO(srcversion, "ADDB509EB7F463554928464");
