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
	{ 0x6d662533, __VMLINUX_SYMBOL_STR(_find_first_bit_le) },
	{ 0xcd6ab03a, __VMLINUX_SYMBOL_STR(iio_triggered_buffer_cleanup) },
	{ 0xbda0a43c, __VMLINUX_SYMBOL_STR(iio_trigger_unregister) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xdf76bbeb, __VMLINUX_SYMBOL_STR(iio_pollfunc_store_time) },
	{ 0x3a657fb3, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x27bbf221, __VMLINUX_SYMBOL_STR(disable_irq_nosync) },
	{ 0x14e99942, __VMLINUX_SYMBOL_STR(iio_trigger_notify_done) },
	{ 0x972d654a, __VMLINUX_SYMBOL_STR(iio_trigger_alloc) },
	{ 0x46608fa0, __VMLINUX_SYMBOL_STR(getnstimeofday) },
	{ 0x964fbed2, __VMLINUX_SYMBOL_STR(spi_sync_locked) },
	{ 0x6f9a27f5, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x46a9ddf0, __VMLINUX_SYMBOL_STR(iio_triggered_buffer_postenable) },
	{ 0x1a7de583, __VMLINUX_SYMBOL_STR(iio_trigger_poll) },
	{ 0x10da615, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0xeb31a83c, __VMLINUX_SYMBOL_STR(spi_sync) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xe050fdc4, __VMLINUX_SYMBOL_STR(iio_trigger_register) },
	{ 0x19827b5c, __VMLINUX_SYMBOL_STR(iio_triggered_buffer_predisable) },
	{ 0x6c6cdd4d, __VMLINUX_SYMBOL_STR(wait_for_completion_interruptible_timeout) },
	{ 0x9a9f98ef, __VMLINUX_SYMBOL_STR(spi_bus_lock) },
	{ 0x9b64fb4c, __VMLINUX_SYMBOL_STR(iio_trigger_free) },
	{ 0xfcec0987, __VMLINUX_SYMBOL_STR(enable_irq) },
	{ 0x5b3e7a77, __VMLINUX_SYMBOL_STR(iio_push_to_buffers) },
	{ 0x30db4727, __VMLINUX_SYMBOL_STR(iio_validate_scan_mask_onehot) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xd4669fad, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x7cf9099, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0x43c003ff, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x4b2b9fe6, __VMLINUX_SYMBOL_STR(iio_triggered_buffer_setup) },
	{ 0xbce86311, __VMLINUX_SYMBOL_STR(spi_bus_unlock) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=industrialio-triggered-buffer,industrialio";

