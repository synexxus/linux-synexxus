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
	{ 0xbfab5519, __VMLINUX_SYMBOL_STR(ath6kl_core_destroy) },
	{ 0x79222a5, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xf88c3301, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0x969b3022, __VMLINUX_SYMBOL_STR(ath6kl_hif_intr_bh_handler) },
	{ 0xad4d0204, __VMLINUX_SYMBOL_STR(ath6kl_core_cleanup) },
	{ 0xc9341eea, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0x3a657fb3, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x91cfb84a, __VMLINUX_SYMBOL_STR(ath6kl_hif_rw_comp_handler) },
	{ 0x567b2057, __VMLINUX_SYMBOL_STR(ath6kl_core_create) },
	{ 0x5b4396b8, __VMLINUX_SYMBOL_STR(sdio_writesb) },
	{ 0x9e83215e, __VMLINUX_SYMBOL_STR(sdio_enable_func) },
	{ 0xab46a255, __VMLINUX_SYMBOL_STR(sdio_claim_irq) },
	{ 0x47f60129, __VMLINUX_SYMBOL_STR(mmc_wait_for_cmd) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x987c11c7, __VMLINUX_SYMBOL_STR(__pv_phys_pfn_offset) },
	{ 0x6f9a27f5, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x51e77c97, __VMLINUX_SYMBOL_STR(pfn_valid) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x2fda2444, __VMLINUX_SYMBOL_STR(sdio_get_host_pm_caps) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x76641fe9, __VMLINUX_SYMBOL_STR(mmc_wait_for_req) },
	{ 0x4c6ddcb4, __VMLINUX_SYMBOL_STR(ath6kl_err) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x27cf1694, __VMLINUX_SYMBOL_STR(ath6kl_warn) },
	{ 0xb840f323, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xa528b9d7, __VMLINUX_SYMBOL_STR(mmc_set_data_timeout) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x10da615, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xd892679d, __VMLINUX_SYMBOL_STR(ath6kl_cfg80211_suspend) },
	{ 0xab714ee2, __VMLINUX_SYMBOL_STR(sdio_readsb) },
	{ 0x5817531b, __VMLINUX_SYMBOL_STR(sdio_unregister_driver) },
	{ 0xddceb971, __VMLINUX_SYMBOL_STR(sdio_set_host_pm_flags) },
	{ 0xeea49b03, __VMLINUX_SYMBOL_STR(ath6kl_cfg80211_resume) },
	{ 0xee532b74, __VMLINUX_SYMBOL_STR(ath6kl_stop_txrx) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0x8cbb3b27, __VMLINUX_SYMBOL_STR(sdio_release_irq) },
	{ 0x3384ee48, __VMLINUX_SYMBOL_STR(ath6kl_core_init) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x86a4889a, __VMLINUX_SYMBOL_STR(kmalloc_order_trace) },
	{ 0x8a7d1c31, __VMLINUX_SYMBOL_STR(high_memory) },
	{ 0x47f03165, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xd752aa2e, __VMLINUX_SYMBOL_STR(sdio_memcpy_toio) },
	{ 0x344b7739, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xd31bb2d0, __VMLINUX_SYMBOL_STR(sdio_register_driver) },
	{ 0x51dd8160, __VMLINUX_SYMBOL_STR(sdio_memcpy_fromio) },
	{ 0x11946f7, __VMLINUX_SYMBOL_STR(sdio_claim_host) },
	{ 0x43c003ff, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x4c232a00, __VMLINUX_SYMBOL_STR(sdio_set_block_size) },
	{ 0x3f2147f1, __VMLINUX_SYMBOL_STR(sdio_disable_func) },
	{ 0x27090d9c, __VMLINUX_SYMBOL_STR(sdio_release_host) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ath6kl_core";

MODULE_ALIAS("sdio:c*v0271d0300*");
MODULE_ALIAS("sdio:c*v0271d0301*");
MODULE_ALIAS("sdio:c*v0271d0400*");
MODULE_ALIAS("sdio:c*v0271d0401*");
