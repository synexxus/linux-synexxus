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
	{ 0x5c359b54, __VMLINUX_SYMBOL_STR(target_fabric_configfs_deregister) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x11960b55, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0x7c148e38, __VMLINUX_SYMBOL_STR(target_fabric_configfs_free) },
	{ 0xc4a7ead1, __VMLINUX_SYMBOL_STR(target_fabric_configfs_register) },
	{ 0xcbeb5b5d, __VMLINUX_SYMBOL_STR(target_fabric_configfs_init) },
	{ 0x50e3a6d9, __VMLINUX_SYMBOL_STR(driver_register) },
	{ 0xf89faed6, __VMLINUX_SYMBOL_STR(bus_register) },
	{ 0xfa5deae2, __VMLINUX_SYMBOL_STR(__root_device_register) },
	{ 0x565e4259, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x16dde2f2, __VMLINUX_SYMBOL_STR(root_device_unregister) },
	{ 0x5885fd5, __VMLINUX_SYMBOL_STR(bus_unregister) },
	{ 0x17807ad1, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0xde35b20d, __VMLINUX_SYMBOL_STR(scsi_add_device) },
	{ 0x9ea56f92, __VMLINUX_SYMBOL_STR(core_tpg_deregister) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x99822044, __VMLINUX_SYMBOL_STR(transport_free_session) },
	{ 0x17db3a38, __VMLINUX_SYMBOL_STR(__transport_register_session) },
	{ 0x63c2f8e3, __VMLINUX_SYMBOL_STR(core_tpg_check_initiator_node_acl) },
	{ 0x38d85c27, __VMLINUX_SYMBOL_STR(transport_init_session) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x466ca0d6, __VMLINUX_SYMBOL_STR(transport_deregister_session) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x344b7739, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x4eca3c13, __VMLINUX_SYMBOL_STR(transport_generic_handle_tmr) },
	{ 0x1af196db, __VMLINUX_SYMBOL_STR(transport_lookup_tmr_lun) },
	{ 0xf3bbceca, __VMLINUX_SYMBOL_STR(core_tmr_alloc_req) },
	{ 0x34782e53, __VMLINUX_SYMBOL_STR(transport_init_se_cmd) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x6080ce06, __VMLINUX_SYMBOL_STR(blk_queue_free_tags) },
	{ 0xe8bc80ca, __VMLINUX_SYMBOL_STR(iscsi_get_fabric_proto_ident) },
	{ 0xdd03487b, __VMLINUX_SYMBOL_STR(fc_get_fabric_proto_ident) },
	{ 0xc470da36, __VMLINUX_SYMBOL_STR(sas_get_fabric_proto_ident) },
	{ 0xdf47d83e, __VMLINUX_SYMBOL_STR(iscsi_get_pr_transport_id) },
	{ 0xd2c2d9a1, __VMLINUX_SYMBOL_STR(fc_get_pr_transport_id) },
	{ 0x99217e3e, __VMLINUX_SYMBOL_STR(sas_get_pr_transport_id) },
	{ 0x17b1f2ea, __VMLINUX_SYMBOL_STR(iscsi_get_pr_transport_id_len) },
	{ 0xc2d3f133, __VMLINUX_SYMBOL_STR(fc_get_pr_transport_id_len) },
	{ 0xfa8fb532, __VMLINUX_SYMBOL_STR(sas_get_pr_transport_id_len) },
	{ 0xcc051aa4, __VMLINUX_SYMBOL_STR(iscsi_parse_pr_out_transport_id) },
	{ 0xca9b86f1, __VMLINUX_SYMBOL_STR(fc_parse_pr_out_transport_id) },
	{ 0x1a2dbd73, __VMLINUX_SYMBOL_STR(sas_parse_pr_out_transport_id) },
	{ 0xd0037d4b, __VMLINUX_SYMBOL_STR(target_execute_cmd) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x48974e6c, __VMLINUX_SYMBOL_STR(device_register) },
	{ 0xe9b3a371, __VMLINUX_SYMBOL_STR(dev_set_name) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x86a4889a, __VMLINUX_SYMBOL_STR(kmalloc_order_trace) },
	{ 0xc4aa6175, __VMLINUX_SYMBOL_STR(device_unregister) },
	{ 0xa5bcf531, __VMLINUX_SYMBOL_STR(core_tpg_register) },
	{ 0x20000329, __VMLINUX_SYMBOL_STR(simple_strtoul) },
	{ 0x1e6d26a8, __VMLINUX_SYMBOL_STR(strstr) },
	{ 0xa9171f69, __VMLINUX_SYMBOL_STR(scsi_device_put) },
	{ 0xff71a62e, __VMLINUX_SYMBOL_STR(scsi_remove_device) },
	{ 0x4e87699e, __VMLINUX_SYMBOL_STR(scsi_device_lookup) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x2d795625, __VMLINUX_SYMBOL_STR(scsi_add_host_with_dma) },
	{ 0x2e0bcb8a, __VMLINUX_SYMBOL_STR(scsi_host_alloc) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x78f25a9, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xa25442f6, __VMLINUX_SYMBOL_STR(dev_printk) },
	{ 0x4318b4c1, __VMLINUX_SYMBOL_STR(target_submit_cmd_map_sgls) },
	{ 0x47f03165, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x79222a5, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x8fc4ff01, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x2a41c036, __VMLINUX_SYMBOL_STR(transport_generic_free_cmd) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xbb77f187, __VMLINUX_SYMBOL_STR(scsi_track_queue_full) },
	{ 0xd26c9656, __VMLINUX_SYMBOL_STR(blk_queue_init_tags) },
	{ 0x2a3c5a16, __VMLINUX_SYMBOL_STR(scsi_adjust_queue_depth) },
	{ 0x42b0bdd9, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x829f1a8, __VMLINUX_SYMBOL_STR(scsi_host_put) },
	{ 0x6b61ef5d, __VMLINUX_SYMBOL_STR(scsi_remove_host) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xf087137d, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=target_core_mod";

