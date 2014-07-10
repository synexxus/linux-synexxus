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
	{ 0xe56a9336, __VMLINUX_SYMBOL_STR(snd_pcm_format_width) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x47884890, __VMLINUX_SYMBOL_STR(system_power_efficient_wq) },
	{ 0xeb711ae7, __VMLINUX_SYMBOL_STR(snd_soc_params_to_bclk) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x19e372d, __VMLINUX_SYMBOL_STR(snd_soc_dapm_get_enum_double) },
	{ 0x3a657fb3, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0xd4370660, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0x6d58577a, __VMLINUX_SYMBOL_STR(snd_soc_dapm_get_volsw) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0xc2e4d78c, __VMLINUX_SYMBOL_STR(snd_soc_add_codec_controls) },
	{ 0xf087137d, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x19deb9c0, __VMLINUX_SYMBOL_STR(snd_soc_dapm_new_controls) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x24d7b4eb, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0x744369c6, __VMLINUX_SYMBOL_STR(snd_soc_put_volsw) },
	{ 0x7cc99ca1, __VMLINUX_SYMBOL_STR(regmap_read) },
	{ 0x9f0a2ba1, __VMLINUX_SYMBOL_STR(snd_soc_get_volsw) },
	{ 0xcb6182df, __VMLINUX_SYMBOL_STR(snd_soc_info_enum_double) },
	{ 0x5c5dacd0, __VMLINUX_SYMBOL_STR(snd_soc_dapm_add_routes) },
	{ 0x563134a8, __VMLINUX_SYMBOL_STR(snd_soc_put_volsw_range) },
	{ 0xc3583421, __VMLINUX_SYMBOL_STR(snd_soc_read) },
	{ 0x46b4b4bf, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x9df59151, __VMLINUX_SYMBOL_STR(snd_soc_update_bits) },
	{ 0x2ecd1688, __VMLINUX_SYMBOL_STR(snd_soc_info_volsw_range) },
	{ 0x4a46abd8, __VMLINUX_SYMBOL_STR(snd_soc_bytes_info) },
	{ 0x82d6a114, __VMLINUX_SYMBOL_STR(snd_soc_dapm_put_volsw) },
	{ 0x22582895, __VMLINUX_SYMBOL_STR(snd_soc_get_volsw_range) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x59e5070d, __VMLINUX_SYMBOL_STR(__do_div64) },
	{ 0x1b952ded, __VMLINUX_SYMBOL_STR(snd_soc_info_volsw) },
	{ 0x2e01cd89, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0x6dc71b43, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xd7b24056, __VMLINUX_SYMBOL_STR(snd_soc_get_enum_double) },
	{ 0xe851bb05, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0x199fbf7d, __VMLINUX_SYMBOL_STR(devm_regmap_init_i2c) },
	{ 0x65dddc94, __VMLINUX_SYMBOL_STR(snd_soc_dapm_sync) },
	{ 0x6c1c57d9, __VMLINUX_SYMBOL_STR(pm_wakeup_event) },
	{ 0x7c74d300, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xeb2f6ee3, __VMLINUX_SYMBOL_STR(snd_soc_unregister_codec) },
	{ 0xf66a2e3b, __VMLINUX_SYMBOL_STR(regcache_mark_dirty) },
	{ 0xa3db5c6b, __VMLINUX_SYMBOL_STR(snd_soc_put_enum_double) },
	{ 0x211f6e31, __VMLINUX_SYMBOL_STR(snd_soc_bytes_get) },
	{ 0xd6b72223, __VMLINUX_SYMBOL_STR(snd_soc_bytes_put) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x42c9ef5e, __VMLINUX_SYMBOL_STR(snd_soc_jack_report) },
	{ 0x66e77516, __VMLINUX_SYMBOL_STR(snd_soc_register_codec) },
	{ 0x564906d2, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x740bc2ca, __VMLINUX_SYMBOL_STR(regmap_write) },
	{ 0x43c003ff, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xcb6585b9, __VMLINUX_SYMBOL_STR(regcache_sync) },
	{ 0x75022a52, __VMLINUX_SYMBOL_STR(regcache_cache_only) },
	{ 0x783ee1a6, __VMLINUX_SYMBOL_STR(snd_soc_write) },
	{ 0x5b2caa6f, __VMLINUX_SYMBOL_STR(snd_soc_dapm_put_enum_double) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd-soc-core";

MODULE_ALIAS("i2c:max98090");
MODULE_ALIAS("of:N*T*Cmaxim,max98090*");
