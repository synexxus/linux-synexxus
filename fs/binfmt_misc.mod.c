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
	{ 0xda09b7b2, __VMLINUX_SYMBOL_STR(kill_litter_super) },
	{ 0x6223e1f9, __VMLINUX_SYMBOL_STR(noop_llseek) },
	{ 0xb3c52942, __VMLINUX_SYMBOL_STR(default_llseek) },
	{ 0xcd95eecb, __VMLINUX_SYMBOL_STR(simple_statfs) },
	{ 0xbf69d8c8, __VMLINUX_SYMBOL_STR(unregister_filesystem) },
	{ 0x5d635d91, __VMLINUX_SYMBOL_STR(unregister_binfmt) },
	{ 0x3a686889, __VMLINUX_SYMBOL_STR(__register_binfmt) },
	{ 0x5ec249aa, __VMLINUX_SYMBOL_STR(register_filesystem) },
	{ 0xad4f5861, __VMLINUX_SYMBOL_STR(iput) },
	{ 0xfc81553e, __VMLINUX_SYMBOL_STR(d_instantiate) },
	{ 0x50e0f7c1, __VMLINUX_SYMBOL_STR(simple_pin_fs) },
	{ 0x8eaac9d, __VMLINUX_SYMBOL_STR(current_fs_time) },
	{ 0xe953b21f, __VMLINUX_SYMBOL_STR(get_next_ino) },
	{ 0x6fe4b280, __VMLINUX_SYMBOL_STR(new_inode) },
	{ 0xa3a83f63, __VMLINUX_SYMBOL_STR(lookup_one_len) },
	{ 0xc8339e24, __VMLINUX_SYMBOL_STR(string_unescape) },
	{ 0x20000329, __VMLINUX_SYMBOL_STR(simple_strtoul) },
	{ 0x349cba85, __VMLINUX_SYMBOL_STR(strchr) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xe1676390, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xfb88016a, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0x4302d0eb, __VMLINUX_SYMBOL_STR(free_pages) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x93fca811, __VMLINUX_SYMBOL_STR(__get_free_pages) },
	{ 0x528c709d, __VMLINUX_SYMBOL_STR(simple_read_from_buffer) },
	{ 0x808e9e5b, __VMLINUX_SYMBOL_STR(simple_release_fs) },
	{ 0x6f5fbb6, __VMLINUX_SYMBOL_STR(dput) },
	{ 0x3b7a1f40, __VMLINUX_SYMBOL_STR(d_drop) },
	{ 0x1290e2c6, __VMLINUX_SYMBOL_STR(drop_nlink) },
	{ 0x1ea06663, __VMLINUX_SYMBOL_STR(_raw_write_lock) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xe48ecebf, __VMLINUX_SYMBOL_STR(clear_inode) },
	{ 0xe7c232c4, __VMLINUX_SYMBOL_STR(simple_fill_super) },
	{ 0xac778013, __VMLINUX_SYMBOL_STR(mount_single) },
	{ 0x3abd8598, __VMLINUX_SYMBOL_STR(kernel_read) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xdcb0349b, __VMLINUX_SYMBOL_STR(sys_close) },
	{ 0x8342c233, __VMLINUX_SYMBOL_STR(would_dump) },
	{ 0x9401967c, __VMLINUX_SYMBOL_STR(fd_install) },
	{ 0xa843805a, __VMLINUX_SYMBOL_STR(get_unused_fd_flags) },
	{ 0x93d566a, __VMLINUX_SYMBOL_STR(search_binary_handler) },
	{ 0xc0141451, __VMLINUX_SYMBOL_STR(prepare_binprm) },
	{ 0xfc1a596a, __VMLINUX_SYMBOL_STR(open_exec) },
	{ 0x29b4ae34, __VMLINUX_SYMBOL_STR(bprm_change_interp) },
	{ 0xb56f967c, __VMLINUX_SYMBOL_STR(copy_strings_kernel) },
	{ 0x20d8b0f2, __VMLINUX_SYMBOL_STR(fput) },
	{ 0x434a1816, __VMLINUX_SYMBOL_STR(remove_arg_zero) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x9f984513, __VMLINUX_SYMBOL_STR(strrchr) },
	{ 0x7b6646bb, __VMLINUX_SYMBOL_STR(_raw_read_lock) },
	{ 0x11089ac7, __VMLINUX_SYMBOL_STR(_ctype) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "94E4CE2E390B0EECC8654D6");
