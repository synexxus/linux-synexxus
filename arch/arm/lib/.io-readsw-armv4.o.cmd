cmd_arch/arm/lib/io-readsw-armv4.o := /opt/gcc-linaro-arm-linux-gnueabihf-4.9-2014.09_linux/bin/arm-linux-gnueabihf-gcc -Wp,-MD,arch/arm/lib/.io-readsw-armv4.o.d  -nostdinc -isystem /opt/gcc-linaro-arm-linux-gnueabihf-4.9-2014.09_linux/bin/../lib/gcc/arm-linux-gnueabihf/4.9.2/include -I/home/jreep/OSys/kernel/freescale/fsl-linux-2.6/arch/arm/include -Iarch/arm/include/generated  -Iinclude -I/home/jreep/OSys/kernel/freescale/fsl-linux-2.6/arch/arm/include/uapi -Iarch/arm/include/generated/uapi -I/home/jreep/OSys/kernel/freescale/fsl-linux-2.6/include/uapi -Iinclude/generated/uapi -include /home/jreep/OSys/kernel/freescale/fsl-linux-2.6/include/linux/kconfig.h -D__KERNEL__ -mlittle-endian  -D__ASSEMBLY__ -mabi=aapcs-linux -mno-thumb-interwork -marm -D__LINUX_ARM_ARCH__=7 -march=armv7-a  -include asm/unified.h -msoft-float         -c -o arch/arm/lib/io-readsw-armv4.o arch/arm/lib/io-readsw-armv4.S

source_arch/arm/lib/io-readsw-armv4.o := arch/arm/lib/io-readsw-armv4.S

deps_arch/arm/lib/io-readsw-armv4.o := \
  /home/jreep/OSys/kernel/freescale/fsl-linux-2.6/arch/arm/include/asm/unified.h \
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
  /home/jreep/OSys/kernel/freescale/fsl-linux-2.6/arch/arm/include/asm/linkage.h \
  /home/jreep/OSys/kernel/freescale/fsl-linux-2.6/arch/arm/include/asm/assembler.h \
    $(wildcard include/config/cpu/feroceon.h) \
    $(wildcard include/config/trace/irqflags.h) \
    $(wildcard include/config/smp.h) \
    $(wildcard include/config/cpu/use/domains.h) \
  /home/jreep/OSys/kernel/freescale/fsl-linux-2.6/arch/arm/include/asm/ptrace.h \
    $(wildcard include/config/arm/thumb.h) \
  /home/jreep/OSys/kernel/freescale/fsl-linux-2.6/arch/arm/include/uapi/asm/ptrace.h \
    $(wildcard include/config/cpu/endian/be8.h) \
  /home/jreep/OSys/kernel/freescale/fsl-linux-2.6/arch/arm/include/asm/hwcap.h \
  /home/jreep/OSys/kernel/freescale/fsl-linux-2.6/arch/arm/include/uapi/asm/hwcap.h \
  /home/jreep/OSys/kernel/freescale/fsl-linux-2.6/arch/arm/include/asm/domain.h \
    $(wildcard include/config/io/36.h) \
  /home/jreep/OSys/kernel/freescale/fsl-linux-2.6/arch/arm/include/asm/opcodes-virt.h \
  /home/jreep/OSys/kernel/freescale/fsl-linux-2.6/arch/arm/include/asm/opcodes.h \
    $(wildcard include/config/cpu/endian/be32.h) \

arch/arm/lib/io-readsw-armv4.o: $(deps_arch/arm/lib/io-readsw-armv4.o)

$(deps_arch/arm/lib/io-readsw-armv4.o):
