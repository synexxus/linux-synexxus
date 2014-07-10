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
	{ 0x75857a1d, __VMLINUX_SYMBOL_STR(platform_device_unregister) },
	{ 0x83ea2ea9, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x968a83d8, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0xd85c358e, __VMLINUX_SYMBOL_STR(platform_device_register_full) },
	{ 0xbc7872e0, __VMLINUX_SYMBOL_STR(ieee802154_nl_assoc_confirm) },
	{ 0x6dc71b43, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x6476a72f, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0x2ca5b9dd, __VMLINUX_SYMBOL_STR(wpan_phy_register) },
	{ 0x3a657fb3, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xa667138e, __VMLINUX_SYMBOL_STR(alloc_netdev_mqs) },
	{ 0xa5968a7f, __VMLINUX_SYMBOL_STR(wpan_phy_alloc) },
	{ 0xa7c4a9df, __VMLINUX_SYMBOL_STR(wpan_phy_free) },
	{ 0x92db4323, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0x670d3e01, __VMLINUX_SYMBOL_STR(wpan_phy_unregister) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x42ffc6c3, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0xbe778755, __VMLINUX_SYMBOL_STR(ieee802154_nl_disassoc_confirm) },
	{ 0xeab66610, __VMLINUX_SYMBOL_STR(ieee802154_nl_start_confirm) },
	{ 0x6f9a27f5, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x10da615, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x8e711360, __VMLINUX_SYMBOL_STR(ieee802154_nl_scan_confirm) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x4e3e6b7a, __VMLINUX_SYMBOL_STR(get_device) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xec242769, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0x43c003ff, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ieee802154";

