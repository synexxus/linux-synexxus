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
	{ 0x8943c0ce, __VMLINUX_SYMBOL_STR(scsi_set_medium_removal) },
	{ 0x79222a5, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xa6d46497, __VMLINUX_SYMBOL_STR(blk_queue_rq_timeout) },
	{ 0x52700f15, __VMLINUX_SYMBOL_STR(scsi_prep_return) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xee18dea4, __VMLINUX_SYMBOL_STR(alloc_disk) },
	{ 0x694db6c, __VMLINUX_SYMBOL_STR(blk_queue_prep_rq) },
	{ 0xc65e73c, __VMLINUX_SYMBOL_STR(scsi_normalize_sense) },
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xc1f5db20, __VMLINUX_SYMBOL_STR(cdrom_number_of_slots) },
	{ 0xfef96e23, __VMLINUX_SYMBOL_STR(__scsi_print_command) },
	{ 0x3a657fb3, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0xd3dbfbc4, __VMLINUX_SYMBOL_STR(_find_first_zero_bit_le) },
	{ 0xa25442f6, __VMLINUX_SYMBOL_STR(dev_printk) },
	{ 0xf73e8e85, __VMLINUX_SYMBOL_STR(scsi_execute_req_flags) },
	{ 0x3e3c302e, __VMLINUX_SYMBOL_STR(unregister_cdrom) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0xcb96a0f4, __VMLINUX_SYMBOL_STR(blk_dump_rq_flags) },
	{ 0xd5152710, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0x6f9a27f5, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x919c65b, __VMLINUX_SYMBOL_STR(cdrom_open) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x7d158878, __VMLINUX_SYMBOL_STR(scsi_execute) },
	{ 0x6fed5f64, __VMLINUX_SYMBOL_STR(scsi_autopm_get_device) },
	{ 0x5427bb1c, __VMLINUX_SYMBOL_STR(scsi_setup_fs_cmnd) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xf1def0ba, __VMLINUX_SYMBOL_STR(cdrom_release) },
	{ 0x553448dc, __VMLINUX_SYMBOL_STR(del_gendisk) },
	{ 0x17807ad1, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x10da615, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xf116a677, __VMLINUX_SYMBOL_STR(cdrom_get_media_event) },
	{ 0x71a50dbc, __VMLINUX_SYMBOL_STR(register_blkdev) },
	{ 0xfe10b50e, __VMLINUX_SYMBOL_STR(scsi_prep_fn) },
	{ 0xb5ec6bb1, __VMLINUX_SYMBOL_STR(cdrom_check_events) },
	{ 0xb5a459dc, __VMLINUX_SYMBOL_STR(unregister_blkdev) },
	{ 0x146398e4, __VMLINUX_SYMBOL_STR(cdrom_get_last_written) },
	{ 0xa9171f69, __VMLINUX_SYMBOL_STR(scsi_device_put) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x43855bb8, __VMLINUX_SYMBOL_STR(scsi_nonblockable_ioctl) },
	{ 0xb15b1370, __VMLINUX_SYMBOL_STR(scsi_ioctl) },
	{ 0x7f76dd5f, __VMLINUX_SYMBOL_STR(put_disk) },
	{ 0x851c435c, __VMLINUX_SYMBOL_STR(scsi_register_driver) },
	{ 0x82ea77e9, __VMLINUX_SYMBOL_STR(scsi_block_when_processing_errors) },
	{ 0x4d222f3b, __VMLINUX_SYMBOL_STR(scsi_test_unit_ready) },
	{ 0x47f03165, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x5d58b685, __VMLINUX_SYMBOL_STR(add_disk) },
	{ 0x6f886730, __VMLINUX_SYMBOL_STR(cdrom_ioctl) },
	{ 0x4d402267, __VMLINUX_SYMBOL_STR(blk_pm_runtime_init) },
	{ 0x4af746cd, __VMLINUX_SYMBOL_STR(scsi_setup_blk_pc_cmnd) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xacd58e22, __VMLINUX_SYMBOL_STR(register_cdrom) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x9be60349, __VMLINUX_SYMBOL_STR(scsi_device_get) },
	{ 0xd007b8ca, __VMLINUX_SYMBOL_STR(scsi_autopm_put_device) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x1029793f, __VMLINUX_SYMBOL_STR(blk_queue_logical_block_size) },
	{ 0x43c003ff, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x1a29435f, __VMLINUX_SYMBOL_STR(scsi_mode_sense) },
	{ 0xca5dbc50, __VMLINUX_SYMBOL_STR(scsi_print_sense_hdr) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=cdrom";

