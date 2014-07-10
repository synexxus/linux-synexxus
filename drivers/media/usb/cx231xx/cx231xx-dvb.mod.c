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
	{ 0xa4dfdfc2, __VMLINUX_SYMBOL_STR(cx231xx_unregister_extension) },
	{ 0xde0a89c5, __VMLINUX_SYMBOL_STR(cx231xx_register_extension) },
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x6e9dd606, __VMLINUX_SYMBOL_STR(__symbol_put) },
	{ 0xe23b54cb, __VMLINUX_SYMBOL_STR(dvb_net_init) },
	{ 0xe8a3aa85, __VMLINUX_SYMBOL_STR(dvb_dmxdev_init) },
	{ 0xf15883e8, __VMLINUX_SYMBOL_STR(dvb_dmx_init) },
	{ 0x9e6e10a8, __VMLINUX_SYMBOL_STR(dvb_register_frontend) },
	{ 0x5409938a, __VMLINUX_SYMBOL_STR(dvb_register_adapter) },
	{ 0xb840f323, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x17ea7c7, __VMLINUX_SYMBOL_STR(cx231xx_tuner_callback) },
	{ 0x868784cb, __VMLINUX_SYMBOL_STR(__symbol_get) },
	{ 0x4be6e2a, __VMLINUX_SYMBOL_STR(cx231xx_demod_reset) },
	{ 0x47f03165, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x79222a5, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x40f7008f, __VMLINUX_SYMBOL_STR(cx231xx_init_bulk) },
	{ 0x8d9baebb, __VMLINUX_SYMBOL_STR(cx231xx_init_isoc) },
	{ 0x89e9c3ce, __VMLINUX_SYMBOL_STR(cx231xx_set_alt_setting) },
	{ 0x4465c5cf, __VMLINUX_SYMBOL_STR(cx231xx_enable_i2c_port_3) },
	{ 0x13c0f6, __VMLINUX_SYMBOL_STR(cx231xx_uninit_isoc) },
	{ 0x17bfc9c6, __VMLINUX_SYMBOL_STR(cx231xx_uninit_bulk) },
	{ 0x6f9a27f5, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x10da615, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xe47f06d5, __VMLINUX_SYMBOL_STR(dvb_unregister_adapter) },
	{ 0x4e7ae259, __VMLINUX_SYMBOL_STR(dvb_frontend_detach) },
	{ 0x910459fc, __VMLINUX_SYMBOL_STR(dvb_unregister_frontend) },
	{ 0x6a6ef8a0, __VMLINUX_SYMBOL_STR(dvb_dmx_release) },
	{ 0x31502053, __VMLINUX_SYMBOL_STR(dvb_dmxdev_release) },
	{ 0x54afe047, __VMLINUX_SYMBOL_STR(dvb_net_release) },
	{ 0xfe44fc51, __VMLINUX_SYMBOL_STR(cx231xx_set_mode) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x40551e6, __VMLINUX_SYMBOL_STR(dvb_dmx_swfilter) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=cx231xx";

