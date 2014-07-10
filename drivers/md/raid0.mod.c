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
	{ 0xfa11a04d, __VMLINUX_SYMBOL_STR(unregister_md_personality) },
	{ 0x329c0ab, __VMLINUX_SYMBOL_STR(register_md_personality) },
	{ 0xdbedd1b1, __VMLINUX_SYMBOL_STR(md_flush_request) },
	{ 0x6d6745a9, __VMLINUX_SYMBOL_STR(bio_endio) },
	{ 0xbf70d080, __VMLINUX_SYMBOL_STR(bio_chain) },
	{ 0x446eeb2c, __VMLINUX_SYMBOL_STR(bio_split) },
	{ 0x230815a, __VMLINUX_SYMBOL_STR(generic_make_request) },
	{ 0x51546b3, __VMLINUX_SYMBOL_STR(fs_bio_set) },
	{ 0xe70be165, __VMLINUX_SYMBOL_STR(md_integrity_register) },
	{ 0xbd920140, __VMLINUX_SYMBOL_STR(blk_queue_merge_bvec) },
	{ 0x683b00a9, __VMLINUX_SYMBOL_STR(md_set_array_sectors) },
	{ 0x27ee2f31, __VMLINUX_SYMBOL_STR(blk_queue_max_discard_sectors) },
	{ 0xaedff2e5, __VMLINUX_SYMBOL_STR(blk_queue_max_write_same_sectors) },
	{ 0x80f77476, __VMLINUX_SYMBOL_STR(blk_queue_max_hw_sectors) },
	{ 0xc987d682, __VMLINUX_SYMBOL_STR(md_check_no_bitmap) },
	{ 0xfe1665f6, __VMLINUX_SYMBOL_STR(blk_sync_queue) },
	{ 0x42b0bdd9, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xdde6322, __VMLINUX_SYMBOL_STR(bdevname) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xf087137d, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x609426c3, __VMLINUX_SYMBOL_STR(blk_queue_io_opt) },
	{ 0xf5453613, __VMLINUX_SYMBOL_STR(blk_queue_io_min) },
	{ 0x5414deac, __VMLINUX_SYMBOL_STR(disk_stack_limits) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x59e5070d, __VMLINUX_SYMBOL_STR(__do_div64) },
	{ 0x47f03165, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x79222a5, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xff178f6, __VMLINUX_SYMBOL_STR(__aeabi_idivmod) },
	{ 0x894e4040, __VMLINUX_SYMBOL_STR(mddev_congested) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=md-mod";

