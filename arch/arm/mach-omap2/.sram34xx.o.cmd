cmd_arch/arm/mach-omap2/sram34xx.o := /home/jtreep/LINUX/gitc/armv7-multiplatform/dl/gcc-linaro-arm-linux-gnueabihf-4.8-2014.04_linux/bin/arm-linux-gnueabihf-gcc -Wp,-MD,arch/arm/mach-omap2/.sram34xx.o.d  -nostdinc -isystem /home/jtreep/LINUX/gitc/armv7-multiplatform/dl/gcc-linaro-arm-linux-gnueabihf-4.8-2014.04_linux/bin/../lib/gcc/arm-linux-gnueabihf/4.8.3/include -I/home/jtreep/LINUX/gitc/armv7-multiplatform/KERNEL/arch/arm/include -Iarch/arm/include/generated  -Iinclude -I/home/jtreep/LINUX/gitc/armv7-multiplatform/KERNEL/arch/arm/include/uapi -Iarch/arm/include/generated/uapi -I/home/jtreep/LINUX/gitc/armv7-multiplatform/KERNEL/include/uapi -Iinclude/generated/uapi -include /home/jtreep/LINUX/gitc/armv7-multiplatform/KERNEL/include/linux/kconfig.h -D__KERNEL__ -mlittle-endian  -D__ASSEMBLY__ -mabi=aapcs-linux -mno-thumb-interwork -mfpu=vfp -funwind-tables -marm -D__LINUX_ARM_ARCH__=7 -march=armv7-a  -include asm/unified.h -msoft-float      -Wa,-march=armv7-a   -c -o arch/arm/mach-omap2/sram34xx.o arch/arm/mach-omap2/sram34xx.S

source_arch/arm/mach-omap2/sram34xx.o := arch/arm/mach-omap2/sram34xx.S

deps_arch/arm/mach-omap2/sram34xx.o := \
    $(wildcard include/config/omap3/sdrc/ac/timing.h) \
  /home/jtreep/LINUX/gitc/armv7-multiplatform/KERNEL/arch/arm/include/asm/unified.h \
    $(wildcard include/config/arm/asm/unified.h) \
    $(wildcard include/config/thumb2/kernel.h) \
  include/linux/linkage.h \
  include/linux/compiler.h \
    $(wildcard include/config/sparse/rcu/pointer.h) \
    $(wildcard include/config/trace/branch/profiling.h) \
    $(wildcard include/config/profile/all/branches.h) \
    $(wildcard include/config/enable/must/check.h) \
    $(wildcard include/config/enable/warn/deprecated.h) \
    $(wildcard include/config/kprobes.h) \
  include/linux/stringify.h \
  include/linux/export.h \
    $(wildcard include/config/have/underscore/symbol/prefix.h) \
    $(wildcard include/config/modules.h) \
    $(wildcard include/config/modversions.h) \
    $(wildcard include/config/unused/symbols.h) \
  /home/jtreep/LINUX/gitc/armv7-multiplatform/KERNEL/arch/arm/include/asm/linkage.h \
  /home/jtreep/LINUX/gitc/armv7-multiplatform/KERNEL/arch/arm/include/asm/assembler.h \
    $(wildcard include/config/cpu/endian/be8.h) \
    $(wildcard include/config/cpu/feroceon.h) \
    $(wildcard include/config/trace/irqflags.h) \
    $(wildcard include/config/cpu/v7m.h) \
    $(wildcard include/config/preempt/count.h) \
    $(wildcard include/config/smp.h) \
    $(wildcard include/config/cpu/use/domains.h) \
  /home/jtreep/LINUX/gitc/armv7-multiplatform/KERNEL/arch/arm/include/asm/ptrace.h \
    $(wildcard include/config/arm/thumb.h) \
  /home/jtreep/LINUX/gitc/armv7-multiplatform/KERNEL/arch/arm/include/uapi/asm/ptrace.h \
  /home/jtreep/LINUX/gitc/armv7-multiplatform/KERNEL/arch/arm/include/asm/hwcap.h \
  /home/jtreep/LINUX/gitc/armv7-multiplatform/KERNEL/arch/arm/include/uapi/asm/hwcap.h \
  /home/jtreep/LINUX/gitc/armv7-multiplatform/KERNEL/arch/arm/include/asm/domain.h \
    $(wildcard include/config/io/36.h) \
  /home/jtreep/LINUX/gitc/armv7-multiplatform/KERNEL/arch/arm/include/asm/opcodes-virt.h \
  /home/jtreep/LINUX/gitc/armv7-multiplatform/KERNEL/arch/arm/include/asm/opcodes.h \
    $(wildcard include/config/cpu/endian/be32.h) \
  /home/jtreep/LINUX/gitc/armv7-multiplatform/KERNEL/arch/arm/include/asm/asm-offsets.h \
  include/generated/asm-offsets.h \
  arch/arm/mach-omap2/soc.h \
    $(wildcard include/config/arch/multiplatform.h) \
    $(wildcard include/config/soc/omap2420.h) \
    $(wildcard include/config/soc/omap2430.h) \
    $(wildcard include/config/arch/omap3.h) \
    $(wildcard include/config/arch/omap4.h) \
    $(wildcard include/config/soc/omap5.h) \
    $(wildcard include/config/soc/am33xx.h) \
    $(wildcard include/config/soc/am43xx.h) \
    $(wildcard include/config/soc/dra7xx.h) \
    $(wildcard include/config/arch/omap2.h) \
    $(wildcard include/config/soc/omap3430.h) \
    $(wildcard include/config/arch/omap2plus.h) \
  arch/arm/mach-omap2/omap24xx.h \
  arch/arm/mach-omap2/omap34xx.h \
    $(wildcard include/config/base.h) \
  arch/arm/mach-omap2/omap44xx.h \
  arch/arm/mach-omap2/ti81xx.h \
  arch/arm/mach-omap2/am33xx.h \
  arch/arm/mach-omap2/omap54xx.h \
  arch/arm/mach-omap2/iomap.h \
  arch/arm/mach-omap2/sdrc.h \
    $(wildcard include/config/soc/has/omap2/sdrc.h) \
  arch/arm/mach-omap2/cm3xxx.h \
  arch/arm/mach-omap2/prcm-common.h \
  arch/arm/mach-omap2/cm2xxx_3xxx.h \
  arch/arm/mach-omap2/cm.h \

arch/arm/mach-omap2/sram34xx.o: $(deps_arch/arm/mach-omap2/sram34xx.o)

$(deps_arch/arm/mach-omap2/sram34xx.o):
