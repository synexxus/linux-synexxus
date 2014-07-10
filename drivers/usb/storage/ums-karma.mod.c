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
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xa6f5694a, __VMLINUX_SYMBOL_STR(usb_stor_bulk_transfer_buf) },
	{ 0x237f367a, __VMLINUX_SYMBOL_STR(usb_stor_post_reset) },
	{ 0x27c450e6, __VMLINUX_SYMBOL_STR(usb_stor_Bulk_transport) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x5cf2e042, __VMLINUX_SYMBOL_STR(usb_stor_disconnect) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xe495880d, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0xa9141b79, __VMLINUX_SYMBOL_STR(usb_stor_probe2) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0x80f631bf, __VMLINUX_SYMBOL_STR(usb_stor_pre_reset) },
	{ 0x168ae405, __VMLINUX_SYMBOL_STR(usb_stor_reset_resume) },
	{ 0xf81fde95, __VMLINUX_SYMBOL_STR(usb_stor_suspend) },
	{ 0xc23e7559, __VMLINUX_SYMBOL_STR(usb_stor_probe1) },
	{ 0x47f03165, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xa9aaf519, __VMLINUX_SYMBOL_STR(usb_stor_resume) },
	{ 0xe67f1a0, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x968fa72c, __VMLINUX_SYMBOL_STR(usb_stor_Bulk_reset) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v045Ap5210d0101dc*dsc*dp*ic*isc*ip*in*");
