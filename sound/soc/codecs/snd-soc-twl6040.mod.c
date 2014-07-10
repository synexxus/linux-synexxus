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
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x47884890, __VMLINUX_SYMBOL_STR(system_power_efficient_wq) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x19e372d, __VMLINUX_SYMBOL_STR(snd_soc_dapm_get_enum_double) },
	{ 0x3a657fb3, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x6d58577a, __VMLINUX_SYMBOL_STR(snd_soc_dapm_get_volsw) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x6f9a27f5, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x744369c6, __VMLINUX_SYMBOL_STR(snd_soc_put_volsw) },
	{ 0x9f0a2ba1, __VMLINUX_SYMBOL_STR(snd_soc_get_volsw) },
	{ 0x968a83d8, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0xcb6182df, __VMLINUX_SYMBOL_STR(snd_soc_info_enum_double) },
	{ 0x202da5d9, __VMLINUX_SYMBOL_STR(snd_soc_dapm_get_pin_status) },
	{ 0xc3583421, __VMLINUX_SYMBOL_STR(snd_soc_read) },
	{ 0x46b4b4bf, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xd8421f5a, __VMLINUX_SYMBOL_STR(snd_pcm_hw_constraint_list) },
	{ 0x834f4624, __VMLINUX_SYMBOL_STR(snd_soc_dapm_kcontrol_codec) },
	{ 0xb840f323, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x10da615, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x82d6a114, __VMLINUX_SYMBOL_STR(snd_soc_dapm_put_volsw) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x1b952ded, __VMLINUX_SYMBOL_STR(snd_soc_info_volsw) },
	{ 0x7f2eb170, __VMLINUX_SYMBOL_STR(twl6040_reg_read) },
	{ 0xe851bb05, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0x3a440141, __VMLINUX_SYMBOL_STR(twl6040_power) },
	{ 0xeb2f6ee3, __VMLINUX_SYMBOL_STR(snd_soc_unregister_codec) },
	{ 0x2d7c45fe, __VMLINUX_SYMBOL_STR(twl6040_reg_write) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x42c9ef5e, __VMLINUX_SYMBOL_STR(snd_soc_jack_report) },
	{ 0xb31e0771, __VMLINUX_SYMBOL_STR(platform_get_irq) },
	{ 0x83ea2ea9, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x66e77516, __VMLINUX_SYMBOL_STR(snd_soc_register_codec) },
	{ 0x564906d2, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xe8bfa5e0, __VMLINUX_SYMBOL_STR(twl6040_set_pll) },
	{ 0x43c003ff, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0x5b2caa6f, __VMLINUX_SYMBOL_STR(snd_soc_dapm_put_enum_double) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-soc-core,snd-pcm";

