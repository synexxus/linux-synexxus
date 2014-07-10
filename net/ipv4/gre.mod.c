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
	{ 0x609f1c7e, __VMLINUX_SYMBOL_STR(synchronize_net) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xd342ba66, __VMLINUX_SYMBOL_STR(icmp_send) },
	{ 0x7758e4e5, __VMLINUX_SYMBOL_STR(ipv4_update_pmtu) },
	{ 0x6bced8ec, __VMLINUX_SYMBOL_STR(inet_del_protocol) },
	{ 0xb6ecf069, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0xec3274b4, __VMLINUX_SYMBOL_STR(skb_checksum) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xec57b2d1, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x2b1db369, __VMLINUX_SYMBOL_STR(inet_add_protocol) },
	{ 0xc2cdbf1, __VMLINUX_SYMBOL_STR(synchronize_sched) },
	{ 0x7fc7bfa2, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xd29551a, __VMLINUX_SYMBOL_STR(ipv4_redirect) },
	{ 0xfad28080, __VMLINUX_SYMBOL_STR(iptunnel_pull_header) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xe34d9bfc, __VMLINUX_SYMBOL_STR(__skb_checksum_complete) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

