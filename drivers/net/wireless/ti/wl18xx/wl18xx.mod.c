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
	{ 0x62d37d7e, __VMLINUX_SYMBOL_STR(wl12xx_cmd_build_probe_req) },
	{ 0x79222a5, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x53dff67d, __VMLINUX_SYMBOL_STR(wl12xx_debug_level) },
	{ 0x94f82a08, __VMLINUX_SYMBOL_STR(wlcore_set_key) },
	{ 0x528c709d, __VMLINUX_SYMBOL_STR(simple_read_from_buffer) },
	{ 0xcfebce5, __VMLINUX_SYMBOL_STR(generic_file_llseek) },
	{ 0x6a797d7c, __VMLINUX_SYMBOL_STR(debugfs_create_dir) },
	{ 0x18a93505, __VMLINUX_SYMBOL_STR(wlcore_event_beacon_loss) },
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0xa3f58b62, __VMLINUX_SYMBOL_STR(wlcore_event_dummy_packet) },
	{ 0x3b6660cb, __VMLINUX_SYMBOL_STR(wlcore_event_inactive_sta) },
	{ 0x620ccd2b, __VMLINUX_SYMBOL_STR(wlcore_event_ba_rx_constraint) },
	{ 0x74403e91, __VMLINUX_SYMBOL_STR(wlcore_event_rssi_trigger) },
	{ 0xf087137d, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0x7013b54, __VMLINUX_SYMBOL_STR(wlcore_cmd_wait_for_event_or_timeout) },
	{ 0x1f3a4d63, __VMLINUX_SYMBOL_STR(wlcore_probe) },
	{ 0x33ba5cd4, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x81bf52d8, __VMLINUX_SYMBOL_STR(wlcore_alloc_hw) },
	{ 0x6f9a27f5, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x3c68c6a4, __VMLINUX_SYMBOL_STR(debugfs_create_file) },
	{ 0x968a83d8, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x361d9b20, __VMLINUX_SYMBOL_STR(wl1271_cmd_configure) },
	{ 0x5d41c87c, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x8f045d1c, __VMLINUX_SYMBOL_STR(cancel_delayed_work) },
	{ 0xf251d048, __VMLINUX_SYMBOL_STR(default_llseek) },
	{ 0x488ef9eb, __VMLINUX_SYMBOL_STR(wlcore_event_sched_scan_completed) },
	{ 0x61e359b5, __VMLINUX_SYMBOL_STR(wlcore_boot_upload_firmware) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x3e4d955e, __VMLINUX_SYMBOL_STR(wlcore_set_partition) },
	{ 0x328a05f1, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x18643ae9, __VMLINUX_SYMBOL_STR(wlcore_enable_interrupts) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x10da615, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x109be486, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x21a16d89, __VMLINUX_SYMBOL_STR(simple_open) },
	{ 0x6bc2dee3, __VMLINUX_SYMBOL_STR(ieee80211_queue_delayed_work) },
	{ 0x4059792f, __VMLINUX_SYMBOL_STR(print_hex_dump) },
	{ 0x979c23ba, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0xb0cc93ea, __VMLINUX_SYMBOL_STR(wlcore_event_channel_switch) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0x4133fb21, __VMLINUX_SYMBOL_STR(wlcore_disable_interrupts) },
	{ 0x5d5369ec, __VMLINUX_SYMBOL_STR(wlcore_remove) },
	{ 0x7e918365, __VMLINUX_SYMBOL_STR(wlcore_event_max_tx_failure) },
	{ 0x383d9aa5, __VMLINUX_SYMBOL_STR(wl1271_free_tx_id) },
	{ 0x47f03165, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xfb54fc6b, __VMLINUX_SYMBOL_STR(wlcore_scan_sched_scan_results) },
	{ 0x93aef870, __VMLINUX_SYMBOL_STR(ieee80211_get_hdrlen_from_skb) },
	{ 0x72083a45, __VMLINUX_SYMBOL_STR(wlcore_free_hw) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x5294fba, __VMLINUX_SYMBOL_STR(wl1271_format_buffer) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x41a88eac, __VMLINUX_SYMBOL_STR(wl1271_debugfs_update_stats) },
	{ 0x75699815, __VMLINUX_SYMBOL_STR(wlcore_set_scan_chan_params) },
	{ 0xbe5bbee, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0x1e646b64, __VMLINUX_SYMBOL_STR(wlcore_boot_run_firmware) },
	{ 0x1815002e, __VMLINUX_SYMBOL_STR(wlcore_translate_addr) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x7333f6aa, __VMLINUX_SYMBOL_STR(wlcore_scan_sched_scan_ssid_list) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xa03b6362, __VMLINUX_SYMBOL_STR(wlcore_event_roc_complete) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0xf2c75471, __VMLINUX_SYMBOL_STR(wl12xx_is_dummy_packet) },
	{ 0x83ea2ea9, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x8814c7de, __VMLINUX_SYMBOL_STR(wl1271_cmd_send) },
	{ 0x524f0c0c, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0x413d528b, __VMLINUX_SYMBOL_STR(ieee80211_connection_loss) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=wlcore,mac80211,cfg80211";

MODULE_ALIAS("platform:wl18xx");
