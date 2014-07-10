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
	{ 0x8b257a8b, __VMLINUX_SYMBOL_STR(inet_frag_kill) },
	{ 0xd74289f9, __VMLINUX_SYMBOL_STR(__percpu_counter_add) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x812ac2aa, __VMLINUX_SYMBOL_STR(ip6_expire_frag_queue) },
	{ 0x97657dd6, __VMLINUX_SYMBOL_STR(unregister_net_sysctl_table) },
	{ 0xfd99623a, __VMLINUX_SYMBOL_STR(ip_frag_ecn_table) },
	{ 0xe43274bc, __VMLINUX_SYMBOL_STR(proc_dointvec) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0xb3a9772a, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0xf087137d, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0xe7a664c4, __VMLINUX_SYMBOL_STR(nf_hooks) },
	{ 0xcfc131d5, __VMLINUX_SYMBOL_STR(nf_hook_slow) },
	{ 0x816ab9ba, __VMLINUX_SYMBOL_STR(inet_frag_find) },
	{ 0xb6ecf069, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x665cfc11, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0x99591a7a, __VMLINUX_SYMBOL_STR(ipv6_ext_hdr) },
	{ 0xf41bbf25, __VMLINUX_SYMBOL_STR(inet_frags_fini) },
	{ 0x33a9a4da, __VMLINUX_SYMBOL_STR(inet_frags_exit_net) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xec57b2d1, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x7e18060c, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0x1bbac06, __VMLINUX_SYMBOL_STR(nf_unregister_hooks) },
	{ 0x708609aa, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x7c6a2fdf, __VMLINUX_SYMBOL_STR(inet_frag_evictor) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0x3628a99f, __VMLINUX_SYMBOL_STR(inet_frag_maybe_warn_overflow) },
	{ 0x31805f80, __VMLINUX_SYMBOL_STR(__net_get_random_once) },
	{ 0x7fc7bfa2, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x7b6b2137, __VMLINUX_SYMBOL_STR(inet_frag_destroy) },
	{ 0xca872e04, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0xd6d87211, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xa4ddcd81, __VMLINUX_SYMBOL_STR(ip6_frag_init) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0xd5c5ff75, __VMLINUX_SYMBOL_STR(inet_frags_init_net) },
	{ 0x4c5fc58c, __VMLINUX_SYMBOL_STR(_raw_read_lock_bh) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x18289139, __VMLINUX_SYMBOL_STR(___pskb_trim) },
	{ 0x1da5c6f4, __VMLINUX_SYMBOL_STR(nf_register_hooks) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xf14b0fd4, __VMLINUX_SYMBOL_STR(inet_frags_init) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0xe113bbbc, __VMLINUX_SYMBOL_STR(csum_partial) },
	{ 0x42ffc6c3, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x35158486, __VMLINUX_SYMBOL_STR(register_net_sysctl) },
	{ 0x9cf1b46, __VMLINUX_SYMBOL_STR(proc_dointvec_jiffies) },
	{ 0xc028a9bf, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0xa34d0716, __VMLINUX_SYMBOL_STR(ip6_frag_match) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

