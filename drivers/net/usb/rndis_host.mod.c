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
	{ 0x79222a5, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x82c87316, __VMLINUX_SYMBOL_STR(usbnet_resume) },
	{ 0x3a657fb3, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0xe227adaf, __VMLINUX_SYMBOL_STR(usbnet_probe) },
	{ 0xfbe7416a, __VMLINUX_SYMBOL_STR(usbnet_cdc_unbind) },
	{ 0x117c07d0, __VMLINUX_SYMBOL_STR(usbnet_disconnect) },
	{ 0xb3a9772a, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0xd76bcd2, __VMLINUX_SYMBOL_STR(usbnet_generic_cdc_bind) },
	{ 0x190dd71e, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x26f43e3c, __VMLINUX_SYMBOL_STR(usbnet_stop) },
	{ 0x487570c7, __VMLINUX_SYMBOL_STR(__dynamic_netdev_dbg) },
	{ 0x1fccca06, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x46b4b4bf, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xe495880d, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0xdad8ec5d, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x6405554e, __VMLINUX_SYMBOL_STR(usbnet_start_xmit) },
	{ 0x8d9d1213, __VMLINUX_SYMBOL_STR(usbnet_suspend) },
	{ 0x109be486, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0xbf058d4a, __VMLINUX_SYMBOL_STR(skb_copy_expand) },
	{ 0x6dc71b43, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x745a77, __VMLINUX_SYMBOL_STR(usbnet_tx_timeout) },
	{ 0xf7212a09, __VMLINUX_SYMBOL_STR(usbnet_skb_return) },
	{ 0xa37982b3, __VMLINUX_SYMBOL_STR(usb_driver_release_interface) },
	{ 0x5dc1e8c0, __VMLINUX_SYMBOL_STR(usbnet_open) },
	{ 0xe5787779, __VMLINUX_SYMBOL_STR(usb_interrupt_msg) },
	{ 0x47f03165, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x7c74d300, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x5b099eed, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xe67f1a0, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x3d9d606d, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0x50dc2a1e, __VMLINUX_SYMBOL_STR(eth_mac_addr) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbnet,cdc_ether";

MODULE_ALIAS("usb:v1630p0042d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*icEFisc01ip01in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*icE0isc01ip03in*");
