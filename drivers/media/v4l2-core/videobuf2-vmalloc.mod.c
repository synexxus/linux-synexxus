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
	{ 0x84f433d6, __VMLINUX_SYMBOL_STR(vb2_put_vma) },
	{ 0x79222a5, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x3fd2571, __VMLINUX_SYMBOL_STR(vm_unmap_ram) },
	{ 0x255a8e09, __VMLINUX_SYMBOL_STR(remap_vmalloc_range) },
	{ 0xaf2637aa, __VMLINUX_SYMBOL_STR(set_page_dirty_lock) },
	{ 0xf087137d, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x145ecec9, __VMLINUX_SYMBOL_STR(dma_buf_vunmap) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xd7d6d58f, __VMLINUX_SYMBOL_STR(vm_map_ram) },
	{ 0x2206e91f, __VMLINUX_SYMBOL_STR(find_vma) },
	{ 0x5635a60a, __VMLINUX_SYMBOL_STR(vmalloc_user) },
	{ 0x60cf71dc, __VMLINUX_SYMBOL_STR(get_user_pages) },
	{ 0xc2165d85, __VMLINUX_SYMBOL_STR(__arm_iounmap) },
	{ 0x47f03165, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x1aa4f6b6, __VMLINUX_SYMBOL_STR(vb2_common_vm_ops) },
	{ 0x22406eb5, __VMLINUX_SYMBOL_STR(put_page) },
	{ 0x1db7dc40, __VMLINUX_SYMBOL_STR(pgprot_kernel) },
	{ 0xfb961d14, __VMLINUX_SYMBOL_STR(__arm_ioremap) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x6e397e7a, __VMLINUX_SYMBOL_STR(dma_buf_vmap) },
	{ 0x3d59bcb9, __VMLINUX_SYMBOL_STR(vb2_get_contig_userptr) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

