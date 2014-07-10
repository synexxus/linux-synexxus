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
	{ 0x64ff957c, __VMLINUX_SYMBOL_STR(nfc_hci_send_event) },
	{ 0x7d10c4bc, __VMLINUX_SYMBOL_STR(nfc_dep_link_is_up) },
	{ 0x9e684407, __VMLINUX_SYMBOL_STR(nfc_targets_found) },
	{ 0xffb65462, __VMLINUX_SYMBOL_STR(nfc_hci_set_param) },
	{ 0x1fccca06, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xbec9596b, __VMLINUX_SYMBOL_STR(nfc_hci_allocate_device) },
	{ 0x6287d814, __VMLINUX_SYMBOL_STR(nfc_tm_activated) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xdcd4e1f1, __VMLINUX_SYMBOL_STR(nfc_hci_get_clientdata) },
	{ 0x84bd156e, __VMLINUX_SYMBOL_STR(nfc_hci_send_cmd) },
	{ 0xec57b2d1, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xacf9af0, __VMLINUX_SYMBOL_STR(nfc_set_remote_general_bytes) },
	{ 0x8d440a1e, __VMLINUX_SYMBOL_STR(nfc_hci_register_device) },
	{ 0xb9454bb0, __VMLINUX_SYMBOL_STR(nfc_get_local_general_bytes) },
	{ 0xb61c876, __VMLINUX_SYMBOL_STR(nfc_hci_free_device) },
	{ 0xbca0b4fd, __VMLINUX_SYMBOL_STR(nfc_hci_sak_to_protocol) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xd01c0d47, __VMLINUX_SYMBOL_STR(nfc_hci_unregister_device) },
	{ 0x7fc7bfa2, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x47f03165, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x43028a27, __VMLINUX_SYMBOL_STR(nfc_hci_result_to_errno) },
	{ 0x853aacdc, __VMLINUX_SYMBOL_STR(nfc_tm_data_received) },
	{ 0x3771b461, __VMLINUX_SYMBOL_STR(crc_ccitt) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x84789e3b, __VMLINUX_SYMBOL_STR(nfc_hci_send_cmd_async) },
	{ 0x80f37c93, __VMLINUX_SYMBOL_STR(nfc_hci_get_param) },
	{ 0xe463cc3f, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x92138d5c, __VMLINUX_SYMBOL_STR(nfc_hci_set_clientdata) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=hci,nfc,crc-ccitt";

