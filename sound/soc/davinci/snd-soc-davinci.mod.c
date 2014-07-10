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
	{ 0x79222a5, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x83d70683, __VMLINUX_SYMBOL_STR(edma_start) },
	{ 0xe56c49e4, __VMLINUX_SYMBOL_STR(snd_soc_unregister_platform) },
	{ 0x856de6a6, __VMLINUX_SYMBOL_STR(snd_pcm_period_elapsed) },
	{ 0x5fb99b53, __VMLINUX_SYMBOL_STR(arm_dma_ops) },
	{ 0xa31e44ba, __VMLINUX_SYMBOL_STR(edma_free_channel) },
	{ 0x61e1850a, __VMLINUX_SYMBOL_STR(edma_write_slot) },
	{ 0xf1e0b260, __VMLINUX_SYMBOL_STR(edma_set_transfer_params) },
	{ 0x15334e5f, __VMLINUX_SYMBOL_STR(snd_soc_set_runtime_hwparams) },
	{ 0xcaddbd7e, __VMLINUX_SYMBOL_STR(edma_set_dest_index) },
	{ 0x85737519, __VMLINUX_SYMBOL_STR(edma_read_slot) },
	{ 0xf087137d, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x32e0c061, __VMLINUX_SYMBOL_STR(snd_pcm_hw_constraint_integer) },
	{ 0x839cdf99, __VMLINUX_SYMBOL_STR(edma_resume) },
	{ 0x9bda4bb4, __VMLINUX_SYMBOL_STR(edma_set_src) },
	{ 0x9276ce28, __VMLINUX_SYMBOL_STR(edma_set_dest) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x3635439, __VMLINUX_SYMBOL_STR(edma_stop) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xb25f37e6, __VMLINUX_SYMBOL_STR(snd_pcm_lib_free_pages) },
	{ 0x3cb917c9, __VMLINUX_SYMBOL_STR(snd_pcm_lib_ioctl) },
	{ 0x560147fd, __VMLINUX_SYMBOL_STR(edma_unlink) },
	{ 0xe5c363fc, __VMLINUX_SYMBOL_STR(snd_pcm_lib_malloc_pages) },
	{ 0xd15b1172, __VMLINUX_SYMBOL_STR(snd_soc_register_platform) },
	{ 0x60541702, __VMLINUX_SYMBOL_STR(edma_alloc_slot) },
	{ 0xb74b616b, __VMLINUX_SYMBOL_STR(gen_pool_dma_alloc) },
	{ 0x47f03165, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x9c97082e, __VMLINUX_SYMBOL_STR(edma_pause) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xfefb6077, __VMLINUX_SYMBOL_STR(edma_alloc_channel) },
	{ 0x7142c63c, __VMLINUX_SYMBOL_STR(edma_free_slot) },
	{ 0xcdb8f1b6, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0x4e9ce9f9, __VMLINUX_SYMBOL_STR(edma_link) },
	{ 0xc16b4234, __VMLINUX_SYMBOL_STR(dma_common_mmap) },
	{ 0xf7271948, __VMLINUX_SYMBOL_STR(edma_set_src_index) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x3330a47d, __VMLINUX_SYMBOL_STR(gen_pool_free) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-soc-core,snd-pcm";

