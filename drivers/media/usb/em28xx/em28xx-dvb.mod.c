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
	{ 0xa0df404, __VMLINUX_SYMBOL_STR(em28xx_unregister_extension) },
	{ 0xc6dfb03c, __VMLINUX_SYMBOL_STR(em28xx_register_extension) },
	{ 0xc17c6552, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0xb846cec4, __VMLINUX_SYMBOL_STR(i2c_new_device) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xe23b54cb, __VMLINUX_SYMBOL_STR(dvb_net_init) },
	{ 0xe8a3aa85, __VMLINUX_SYMBOL_STR(dvb_dmxdev_init) },
	{ 0xf15883e8, __VMLINUX_SYMBOL_STR(dvb_dmx_init) },
	{ 0x9e6e10a8, __VMLINUX_SYMBOL_STR(dvb_register_frontend) },
	{ 0x5409938a, __VMLINUX_SYMBOL_STR(dvb_register_adapter) },
	{ 0xb840f323, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x7fc8652c, __VMLINUX_SYMBOL_STR(em28xx_tuner_callback) },
	{ 0x69c5305a, __VMLINUX_SYMBOL_STR(em28xx_alloc_urbs) },
	{ 0x47f03165, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x79222a5, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x6e9dd606, __VMLINUX_SYMBOL_STR(__symbol_put) },
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0x868784cb, __VMLINUX_SYMBOL_STR(__symbol_get) },
	{ 0xdb09ec9e, __VMLINUX_SYMBOL_STR(em28xx_setup_xc3028) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x76de067c, __VMLINUX_SYMBOL_STR(em28xx_init_usb_xfer) },
	{ 0x7efc89c7, __VMLINUX_SYMBOL_STR(usb_set_interface) },
	{ 0xcd75ef7f, __VMLINUX_SYMBOL_STR(em28xx_free_device) },
	{ 0xea80312a, __VMLINUX_SYMBOL_STR(em28xx_uninit_usb_xfer) },
	{ 0xe528685d, __VMLINUX_SYMBOL_STR(dvb_frontend_suspend) },
	{ 0xb8f37a6b, __VMLINUX_SYMBOL_STR(dvb_frontend_resume) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xca9ed50c, __VMLINUX_SYMBOL_STR(i2c_unregister_device) },
	{ 0x271c2372, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x6f9a27f5, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xd248d26, __VMLINUX_SYMBOL_STR(em28xx_stop_urbs) },
	{ 0x10da615, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x6c432ffa, __VMLINUX_SYMBOL_STR(i2c_master_send) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xdc68d156, __VMLINUX_SYMBOL_STR(em28xx_write_reg) },
	{ 0x1204bedc, __VMLINUX_SYMBOL_STR(em28xx_gpio_set) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x4be7fb63, __VMLINUX_SYMBOL_STR(up) },
	{ 0xf473ffaf, __VMLINUX_SYMBOL_STR(down) },
	{ 0xfe990052, __VMLINUX_SYMBOL_STR(gpio_free) },
	{ 0x403f9529, __VMLINUX_SYMBOL_STR(gpio_request_one) },
	{ 0x2414278e, __VMLINUX_SYMBOL_STR(em28xx_set_mode) },
	{ 0xe47f06d5, __VMLINUX_SYMBOL_STR(dvb_unregister_adapter) },
	{ 0x4e7ae259, __VMLINUX_SYMBOL_STR(dvb_frontend_detach) },
	{ 0x910459fc, __VMLINUX_SYMBOL_STR(dvb_unregister_frontend) },
	{ 0x6a6ef8a0, __VMLINUX_SYMBOL_STR(dvb_dmx_release) },
	{ 0x31502053, __VMLINUX_SYMBOL_STR(dvb_dmxdev_release) },
	{ 0x54afe047, __VMLINUX_SYMBOL_STR(dvb_net_release) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x40551e6, __VMLINUX_SYMBOL_STR(dvb_dmx_swfilter) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=em28xx";


MODULE_INFO(srcversion, "C14E1C0EC4C45D3646EBF72");
