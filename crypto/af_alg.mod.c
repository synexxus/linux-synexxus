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
	{ 0x1b6a0229, __VMLINUX_SYMBOL_STR(release_sock) },
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0x79222a5, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x9341f9d, __VMLINUX_SYMBOL_STR(sock_init_data) },
	{ 0xf88c3301, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0x22e1ae6f, __VMLINUX_SYMBOL_STR(up_read) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xbefd0e23, __VMLINUX_SYMBOL_STR(sock_no_getsockopt) },
	{ 0x418f0323, __VMLINUX_SYMBOL_STR(sock_no_ioctl) },
	{ 0xf545989f, __VMLINUX_SYMBOL_STR(sock_no_getname) },
	{ 0xb6915058, __VMLINUX_SYMBOL_STR(sock_no_poll) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x455293f6, __VMLINUX_SYMBOL_STR(down_read) },
	{ 0x4ce39368, __VMLINUX_SYMBOL_STR(sock_no_sendpage) },
	{ 0x4946abf7, __VMLINUX_SYMBOL_STR(sock_no_mmap) },
	{ 0xf5e1eabe, __VMLINUX_SYMBOL_STR(sock_no_recvmsg) },
	{ 0x1fab5905, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xe14e84b8, __VMLINUX_SYMBOL_STR(sock_no_socketpair) },
	{ 0x5d157dae, __VMLINUX_SYMBOL_STR(sk_alloc) },
	{ 0x10e410c7, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
	{ 0xf4561adb, __VMLINUX_SYMBOL_STR(sock_no_listen) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xbff781de, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0x83211609, __VMLINUX_SYMBOL_STR(up_write) },
	{ 0xa958ed4, __VMLINUX_SYMBOL_STR(down_write) },
	{ 0x16a3ecb2, __VMLINUX_SYMBOL_STR(sock_kfree_s) },
	{ 0x29da0440, __VMLINUX_SYMBOL_STR(sock_no_shutdown) },
	{ 0x271c2372, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0xab51c64c, __VMLINUX_SYMBOL_STR(proto_register) },
	{ 0x4f0c3219, __VMLINUX_SYMBOL_STR(sock_register) },
	{ 0xf1f859ea, __VMLINUX_SYMBOL_STR(proto_unregister) },
	{ 0x1a3a82c8, __VMLINUX_SYMBOL_STR(sock_kmalloc) },
	{ 0x47f03165, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x74b6c81f, __VMLINUX_SYMBOL_STR(sock_no_connect) },
	{ 0xc0056be5, __VMLINUX_SYMBOL_STR(_raw_write_unlock_bh) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x62737e1d, __VMLINUX_SYMBOL_STR(sock_unregister) },
	{ 0x77aa5b81, __VMLINUX_SYMBOL_STR(sock_no_sendmsg) },
	{ 0x22406eb5, __VMLINUX_SYMBOL_STR(put_page) },
	{ 0x6ec9ccdb, __VMLINUX_SYMBOL_STR(_raw_write_lock_bh) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xd4669fad, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xc17c6552, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0x782978c2, __VMLINUX_SYMBOL_STR(get_user_pages_fast) },
	{ 0xda10ec3, __VMLINUX_SYMBOL_STR(security_sock_graft) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

