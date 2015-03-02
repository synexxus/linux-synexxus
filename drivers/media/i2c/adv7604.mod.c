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
	{ 0x15692c87, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x897c1a28, __VMLINUX_SYMBOL_STR(v4l2_subdev_querymenu) },
	{ 0xcb0bd95c, __VMLINUX_SYMBOL_STR(v4l2_subdev_try_ext_ctrls) },
	{ 0x9383ba24, __VMLINUX_SYMBOL_STR(v4l2_subdev_s_ext_ctrls) },
	{ 0xe00e9df2, __VMLINUX_SYMBOL_STR(v4l2_subdev_g_ext_ctrls) },
	{ 0x6d6981f9, __VMLINUX_SYMBOL_STR(v4l2_subdev_s_ctrl) },
	{ 0x76a9ede6, __VMLINUX_SYMBOL_STR(v4l2_subdev_g_ctrl) },
	{ 0x401405d6, __VMLINUX_SYMBOL_STR(v4l2_subdev_queryctrl) },
	{ 0xb2deb163, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0x7066709d, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0xda7a574b, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_setup) },
	{ 0x7482af84, __VMLINUX_SYMBOL_STR(media_entity_init) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0xfa2bcf10, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x729eb802, __VMLINUX_SYMBOL_STR(v4l2_ctrl_new_custom) },
	{ 0xf06cf3f4, __VMLINUX_SYMBOL_STR(v4l2_ctrl_new_std_menu) },
	{ 0x88f00053, __VMLINUX_SYMBOL_STR(v4l2_ctrl_new_std) },
	{ 0xd0e46a3f, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_init_class) },
	{ 0xbd8582e1, __VMLINUX_SYMBOL_STR(v4l2_i2c_subdev_init) },
	{ 0x6fef2591, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xc28b8cde, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x9963a089, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x6f344bb9, __VMLINUX_SYMBOL_STR(v4l2_calc_aspect_ratio) },
	{ 0x236d1346, __VMLINUX_SYMBOL_STR(i2c_new_dummy) },
	{ 0xbe2759fc, __VMLINUX_SYMBOL_STR(v4l2_ctrl_s_ctrl) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xdc5e99e1, __VMLINUX_SYMBOL_STR(i2c_smbus_xfer) },
	{ 0x571c7023, __VMLINUX_SYMBOL_STR(v4l2_chip_ident_i2c_client) },
	{ 0x7eaf8e7a, __VMLINUX_SYMBOL_STR(v4l2_detect_gtf) },
	{ 0x53105839, __VMLINUX_SYMBOL_STR(v4l2_detect_cvt) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x5d9d3491, __VMLINUX_SYMBOL_STR(v4l_match_dv_timings) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x38c09b30, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_free) },
	{ 0xe10b59e, __VMLINUX_SYMBOL_STR(media_entity_cleanup) },
	{ 0xf042979d, __VMLINUX_SYMBOL_STR(v4l2_device_unregister_subdev) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x83130f62, __VMLINUX_SYMBOL_STR(cancel_delayed_work) },
	{ 0x4d56a0e4, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x307539a6, __VMLINUX_SYMBOL_STR(i2c_unregister_device) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("i2c:adv7604");

MODULE_INFO(srcversion, "781ADA05FFC0B42F63A9E94");
