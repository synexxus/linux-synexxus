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
	{ 0x3ae71240, __VMLINUX_SYMBOL_STR(bcma_core_pci_down) },
	{ 0xa9c62b6a, __VMLINUX_SYMBOL_STR(skb_queue_head) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x52bc740e, __VMLINUX_SYMBOL_STR(ssb_dma_translation) },
	{ 0xbd7eb7a6, __VMLINUX_SYMBOL_STR(device_remove_file) },
	{ 0x79222a5, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xff178f6, __VMLINUX_SYMBOL_STR(__aeabi_idivmod) },
	{ 0x5c172a80, __VMLINUX_SYMBOL_STR(bcma_pmu_spuravoid_pllupdate) },
	{ 0xc9341eea, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x91eb9b4, __VMLINUX_SYMBOL_STR(round_jiffies) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xf14ea6c, __VMLINUX_SYMBOL_STR(ieee80211_queue_work) },
	{ 0x3a657fb3, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x3b7239c1, __VMLINUX_SYMBOL_STR(led_classdev_register) },
	{ 0x5fb99b53, __VMLINUX_SYMBOL_STR(arm_dma_ops) },
	{ 0x9e83215e, __VMLINUX_SYMBOL_STR(sdio_enable_func) },
	{ 0x4ba250f3, __VMLINUX_SYMBOL_STR(bcma_core_pci_irq_ctl) },
	{ 0xab46a255, __VMLINUX_SYMBOL_STR(sdio_claim_irq) },
	{ 0x9b19b7df, __VMLINUX_SYMBOL_STR(ieee80211_rts_get) },
	{ 0x7ef39823, __VMLINUX_SYMBOL_STR(ieee80211_hdrlen) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x26b96a64, __VMLINUX_SYMBOL_STR(ssb_commit_settings) },
	{ 0x4e8f22fa, __VMLINUX_SYMBOL_STR(ieee80211_beacon_get_tim) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0x5e1f48f2, __VMLINUX_SYMBOL_STR(ieee80211_unregister_hw) },
	{ 0xa1425906, __VMLINUX_SYMBOL_STR(ieee80211_channel_to_frequency) },
	{ 0x190dd71e, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x24d7b4eb, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0x6f9a27f5, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xfa685f7e, __VMLINUX_SYMBOL_STR(ssb_bus_powerup) },
	{ 0x8719f803, __VMLINUX_SYMBOL_STR(ssb_bus_sdiobus_register) },
	{ 0x7c17900f, __VMLINUX_SYMBOL_STR(wiphy_rfkill_start_polling) },
	{ 0x2ff3c372, __VMLINUX_SYMBOL_STR(__ieee80211_get_assoc_led_name) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x7dcb4b0e, __VMLINUX_SYMBOL_STR(__ssb_driver_register) },
	{ 0xaa9087c0, __VMLINUX_SYMBOL_STR(param_ops_string) },
	{ 0x282f1078, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x664d21f, __VMLINUX_SYMBOL_STR(ieee80211_stop_queue) },
	{ 0xeb3cf5e4, __VMLINUX_SYMBOL_STR(ieee80211_tx_status) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x1fab5905, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xf84ab7da, __VMLINUX_SYMBOL_STR(ssb_driver_unregister) },
	{ 0x786954e0, __VMLINUX_SYMBOL_STR(ssb_chipco_gpio_control) },
	{ 0x46b4b4bf, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x4f1b1602, __VMLINUX_SYMBOL_STR(bcma_core_pci_up) },
	{ 0xd72bfe34, __VMLINUX_SYMBOL_STR(bcma_core_dma_translation) },
	{ 0xb840f323, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x962a2519, __VMLINUX_SYMBOL_STR(ieee80211_free_txskb) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0x63797bc8, __VMLINUX_SYMBOL_STR(ieee80211_wake_queues) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x328a05f1, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x24bb3160, __VMLINUX_SYMBOL_STR(ssb_device_enable) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x9c916ccd, __VMLINUX_SYMBOL_STR(ieee80211_rx) },
	{ 0x10da615, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xa0433599, __VMLINUX_SYMBOL_STR(bcma_core_set_clockmode) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x74cf5916, __VMLINUX_SYMBOL_STR(__bcma_driver_register) },
	{ 0x109be486, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x36edfe78, __VMLINUX_SYMBOL_STR(ieee80211_ctstoself_get) },
	{ 0xfdc8a176, __VMLINUX_SYMBOL_STR(request_firmware_nowait) },
	{ 0x4c759827, __VMLINUX_SYMBOL_STR(byte_rev_table) },
	{ 0x6bc2dee3, __VMLINUX_SYMBOL_STR(ieee80211_queue_delayed_work) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0xe523ad75, __VMLINUX_SYMBOL_STR(synchronize_irq) },
	{ 0xd2b6de94, __VMLINUX_SYMBOL_STR(device_create_file) },
	{ 0x5817531b, __VMLINUX_SYMBOL_STR(sdio_unregister_driver) },
	{ 0x979c23ba, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0x4a1c2a16, __VMLINUX_SYMBOL_STR(bcma_chipco_gpio_control) },
	{ 0x6dc71b43, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xb9ca9de1, __VMLINUX_SYMBOL_STR(__ieee80211_get_rx_led_name) },
	{ 0xbb0171ef, __VMLINUX_SYMBOL_STR(bcma_core_is_enabled) },
	{ 0x47852d3d, __VMLINUX_SYMBOL_STR(ssb_pmu_set_ldo_voltage) },
	{ 0x1e83e81a, __VMLINUX_SYMBOL_STR(ssb_device_disable) },
	{ 0xb2624564, __VMLINUX_SYMBOL_STR(bcma_core_enable) },
	{ 0x8cbb3b27, __VMLINUX_SYMBOL_STR(sdio_release_irq) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xbe97b39e, __VMLINUX_SYMBOL_STR(wiphy_rfkill_set_hw_state) },
	{ 0xb5110ada, __VMLINUX_SYMBOL_STR(bcma_driver_unregister) },
	{ 0xbd2da235, __VMLINUX_SYMBOL_STR(bcma_core_pll_ctl) },
	{ 0x3507a132, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0xb678366f, __VMLINUX_SYMBOL_STR(int_sqrt) },
	{ 0x624a6406, __VMLINUX_SYMBOL_STR(hwrng_register) },
	{ 0xdc1307b1, __VMLINUX_SYMBOL_STR(__ieee80211_get_tx_led_name) },
	{ 0x132305ee, __VMLINUX_SYMBOL_STR(ssb_set_devtypedata) },
	{ 0x47f03165, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xab294869, __VMLINUX_SYMBOL_STR(ieee80211_wake_queue) },
	{ 0x2e43181e, __VMLINUX_SYMBOL_STR(ieee80211_generic_frame_duration) },
	{ 0xfa86c4ba, __VMLINUX_SYMBOL_STR(__ieee80211_get_radio_led_name) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0x9c0332f7, __VMLINUX_SYMBOL_STR(ssb_bus_unregister) },
	{ 0xe1907581, __VMLINUX_SYMBOL_STR(ieee80211_register_hw) },
	{ 0x44b98a15, __VMLINUX_SYMBOL_STR(led_classdev_unregister) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x1eb9516e, __VMLINUX_SYMBOL_STR(round_jiffies_relative) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xfe5fb11, __VMLINUX_SYMBOL_STR(ieee80211_alloc_hw) },
	{ 0xcdb8f1b6, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0xbe5bbee, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0x74c134b9, __VMLINUX_SYMBOL_STR(__sw_hweight32) },
	{ 0xc85f0034, __VMLINUX_SYMBOL_STR(ieee80211_free_hw) },
	{ 0x9b5f16e8, __VMLINUX_SYMBOL_STR(ssb_bus_may_powerdown) },
	{ 0x70468b57, __VMLINUX_SYMBOL_STR(skb_dequeue) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xb742fd7, __VMLINUX_SYMBOL_STR(simple_strtol) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xd4669fad, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0xd31bb2d0, __VMLINUX_SYMBOL_STR(sdio_register_driver) },
	{ 0x42ffc6c3, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x11946f7, __VMLINUX_SYMBOL_STR(sdio_claim_host) },
	{ 0x6f780236, __VMLINUX_SYMBOL_STR(ssb_pmu_set_ldo_paref) },
	{ 0x7267db00, __VMLINUX_SYMBOL_STR(hwrng_unregister) },
	{ 0xe463cc3f, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xcce745d0, __VMLINUX_SYMBOL_STR(ssb_device_is_enabled) },
	{ 0xac8f37b2, __VMLINUX_SYMBOL_STR(outer_cache) },
	{ 0x43c003ff, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x556a5b69, __VMLINUX_SYMBOL_STR(bcma_core_disable) },
	{ 0x4c232a00, __VMLINUX_SYMBOL_STR(sdio_set_block_size) },
	{ 0x524f0c0c, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0x537314d8, __VMLINUX_SYMBOL_STR(ssb_pmu_spuravoid_pllupdate) },
	{ 0x5c28cca5, __VMLINUX_SYMBOL_STR(ieee80211_get_tkip_p1k_iv) },
	{ 0x8492a430, __VMLINUX_SYMBOL_STR(ieee80211_get_response_rate) },
	{ 0x3f2147f1, __VMLINUX_SYMBOL_STR(sdio_disable_func) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0x27090d9c, __VMLINUX_SYMBOL_STR(sdio_release_host) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=bcma,ssb,mac80211,cfg80211";

MODULE_ALIAS("bcma:m04BFid0812rev11cl*");
MODULE_ALIAS("bcma:m04BFid0812rev17cl*");
MODULE_ALIAS("bcma:m04BFid0812rev18cl*");
MODULE_ALIAS("bcma:m04BFid0812rev1Dcl*");
MODULE_ALIAS("ssb:v4243id0812rev05*");
MODULE_ALIAS("ssb:v4243id0812rev06*");
MODULE_ALIAS("ssb:v4243id0812rev07*");
MODULE_ALIAS("ssb:v4243id0812rev09*");
MODULE_ALIAS("ssb:v4243id0812rev0A*");
MODULE_ALIAS("ssb:v4243id0812rev0B*");
MODULE_ALIAS("ssb:v4243id0812rev0C*");
MODULE_ALIAS("ssb:v4243id0812rev0D*");
MODULE_ALIAS("ssb:v4243id0812rev0F*");
MODULE_ALIAS("ssb:v4243id0812rev10*");
