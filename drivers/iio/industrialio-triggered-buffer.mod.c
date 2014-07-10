#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xe8d22f15, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x6e7e231e, __VMLINUX_SYMBOL_STR(iio_buffer_register) },
	{ 0x4b89d47e, __VMLINUX_SYMBOL_STR(iio_kfifo_allocate) },
	{ 0x46a9ddf0, __VMLINUX_SYMBOL_STR(iio_triggered_buffer_postenable) },
	{ 0x52aa5575, __VMLINUX_SYMBOL_STR(iio_buffer_get) },
	{ 0x7cdb4292, __VMLINUX_SYMBOL_STR(iio_buffer_unregister) },
	{ 0x19827b5c, __VMLINUX_SYMBOL_STR(iio_triggered_buffer_predisable) },
	{ 0x6d1d118f, __VMLINUX_SYMBOL_STR(iio_kfifo_free) },
	{ 0x7e907be1, __VMLINUX_SYMBOL_STR(iio_alloc_pollfunc) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8d432e1, __VMLINUX_SYMBOL_STR(iio_dealloc_pollfunc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=industrialio,kfifo_buf";

