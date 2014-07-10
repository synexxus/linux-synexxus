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
	{ 0xf545989f, __VMLINUX_SYMBOL_STR(sock_no_getname) },
	{ 0x5bd715a2, __VMLINUX_SYMBOL_STR(sock_no_accept) },
	{ 0xe14e84b8, __VMLINUX_SYMBOL_STR(sock_no_socketpair) },
	{ 0x74b6c81f, __VMLINUX_SYMBOL_STR(sock_no_connect) },
	{ 0x487fb73b, __VMLINUX_SYMBOL_STR(sock_no_bind) },
	{ 0x6aeac9d2, __VMLINUX_SYMBOL_STR(af_alg_release) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x98ab5046, __VMLINUX_SYMBOL_STR(af_alg_unregister_type) },
	{ 0x8abfe044, __VMLINUX_SYMBOL_STR(af_alg_register_type) },
	{ 0xe6b27c05, __VMLINUX_SYMBOL_STR(contig_page_data) },
	{ 0x6c343956, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x8a210f93, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0x9fb3dd30, __VMLINUX_SYMBOL_STR(memcpy_fromiovec) },
	{ 0x8dc07f95, __VMLINUX_SYMBOL_STR(page_address) },
	{ 0x93957c0c, __VMLINUX_SYMBOL_STR(af_alg_cmsg_send) },
	{ 0xbbe8dd5d, __VMLINUX_SYMBOL_STR(__get_page_tail) },
	{ 0x619a2c36, __VMLINUX_SYMBOL_STR(crypto_alloc_ablkcipher) },
	{ 0xfd7aece4, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x4d3ad53c, __VMLINUX_SYMBOL_STR(af_alg_complete) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xbff781de, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0x66e229ca, __VMLINUX_SYMBOL_STR(sock_wake_async) },
	{ 0x2babe81f, __VMLINUX_SYMBOL_STR(__wake_up_sync_key) },
	{ 0xe9e4b9c1, __VMLINUX_SYMBOL_STR(af_alg_free_sg) },
	{ 0xd954ef95, __VMLINUX_SYMBOL_STR(af_alg_wait_for_completion) },
	{ 0x19f87828, __VMLINUX_SYMBOL_STR(af_alg_make_sg) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x16a3ecb2, __VMLINUX_SYMBOL_STR(sock_kfree_s) },
	{ 0x22406eb5, __VMLINUX_SYMBOL_STR(put_page) },
	{ 0xf88c3301, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0x1a3a82c8, __VMLINUX_SYMBOL_STR(sock_kmalloc) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x1b6a0229, __VMLINUX_SYMBOL_STR(release_sock) },
	{ 0x499cb58c, __VMLINUX_SYMBOL_STR(prepare_to_wait) },
	{ 0x10e410c7, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xc8b57c27, __VMLINUX_SYMBOL_STR(autoremove_wake_function) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=af_alg";

