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
	{ 0xa7a98e43, __VMLINUX_SYMBOL_STR(aead_geniv_init) },
	{ 0x6474d508, __VMLINUX_SYMBOL_STR(skcipher_geniv_exit) },
	{ 0x68a1691c, __VMLINUX_SYMBOL_STR(skcipher_geniv_alloc) },
	{ 0xc899671b, __VMLINUX_SYMBOL_STR(aead_geniv_exit) },
	{ 0x1a5700cb, __VMLINUX_SYMBOL_STR(aead_geniv_alloc) },
	{ 0x6ff607b6, __VMLINUX_SYMBOL_STR(crypto_get_default_rng) },
	{ 0x124f2056, __VMLINUX_SYMBOL_STR(crypto_get_attr_type) },
	{ 0x333632ee, __VMLINUX_SYMBOL_STR(crypto_default_rng) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x8810ad5e, __VMLINUX_SYMBOL_STR(crypto_xor) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x111bffcb, __VMLINUX_SYMBOL_STR(skcipher_geniv_init) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x440ee360, __VMLINUX_SYMBOL_STR(skcipher_geniv_free) },
	{ 0x668402aa, __VMLINUX_SYMBOL_STR(crypto_put_default_rng) },
	{ 0x5c04d059, __VMLINUX_SYMBOL_STR(aead_geniv_free) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

