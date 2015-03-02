#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
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
	{ 0x9cceacf4, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xaf351972, __VMLINUX_SYMBOL_STR(crypto_blkcipher_type) },
	{ 0x33c19598, __VMLINUX_SYMBOL_STR(crypto_unregister_algs) },
	{ 0xeb348b28, __VMLINUX_SYMBOL_STR(crypto_register_algs) },
	{ 0x5fdf873f, __VMLINUX_SYMBOL_STR(blkcipher_walk_done) },
	{ 0x318fe1fd, __VMLINUX_SYMBOL_STR(blkcipher_walk_virt) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "1454426C0AA4B28624B4C42");
