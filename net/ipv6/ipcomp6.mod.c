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
	{ 0xbd3b5143, __VMLINUX_SYMBOL_STR(xfrm6_rcv) },
	{ 0x195cc879, __VMLINUX_SYMBOL_STR(xfrm6_find_1stfragopt) },
	{ 0x1d5c0808, __VMLINUX_SYMBOL_STR(ipcomp_output) },
	{ 0x65187fc, __VMLINUX_SYMBOL_STR(ipcomp_input) },
	{ 0x22da9803, __VMLINUX_SYMBOL_STR(ipcomp_destroy) },
	{ 0x51dbd0d7, __VMLINUX_SYMBOL_STR(xfrm6_protocol_deregister) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xd22699e8, __VMLINUX_SYMBOL_STR(xfrm_unregister_type) },
	{ 0x98feae00, __VMLINUX_SYMBOL_STR(xfrm6_protocol_register) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xcd07c1a6, __VMLINUX_SYMBOL_STR(xfrm_register_type) },
	{ 0x8b3aea5, __VMLINUX_SYMBOL_STR(xfrm_state_insert) },
	{ 0xc946559c, __VMLINUX_SYMBOL_STR(xfrm_init_state) },
	{ 0xa416899b, __VMLINUX_SYMBOL_STR(xfrm6_tunnel_alloc_spi) },
	{ 0x23a59979, __VMLINUX_SYMBOL_STR(xfrm_state_alloc) },
	{ 0x3619b412, __VMLINUX_SYMBOL_STR(xfrm6_tunnel_spi_lookup) },
	{ 0x5fb814bf, __VMLINUX_SYMBOL_STR(ipcomp_init_state) },
	{ 0x4b02af90, __VMLINUX_SYMBOL_STR(ip6_redirect) },
	{ 0xfcc113b, __VMLINUX_SYMBOL_STR(__xfrm_state_destroy) },
	{ 0xc9a22efc, __VMLINUX_SYMBOL_STR(ip6_update_pmtu) },
	{ 0x95be2b43, __VMLINUX_SYMBOL_STR(xfrm_state_lookup) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=xfrm_ipcomp,xfrm6_tunnel";

