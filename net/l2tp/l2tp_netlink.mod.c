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
	{ 0x17aa5c55, __VMLINUX_SYMBOL_STR(l2tp_tunnel_find) },
	{ 0x2b9da7a4, __VMLINUX_SYMBOL_STR(genl_lock) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x6d73396a, __VMLINUX_SYMBOL_STR(genl_unregister_family) },
	{ 0xaf47b72d, __VMLINUX_SYMBOL_STR(l2tp_session_find) },
	{ 0x9fbcc39, __VMLINUX_SYMBOL_STR(__genl_register_family) },
	{ 0x1fccca06, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xf1db1704, __VMLINUX_SYMBOL_STR(nla_memcpy) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x2bc89550, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x8160419a, __VMLINUX_SYMBOL_STR(netlink_unicast) },
	{ 0x94465c38, __VMLINUX_SYMBOL_STR(l2tp_session_find_by_ifname) },
	{ 0x3cdcc622, __VMLINUX_SYMBOL_STR(l2tp_session_find_nth) },
	{ 0x24d72ed2, __VMLINUX_SYMBOL_STR(l2tp_tunnel_create) },
	{ 0xe468534d, __VMLINUX_SYMBOL_STR(l2tp_tunnel_find_nth) },
	{ 0x708609aa, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x2d140a58, __VMLINUX_SYMBOL_STR(genl_unlock) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0x7fc7bfa2, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x85d3b549, __VMLINUX_SYMBOL_STR(genlmsg_put) },
	{ 0x1b82fd92, __VMLINUX_SYMBOL_STR(l2tp_tunnel_delete) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x7dbeffc1, __VMLINUX_SYMBOL_STR(l2tp_session_set_header_len) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=l2tp_core";


MODULE_INFO(srcversion, "7866FEE5F6D086A4190E652");
