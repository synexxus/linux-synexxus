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
	{ 0x117c07d0, __VMLINUX_SYMBOL_STR(usbnet_disconnect) },
	{ 0xe227adaf, __VMLINUX_SYMBOL_STR(usbnet_probe) },
	{ 0x446aa32a, __VMLINUX_SYMBOL_STR(ethtool_op_get_link) },
	{ 0x69316ba1, __VMLINUX_SYMBOL_STR(usbnet_nway_reset) },
	{ 0xfb20a6c4, __VMLINUX_SYMBOL_STR(usbnet_set_msglevel) },
	{ 0x39a22613, __VMLINUX_SYMBOL_STR(usbnet_get_msglevel) },
	{ 0x745a77, __VMLINUX_SYMBOL_STR(usbnet_tx_timeout) },
	{ 0x5b099eed, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0x6405554e, __VMLINUX_SYMBOL_STR(usbnet_start_xmit) },
	{ 0x26f43e3c, __VMLINUX_SYMBOL_STR(usbnet_stop) },
	{ 0x5dc1e8c0, __VMLINUX_SYMBOL_STR(usbnet_open) },
	{ 0xe495880d, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0xe67f1a0, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xbe7118b7, __VMLINUX_SYMBOL_STR(usbnet_get_endpoints) },
	{ 0x2c0bc114, __VMLINUX_SYMBOL_STR(mii_nway_restart) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xfaf98462, __VMLINUX_SYMBOL_STR(bitrev32) },
	{ 0xa34f1ef5, __VMLINUX_SYMBOL_STR(crc32_le) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xafc62e59, __VMLINUX_SYMBOL_STR(usbnet_write_cmd_async) },
	{ 0xd7775606, __VMLINUX_SYMBOL_STR(netdev_info) },
	{ 0x8d9d1213, __VMLINUX_SYMBOL_STR(usbnet_suspend) },
	{ 0x82c87316, __VMLINUX_SYMBOL_STR(usbnet_resume) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x7e20c386, __VMLINUX_SYMBOL_STR(usbnet_link_change) },
	{ 0x43c003ff, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x7221b0d4, __VMLINUX_SYMBOL_STR(usbnet_update_max_qlen) },
	{ 0xc6f95240, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xc3b1b553, __VMLINUX_SYMBOL_STR(usbnet_write_cmd) },
	{ 0x1b773134, __VMLINUX_SYMBOL_STR(usbnet_write_cmd_nopm) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf6d917a9, __VMLINUX_SYMBOL_STR(netdev_warn) },
	{ 0xa79ccc3b, __VMLINUX_SYMBOL_STR(usbnet_read_cmd) },
	{ 0x35d12521, __VMLINUX_SYMBOL_STR(usbnet_read_cmd_nopm) },
	{ 0x515d3497, __VMLINUX_SYMBOL_STR(generic_mii_ioctl) },
	{ 0x3b9d58ed, __VMLINUX_SYMBOL_STR(mii_ethtool_gset) },
	{ 0x65b7d321, __VMLINUX_SYMBOL_STR(mii_ethtool_sset) },
	{ 0x109be486, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0xf7212a09, __VMLINUX_SYMBOL_STR(usbnet_skb_return) },
	{ 0xb3a9772a, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0x1fccca06, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x190dd71e, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0xec57b2d1, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xd6d87211, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbnet";

MODULE_ALIAS("usb:v0B95p1790d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p178Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p4A00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0072d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E8pA100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17EFp304Bd*dc*dsc*dp*ic*isc*ip*in*");
