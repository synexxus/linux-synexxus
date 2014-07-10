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
	{ 0x9f9987cb, __VMLINUX_SYMBOL_STR(ip_tunnel_dellink) },
	{ 0x33ba5cd4, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0xdf47a34c, __VMLINUX_SYMBOL_STR(ip_tunnel_get_stats64) },
	{ 0x833bb37e, __VMLINUX_SYMBOL_STR(ip_tunnel_change_mtu) },
	{ 0x5b099eed, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0x50dc2a1e, __VMLINUX_SYMBOL_STR(eth_mac_addr) },
	{ 0x5ca5eeb6, __VMLINUX_SYMBOL_STR(ip_tunnel_uninit) },
	{ 0x6a564ff8, __VMLINUX_SYMBOL_STR(unregister_pernet_device) },
	{ 0x34bce75c, __VMLINUX_SYMBOL_STR(gre_cisco_unregister) },
	{ 0x19d28a22, __VMLINUX_SYMBOL_STR(rtnl_link_unregister) },
	{ 0xf9a6d6bd, __VMLINUX_SYMBOL_STR(rtnl_link_register) },
	{ 0xd68ca460, __VMLINUX_SYMBOL_STR(gre_cisco_register) },
	{ 0xc68d9ded, __VMLINUX_SYMBOL_STR(register_pernet_device) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x42aa5409, __VMLINUX_SYMBOL_STR(ip_tunnel_delete_net) },
	{ 0x972ecdf1, __VMLINUX_SYMBOL_STR(ip_mc_dec_group) },
	{ 0x77f09bc, __VMLINUX_SYMBOL_STR(inetdev_by_index) },
	{ 0xa82c027, __VMLINUX_SYMBOL_STR(ip_tunnel_newlink) },
	{ 0x42231b2, __VMLINUX_SYMBOL_STR(ip_tunnel_changelink) },
	{ 0xd42db91c, __VMLINUX_SYMBOL_STR(ip_tunnel_init_net) },
	{ 0x4c598af0, __VMLINUX_SYMBOL_STR(ip_tunnel_rcv) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x1a6d942c, __VMLINUX_SYMBOL_STR(ip_tunnel_lookup) },
	{ 0xec57b2d1, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x3213803d, __VMLINUX_SYMBOL_STR(ip_mc_inc_group) },
	{ 0x91820180, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0xbf75475a, __VMLINUX_SYMBOL_STR(ip_route_output_flow) },
	{ 0x109be486, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0xdc2a9607, __VMLINUX_SYMBOL_STR(ip_tunnel_ioctl) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x8f315079, __VMLINUX_SYMBOL_STR(ip_tunnel_init) },
	{ 0x7fc7bfa2, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xd6d87211, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0xf249819f, __VMLINUX_SYMBOL_STR(iptunnel_handle_offloads) },
	{ 0x62af0328, __VMLINUX_SYMBOL_STR(ip_tunnel_xmit) },
	{ 0xc45923c7, __VMLINUX_SYMBOL_STR(gre_build_header) },
	{ 0xf9581dac, __VMLINUX_SYMBOL_STR(ip_tunnel_setup) },
	{ 0x16f27c42, __VMLINUX_SYMBOL_STR(ether_setup) },
	{ 0x2bc89550, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ip_tunnel,gre";

