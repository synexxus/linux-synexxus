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
	{ 0xafad493b, __VMLINUX_SYMBOL_STR(param_ops_ushort) },
	{ 0x20b2bb2d, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0x665cfc11, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0xca872e04, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0xcbe145d1, __VMLINUX_SYMBOL_STR(ip_vs_conn_in_get) },
	{ 0x4943420e, __VMLINUX_SYMBOL_STR(skb_make_writable) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x902fe6be, __VMLINUX_SYMBOL_STR(ip_vs_conn_new) },
	{ 0xf8220145, __VMLINUX_SYMBOL_STR(ip_vs_conn_put) },
	{ 0xeab75863, __VMLINUX_SYMBOL_STR(ip_vs_tcp_conn_listen) },
	{ 0x2e5b4d7f, __VMLINUX_SYMBOL_STR(ip_vs_nfct_expect_related) },
	{ 0x10c7b0fb, __VMLINUX_SYMBOL_STR(__nf_nat_mangle_tcp_packet) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xd1b9cfcd, __VMLINUX_SYMBOL_STR(ip_vs_conn_out_get) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x4e830a3e, __VMLINUX_SYMBOL_STR(strnicmp) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xa9026738, __VMLINUX_SYMBOL_STR(register_ip_vs_app_inc) },
	{ 0x114ee735, __VMLINUX_SYMBOL_STR(register_ip_vs_app) },
	{ 0x14ba9be4, __VMLINUX_SYMBOL_STR(unregister_ip_vs_app) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ip_vs,nf_nat";

