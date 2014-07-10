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
	{ 0x505cf4d9, __VMLINUX_SYMBOL_STR(nft_unregister_chain_type) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x66652347, __VMLINUX_SYMBOL_STR(nft_register_chain_type) },
	{ 0x91820180, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0x9fc2bff1, __VMLINUX_SYMBOL_STR(ip_route_me_harder) },
	{ 0x4a4faca1, __VMLINUX_SYMBOL_STR(nf_xfrm_me_harder) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x391d9dc9, __VMLINUX_SYMBOL_STR(nf_nat_alloc_null_binding) },
	{ 0x594f2e32, __VMLINUX_SYMBOL_STR(nf_nat_icmp_reply_translation) },
	{ 0x351492d7, __VMLINUX_SYMBOL_STR(__nf_ct_ext_add_length) },
	{ 0x258299ca, __VMLINUX_SYMBOL_STR(nft_do_chain) },
	{ 0x3260726, __VMLINUX_SYMBOL_STR(nf_nat_packet) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_tables,nf_nat,nf_nat_ipv4,nf_conntrack";

