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
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x820daaf9, __VMLINUX_SYMBOL_STR(ath9k_hw_set_txq_props) },
	{ 0xec4815be, __VMLINUX_SYMBOL_STR(ath9k_hw_init) },
	{ 0x79222a5, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xa9fd617b, __VMLINUX_SYMBOL_STR(ath9k_cmn_get_channel) },
	{ 0x6b2dd3ac, __VMLINUX_SYMBOL_STR(ath9k_hw_deinit) },
	{ 0x2f026d2f, __VMLINUX_SYMBOL_STR(ath9k_hw_cfg_output) },
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb238dd78, __VMLINUX_SYMBOL_STR(device_release_driver) },
	{ 0xcc654c08, __VMLINUX_SYMBOL_STR(ath9k_hw_set_gpio) },
	{ 0xe0b28644, __VMLINUX_SYMBOL_STR(ath9k_cmn_init_crypto) },
	{ 0xf14ea6c, __VMLINUX_SYMBOL_STR(ieee80211_queue_work) },
	{ 0x3a657fb3, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0xe8c7a631, __VMLINUX_SYMBOL_STR(ath9k_cmn_process_rate) },
	{ 0x3b7239c1, __VMLINUX_SYMBOL_STR(led_classdev_register) },
	{ 0xd3dbfbc4, __VMLINUX_SYMBOL_STR(_find_first_zero_bit_le) },
	{ 0x94bc66ea, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_enable) },
	{ 0x3d10ed69, __VMLINUX_SYMBOL_STR(ath9k_hw_wait) },
	{ 0xf8ec0db0, __VMLINUX_SYMBOL_STR(ath9k_cmn_get_hw_crypto_keytype) },
	{ 0x8f1daffa, __VMLINUX_SYMBOL_STR(ath9k_hw_stopdmarecv) },
	{ 0x9bf387d3, __VMLINUX_SYMBOL_STR(ath_key_delete) },
	{ 0xb6583b5e, __VMLINUX_SYMBOL_STR(ath9k_cmn_update_txpow) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x7ef39823, __VMLINUX_SYMBOL_STR(ieee80211_hdrlen) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x4e8f22fa, __VMLINUX_SYMBOL_STR(ieee80211_beacon_get_tim) },
	{ 0x1416ca2d, __VMLINUX_SYMBOL_STR(ath9k_hw_gpio_get) },
	{ 0x4b20139b, __VMLINUX_SYMBOL_STR(ath_regd_init) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0xe1342755, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0x5e1f48f2, __VMLINUX_SYMBOL_STR(ieee80211_unregister_hw) },
	{ 0x190dd71e, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x24d7b4eb, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0x6f9a27f5, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x70f3ecf0, __VMLINUX_SYMBOL_STR(ieee80211_iterate_active_interfaces_atomic) },
	{ 0xb38c86a2, __VMLINUX_SYMBOL_STR(ath9k_hw_setrxfilter) },
	{ 0xc727351d, __VMLINUX_SYMBOL_STR(ath9k_hw_get_txq_props) },
	{ 0x3fcaa1a3, __VMLINUX_SYMBOL_STR(ath9k_hw_releasetxqueue) },
	{ 0xeb1a770a, __VMLINUX_SYMBOL_STR(ath9k_hw_reset_tsf) },
	{ 0x7c17900f, __VMLINUX_SYMBOL_STR(wiphy_rfkill_start_polling) },
	{ 0xa3bb9878, __VMLINUX_SYMBOL_STR(ath9k_cmn_reload_chainmask) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x786d6404, __VMLINUX_SYMBOL_STR(ath9k_cmn_init_channels_rates) },
	{ 0x1fccca06, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xfe8f1203, __VMLINUX_SYMBOL_STR(ieee80211_stop_queues) },
	{ 0x60942eb4, __VMLINUX_SYMBOL_STR(usb_unanchor_urb) },
	{ 0x81f3afb, __VMLINUX_SYMBOL_STR(complete_all) },
	{ 0x282f1078, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0xeb3cf5e4, __VMLINUX_SYMBOL_STR(ieee80211_tx_status) },
	{ 0xef7023fc, __VMLINUX_SYMBOL_STR(ath_printk) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x7f29895a, __VMLINUX_SYMBOL_STR(ath9k_hw_setopmode) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x1fab5905, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0x353f100d, __VMLINUX_SYMBOL_STR(ath9k_hw_disable) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xd5f2172f, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0xefe330bf, __VMLINUX_SYMBOL_STR(ath9k_hw_resettxqueue) },
	{ 0x9b9ad211, __VMLINUX_SYMBOL_STR(ath9k_hw_gettsf64) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x46b4b4bf, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0xe495880d, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0xb840f323, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xbc73b218, __VMLINUX_SYMBOL_STR(ath9k_hw_set_sta_beacon_timers) },
	{ 0x2fff40fb, __VMLINUX_SYMBOL_STR(ath9k_hw_set_tsfadjust) },
	{ 0xed4e1772, __VMLINUX_SYMBOL_STR(ath9k_cmn_beacon_config_ap) },
	{ 0x63797bc8, __VMLINUX_SYMBOL_STR(ieee80211_wake_queues) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0x3e8aa80, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_disable) },
	{ 0x69bf86a8, __VMLINUX_SYMBOL_STR(ath9k_hw_getrxfilter) },
	{ 0xb097ab3d, __VMLINUX_SYMBOL_STR(ath9k_hw_ani_monitor) },
	{ 0xd6e3ae74, __VMLINUX_SYMBOL_STR(ath_is_mybeacon) },
	{ 0x87bc7cb4, __VMLINUX_SYMBOL_STR(ath9k_cmn_beacon_config_adhoc) },
	{ 0xdad8ec5d, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x2af23b79, __VMLINUX_SYMBOL_STR(ath9k_cmn_process_rssi) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x37ab5f2a, __VMLINUX_SYMBOL_STR(ath_is_world_regd) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x9c916ccd, __VMLINUX_SYMBOL_STR(ieee80211_rx) },
	{ 0xec57b2d1, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x10da615, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x9545af6d, __VMLINUX_SYMBOL_STR(tasklet_init) },
	{ 0x8834396c, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x109be486, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0xc151ab01, __VMLINUX_SYMBOL_STR(wiphy_rfkill_stop_polling) },
	{ 0xfdc8a176, __VMLINUX_SYMBOL_STR(request_firmware_nowait) },
	{ 0x377ace8c, __VMLINUX_SYMBOL_STR(ath9k_hw_write_associd) },
	{ 0x6bc2dee3, __VMLINUX_SYMBOL_STR(ieee80211_queue_delayed_work) },
	{ 0x44b9861f, __VMLINUX_SYMBOL_STR(ath_reg_notifier_apply) },
	{ 0x9179240e, __VMLINUX_SYMBOL_STR(wiphy_to_ieee80211_hw) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0x6429a279, __VMLINUX_SYMBOL_STR(ath9k_hw_init_btcoex_hw) },
	{ 0xe7ebe312, __VMLINUX_SYMBOL_STR(ieee80211_stop_tx_ba_cb_irqsafe) },
	{ 0x979c23ba, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0xfc76ff07, __VMLINUX_SYMBOL_STR(ath9k_hw_beaconq_setup) },
	{ 0x6dc71b43, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x2448324c, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x6f954336, __VMLINUX_SYMBOL_STR(ath9k_hw_name) },
	{ 0x2691d89f, __VMLINUX_SYMBOL_STR(ath9k_hw_init_global_settings) },
	{ 0x708609aa, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x7de4c5cf, __VMLINUX_SYMBOL_STR(usb_get_dev) },
	{ 0xd1f0a011, __VMLINUX_SYMBOL_STR(usb_kill_anchored_urbs) },
	{ 0x7c9d6232, __VMLINUX_SYMBOL_STR(ath9k_hw_settsf64) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xbe97b39e, __VMLINUX_SYMBOL_STR(wiphy_rfkill_set_hw_state) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0xc1a2c3b5, __VMLINUX_SYMBOL_STR(usb_bulk_msg) },
	{ 0x82deee0b, __VMLINUX_SYMBOL_STR(usb_put_dev) },
	{ 0x86a4889a, __VMLINUX_SYMBOL_STR(kmalloc_order_trace) },
	{ 0x7fc7bfa2, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x4c8684f3, __VMLINUX_SYMBOL_STR(ath9k_hw_beaconinit) },
	{ 0x328a5231, __VMLINUX_SYMBOL_STR(ieee80211_find_sta) },
	{ 0xa6925456, __VMLINUX_SYMBOL_STR(ieee80211_get_buffered_bc) },
	{ 0xe5787779, __VMLINUX_SYMBOL_STR(usb_interrupt_msg) },
	{ 0xfd137c1f, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_bt_stomp) },
	{ 0xd58ffca1, __VMLINUX_SYMBOL_STR(ath9k_hw_setrxabort) },
	{ 0xdabd3244, __VMLINUX_SYMBOL_STR(ath9k_cmn_beacon_config_sta) },
	{ 0x47f03165, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x941d92a1, __VMLINUX_SYMBOL_STR(ath_hw_setbssidmask) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x970b89c6, __VMLINUX_SYMBOL_STR(ath9k_cmn_rx_skb_postprocess) },
	{ 0x9de1fed0, __VMLINUX_SYMBOL_STR(ath9k_hw_phy_disable) },
	{ 0x93aef870, __VMLINUX_SYMBOL_STR(ieee80211_get_hdrlen_from_skb) },
	{ 0xbea42659, __VMLINUX_SYMBOL_STR(ath9k_hw_setpower) },
	{ 0x175b3900, __VMLINUX_SYMBOL_STR(__ieee80211_create_tpt_led_trigger) },
	{ 0xe1907581, __VMLINUX_SYMBOL_STR(ieee80211_register_hw) },
	{ 0x44b98a15, __VMLINUX_SYMBOL_STR(led_classdev_unregister) },
	{ 0xcd4a991c, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_set_weight) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x4d9d66ec, __VMLINUX_SYMBOL_STR(regulatory_hint) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xac015ab0, __VMLINUX_SYMBOL_STR(ath9k_hw_setmcastfilter) },
	{ 0xa1fc36c4, __VMLINUX_SYMBOL_STR(ieee80211_start_tx_ba_session) },
	{ 0xfe5fb11, __VMLINUX_SYMBOL_STR(ieee80211_alloc_hw) },
	{ 0x79d653db, __VMLINUX_SYMBOL_STR(ath9k_hw_startpcureceive) },
	{ 0x4d89a952, __VMLINUX_SYMBOL_STR(ath9k_hw_setuptxqueue) },
	{ 0xe67f1a0, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xbe5bbee, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0xcda483cc, __VMLINUX_SYMBOL_STR(ath9k_hw_reset) },
	{ 0xc85f0034, __VMLINUX_SYMBOL_STR(ieee80211_free_hw) },
	{ 0x2398e7cc, __VMLINUX_SYMBOL_STR(ath9k_cmn_rx_accept) },
	{ 0x70468b57, __VMLINUX_SYMBOL_STR(skb_dequeue) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x932bbdd9, __VMLINUX_SYMBOL_STR(usb_ifnum_to_if) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xd4669fad, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0x119bd413, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_init_3wire) },
	{ 0x140288ba, __VMLINUX_SYMBOL_STR(ath_key_config) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0xe463cc3f, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x7cf9099, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0x47c8baf4, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0xd186db81, __VMLINUX_SYMBOL_STR(ath9k_hw_reset_calvalid) },
	{ 0x43c003ff, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xd2dd49fa, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x524f0c0c, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0x1a413212, __VMLINUX_SYMBOL_STR(ieee80211_start_tx_ba_cb_irqsafe) },
	{ 0x2876afa0, __VMLINUX_SYMBOL_STR(usb_anchor_urb) },
	{ 0x7be5470a, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ath9k_hw,ath9k_common,mac80211,ath,cfg80211";

MODULE_ALIAS("usb:v0CF3p9271d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p1006d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9030d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3A10d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3327d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3328d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3346d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3348d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3349d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3350d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04CAp4605d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v040Dp3801d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3pB003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3pB002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v057Cp8403d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p7015d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1668p1200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p7010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9018d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083ApA704d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p017Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0197d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04DAp3904d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p20FFd*dc*dsc*dp*ic*isc*ip*in*");
