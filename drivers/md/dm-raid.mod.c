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
	{ 0xb1898d12, __VMLINUX_SYMBOL_STR(dm_unregister_target) },
	{ 0x9dc8349, __VMLINUX_SYMBOL_STR(dm_register_target) },
	{ 0xe6b27c05, __VMLINUX_SYMBOL_STR(contig_page_data) },
	{ 0xb1425b32, __VMLINUX_SYMBOL_STR(dm_table_add_target_callbacks) },
	{ 0x6f9a27f5, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x684204eb, __VMLINUX_SYMBOL_STR(md_run) },
	{ 0x10da615, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x22406eb5, __VMLINUX_SYMBOL_STR(put_page) },
	{ 0x2a21703b, __VMLINUX_SYMBOL_STR(md_error) },
	{ 0x8a210f93, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0x74b18456, __VMLINUX_SYMBOL_STR(dm_get_device) },
	{ 0x6d0f1f89, __VMLINUX_SYMBOL_STR(dm_table_get_mode) },
	{ 0x4072c0d6, __VMLINUX_SYMBOL_STR(raid5_set_cache_size) },
	{ 0x59e5070d, __VMLINUX_SYMBOL_STR(__do_div64) },
	{ 0xd812f04a, __VMLINUX_SYMBOL_STR(dm_set_target_max_io_len) },
	{ 0x38d4807a, __VMLINUX_SYMBOL_STR(md_rdev_init) },
	{ 0xc13d528d, __VMLINUX_SYMBOL_STR(mddev_init) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x996bdb64, __VMLINUX_SYMBOL_STR(_kstrtoul) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xad84bef8, __VMLINUX_SYMBOL_STR(dm_table_event) },
	{ 0xbdb6db84, __VMLINUX_SYMBOL_STR(md_raid1_congested) },
	{ 0x7bec94df, __VMLINUX_SYMBOL_STR(md_raid10_congested) },
	{ 0xc696e0e0, __VMLINUX_SYMBOL_STR(md_raid5_congested) },
	{ 0x9534d9e0, __VMLINUX_SYMBOL_STR(md_stop) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xdca0575a, __VMLINUX_SYMBOL_STR(md_rdev_clear) },
	{ 0xf5701510, __VMLINUX_SYMBOL_STR(dm_put_device) },
	{ 0xf09f25b3, __VMLINUX_SYMBOL_STR(md_stop_writes) },
	{ 0xbaaf5d84, __VMLINUX_SYMBOL_STR(mddev_suspend) },
	{ 0x2e15a070, __VMLINUX_SYMBOL_STR(bitmap_load) },
	{ 0x3b4174b9, __VMLINUX_SYMBOL_STR(mddev_resume) },
	{ 0x8dc07f95, __VMLINUX_SYMBOL_STR(page_address) },
	{ 0xd1fdcbaf, __VMLINUX_SYMBOL_STR(sync_page_io) },
	{ 0x74c134b9, __VMLINUX_SYMBOL_STR(__sw_hweight32) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xf9e73082, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x8a01618f, __VMLINUX_SYMBOL_STR(md_reap_sync_thread) },
	{ 0x6b4a28c7, __VMLINUX_SYMBOL_STR(md_wakeup_thread) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0xaafdc258, __VMLINUX_SYMBOL_STR(strcasecmp) },
	{ 0x221e9a04, __VMLINUX_SYMBOL_STR(blk_limits_io_opt) },
	{ 0x59aafbcb, __VMLINUX_SYMBOL_STR(blk_limits_io_min) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dm-mod,md-mod,raid456,raid1,raid10";

