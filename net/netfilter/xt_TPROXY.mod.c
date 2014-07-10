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
	{ 0xc15f90a8, __VMLINUX_SYMBOL_STR(xt_unregister_targets) },
	{ 0xb2d5b25f, __VMLINUX_SYMBOL_STR(xt_register_targets) },
	{ 0x6eb85693, __VMLINUX_SYMBOL_STR(nf_defrag_ipv6_enable) },
	{ 0x6b6c3d10, __VMLINUX_SYMBOL_STR(nf_defrag_ipv4_enable) },
	{ 0x630ee6e9, __VMLINUX_SYMBOL_STR(inet6_lookup_listener) },
	{ 0x5bbd4b45, __VMLINUX_SYMBOL_STR(__inet6_lookup_established) },
	{ 0x386209d6, __VMLINUX_SYMBOL_STR(udp6_lib_lookup) },
	{ 0xd9d64a2c, __VMLINUX_SYMBOL_STR(ipv6_find_hdr) },
	{ 0x6ab0131b, __VMLINUX_SYMBOL_STR(inet_twsk_deschedule) },
	{ 0xea61fd44, __VMLINUX_SYMBOL_STR(tcp_death_row) },
	{ 0x5db88349, __VMLINUX_SYMBOL_STR(__inet_lookup_listener) },
	{ 0xc028a9bf, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0xe9ae18ce, __VMLINUX_SYMBOL_STR(__inet_lookup_established) },
	{ 0x5751eddb, __VMLINUX_SYMBOL_STR(tcp_hashinfo) },
	{ 0x675e16bf, __VMLINUX_SYMBOL_STR(udp4_lib_lookup) },
	{ 0xf087137d, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xbff781de, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0x12687d44, __VMLINUX_SYMBOL_STR(inet_twsk_put) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x46b4f147, __VMLINUX_SYMBOL_STR(sock_edemux) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=x_tables,nf_defrag_ipv6,nf_defrag_ipv4";

