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
	{ 0x79222a5, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xf88c3301, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0xc9341eea, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0x8dc07f95, __VMLINUX_SYMBOL_STR(page_address) },
	{ 0x89d0c07, __VMLINUX_SYMBOL_STR(crypto_init_ahash_spawn) },
	{ 0x58110aae, __VMLINUX_SYMBOL_STR(crypto_mod_put) },
	{ 0xbb52466e, __VMLINUX_SYMBOL_STR(ahash_attr_alg) },
	{ 0x9a11a0fc, __VMLINUX_SYMBOL_STR(crypto_attr_alg_name) },
	{ 0x1b871e11, __VMLINUX_SYMBOL_STR(crypto_grab_skcipher) },
	{ 0xc6a349f6, __VMLINUX_SYMBOL_STR(crypto_unregister_template) },
	{ 0x39db0d62, __VMLINUX_SYMBOL_STR(crypto_spawn_tfm) },
	{ 0xbb87c307, __VMLINUX_SYMBOL_STR(crypto_aead_type) },
	{ 0x91dda801, __VMLINUX_SYMBOL_STR(scatterwalk_map_and_copy) },
	{ 0xf40b2297, __VMLINUX_SYMBOL_STR(__crypto_memneq) },
	{ 0x64aa80d5, __VMLINUX_SYMBOL_STR(crypto_ahash_digest) },
	{ 0x9716c5d9, __VMLINUX_SYMBOL_STR(crypto_ahash_finup) },
	{ 0xfd0ede1b, __VMLINUX_SYMBOL_STR(crypto_register_template) },
	{ 0x63d7b237, __VMLINUX_SYMBOL_STR(crypto_drop_spawn) },
	{ 0xe6b27c05, __VMLINUX_SYMBOL_STR(contig_page_data) },
	{ 0x124f2056, __VMLINUX_SYMBOL_STR(crypto_get_attr_type) },
	{ 0xfd7aece4, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0x47f03165, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x35a67215, __VMLINUX_SYMBOL_STR(crypto_spawn_tfm2) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xbcb5e416, __VMLINUX_SYMBOL_STR(crypto_ahash_setkey) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

