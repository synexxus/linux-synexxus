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
	{ 0xacbf389c, __VMLINUX_SYMBOL_STR(transport_subsystem_release) },
	{ 0xdc155051, __VMLINUX_SYMBOL_STR(transport_subsystem_register) },
	{ 0x8dc1a7f2, __VMLINUX_SYMBOL_STR(blkdev_get_by_path) },
	{ 0x72ea7b2d, __VMLINUX_SYMBOL_STR(scsi_device_type) },
	{ 0x9be60349, __VMLINUX_SYMBOL_STR(scsi_device_get) },
	{ 0x3507a132, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x7dbada9d, __VMLINUX_SYMBOL_STR(transport_set_vpd_ident_type) },
	{ 0x85aa880c, __VMLINUX_SYMBOL_STR(transport_set_vpd_assoc) },
	{ 0xf01621c7, __VMLINUX_SYMBOL_STR(transport_set_vpd_proto_id) },
	{ 0x2de3b18, __VMLINUX_SYMBOL_STR(transport_set_vpd_ident) },
	{ 0xf73e8e85, __VMLINUX_SYMBOL_STR(scsi_execute_req_flags) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x19117c22, __VMLINUX_SYMBOL_STR(blk_get_request) },
	{ 0x1421017c, __VMLINUX_SYMBOL_STR(blk_execute_rq_nowait) },
	{ 0x1d97c20d, __VMLINUX_SYMBOL_STR(blk_make_request) },
	{ 0x6d6745a9, __VMLINUX_SYMBOL_STR(bio_endio) },
	{ 0x4827558e, __VMLINUX_SYMBOL_STR(bio_alloc_bioset) },
	{ 0xd5152710, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0x50a7adf9, __VMLINUX_SYMBOL_STR(bio_add_pc_page) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x334da4e, __VMLINUX_SYMBOL_STR(scsi_command_size_tbl) },
	{ 0xa4e2f5a8, __VMLINUX_SYMBOL_STR(scsi_host_lookup) },
	{ 0xa9171f69, __VMLINUX_SYMBOL_STR(scsi_device_put) },
	{ 0xdb38a1da, __VMLINUX_SYMBOL_STR(blkdev_put) },
	{ 0x829f1a8, __VMLINUX_SYMBOL_STR(scsi_host_put) },
	{ 0x4e3567f7, __VMLINUX_SYMBOL_STR(match_int) },
	{ 0x44e9a829, __VMLINUX_SYMBOL_STR(match_token) },
	{ 0x85df9b6c, __VMLINUX_SYMBOL_STR(strsep) },
	{ 0xc499ae1e, __VMLINUX_SYMBOL_STR(kstrdup) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x8dc07f95, __VMLINUX_SYMBOL_STR(page_address) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x82782617, __VMLINUX_SYMBOL_STR(transport_kunmap_data_sg) },
	{ 0xb404a873, __VMLINUX_SYMBOL_STR(transport_kmap_data_sg) },
	{ 0xf2481c38, __VMLINUX_SYMBOL_STR(bio_put) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x47f03165, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x79222a5, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xf087137d, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xf8eacc4e, __VMLINUX_SYMBOL_STR(__blk_put_request) },
	{ 0xc034ccf9, __VMLINUX_SYMBOL_STR(target_complete_cmd) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x616c3c3e, __VMLINUX_SYMBOL_STR(spc_emulate_report_luns) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=target_core_mod";

