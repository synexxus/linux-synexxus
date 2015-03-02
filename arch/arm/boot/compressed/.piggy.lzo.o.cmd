cmd_arch/arm/boot/compressed/piggy.lzo.o := /opt/gcc-linaro-arm-linux-gnueabihf-4.9-2014.09_linux/bin/arm-linux-gnueabihf-gcc -Wp,-MD,arch/arm/boot/compressed/.piggy.lzo.o.d  -nostdinc -isystem /opt/gcc-linaro-arm-linux-gnueabihf-4.9-2014.09_linux/bin/../lib/gcc/arm-linux-gnueabihf/4.9.2/include -I/home/jreep/OSys/kernel/freescale/fsl-linux-2.6/arch/arm/include -Iarch/arm/include/generated  -Iinclude -I/home/jreep/OSys/kernel/freescale/fsl-linux-2.6/arch/arm/include/uapi -Iarch/arm/include/generated/uapi -I/home/jreep/OSys/kernel/freescale/fsl-linux-2.6/include/uapi -Iinclude/generated/uapi -include /home/jreep/OSys/kernel/freescale/fsl-linux-2.6/include/linux/kconfig.h -D__KERNEL__ -mlittle-endian  -D__ASSEMBLY__ -mabi=aapcs-linux -mno-thumb-interwork -marm -D__LINUX_ARM_ARCH__=7 -march=armv7-a  -include asm/unified.h -msoft-float     -DZIMAGE     -c -o arch/arm/boot/compressed/piggy.lzo.o arch/arm/boot/compressed/piggy.lzo.S

source_arch/arm/boot/compressed/piggy.lzo.o := arch/arm/boot/compressed/piggy.lzo.S

deps_arch/arm/boot/compressed/piggy.lzo.o := \
  /home/jreep/OSys/kernel/freescale/fsl-linux-2.6/arch/arm/include/asm/unified.h \
    $(wildcard include/config/arm/asm/unified.h) \
    $(wildcard include/config/thumb2/kernel.h) \

arch/arm/boot/compressed/piggy.lzo.o: $(deps_arch/arm/boot/compressed/piggy.lzo.o)

$(deps_arch/arm/boot/compressed/piggy.lzo.o):
