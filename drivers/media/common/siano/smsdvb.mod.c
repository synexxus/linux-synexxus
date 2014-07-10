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
	{ 0x79222a5, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xf69c0f38, __VMLINUX_SYMBOL_STR(smscore_register_hotplug) },
	{ 0x213c57ab, __VMLINUX_SYMBOL_STR(smscore_get_board_id) },
	{ 0xa7e48d24, __VMLINUX_SYMBOL_STR(sms_board_setup) },
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xf15883e8, __VMLINUX_SYMBOL_STR(dvb_dmx_init) },
	{ 0xe47f06d5, __VMLINUX_SYMBOL_STR(dvb_unregister_adapter) },
	{ 0xbb64c530, __VMLINUX_SYMBOL_STR(sms_board_event) },
	{ 0x9e6e10a8, __VMLINUX_SYMBOL_STR(dvb_register_frontend) },
	{ 0xbbdb5c42, __VMLINUX_SYMBOL_STR(smscore_unregister_client) },
	{ 0x910459fc, __VMLINUX_SYMBOL_STR(dvb_unregister_frontend) },
	{ 0x6f9a27f5, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xda2478d0, __VMLINUX_SYMBOL_STR(param_ops_short) },
	{ 0x63222b29, __VMLINUX_SYMBOL_STR(smsclient_sendrequest) },
	{ 0x31502053, __VMLINUX_SYMBOL_STR(dvb_dmxdev_release) },
	{ 0xb840f323, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x422357, __VMLINUX_SYMBOL_STR(sms_board_lna_control) },
	{ 0x40551e6, __VMLINUX_SYMBOL_STR(dvb_dmx_swfilter) },
	{ 0x10da615, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x6a6ef8a0, __VMLINUX_SYMBOL_STR(dvb_dmx_release) },
	{ 0x59e5070d, __VMLINUX_SYMBOL_STR(__do_div64) },
	{ 0xb442f30a, __VMLINUX_SYMBOL_STR(smscore_putbuffer) },
	{ 0x454f0fb4, __VMLINUX_SYMBOL_STR(smscore_unregister_hotplug) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0x844539ae, __VMLINUX_SYMBOL_STR(sms_get_board) },
	{ 0x5409938a, __VMLINUX_SYMBOL_STR(dvb_register_adapter) },
	{ 0xd6d18332, __VMLINUX_SYMBOL_STR(sms_board_power) },
	{ 0x47f03165, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xd58829da, __VMLINUX_SYMBOL_STR(sms_board_led_feedback) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x20b2bb2d, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0x906f24dc, __VMLINUX_SYMBOL_STR(smscore_register_client) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xcd10f886, __VMLINUX_SYMBOL_STR(smscore_get_device_mode) },
	{ 0xd4669fad, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x7cf9099, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0xe8a3aa85, __VMLINUX_SYMBOL_STR(dvb_dmxdev_init) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=smsmdtv";

