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
	{ 0xc6a349f6, __VMLINUX_SYMBOL_STR(crypto_unregister_template) },
	{ 0x34888dab, __VMLINUX_SYMBOL_STR(kset_unregister) },
	{ 0xfd0ede1b, __VMLINUX_SYMBOL_STR(crypto_register_template) },
	{ 0xc98f0025, __VMLINUX_SYMBOL_STR(padata_start) },
	{ 0x934bbded, __VMLINUX_SYMBOL_STR(kset_create_and_add) },
	{ 0x188c02a2, __VMLINUX_SYMBOL_STR(kernel_kobj) },
	{ 0xcfc68341, __VMLINUX_SYMBOL_STR(synchronize_rcu_bh) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xd41359dc, __VMLINUX_SYMBOL_STR(padata_do_parallel) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0x6385088, __VMLINUX_SYMBOL_STR(padata_stop) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x7ba57e79, __VMLINUX_SYMBOL_STR(padata_free) },
	{ 0x4a448e71, __VMLINUX_SYMBOL_STR(padata_unregister_cpumask_notifier) },
	{ 0xd7d79132, __VMLINUX_SYMBOL_STR(put_online_cpus) },
	{ 0x51764329, __VMLINUX_SYMBOL_STR(kobject_uevent) },
	{ 0x1149b80f, __VMLINUX_SYMBOL_STR(kobject_add) },
	{ 0xad7d4c8e, __VMLINUX_SYMBOL_STR(padata_register_cpumask_notifier) },
	{ 0xd3e6f60d, __VMLINUX_SYMBOL_STR(cpu_possible_mask) },
	{ 0xfdafa741, __VMLINUX_SYMBOL_STR(padata_alloc_possible) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x3efb35c9, __VMLINUX_SYMBOL_STR(get_online_cpus) },
	{ 0x58110aae, __VMLINUX_SYMBOL_STR(crypto_mod_put) },
	{ 0xbb87c307, __VMLINUX_SYMBOL_STR(crypto_aead_type) },
	{ 0xb0cc717f, __VMLINUX_SYMBOL_STR(crypto_init_spawn) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x47f03165, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x79222a5, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xa03e3577, __VMLINUX_SYMBOL_STR(crypto_attr_alg2) },
	{ 0x124f2056, __VMLINUX_SYMBOL_STR(crypto_get_attr_type) },
	{ 0x39db0d62, __VMLINUX_SYMBOL_STR(crypto_spawn_tfm) },
	{ 0xd3f57a2, __VMLINUX_SYMBOL_STR(_find_next_bit_le) },
	{ 0x6d662533, __VMLINUX_SYMBOL_STR(_find_first_bit_le) },
	{ 0x74c134b9, __VMLINUX_SYMBOL_STR(__sw_hweight32) },
	{ 0xf19e9355, __VMLINUX_SYMBOL_STR(cpu_online_mask) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0xfd7aece4, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0x6d567a8e, __VMLINUX_SYMBOL_STR(crypto_aead_setauthsize) },
	{ 0x391331f7, __VMLINUX_SYMBOL_STR(padata_do_serial) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x63d7b237, __VMLINUX_SYMBOL_STR(crypto_drop_spawn) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

