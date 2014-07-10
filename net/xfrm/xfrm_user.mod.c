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
	{ 0xb100befd, __VMLINUX_SYMBOL_STR(xfrm_unregister_km) },
	{ 0x665cfc11, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0x73586135, __VMLINUX_SYMBOL_STR(xfrm_register_km) },
	{ 0xca872e04, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0x674b3682, __VMLINUX_SYMBOL_STR(xfrm_audit_policy_add) },
	{ 0x47857a29, __VMLINUX_SYMBOL_STR(xfrm_policy_insert) },
	{ 0x6558d6e, __VMLINUX_SYMBOL_STR(km_query) },
	{ 0x3491bd75, __VMLINUX_SYMBOL_STR(xfrm_sad_getinfo) },
	{ 0xe8815d0f, __VMLINUX_SYMBOL_STR(xfrm_spd_getinfo) },
	{ 0x971c8c81, __VMLINUX_SYMBOL_STR(xfrm_find_acq_byseq) },
	{ 0x286fd401, __VMLINUX_SYMBOL_STR(xfrm_alloc_spi) },
	{ 0x230bb9c3, __VMLINUX_SYMBOL_STR(xfrm_find_acq) },
	{ 0xf10526ac, __VMLINUX_SYMBOL_STR(verify_spi_info) },
	{ 0x328a05f1, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xbb5d343d, __VMLINUX_SYMBOL_STR(xfrm_get_acqseq) },
	{ 0xdc9f4a67, __VMLINUX_SYMBOL_STR(xfrm_garbage_collect) },
	{ 0x7fc7bfa2, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x9aa985ac, __VMLINUX_SYMBOL_STR(__netlink_kernel_create) },
	{ 0x4e72c517, __VMLINUX_SYMBOL_STR(xfrm_state_walk) },
	{ 0x5b3eba1e, __VMLINUX_SYMBOL_STR(xfrm_state_walk_init) },
	{ 0x47f03165, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x79222a5, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x4f391d0e, __VMLINUX_SYMBOL_STR(nla_parse) },
	{ 0x1ef26f93, __VMLINUX_SYMBOL_STR(__netlink_dump_start) },
	{ 0x996e0821, __VMLINUX_SYMBOL_STR(netlink_net_capable) },
	{ 0xa071b39b, __VMLINUX_SYMBOL_STR(xfrm_state_add) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x6a80ef53, __VMLINUX_SYMBOL_STR(xfrm_audit_state_add) },
	{ 0xcc8abb34, __VMLINUX_SYMBOL_STR(xfrm_state_update) },
	{ 0xbd73b022, __VMLINUX_SYMBOL_STR(xfrm_init_replay) },
	{ 0x27866435, __VMLINUX_SYMBOL_STR(security_xfrm_state_alloc) },
	{ 0xda875bfb, __VMLINUX_SYMBOL_STR(__xfrm_init_state) },
	{ 0x7c30b8c7, __VMLINUX_SYMBOL_STR(xfrm_calg_get_byname) },
	{ 0x778770, __VMLINUX_SYMBOL_STR(xfrm_ealg_get_byname) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xe122af95, __VMLINUX_SYMBOL_STR(xfrm_aalg_get_byname) },
	{ 0xb9e5852, __VMLINUX_SYMBOL_STR(xfrm_aead_get_byname) },
	{ 0x23a59979, __VMLINUX_SYMBOL_STR(xfrm_state_alloc) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0x8f342243, __VMLINUX_SYMBOL_STR(xfrm_state_delete) },
	{ 0xc599a772, __VMLINUX_SYMBOL_STR(security_xfrm_state_delete) },
	{ 0x5f6c6133, __VMLINUX_SYMBOL_STR(xfrm_state_lookup_byaddr) },
	{ 0x3bfeca6, __VMLINUX_SYMBOL_STR(xfrm_state_walk_done) },
	{ 0x392f20c2, __VMLINUX_SYMBOL_STR(xfrm_policy_walk) },
	{ 0xe5ed5467, __VMLINUX_SYMBOL_STR(xfrm_policy_walk_init) },
	{ 0x1667f53d, __VMLINUX_SYMBOL_STR(xfrm_policy_walk_done) },
	{ 0x4e95fdab, __VMLINUX_SYMBOL_STR(xfrm_audit_state_delete) },
	{ 0x7ad1f456, __VMLINUX_SYMBOL_STR(__xfrm_state_delete) },
	{ 0x4a327dba, __VMLINUX_SYMBOL_STR(km_state_expired) },
	{ 0x9d1df165, __VMLINUX_SYMBOL_STR(xfrm_policy_destroy) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0xe6c8b5ae, __VMLINUX_SYMBOL_STR(km_policy_expired) },
	{ 0x78f7e106, __VMLINUX_SYMBOL_STR(xfrm_audit_policy_delete) },
	{ 0x2cf71cda, __VMLINUX_SYMBOL_STR(xfrm_policy_delete) },
	{ 0xf9f00a3f, __VMLINUX_SYMBOL_STR(xfrm_policy_byid) },
	{ 0xa9c63b69, __VMLINUX_SYMBOL_STR(security_xfrm_policy_free) },
	{ 0xeb6fa3bd, __VMLINUX_SYMBOL_STR(xfrm_policy_bysel_ctx) },
	{ 0xb15cb614, __VMLINUX_SYMBOL_STR(security_xfrm_policy_alloc) },
	{ 0x27a87bff, __VMLINUX_SYMBOL_STR(xfrm_state_flush) },
	{ 0x99506728, __VMLINUX_SYMBOL_STR(km_policy_notify) },
	{ 0x8ec3dbaf, __VMLINUX_SYMBOL_STR(xfrm_policy_flush) },
	{ 0x761554c, __VMLINUX_SYMBOL_STR(security_task_getsecid) },
	{ 0xd2d5c847, __VMLINUX_SYMBOL_STR(km_state_notify) },
	{ 0xfcc113b, __VMLINUX_SYMBOL_STR(__xfrm_state_destroy) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0x8160419a, __VMLINUX_SYMBOL_STR(netlink_unicast) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x95be2b43, __VMLINUX_SYMBOL_STR(xfrm_state_lookup) },
	{ 0x70118305, __VMLINUX_SYMBOL_STR(xfrm_migrate) },
	{ 0x6f9a27f5, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x96f469c8, __VMLINUX_SYMBOL_STR(netlink_rcv_skb) },
	{ 0x10da615, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x4846e0d6, __VMLINUX_SYMBOL_STR(netlink_kernel_release) },
	{ 0x609f1c7e, __VMLINUX_SYMBOL_STR(synchronize_net) },
	{ 0xcca84881, __VMLINUX_SYMBOL_STR(xfrm_policy_alloc) },
	{ 0xfc5c11d, __VMLINUX_SYMBOL_STR(nla_reserve) },
	{ 0x792912d1, __VMLINUX_SYMBOL_STR(netlink_broadcast) },
	{ 0x7e18060c, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0x708609aa, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x1fccca06, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x2bc89550, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x4019836f, __VMLINUX_SYMBOL_STR(__nlmsg_put) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xde3b9911, __VMLINUX_SYMBOL_STR(netlink_has_listeners) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=xfrm_algo";

