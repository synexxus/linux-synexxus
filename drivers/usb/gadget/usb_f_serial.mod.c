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
	{ 0xc28b8cde, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x4f5a3ba1, __VMLINUX_SYMBOL_STR(usb_free_all_descriptors) },
	{ 0x77dbb172, __VMLINUX_SYMBOL_STR(gserial_connect) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xbd669fe5, __VMLINUX_SYMBOL_STR(usb_function_unregister) },
	{ 0xd5c91b15, __VMLINUX_SYMBOL_STR(usb_put_function_instance) },
	{ 0x5be9608b, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x4346abf8, __VMLINUX_SYMBOL_STR(usb_ep_autoconfig) },
	{ 0x3f61f89, __VMLINUX_SYMBOL_STR(gserial_disconnect) },
	{ 0xa14aedbd, __VMLINUX_SYMBOL_STR(config_group_init_type_name) },
	{ 0x33bfdca2, __VMLINUX_SYMBOL_STR(gserial_alloc_line) },
	{ 0x6b149500, __VMLINUX_SYMBOL_STR(usb_function_register) },
	{ 0x6fef2591, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xcc8acea8, __VMLINUX_SYMBOL_STR(config_ep_by_speed) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xb6652875, __VMLINUX_SYMBOL_STR(gserial_free_line) },
	{ 0x169b0da8, __VMLINUX_SYMBOL_STR(usb_string_id) },
	{ 0x9f3be1c4, __VMLINUX_SYMBOL_STR(usb_assign_descriptors) },
	{ 0x8073d44a, __VMLINUX_SYMBOL_STR(usb_interface_id) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libcomposite,u_serial,configfs";


MODULE_INFO(srcversion, "AD7573432F9E80545FD1E7E");
