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
	{ 0x78bf520d, __VMLINUX_SYMBOL_STR(sdio_writeb) },
	{ 0x3ce4ca6f, __VMLINUX_SYMBOL_STR(disable_irq) },
	{ 0x79222a5, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x4bfb7c00, __VMLINUX_SYMBOL_STR(__pm_runtime_idle) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xf14ea6c, __VMLINUX_SYMBOL_STR(ieee80211_queue_work) },
	{ 0x3a657fb3, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x9e83215e, __VMLINUX_SYMBOL_STR(sdio_enable_func) },
	{ 0xad02ae1, __VMLINUX_SYMBOL_STR(wl1251_free_hw) },
	{ 0x3a09473e, __VMLINUX_SYMBOL_STR(sdio_writeb_readb) },
	{ 0xab46a255, __VMLINUX_SYMBOL_STR(sdio_claim_irq) },
	{ 0xf816c866, __VMLINUX_SYMBOL_STR(gpio_to_desc) },
	{ 0x98bf483, __VMLINUX_SYMBOL_STR(__pm_runtime_resume) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x13243d4b, __VMLINUX_SYMBOL_STR(wl1251_get_platform_data) },
	{ 0x5817531b, __VMLINUX_SYMBOL_STR(sdio_unregister_driver) },
	{ 0xbc477a2, __VMLINUX_SYMBOL_STR(irq_set_irq_type) },
	{ 0x8cbb3b27, __VMLINUX_SYMBOL_STR(sdio_release_irq) },
	{ 0x7522f3ba, __VMLINUX_SYMBOL_STR(irq_modify_status) },
	{ 0x78f21256, __VMLINUX_SYMBOL_STR(wl1251_init_ieee80211) },
	{ 0x47f03165, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xd752aa2e, __VMLINUX_SYMBOL_STR(sdio_memcpy_toio) },
	{ 0xfcec0987, __VMLINUX_SYMBOL_STR(enable_irq) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x687934e9, __VMLINUX_SYMBOL_STR(gpiod_set_raw_value) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xd31bb2d0, __VMLINUX_SYMBOL_STR(sdio_register_driver) },
	{ 0x51dd8160, __VMLINUX_SYMBOL_STR(sdio_memcpy_fromio) },
	{ 0x11946f7, __VMLINUX_SYMBOL_STR(sdio_claim_host) },
	{ 0x188730cf, __VMLINUX_SYMBOL_STR(devm_gpio_request) },
	{ 0xd0c1a31, __VMLINUX_SYMBOL_STR(wl1251_alloc_hw) },
	{ 0x43c003ff, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x4c232a00, __VMLINUX_SYMBOL_STR(sdio_set_block_size) },
	{ 0x3f2147f1, __VMLINUX_SYMBOL_STR(sdio_disable_func) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0x27090d9c, __VMLINUX_SYMBOL_STR(sdio_release_host) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mac80211,wl1251";

MODULE_ALIAS("sdio:c*v104Cd9066*");
