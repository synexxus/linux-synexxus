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
	{ 0x4946abf7, __VMLINUX_SYMBOL_STR(sock_no_mmap) },
	{ 0xbefd0e23, __VMLINUX_SYMBOL_STR(sock_no_getsockopt) },
	{ 0xa171f67e, __VMLINUX_SYMBOL_STR(sock_no_setsockopt) },
	{ 0x29da0440, __VMLINUX_SYMBOL_STR(sock_no_shutdown) },
	{ 0xf4561adb, __VMLINUX_SYMBOL_STR(sock_no_listen) },
	{ 0x418f0323, __VMLINUX_SYMBOL_STR(sock_no_ioctl) },
	{ 0xb6915058, __VMLINUX_SYMBOL_STR(sock_no_poll) },
	{ 0xf545989f, __VMLINUX_SYMBOL_STR(sock_no_getname) },
	{ 0xe14e84b8, __VMLINUX_SYMBOL_STR(sock_no_socketpair) },
	{ 0x74b6c81f, __VMLINUX_SYMBOL_STR(sock_no_connect) },
	{ 0x487fb73b, __VMLINUX_SYMBOL_STR(sock_no_bind) },
	{ 0x6aeac9d2, __VMLINUX_SYMBOL_STR(af_alg_release) },
	{ 0x98ab5046, __VMLINUX_SYMBOL_STR(af_alg_unregister_type) },
	{ 0x8abfe044, __VMLINUX_SYMBOL_STR(af_alg_register_type) },
	{ 0x2431e25c, __VMLINUX_SYMBOL_STR(crypto_alloc_ahash) },
	{ 0xfd7aece4, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0xbcb5e416, __VMLINUX_SYMBOL_STR(crypto_ahash_setkey) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x4d3ad53c, __VMLINUX_SYMBOL_STR(af_alg_complete) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x1a3a82c8, __VMLINUX_SYMBOL_STR(sock_kmalloc) },
	{ 0x16a3ecb2, __VMLINUX_SYMBOL_STR(sock_kfree_s) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xbff781de, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0xc0056be5, __VMLINUX_SYMBOL_STR(_raw_write_unlock_bh) },
	{ 0x6ec9ccdb, __VMLINUX_SYMBOL_STR(_raw_write_lock_bh) },
	{ 0x50ac4cd8, __VMLINUX_SYMBOL_STR(af_alg_accept) },
	{ 0x19f87828, __VMLINUX_SYMBOL_STR(af_alg_make_sg) },
	{ 0xe9e4b9c1, __VMLINUX_SYMBOL_STR(af_alg_free_sg) },
	{ 0x9ceb163c, __VMLINUX_SYMBOL_STR(memcpy_toiovec) },
	{ 0x1e6b966e, __VMLINUX_SYMBOL_STR(crypto_ahash_final) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x64aa80d5, __VMLINUX_SYMBOL_STR(crypto_ahash_digest) },
	{ 0x1b6a0229, __VMLINUX_SYMBOL_STR(release_sock) },
	{ 0xd954ef95, __VMLINUX_SYMBOL_STR(af_alg_wait_for_completion) },
	{ 0x9716c5d9, __VMLINUX_SYMBOL_STR(crypto_ahash_finup) },
	{ 0xf88c3301, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0x10e410c7, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=af_alg";

