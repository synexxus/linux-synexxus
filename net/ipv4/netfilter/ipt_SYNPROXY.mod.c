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
	{ 0x19f981ab, __VMLINUX_SYMBOL_STR(xt_unregister_target) },
	{ 0x1bbac06, __VMLINUX_SYMBOL_STR(nf_unregister_hooks) },
	{ 0xd9a6d2ea, __VMLINUX_SYMBOL_STR(xt_register_target) },
	{ 0x1da5c6f4, __VMLINUX_SYMBOL_STR(nf_register_hooks) },
	{ 0x42ffc6c3, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x8aad5a02, __VMLINUX_SYMBOL_STR(nf_ct_seqadj_init) },
	{ 0x20c532d, __VMLINUX_SYMBOL_STR(synproxy_tstamp_adjust) },
	{ 0x90298227, __VMLINUX_SYMBOL_STR(synproxy_init_timestamp_cookie) },
	{ 0x52a41251, __VMLINUX_SYMBOL_STR(__cookie_v4_init_sequence) },
	{ 0xc028a9bf, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0x1124b769, __VMLINUX_SYMBOL_STR(synproxy_parse_options) },
	{ 0x39ae0c1a, __VMLINUX_SYMBOL_STR(nf_ip_checksum) },
	{ 0xef7db50c, __VMLINUX_SYMBOL_STR(synproxy_net_id) },
	{ 0x11a006b5, __VMLINUX_SYMBOL_STR(synproxy_check_timestamp_cookie) },
	{ 0x8841d39b, __VMLINUX_SYMBOL_STR(synproxy_build_options) },
	{ 0x708609aa, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xb42e336a, __VMLINUX_SYMBOL_STR(synproxy_options_size) },
	{ 0x5272d8bc, __VMLINUX_SYMBOL_STR(__cookie_v4_check) },
	{ 0x7fc7bfa2, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xc827d9bb, __VMLINUX_SYMBOL_STR(ip_local_out_sk) },
	{ 0x9fc2bff1, __VMLINUX_SYMBOL_STR(ip_route_me_harder) },
	{ 0xa8c2bdf, __VMLINUX_SYMBOL_STR(__skb_dst_set_noref) },
	{ 0xf6388c56, __VMLINUX_SYMBOL_STR(sysctl_ip_default_ttl) },
	{ 0xe463cc3f, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x78f9b710, __VMLINUX_SYMBOL_STR(nf_ct_l3proto_try_module_get) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xb602c57e, __VMLINUX_SYMBOL_STR(nf_ct_l3proto_module_put) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=x_tables,nf_conntrack,nf_synproxy_core";

