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
	{ 0x242d060c, __VMLINUX_SYMBOL_STR(sbc_get_device_type) },
	{ 0xacbf389c, __VMLINUX_SYMBOL_STR(transport_subsystem_release) },
	{ 0xdc155051, __VMLINUX_SYMBOL_STR(transport_subsystem_register) },
	{ 0x59e5070d, __VMLINUX_SYMBOL_STR(__do_div64) },
	{ 0x69a40a3, __VMLINUX_SYMBOL_STR(bioset_integrity_create) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x8dc1a7f2, __VMLINUX_SYMBOL_STR(blkdev_get_by_path) },
	{ 0x17a33695, __VMLINUX_SYMBOL_STR(bioset_create) },
	{ 0xc88997d0, __VMLINUX_SYMBOL_STR(bioset_free) },
	{ 0xdb38a1da, __VMLINUX_SYMBOL_STR(blkdev_put) },
	{ 0x462a2e75, __VMLINUX_SYMBOL_STR(match_strlcpy) },
	{ 0x996bdb64, __VMLINUX_SYMBOL_STR(_kstrtoul) },
	{ 0xacf4d843, __VMLINUX_SYMBOL_STR(match_strdup) },
	{ 0x44e9a829, __VMLINUX_SYMBOL_STR(match_token) },
	{ 0x85df9b6c, __VMLINUX_SYMBOL_STR(strsep) },
	{ 0xc499ae1e, __VMLINUX_SYMBOL_STR(kstrdup) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xdde6322, __VMLINUX_SYMBOL_STR(bdevname) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x849ebdda, __VMLINUX_SYMBOL_STR(bio_integrity_add_page) },
	{ 0x5cc5a71f, __VMLINUX_SYMBOL_STR(bio_integrity_alloc) },
	{ 0xd5152710, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0xf087137d, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x60fba957, __VMLINUX_SYMBOL_STR(bio_add_page) },
	{ 0x47f03165, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x79222a5, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xce900af, __VMLINUX_SYMBOL_STR(blk_finish_plug) },
	{ 0x925520d2, __VMLINUX_SYMBOL_STR(blk_start_plug) },
	{ 0xb90c9128, __VMLINUX_SYMBOL_STR(submit_bio) },
	{ 0x51546b3, __VMLINUX_SYMBOL_STR(fs_bio_set) },
	{ 0x4827558e, __VMLINUX_SYMBOL_STR(bio_alloc_bioset) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xf2481c38, __VMLINUX_SYMBOL_STR(bio_put) },
	{ 0xc034ccf9, __VMLINUX_SYMBOL_STR(target_complete_cmd) },
	{ 0xa465c3ff, __VMLINUX_SYMBOL_STR(sbc_get_write_same_sectors) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xd8ce549, __VMLINUX_SYMBOL_STR(blkdev_issue_discard) },
	{ 0x43b35a1a, __VMLINUX_SYMBOL_STR(sbc_execute_unmap) },
	{ 0xc1e2089a, __VMLINUX_SYMBOL_STR(sbc_parse_cdb) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=target_core_mod";

