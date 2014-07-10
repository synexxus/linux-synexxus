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
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x6a564ff8, __VMLINUX_SYMBOL_STR(unregister_pernet_device) },
	{ 0x337f2432, __VMLINUX_SYMBOL_STR(l2tp_nl_unregister_ops) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xc68d9ded, __VMLINUX_SYMBOL_STR(register_pernet_device) },
	{ 0x8b628426, __VMLINUX_SYMBOL_STR(l2tp_nl_register_ops) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x38803a, __VMLINUX_SYMBOL_STR(l2tp_session_delete) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xfb7dae73, __VMLINUX_SYMBOL_STR(__module_get) },
	{ 0x6476a72f, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0xa667138e, __VMLINUX_SYMBOL_STR(alloc_netdev_mqs) },
	{ 0x29e900c2, __VMLINUX_SYMBOL_STR(l2tp_session_create) },
	{ 0xc5f8c21e, __VMLINUX_SYMBOL_STR(dev_get_by_name) },
	{ 0xaf47b72d, __VMLINUX_SYMBOL_STR(l2tp_session_find) },
	{ 0x17aa5c55, __VMLINUX_SYMBOL_STR(l2tp_tunnel_find) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0x9b01090, __VMLINUX_SYMBOL_STR(l2tp_xmit_skb) },
	{ 0x92db4323, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0x16f27c42, __VMLINUX_SYMBOL_STR(ether_setup) },
	{ 0xf087137d, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x4059792f, __VMLINUX_SYMBOL_STR(print_hex_dump) },
	{ 0x7fc7bfa2, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xb6ecf069, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x91820180, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0x2a18c74, __VMLINUX_SYMBOL_STR(nf_conntrack_destroy) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xc14511be, __VMLINUX_SYMBOL_STR(__secpath_destroy) },
	{ 0x8f196e56, __VMLINUX_SYMBOL_STR(dev_forward_skb) },
	{ 0x271c2372, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0xec242769, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0x42b0bdd9, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=l2tp_netlink,l2tp_core";


MODULE_INFO(srcversion, "596739EEC831C4BB98925CA");
