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
	{ 0x61c23aed, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x9155e50, __VMLINUX_SYMBOL_STR(platform_driver_register) },
	{ 0x90705b7f, __VMLINUX_SYMBOL_STR(syscon_node_to_regmap) },
	{ 0xe35c5285, __VMLINUX_SYMBOL_STR(of_find_node_by_phandle) },
	{ 0x35becdbe, __VMLINUX_SYMBOL_STR(register_candev) },
	{ 0xbb1e46f1, __VMLINUX_SYMBOL_STR(devm_pinctrl_put) },
	{ 0x5be9608b, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x3f346ce4, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x63067295, __VMLINUX_SYMBOL_STR(device_set_wakeup_capable) },
	{ 0x6f01b18c, __VMLINUX_SYMBOL_STR(netif_napi_add) },
	{ 0xec78630f, __VMLINUX_SYMBOL_STR(of_match_device) },
	{ 0x2679e53a, __VMLINUX_SYMBOL_STR(alloc_candev) },
	{ 0x40a6f522, __VMLINUX_SYMBOL_STR(__arm_ioremap) },
	{ 0xadf42bd5, __VMLINUX_SYMBOL_STR(__request_region) },
	{ 0x130e9ceb, __VMLINUX_SYMBOL_STR(platform_get_irq) },
	{ 0x95790f76, __VMLINUX_SYMBOL_STR(clk_get_rate) },
	{ 0xa75b1ab1, __VMLINUX_SYMBOL_STR(devm_clk_get) },
	{ 0xdac11bae, __VMLINUX_SYMBOL_STR(of_property_read_u32_array) },
	{ 0x9f68d24b, __VMLINUX_SYMBOL_STR(pinctrl_select_state) },
	{ 0xd2c45f36, __VMLINUX_SYMBOL_STR(pinctrl_lookup_state) },
	{ 0x3d156227, __VMLINUX_SYMBOL_STR(devm_pinctrl_get) },
	{ 0xfd1b4aba, __VMLINUX_SYMBOL_STR(clk_enable) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x91991daa, __VMLINUX_SYMBOL_STR(open_candev) },
	{ 0x8f437d77, __VMLINUX_SYMBOL_STR(clk_prepare) },
	{ 0xc4ef35ea, __VMLINUX_SYMBOL_STR(__napi_schedule) },
	{ 0xfa3c643b, __VMLINUX_SYMBOL_STR(__netif_schedule) },
	{ 0x2a3aa678, __VMLINUX_SYMBOL_STR(_test_and_clear_bit) },
	{ 0x6799f7e9, __VMLINUX_SYMBOL_STR(can_get_echo_skb) },
	{ 0xa66d23d1, __VMLINUX_SYMBOL_STR(close_candev) },
	{ 0x5021d67d, __VMLINUX_SYMBOL_STR(clk_unprepare) },
	{ 0x5f591b68, __VMLINUX_SYMBOL_STR(clk_disable) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x3ab8eceb, __VMLINUX_SYMBOL_STR(can_put_echo_skb) },
	{ 0x5691cf25, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x20c3231a, __VMLINUX_SYMBOL_STR(netdev_info) },
	{ 0xa1f3afce, __VMLINUX_SYMBOL_STR(can_bus_off) },
	{ 0x526ab910, __VMLINUX_SYMBOL_STR(netdev_err) },
	{ 0xb841dadd, __VMLINUX_SYMBOL_STR(alloc_can_err_skb) },
	{ 0x5cd57223, __VMLINUX_SYMBOL_STR(napi_complete) },
	{ 0x1d691f44, __VMLINUX_SYMBOL_STR(alloc_can_skb) },
	{ 0xba58e0b2, __VMLINUX_SYMBOL_STR(netif_receive_skb) },
	{ 0x378d8431, __VMLINUX_SYMBOL_STR(free_candev) },
	{ 0x9bce482f, __VMLINUX_SYMBOL_STR(__release_region) },
	{ 0x788fe103, __VMLINUX_SYMBOL_STR(iomem_resource) },
	{ 0xdfa9dfd1, __VMLINUX_SYMBOL_STR(platform_get_resource) },
	{ 0xc2165d85, __VMLINUX_SYMBOL_STR(__arm_iounmap) },
	{ 0x891d3927, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x8fdf0f1d, __VMLINUX_SYMBOL_STR(unregister_candev) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x602f16f6, __VMLINUX_SYMBOL_STR(netif_device_detach) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x39e6111f, __VMLINUX_SYMBOL_STR(regmap_update_bits) },
	{ 0xce2840e7, __VMLINUX_SYMBOL_STR(irq_set_irq_wake) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x4a5c85e2, __VMLINUX_SYMBOL_STR(netif_device_attach) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0xac8f37b2, __VMLINUX_SYMBOL_STR(outer_cache) },
	{ 0x4d56a0e4, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=can-dev";

MODULE_ALIAS("platform:flexcan");
MODULE_ALIAS("of:N*T*Cfsl,imx6q-flexcan*");
MODULE_ALIAS("of:N*T*Cfsl,imx28-flexcan*");
MODULE_ALIAS("of:N*T*Cfsl,p1010-flexcan*");

MODULE_INFO(srcversion, "A9D73AA2AB278C58F38AA6A");
