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
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x20b2bb2d, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0xda2478d0, __VMLINUX_SYMBOL_STR(param_ops_short) },
	{ 0xe6b83bf7, __VMLINUX_SYMBOL_STR(tm6000_unregister_extension) },
	{ 0xa89cd95d, __VMLINUX_SYMBOL_STR(tm6000_register_extension) },
	{ 0xe1342755, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0x6e9dd606, __VMLINUX_SYMBOL_STR(__symbol_put) },
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0xdff8e89d, __VMLINUX_SYMBOL_STR(tm6000_tuner_callback) },
	{ 0xe8a3aa85, __VMLINUX_SYMBOL_STR(dvb_dmxdev_init) },
	{ 0xf15883e8, __VMLINUX_SYMBOL_STR(dvb_dmx_init) },
	{ 0x9e6e10a8, __VMLINUX_SYMBOL_STR(dvb_register_frontend) },
	{ 0x2309a6d6, __VMLINUX_SYMBOL_STR(tm6000_xc5000_callback) },
	{ 0x5409938a, __VMLINUX_SYMBOL_STR(dvb_register_adapter) },
	{ 0x868784cb, __VMLINUX_SYMBOL_STR(__symbol_get) },
	{ 0xb840f323, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x47f03165, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x79222a5, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xe47f06d5, __VMLINUX_SYMBOL_STR(dvb_unregister_adapter) },
	{ 0x6a6ef8a0, __VMLINUX_SYMBOL_STR(dvb_dmx_release) },
	{ 0x31502053, __VMLINUX_SYMBOL_STR(dvb_dmxdev_release) },
	{ 0x4e7ae259, __VMLINUX_SYMBOL_STR(dvb_frontend_detach) },
	{ 0x910459fc, __VMLINUX_SYMBOL_STR(dvb_unregister_frontend) },
	{ 0xe5915f15, __VMLINUX_SYMBOL_STR(usb_unlink_urb) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x40551e6, __VMLINUX_SYMBOL_STR(dvb_dmx_swfilter) },
	{ 0x89b611dd, __VMLINUX_SYMBOL_STR(tm6000_debug) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xd2dd49fa, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x2448324c, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0xf42be263, __VMLINUX_SYMBOL_STR(usb_clear_halt) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x7be5470a, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0xb3d1e173, __VMLINUX_SYMBOL_STR(tm6000_init_digital_mode) },
	{ 0x6f9a27f5, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x10da615, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=tm6000";

