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
	{ 0x92b57248, __VMLINUX_SYMBOL_STR(flush_work) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xc28b8cde, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xff178f6, __VMLINUX_SYMBOL_STR(__aeabi_idivmod) },
	{ 0x4f5a3ba1, __VMLINUX_SYMBOL_STR(usb_free_all_descriptors) },
	{ 0x1c6ffdfe, __VMLINUX_SYMBOL_STR(usb_add_config) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0x43ca8c95, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0x62a6f211, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x11f7ed4c, __VMLINUX_SYMBOL_STR(hex_to_bin) },
	{ 0x2a3aa678, __VMLINUX_SYMBOL_STR(_test_and_clear_bit) },
	{ 0x2b88a731, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0x1976aa06, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x70a3e38, __VMLINUX_SYMBOL_STR(skb_realloc_headroom) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xdc194bd9, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xb5acfd3, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0x35b6b772, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5be9608b, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x34908c14, __VMLINUX_SYMBOL_STR(print_hex_dump_bytes) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x7c68aa2d, __VMLINUX_SYMBOL_STR(ethtool_op_get_link) },
	{ 0x4346abf8, __VMLINUX_SYMBOL_STR(usb_ep_autoconfig) },
	{ 0xe4985b20, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0xec10ed52, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x92281d58, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xa34f1ef5, __VMLINUX_SYMBOL_STR(crc32_le) },
	{ 0x6a7a7091, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x5eb54f7a, __VMLINUX_SYMBOL_STR(dev_kfree_skb_any) },
	{ 0x8ffd45c, __VMLINUX_SYMBOL_STR(usb_composite_overwrite_options) },
	{ 0x9ee13f47, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0xeae6b9dc, __VMLINUX_SYMBOL_STR(skb_copy_expand) },
	{ 0x3f346ce4, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x6fef2591, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x96cf579, __VMLINUX_SYMBOL_STR(usb_composite_probe) },
	{ 0xc6e68079, __VMLINUX_SYMBOL_STR(usb_add_function) },
	{ 0x18c32f38, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x3507a132, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x2cca728c, __VMLINUX_SYMBOL_STR(eth_type_trans) },
	{ 0xcc8acea8, __VMLINUX_SYMBOL_STR(config_ep_by_speed) },
	{ 0x713f1b9b, __VMLINUX_SYMBOL_STR(usb_composite_unregister) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x63749a14, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xb0b4e876, __VMLINUX_SYMBOL_STR(usb_string_ids_tab) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x169b0da8, __VMLINUX_SYMBOL_STR(usb_string_id) },
	{ 0x9f3be1c4, __VMLINUX_SYMBOL_STR(usb_assign_descriptors) },
	{ 0x8073d44a, __VMLINUX_SYMBOL_STR(usb_interface_id) },
	{ 0xc4a441f3, __VMLINUX_SYMBOL_STR(skb_dequeue) },
	{ 0x9d187112, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x1ee16a75, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xfa3c643b, __VMLINUX_SYMBOL_STR(__netif_schedule) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x487d9343, __VMLINUX_SYMBOL_STR(param_ops_ushort) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x6b77fa1b, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xa821cd3d, __VMLINUX_SYMBOL_STR(eth_mac_addr) },
	{ 0x6d044c26, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x95aea938, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0xcf400f6f, __VMLINUX_SYMBOL_STR(dev_get_stats) },
	{ 0x2b0b44ce, __VMLINUX_SYMBOL_STR(alloc_etherdev_mqs) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libcomposite";


MODULE_INFO(srcversion, "D7F415662025C612398463F");
