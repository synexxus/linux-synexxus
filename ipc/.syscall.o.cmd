cmd_ipc/syscall.o := /opt/gcc-linaro-arm-linux-gnueabihf-4.9-2014.09_linux/bin/arm-linux-gnueabihf-gcc -Wp,-MD,ipc/.syscall.o.d  -nostdinc -isystem /opt/gcc-linaro-arm-linux-gnueabihf-4.9-2014.09_linux/bin/../lib/gcc/arm-linux-gnueabihf/4.9.2/include -I/home/jreep/OSys/kernel/freescale/fsl-linux-2.6/arch/arm/include -Iarch/arm/include/generated  -Iinclude -I/home/jreep/OSys/kernel/freescale/fsl-linux-2.6/arch/arm/include/uapi -Iarch/arm/include/generated/uapi -I/home/jreep/OSys/kernel/freescale/fsl-linux-2.6/include/uapi -Iinclude/generated/uapi -include /home/jreep/OSys/kernel/freescale/fsl-linux-2.6/include/linux/kconfig.h -D__KERNEL__ -mlittle-endian -Wall -Wundef -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -Werror-implicit-function-declaration -Wno-format-security -fno-delete-null-pointer-checks -O2 -fno-dwarf2-cfi-asm -fno-omit-frame-pointer -mapcs -mno-sched-prolog -mabi=aapcs-linux -mno-thumb-interwork -marm -D__LINUX_ARM_ARCH__=7 -march=armv7-a -msoft-float -Uarm -Wframe-larger-than=1024 -fno-stack-protector -Wno-unused-but-set-variable -fno-omit-frame-pointer -fno-optimize-sibling-calls -Wdeclaration-after-statement -Wno-pointer-sign -fno-strict-overflow -fconserve-stack -DCC_HAVE_ASM_GOTO    -D"KBUILD_STR(s)=\#s" -D"KBUILD_BASENAME=KBUILD_STR(syscall)"  -D"KBUILD_MODNAME=KBUILD_STR(syscall)" -c -o ipc/.tmp_syscall.o ipc/syscall.c

source_ipc/syscall.o := ipc/syscall.c

deps_ipc/syscall.o := \
  /home/jreep/OSys/kernel/freescale/fsl-linux-2.6/include/uapi/linux/unistd.h \
  /home/jreep/OSys/kernel/freescale/fsl-linux-2.6/arch/arm/include/asm/unistd.h \
    $(wildcard include/config/aeabi.h) \
    $(wildcard include/config/oabi/compat.h) \
  /home/jreep/OSys/kernel/freescale/fsl-linux-2.6/arch/arm/include/uapi/asm/unistd.h \

ipc/syscall.o: $(deps_ipc/syscall.o)

$(deps_ipc/syscall.o):
