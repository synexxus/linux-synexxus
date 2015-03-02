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
	{ 0x43ca8c95, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0x62a6f211, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0x2b88a731, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0xfa2bcf10, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x5398945a, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0xb5acfd3, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x6f0036d9, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xe4985b20, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0xec10ed52, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0xb9712e6b, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0xc8fd727e, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x99df492a, __VMLINUX_SYMBOL_STR(rtnl_link_unregister) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x59e5070d, __VMLINUX_SYMBOL_STR(__do_div64) },
	{ 0x5691cf25, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0x787a629b, __VMLINUX_SYMBOL_STR(alloc_netdev_mqs) },
	{ 0x526ab910, __VMLINUX_SYMBOL_STR(netdev_err) },
	{ 0xa8c7e2a8, __VMLINUX_SYMBOL_STR(netdev_warn) },
	{ 0x11a4f43b, __VMLINUX_SYMBOL_STR(rtnl_link_register) },
	{ 0x1ee16a75, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0x85670f1d, __VMLINUX_SYMBOL_STR(rtnl_is_locked) },
	{ 0x6b77fa1b, __VMLINUX_SYMBOL_STR(skb_put) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "65FA84AFE987C1155CF95A1");
