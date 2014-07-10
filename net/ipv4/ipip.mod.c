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
	{ 0x5ca5eeb6, __VMLINUX_SYMBOL_STR(ip_tunnel_uninit) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x19d28a22, __VMLINUX_SYMBOL_STR(rtnl_link_unregister) },
	{ 0x6a564ff8, __VMLINUX_SYMBOL_STR(unregister_pernet_device) },
	{ 0x61cb32b2, __VMLINUX_SYMBOL_STR(xfrm4_tunnel_deregister) },
	{ 0xf9a6d6bd, __VMLINUX_SYMBOL_STR(rtnl_link_register) },
	{ 0x24dfb6dd, __VMLINUX_SYMBOL_STR(xfrm4_tunnel_register) },
	{ 0xc68d9ded, __VMLINUX_SYMBOL_STR(register_pernet_device) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x42aa5409, __VMLINUX_SYMBOL_STR(ip_tunnel_delete_net) },
	{ 0xd42db91c, __VMLINUX_SYMBOL_STR(ip_tunnel_init_net) },
	{ 0x4c598af0, __VMLINUX_SYMBOL_STR(ip_tunnel_rcv) },
	{ 0x80e54eb7, __VMLINUX_SYMBOL_STR(__xfrm_policy_check) },
	{ 0xfad28080, __VMLINUX_SYMBOL_STR(iptunnel_pull_header) },
	{ 0xd29551a, __VMLINUX_SYMBOL_STR(ipv4_redirect) },
	{ 0x7758e4e5, __VMLINUX_SYMBOL_STR(ipv4_update_pmtu) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x1a6d942c, __VMLINUX_SYMBOL_STR(ip_tunnel_lookup) },
	{ 0x8f315079, __VMLINUX_SYMBOL_STR(ip_tunnel_init) },
	{ 0x7fc7bfa2, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x62af0328, __VMLINUX_SYMBOL_STR(ip_tunnel_xmit) },
	{ 0xf249819f, __VMLINUX_SYMBOL_STR(iptunnel_handle_offloads) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0xdc2a9607, __VMLINUX_SYMBOL_STR(ip_tunnel_ioctl) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0xf9581dac, __VMLINUX_SYMBOL_STR(ip_tunnel_setup) },
	{ 0xa82c027, __VMLINUX_SYMBOL_STR(ip_tunnel_newlink) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x42231b2, __VMLINUX_SYMBOL_STR(ip_tunnel_changelink) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x2bc89550, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ip_tunnel,tunnel4";

