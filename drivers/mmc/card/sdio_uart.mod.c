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
	{ 0x187c4b52, __VMLINUX_SYMBOL_STR(single_release) },
	{ 0x7aa48271, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x3bd247d7, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0x5817531b, __VMLINUX_SYMBOL_STR(sdio_unregister_driver) },
	{ 0x99918ed6, __VMLINUX_SYMBOL_STR(put_tty_driver) },
	{ 0x3691f5ca, __VMLINUX_SYMBOL_STR(tty_unregister_driver) },
	{ 0xd31bb2d0, __VMLINUX_SYMBOL_STR(sdio_register_driver) },
	{ 0xd956e576, __VMLINUX_SYMBOL_STR(tty_register_driver) },
	{ 0xf6744dfe, __VMLINUX_SYMBOL_STR(tty_set_operations) },
	{ 0x67b27ec1, __VMLINUX_SYMBOL_STR(tty_std_termios) },
	{ 0x91c457e7, __VMLINUX_SYMBOL_STR(__tty_alloc_driver) },
	{ 0xfb84e2ee, __VMLINUX_SYMBOL_STR(tty_standard_install) },
	{ 0xfad3b878, __VMLINUX_SYMBOL_STR(tty_port_open) },
	{ 0x6c79b77c, __VMLINUX_SYMBOL_STR(tty_port_close) },
	{ 0xf23fcb99, __VMLINUX_SYMBOL_STR(__kfifo_in) },
	{ 0x67191dc6, __VMLINUX_SYMBOL_STR(tty_port_hangup) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0xd30d2db2, __VMLINUX_SYMBOL_STR(seq_putc) },
	{ 0x42b0bdd9, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x5b5dd944, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0xf087137d, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xb66ea7a5, __VMLINUX_SYMBOL_STR(tty_port_register_device) },
	{ 0xc068440e, __VMLINUX_SYMBOL_STR(__kfifo_alloc) },
	{ 0xb840f323, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xee35fe20, __VMLINUX_SYMBOL_STR(tty_port_init) },
	{ 0x3a657fb3, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x47f03165, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x79222a5, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0xab46a255, __VMLINUX_SYMBOL_STR(sdio_claim_irq) },
	{ 0x9e83215e, __VMLINUX_SYMBOL_STR(sdio_enable_func) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x13d0adf7, __VMLINUX_SYMBOL_STR(__kfifo_out) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xec695e25, __VMLINUX_SYMBOL_STR(tty_wakeup) },
	{ 0x292d585e, __VMLINUX_SYMBOL_STR(tty_insert_flip_string_flags) },
	{ 0x9cadb41b, __VMLINUX_SYMBOL_STR(tty_flip_buffer_push) },
	{ 0x148b97fd, __VMLINUX_SYMBOL_STR(tty_kref_put) },
	{ 0x5fc286b5, __VMLINUX_SYMBOL_STR(tty_port_tty_get) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x409873e3, __VMLINUX_SYMBOL_STR(tty_termios_baud_rate) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x78bf520d, __VMLINUX_SYMBOL_STR(sdio_writeb) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xc75b8480, __VMLINUX_SYMBOL_STR(sdio_readb) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xdb760f52, __VMLINUX_SYMBOL_STR(__kfifo_free) },
	{ 0xe68e79e5, __VMLINUX_SYMBOL_STR(tty_unregister_device) },
	{ 0x43c003ff, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x25d1139c, __VMLINUX_SYMBOL_STR(tty_port_put) },
	{ 0x27090d9c, __VMLINUX_SYMBOL_STR(sdio_release_host) },
	{ 0x3f2147f1, __VMLINUX_SYMBOL_STR(sdio_disable_func) },
	{ 0x8cbb3b27, __VMLINUX_SYMBOL_STR(sdio_release_irq) },
	{ 0x74243ccb, __VMLINUX_SYMBOL_STR(tty_port_tty_hangup) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x6f9a27f5, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x11946f7, __VMLINUX_SYMBOL_STR(sdio_claim_host) },
	{ 0x10da615, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("sdio:c01v*d*");
MODULE_ALIAS("sdio:c04v*d*");
