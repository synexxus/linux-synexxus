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
	{ 0x5012c961, __VMLINUX_SYMBOL_STR(register_netdevice) },
	{ 0x79222a5, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x8f196e56, __VMLINUX_SYMBOL_STR(dev_forward_skb) },
	{ 0xcb145d13, __VMLINUX_SYMBOL_STR(dev_mc_unsync) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x25f4fa7c, __VMLINUX_SYMBOL_STR(dev_get_nest_level) },
	{ 0x9469482, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0xb2d82450, __VMLINUX_SYMBOL_STR(dev_uc_add) },
	{ 0x80e26271, __VMLINUX_SYMBOL_STR(dev_mc_add_excl) },
	{ 0x89a9576b, __VMLINUX_SYMBOL_STR(netdev_rx_handler_register) },
	{ 0x3ab6f2e0, __VMLINUX_SYMBOL_STR(dev_uc_add_excl) },
	{ 0xb3a9772a, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0xd3f57a2, __VMLINUX_SYMBOL_STR(_find_next_bit_le) },
	{ 0xd2da1048, __VMLINUX_SYMBOL_STR(register_netdevice_notifier) },
	{ 0x50c89f23, __VMLINUX_SYMBOL_STR(__alloc_percpu) },
	{ 0xfed9eeba, __VMLINUX_SYMBOL_STR(dev_set_allmulti) },
	{ 0x4fa4e211, __VMLINUX_SYMBOL_STR(vlan_vid_del) },
	{ 0xc490a881, __VMLINUX_SYMBOL_STR(vlan_vid_add) },
	{ 0xc9ec4e21, __VMLINUX_SYMBOL_STR(free_percpu) },
	{ 0x9d0d6206, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier) },
	{ 0xce0ef0af, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xf368430, __VMLINUX_SYMBOL_STR(ip_check_defrag) },
	{ 0x9fdecc31, __VMLINUX_SYMBOL_STR(unregister_netdevice_many) },
	{ 0x446aa32a, __VMLINUX_SYMBOL_STR(ethtool_op_get_link) },
	{ 0xfb5516a5, __VMLINUX_SYMBOL_STR(__ethtool_get_settings) },
	{ 0x92db4323, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0x5e92f27, __VMLINUX_SYMBOL_STR(dev_mc_del) },
	{ 0x2bc89550, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x4f06f387, __VMLINUX_SYMBOL_STR(netdev_upper_dev_unlink) },
	{ 0x99a9739c, __VMLINUX_SYMBOL_STR(ndo_dflt_fdb_dump) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xc2cdbf1, __VMLINUX_SYMBOL_STR(synchronize_sched) },
	{ 0x6e7e8895, __VMLINUX_SYMBOL_STR(netif_stacked_transfer_operstate) },
	{ 0x19d28a22, __VMLINUX_SYMBOL_STR(rtnl_link_unregister) },
	{ 0x10dd1b7b, __VMLINUX_SYMBOL_STR(__dev_get_by_index) },
	{ 0x8a032f66, __VMLINUX_SYMBOL_STR(eth_header_cache_update) },
	{ 0xd3e6f60d, __VMLINUX_SYMBOL_STR(cpu_possible_mask) },
	{ 0x9fc963e3, __VMLINUX_SYMBOL_STR(netdev_rx_handler_unregister) },
	{ 0xbc5cbe83, __VMLINUX_SYMBOL_STR(eth_header_parse) },
	{ 0x7fc7bfa2, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x95c610e3, __VMLINUX_SYMBOL_STR(netdev_upper_dev_link) },
	{ 0x16f27c42, __VMLINUX_SYMBOL_STR(ether_setup) },
	{ 0x7b6d554f, __VMLINUX_SYMBOL_STR(dev_uc_unsync) },
	{ 0x47f03165, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x341dbfa3, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0x88f9811a, __VMLINUX_SYMBOL_STR(unregister_netdevice_queue) },
	{ 0x5b099eed, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0x827d5c97, __VMLINUX_SYMBOL_STR(dev_set_promiscuity) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xe61330d7, __VMLINUX_SYMBOL_STR(eth_header_cache) },
	{ 0xf9a6d6bd, __VMLINUX_SYMBOL_STR(rtnl_link_register) },
	{ 0xac79515d, __VMLINUX_SYMBOL_STR(dev_uc_del) },
	{ 0x6b2e862f, __VMLINUX_SYMBOL_STR(dev_uc_sync) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x42ffc6c3, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x26742685, __VMLINUX_SYMBOL_STR(netdev_update_features) },
	{ 0x2d288870, __VMLINUX_SYMBOL_STR(dev_queue_xmit_accel) },
	{ 0xf73e44f9, __VMLINUX_SYMBOL_STR(dev_queue_xmit) },
	{ 0x82748349, __VMLINUX_SYMBOL_STR(eth_rebuild_header) },
	{ 0x47feafc3, __VMLINUX_SYMBOL_STR(dev_mc_sync) },
	{ 0xc58a8cd, __VMLINUX_SYMBOL_STR(netdev_increment_features) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

