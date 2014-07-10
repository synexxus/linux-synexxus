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
	{ 0xe495880d, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0xe67f1a0, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xe5787779, __VMLINUX_SYMBOL_STR(usb_interrupt_msg) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xa34f1ef5, __VMLINUX_SYMBOL_STR(crc32_le) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0xfdc8a176, __VMLINUX_SYMBOL_STR(request_firmware_nowait) },
	{ 0x6dc71b43, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x46f04729, __VMLINUX_SYMBOL_STR(usb_lock_device_for_reset) },
	{ 0xc377d5a0, __VMLINUX_SYMBOL_STR(usb_reset_device) },
	{ 0x7de4c5cf, __VMLINUX_SYMBOL_STR(usb_get_dev) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x3a657fb3, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0xccf2c54c, __VMLINUX_SYMBOL_STR(p54_init_common) },
	{ 0xc1a2c3b5, __VMLINUX_SYMBOL_STR(usb_bulk_msg) },
	{ 0x5084d7e7, __VMLINUX_SYMBOL_STR(p54_register_common) },
	{ 0x46a21441, __VMLINUX_SYMBOL_STR(p54_read_eeprom) },
	{ 0x6f9a27f5, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xb238dd78, __VMLINUX_SYMBOL_STR(device_release_driver) },
	{ 0x10da615, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x46b4b4bf, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x4d69f8ca, __VMLINUX_SYMBOL_STR(p54_parse_firmware) },
	{ 0xd4669fad, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xec57b2d1, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x109be486, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x79119034, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_irq) },
	{ 0x1fccca06, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xed237d5d, __VMLINUX_SYMBOL_STR(p54_rx) },
	{ 0xe463cc3f, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x69541bf3, __VMLINUX_SYMBOL_STR(skb_unlink) },
	{ 0x7fc7bfa2, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x282f1078, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x979c23ba, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0x932bbdd9, __VMLINUX_SYMBOL_STR(usb_ifnum_to_if) },
	{ 0x60942eb4, __VMLINUX_SYMBOL_STR(usb_unanchor_urb) },
	{ 0x411388af, __VMLINUX_SYMBOL_STR(p54_free_skb) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xd2dd49fa, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x2448324c, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x2876afa0, __VMLINUX_SYMBOL_STR(usb_anchor_urb) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x7be5470a, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0x47f03165, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x79222a5, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xa7984bed, __VMLINUX_SYMBOL_STR(p54_free_common) },
	{ 0x524f0c0c, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0x82deee0b, __VMLINUX_SYMBOL_STR(usb_put_dev) },
	{ 0x95e4c97a, __VMLINUX_SYMBOL_STR(p54_unregister_common) },
	{ 0x1fab5905, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0x7edcee9c, __VMLINUX_SYMBOL_STR(ieee80211_restart_hw) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x43c003ff, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xd1f0a011, __VMLINUX_SYMBOL_STR(usb_kill_anchored_urbs) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=p54common,mac80211";

MODULE_ALIAS("usb:v0411p0050d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v045Ep00C2d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0506p0A11d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0675p0530d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06B9p0120d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0707pEE06d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07AAp001Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083Ap4501d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083Ap4502d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083Ap5501d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p4200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p4210d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p4220d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v09AAp1000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BF8p1007d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CDEp0006d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p6826d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v107Bp55F2d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v124Ap4023d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1435p0210d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15A9p0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1630p0005d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v182Dp096Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1915p2234d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1915p2235d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3701d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3703d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3762d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v5041p2234d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v5041p2235d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p1230d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp7050d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p2000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p2002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06A9p000Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06B9p0121d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0707pEE13d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07AAp0020d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0803p4310d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083Ap4521d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083Ap4531d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083ApC501d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083ApF503d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p4240d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0915p2000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0915p2002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BAFp0118d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BF8p1009d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CDEp0008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CDEp0015d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D8Ep3762d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v124Ap4025d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1260pEE22d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p000Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p000Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1413p5400d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1435p0427d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1668p1050d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1740p1000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3704d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3705d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v413Cp5513d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v413Cp8102d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v413Cp8104d*dc*dsc*dp*ic*isc*ip*in*");
