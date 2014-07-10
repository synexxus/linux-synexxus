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
	{ 0x8d9d1213, __VMLINUX_SYMBOL_STR(usbnet_suspend) },
	{ 0x117c07d0, __VMLINUX_SYMBOL_STR(usbnet_disconnect) },
	{ 0xe227adaf, __VMLINUX_SYMBOL_STR(usbnet_probe) },
	{ 0x745a77, __VMLINUX_SYMBOL_STR(usbnet_tx_timeout) },
	{ 0xd6ccd19e, __VMLINUX_SYMBOL_STR(usbnet_change_mtu) },
	{ 0x5b099eed, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0x6405554e, __VMLINUX_SYMBOL_STR(usbnet_start_xmit) },
	{ 0x26f43e3c, __VMLINUX_SYMBOL_STR(usbnet_stop) },
	{ 0x5dc1e8c0, __VMLINUX_SYMBOL_STR(usbnet_open) },
	{ 0x6cd0dd98, __VMLINUX_SYMBOL_STR(usbnet_get_link) },
	{ 0x69316ba1, __VMLINUX_SYMBOL_STR(usbnet_nway_reset) },
	{ 0xfb20a6c4, __VMLINUX_SYMBOL_STR(usbnet_set_msglevel) },
	{ 0x39a22613, __VMLINUX_SYMBOL_STR(usbnet_get_msglevel) },
	{ 0x35e20341, __VMLINUX_SYMBOL_STR(usbnet_set_settings) },
	{ 0x2538fd40, __VMLINUX_SYMBOL_STR(usbnet_get_settings) },
	{ 0xe495880d, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0xe67f1a0, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x82c87316, __VMLINUX_SYMBOL_STR(usbnet_resume) },
	{ 0x43c003ff, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x3d9d606d, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xbe7118b7, __VMLINUX_SYMBOL_STR(usbnet_get_endpoints) },
	{ 0x6dc71b43, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xfaf98462, __VMLINUX_SYMBOL_STR(bitrev32) },
	{ 0xa34f1ef5, __VMLINUX_SYMBOL_STR(crc32_le) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x847bab98, __VMLINUX_SYMBOL_STR(usbnet_get_drvinfo) },
	{ 0xafc62e59, __VMLINUX_SYMBOL_STR(usbnet_write_cmd_async) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x515d3497, __VMLINUX_SYMBOL_STR(generic_mii_ioctl) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x6f9a27f5, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xa79ccc3b, __VMLINUX_SYMBOL_STR(usbnet_read_cmd) },
	{ 0xc3b1b553, __VMLINUX_SYMBOL_STR(usbnet_write_cmd) },
	{ 0x10da615, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x487570c7, __VMLINUX_SYMBOL_STR(__dynamic_netdev_dbg) },
	{ 0x7e20c386, __VMLINUX_SYMBOL_STR(usbnet_link_change) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x7c74d300, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x46b4b4bf, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x1fccca06, __VMLINUX_SYMBOL_STR(skb_trim) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbnet";

MODULE_ALIAS("usb:v9710p7832d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v9710p7830d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v9710p7730d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0021d*dc*dsc*dp*ic*isc*ip*in*");
