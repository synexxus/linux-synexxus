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
	{ 0xe4cd094b, __VMLINUX_SYMBOL_STR(wl12xx_cmd_build_probe_req) },
	{ 0xc28b8cde, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x578f653b, __VMLINUX_SYMBOL_STR(wlcore_boot_upload_nvs) },
	{ 0x53dff67d, __VMLINUX_SYMBOL_STR(wl12xx_debug_level) },
	{ 0xd18d90b9, __VMLINUX_SYMBOL_STR(wlcore_set_key) },
	{ 0xb06aca54, __VMLINUX_SYMBOL_STR(wl1271_acx_init_mem_config) },
	{ 0x4b3a363, __VMLINUX_SYMBOL_STR(generic_file_llseek) },
	{ 0x7de55bef, __VMLINUX_SYMBOL_STR(debugfs_create_dir) },
	{ 0x9494aa1f, __VMLINUX_SYMBOL_STR(wlcore_event_beacon_loss) },
	{ 0x4cf0ec7d, __VMLINUX_SYMBOL_STR(wlcore_event_dummy_packet) },
	{ 0x1d90870e, __VMLINUX_SYMBOL_STR(wlcore_event_inactive_sta) },
	{ 0xa9424fb, __VMLINUX_SYMBOL_STR(wlcore_event_ba_rx_constraint) },
	{ 0x8b3fa61d, __VMLINUX_SYMBOL_STR(wl1271_acx_pm_config) },
	{ 0xb54533f7, __VMLINUX_SYMBOL_STR(usecs_to_jiffies) },
	{ 0xab957acf, __VMLINUX_SYMBOL_STR(wlcore_calc_packet_alignment) },
	{ 0x6a638089, __VMLINUX_SYMBOL_STR(wlcore_event_rssi_trigger) },
	{ 0x93a8d4f3, __VMLINUX_SYMBOL_STR(wlcore_cmd_wait_for_event_or_timeout) },
	{ 0x21f97ea3, __VMLINUX_SYMBOL_STR(wlcore_probe) },
	{ 0x4f51ba27, __VMLINUX_SYMBOL_STR(wlcore_alloc_hw) },
	{ 0xe1676390, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xda68fb28, __VMLINUX_SYMBOL_STR(debugfs_create_file) },
	{ 0x8e81c99c, __VMLINUX_SYMBOL_STR(wl1271_acx_set_ht_capabilities) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x188dea8c, __VMLINUX_SYMBOL_STR(wl1271_cmd_configure) },
	{ 0x35b6b772, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0xccd40900, __VMLINUX_SYMBOL_STR(wl1271_cmd_data_path) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x7efdf207, __VMLINUX_SYMBOL_STR(wl12xx_acx_mem_cfg) },
	{ 0x83130f62, __VMLINUX_SYMBOL_STR(cancel_delayed_work) },
	{ 0x2500e4b9, __VMLINUX_SYMBOL_STR(wlcore_event_sched_scan_completed) },
	{ 0x71269dc8, __VMLINUX_SYMBOL_STR(wlcore_boot_upload_firmware) },
	{ 0x964c46e0, __VMLINUX_SYMBOL_STR(wl1271_acx_sleep_auth) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x58331fb1, __VMLINUX_SYMBOL_STR(wlcore_set_partition) },
	{ 0xc3ea04b2, __VMLINUX_SYMBOL_STR(wlcore_enable_interrupts) },
	{ 0xba0debea, __VMLINUX_SYMBOL_STR(wl1271_cmd_test) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xfb88016a, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x9155e50, __VMLINUX_SYMBOL_STR(platform_driver_register) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x64a81517, __VMLINUX_SYMBOL_STR(simple_open) },
	{ 0x3571325c, __VMLINUX_SYMBOL_STR(ieee80211_queue_delayed_work) },
	{ 0x4059792f, __VMLINUX_SYMBOL_STR(print_hex_dump) },
	{ 0x2743ddea, __VMLINUX_SYMBOL_STR(wlcore_event_channel_switch) },
	{ 0x6fef2591, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0xbf7f1d21, __VMLINUX_SYMBOL_STR(wlcore_disable_interrupts) },
	{ 0x41500fe, __VMLINUX_SYMBOL_STR(wlcore_remove) },
	{ 0x8b4ec70f, __VMLINUX_SYMBOL_STR(wlcore_event_max_tx_failure) },
	{ 0x7ae1200b, __VMLINUX_SYMBOL_STR(wlcore_scan_sched_scan_results) },
	{ 0xf067c7fc, __VMLINUX_SYMBOL_STR(wlcore_event_soft_gemini_sense) },
	{ 0xa5f73ff2, __VMLINUX_SYMBOL_STR(wlcore_free_hw) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xfc6b4b59, __VMLINUX_SYMBOL_STR(wlcore_tx_complete) },
	{ 0x5294fba, __VMLINUX_SYMBOL_STR(wl1271_format_buffer) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xf792f16a, __VMLINUX_SYMBOL_STR(wl1271_debugfs_update_stats) },
	{ 0x27d0e62d, __VMLINUX_SYMBOL_STR(wlcore_set_scan_chan_params) },
	{ 0x35639a53, __VMLINUX_SYMBOL_STR(wlcore_boot_run_firmware) },
	{ 0x370181e2, __VMLINUX_SYMBOL_STR(wlcore_translate_addr) },
	{ 0x1a927bdc, __VMLINUX_SYMBOL_STR(wlcore_scan_sched_scan_ssid_list) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x4f1d45f4, __VMLINUX_SYMBOL_STR(wlcore_event_roc_complete) },
	{ 0x61c23aed, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x76a8f696, __VMLINUX_SYMBOL_STR(wl1271_cmd_send) },
	{ 0x4d56a0e4, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x7c4ee5f5, __VMLINUX_SYMBOL_STR(wl1271_tx_min_rate_get) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=wlcore,mac80211";

MODULE_ALIAS("platform:wl12xx");

MODULE_INFO(srcversion, "E5BFAA163FBAABB859AF8A5");
