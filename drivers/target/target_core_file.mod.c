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
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x60ea2d6, __VMLINUX_SYMBOL_STR(kstrtoull) },
	{ 0xacf4d843, __VMLINUX_SYMBOL_STR(match_strdup) },
	{ 0x4e3567f7, __VMLINUX_SYMBOL_STR(match_int) },
	{ 0x462a2e75, __VMLINUX_SYMBOL_STR(match_strlcpy) },
	{ 0x44e9a829, __VMLINUX_SYMBOL_STR(match_token) },
	{ 0x85df9b6c, __VMLINUX_SYMBOL_STR(strsep) },
	{ 0xc499ae1e, __VMLINUX_SYMBOL_STR(kstrdup) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x4f90a46, __VMLINUX_SYMBOL_STR(sbc_dif_verify_read) },
	{ 0x414cda23, __VMLINUX_SYMBOL_STR(sbc_dif_verify_write) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x8e15d0d0, __VMLINUX_SYMBOL_STR(kernel_read) },
	{ 0xc9341eea, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0xb18532fa, __VMLINUX_SYMBOL_STR(vfs_readv) },
	{ 0x7646d580, __VMLINUX_SYMBOL_STR(kunmap) },
	{ 0xa7bc83a7, __VMLINUX_SYMBOL_STR(vfs_writev) },
	{ 0xd5152710, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0xc72c034a, __VMLINUX_SYMBOL_STR(kmap) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xed1a9c18, __VMLINUX_SYMBOL_STR(vfs_fsync_range) },
	{ 0x47f03165, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x79222a5, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xc034ccf9, __VMLINUX_SYMBOL_STR(target_complete_cmd) },
	{ 0xa465c3ff, __VMLINUX_SYMBOL_STR(sbc_get_write_same_sectors) },
	{ 0xd8ce549, __VMLINUX_SYMBOL_STR(blkdev_issue_discard) },
	{ 0x43b35a1a, __VMLINUX_SYMBOL_STR(sbc_execute_unmap) },
	{ 0xc1e2089a, __VMLINUX_SYMBOL_STR(sbc_parse_cdb) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x59e5070d, __VMLINUX_SYMBOL_STR(__do_div64) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xec5d4dc1, __VMLINUX_SYMBOL_STR(filp_open) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xf087137d, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x680fdfe0, __VMLINUX_SYMBOL_STR(kernel_write) },
	{ 0x40a9b349, __VMLINUX_SYMBOL_STR(vzalloc) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x4f5f360c, __VMLINUX_SYMBOL_STR(filp_close) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=target_core_mod";

