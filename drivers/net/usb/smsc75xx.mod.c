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
	{ 0x33ba5cd4, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x117c07d0, __VMLINUX_SYMBOL_STR(usbnet_disconnect) },
	{ 0xe227adaf, __VMLINUX_SYMBOL_STR(usbnet_probe) },
	{ 0x6cd0dd98, __VMLINUX_SYMBOL_STR(usbnet_get_link) },
	{ 0x69316ba1, __VMLINUX_SYMBOL_STR(usbnet_nway_reset) },
	{ 0xfb20a6c4, __VMLINUX_SYMBOL_STR(usbnet_set_msglevel) },
	{ 0x39a22613, __VMLINUX_SYMBOL_STR(usbnet_get_msglevel) },
	{ 0x847bab98, __VMLINUX_SYMBOL_STR(usbnet_get_drvinfo) },
	{ 0x35e20341, __VMLINUX_SYMBOL_STR(usbnet_set_settings) },
	{ 0x2538fd40, __VMLINUX_SYMBOL_STR(usbnet_get_settings) },
	{ 0x745a77, __VMLINUX_SYMBOL_STR(usbnet_tx_timeout) },
	{ 0x5b099eed, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0x50dc2a1e, __VMLINUX_SYMBOL_STR(eth_mac_addr) },
	{ 0x6405554e, __VMLINUX_SYMBOL_STR(usbnet_start_xmit) },
	{ 0x26f43e3c, __VMLINUX_SYMBOL_STR(usbnet_stop) },
	{ 0x5dc1e8c0, __VMLINUX_SYMBOL_STR(usbnet_open) },
	{ 0xe495880d, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0xe67f1a0, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x215ebd78, __VMLINUX_SYMBOL_STR(bitrev16) },
	{ 0x8ffdb3b8, __VMLINUX_SYMBOL_STR(crc16) },
	{ 0x8d9d1213, __VMLINUX_SYMBOL_STR(usbnet_suspend) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0xb840f323, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x47f03165, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x79222a5, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xbe7118b7, __VMLINUX_SYMBOL_STR(usbnet_get_endpoints) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x2c0bc114, __VMLINUX_SYMBOL_STR(mii_nway_restart) },
	{ 0xd7775606, __VMLINUX_SYMBOL_STR(netdev_info) },
	{ 0x82c87316, __VMLINUX_SYMBOL_STR(usbnet_resume) },
	{ 0x43c003ff, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x78327639, __VMLINUX_SYMBOL_STR(usbnet_defer_kevent) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0xd6ccd19e, __VMLINUX_SYMBOL_STR(usbnet_change_mtu) },
	{ 0x3b9d58ed, __VMLINUX_SYMBOL_STR(mii_ethtool_gset) },
	{ 0x3298ecf1, __VMLINUX_SYMBOL_STR(mii_check_media) },
	{ 0x6f9a27f5, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x10da615, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xa79ccc3b, __VMLINUX_SYMBOL_STR(usbnet_read_cmd) },
	{ 0x35d12521, __VMLINUX_SYMBOL_STR(usbnet_read_cmd_nopm) },
	{ 0x1b773134, __VMLINUX_SYMBOL_STR(usbnet_write_cmd_nopm) },
	{ 0xc3b1b553, __VMLINUX_SYMBOL_STR(usbnet_write_cmd) },
	{ 0xf7212a09, __VMLINUX_SYMBOL_STR(usbnet_skb_return) },
	{ 0x1fccca06, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xb3a9772a, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0x109be486, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x515d3497, __VMLINUX_SYMBOL_STR(generic_mii_ioctl) },
	{ 0xf6d917a9, __VMLINUX_SYMBOL_STR(netdev_warn) },
	{ 0x8064d1f2, __VMLINUX_SYMBOL_STR(device_set_wakeup_enable) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x487570c7, __VMLINUX_SYMBOL_STR(__dynamic_netdev_dbg) },
	{ 0xfaf98462, __VMLINUX_SYMBOL_STR(bitrev32) },
	{ 0xa34f1ef5, __VMLINUX_SYMBOL_STR(crc32_le) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x190dd71e, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0xbf058d4a, __VMLINUX_SYMBOL_STR(skb_copy_expand) },
	{ 0xec57b2d1, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbnet";

MODULE_ALIAS("usb:v0424p7500d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424p7505d*dc*dsc*dp*ic*isc*ip*in*");
