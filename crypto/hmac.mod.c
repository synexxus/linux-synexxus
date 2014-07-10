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
	{ 0xfd0ede1b, __VMLINUX_SYMBOL_STR(crypto_register_template) },
	{ 0x3c6ab7f8, __VMLINUX_SYMBOL_STR(shash_register_instance) },
	{ 0x58110aae, __VMLINUX_SYMBOL_STR(crypto_mod_put) },
	{ 0x444c2ae7, __VMLINUX_SYMBOL_STR(shash_free_instance) },
	{ 0x908ed139, __VMLINUX_SYMBOL_STR(crypto_init_shash_spawn) },
	{ 0x4ab68cc7, __VMLINUX_SYMBOL_STR(crypto_alloc_instance2) },
	{ 0xc6f33704, __VMLINUX_SYMBOL_STR(shash_attr_alg) },
	{ 0xd16712f3, __VMLINUX_SYMBOL_STR(crypto_check_attr_type) },
	{ 0x35a67215, __VMLINUX_SYMBOL_STR(crypto_spawn_tfm2) },
	{ 0xfd7aece4, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0x39b14cb5, __VMLINUX_SYMBOL_STR(crypto_shash_final) },
	{ 0x42dfb5a8, __VMLINUX_SYMBOL_STR(crypto_shash_finup) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x3e701144, __VMLINUX_SYMBOL_STR(crypto_shash_digest) },
	{ 0x925b5731, __VMLINUX_SYMBOL_STR(crypto_shash_update) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

