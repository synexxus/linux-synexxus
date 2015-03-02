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
	{ 0x1976aa06, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x130e6eaa, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x4edb807, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xa8f85ed9, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0x91c9a325, __VMLINUX_SYMBOL_STR(bt_to_errno) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xba5c7682, __VMLINUX_SYMBOL_STR(__hci_cmd_sync_ev) },
	{ 0xd2544497, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x7c640527, __VMLINUX_SYMBOL_STR(bt_info) },
	{ 0xfef37d4b, __VMLINUX_SYMBOL_STR(usb_match_id) },
	{ 0xe8a7ff25, __VMLINUX_SYMBOL_STR(usb_driver_claim_interface) },
	{ 0x8b69b687, __VMLINUX_SYMBOL_STR(hci_register_dev) },
	{ 0x5b21d14, __VMLINUX_SYMBOL_STR(usb_ifnum_to_if) },
	{ 0x97df8ee6, __VMLINUX_SYMBOL_STR(hci_alloc_dev) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x3c749c55, __VMLINUX_SYMBOL_STR(devm_kzalloc) },
	{ 0xe6c38041, __VMLINUX_SYMBOL_STR(usb_set_interface) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0xd4e7d54, __VMLINUX_SYMBOL_STR(usb_autopm_put_interface) },
	{ 0x953c88a5, __VMLINUX_SYMBOL_STR(usb_autopm_get_interface) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x2a3aa678, __VMLINUX_SYMBOL_STR(_test_and_clear_bit) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x5691cf25, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x6cb01335, __VMLINUX_SYMBOL_STR(__hci_cmd_sync) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0xa22750dc, __VMLINUX_SYMBOL_STR(hci_free_dev) },
	{ 0x526b7365, __VMLINUX_SYMBOL_STR(usb_driver_release_interface) },
	{ 0xa25f1e62, __VMLINUX_SYMBOL_STR(hci_unregister_dev) },
	{ 0x891d3927, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x78cf4589, __VMLINUX_SYMBOL_STR(usb_kill_anchored_urbs) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0xdacd26c5, __VMLINUX_SYMBOL_STR(usb_scuttle_anchored_urbs) },
	{ 0x376a871e, __VMLINUX_SYMBOL_STR(usb_get_from_anchor) },
	{ 0x3507a132, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x6fef2591, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xc28b8cde, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x8fe98c73, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf61d963c, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0xb61a0c3b, __VMLINUX_SYMBOL_STR(bt_err) },
	{ 0x8f06c0c8, __VMLINUX_SYMBOL_STR(hci_recv_fragment) },
	{ 0x69ec27f8, __VMLINUX_SYMBOL_STR(usb_unanchor_urb) },
	{ 0x6bfcde14, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0xe9c615e5, __VMLINUX_SYMBOL_STR(usb_anchor_urb) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x4d56a0e4, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=bluetooth";

MODULE_ALIAS("usb:v*p*d*dcE0dsc01dp01ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0E8Dp763Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A5Cp21E1d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp8213d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp8215d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp8218d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp821Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp821Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp821Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp8281d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v057Cp3800d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BFp030Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v044Ep3001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v044Ep3002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDBp1002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C10p0000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p17B5d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p17CBd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04CAp2003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0489pE042d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v413Cp8197d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0489p*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0A5Cp*d*dc*dsc*dp*icFFisc01ip01in*");

MODULE_INFO(srcversion, "1DCE02C0BDAA7202A3FC53E");
