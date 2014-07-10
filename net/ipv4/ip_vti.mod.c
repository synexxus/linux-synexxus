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
	{ 0xdf47a34c, __VMLINUX_SYMBOL_STR(ip_tunnel_get_stats64) },
	{ 0x833bb37e, __VMLINUX_SYMBOL_STR(ip_tunnel_change_mtu) },
	{ 0x5ca5eeb6, __VMLINUX_SYMBOL_STR(ip_tunnel_uninit) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x19d28a22, __VMLINUX_SYMBOL_STR(rtnl_link_unregister) },
	{ 0xf9a6d6bd, __VMLINUX_SYMBOL_STR(rtnl_link_register) },
	{ 0x6a564ff8, __VMLINUX_SYMBOL_STR(unregister_pernet_device) },
	{ 0xbfe1b326, __VMLINUX_SYMBOL_STR(xfrm4_protocol_deregister) },
	{ 0x1fa46c73, __VMLINUX_SYMBOL_STR(xfrm4_protocol_register) },
	{ 0xc68d9ded, __VMLINUX_SYMBOL_STR(register_pernet_device) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xd42db91c, __VMLINUX_SYMBOL_STR(ip_tunnel_init_net) },
	{ 0x42aa5409, __VMLINUX_SYMBOL_STR(ip_tunnel_delete_net) },
	{ 0x34e5a0c5, __VMLINUX_SYMBOL_STR(xfrm_input) },
	{ 0x80e54eb7, __VMLINUX_SYMBOL_STR(__xfrm_policy_check) },
	{ 0x7758e4e5, __VMLINUX_SYMBOL_STR(ipv4_update_pmtu) },
	{ 0xfcc113b, __VMLINUX_SYMBOL_STR(__xfrm_state_destroy) },
	{ 0xd29551a, __VMLINUX_SYMBOL_STR(ipv4_redirect) },
	{ 0x95be2b43, __VMLINUX_SYMBOL_STR(xfrm_state_lookup) },
	{ 0x1a6d942c, __VMLINUX_SYMBOL_STR(ip_tunnel_lookup) },
	{ 0x8f315079, __VMLINUX_SYMBOL_STR(ip_tunnel_init) },
	{ 0x18baa623, __VMLINUX_SYMBOL_STR(skb_scrub_packet) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x42ffc6c3, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x7fc7bfa2, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x91820180, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0xc0481909, __VMLINUX_SYMBOL_STR(xfrm_lookup) },
	{ 0x9f1ca870, __VMLINUX_SYMBOL_STR(__xfrm_decode_session) },
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
"depends=ip_tunnel";

