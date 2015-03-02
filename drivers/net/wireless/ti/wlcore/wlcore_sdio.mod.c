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
	{ 0xc28b8cde, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x7f48a646, __VMLINUX_SYMBOL_STR(__pm_runtime_idle) },
	{ 0x420b9ad6, __VMLINUX_SYMBOL_STR(sdio_writesb) },
	{ 0x83a42907, __VMLINUX_SYMBOL_STR(sdio_enable_func) },
	{ 0x1976aa06, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x2c495af5, __VMLINUX_SYMBOL_STR(__pm_runtime_resume) },
	{ 0xf14ce434, __VMLINUX_SYMBOL_STR(sdio_get_host_pm_caps) },
	{ 0x5be9608b, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xc16a7b84, __VMLINUX_SYMBOL_STR(platform_device_unregister) },
	{ 0xd5e9f8f, __VMLINUX_SYMBOL_STR(sdio_readsb) },
	{ 0x27c3b586, __VMLINUX_SYMBOL_STR(sdio_unregister_driver) },
	{ 0x35f07a38, __VMLINUX_SYMBOL_STR(sdio_f0_writeb) },
	{ 0x4fad6e0b, __VMLINUX_SYMBOL_STR(sdio_set_host_pm_flags) },
	{ 0x4059792f, __VMLINUX_SYMBOL_STR(print_hex_dump) },
	{ 0x6fef2591, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xaf67f0a5, __VMLINUX_SYMBOL_STR(sdio_f0_readb) },
	{ 0x45e3b60d, __VMLINUX_SYMBOL_STR(mmc_power_save_host) },
	{ 0x899adf8b, __VMLINUX_SYMBOL_STR(mmc_power_restore_host) },
	{ 0x40689d1d, __VMLINUX_SYMBOL_STR(sdio_memcpy_toio) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x4c8534ee, __VMLINUX_SYMBOL_STR(sdio_register_driver) },
	{ 0x73632fa, __VMLINUX_SYMBOL_STR(sdio_memcpy_fromio) },
	{ 0xcf94a53c, __VMLINUX_SYMBOL_STR(sdio_claim_host) },
	{ 0x4d56a0e4, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x9f6ec32, __VMLINUX_SYMBOL_STR(sdio_set_block_size) },
	{ 0x1742d738, __VMLINUX_SYMBOL_STR(sdio_disable_func) },
	{ 0x2839db83, __VMLINUX_SYMBOL_STR(sdio_release_host) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("sdio:c*v0097d4076*");

MODULE_INFO(srcversion, "0BD2D9A122D980F5AF42BD3");
