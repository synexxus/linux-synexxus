cmd_drivers/media/dvb-frontends/drxd_firm.o := /home/jtreep/LINUX/gitc/armv7-multiplatform/dl/gcc-linaro-arm-linux-gnueabihf-4.8-2014.04_linux/bin/arm-linux-gnueabihf-gcc -Wp,-MD,drivers/media/dvb-frontends/.drxd_firm.o.d  -nostdinc -isystem /home/jtreep/LINUX/gitc/armv7-multiplatform/dl/gcc-linaro-arm-linux-gnueabihf-4.8-2014.04_linux/bin/../lib/gcc/arm-linux-gnueabihf/4.8.3/include -I/home/jtreep/LINUX/gitc/armv7-multiplatform/KERNEL/arch/arm/include -Iarch/arm/include/generated  -Iinclude -I/home/jtreep/LINUX/gitc/armv7-multiplatform/KERNEL/arch/arm/include/uapi -Iarch/arm/include/generated/uapi -I/home/jtreep/LINUX/gitc/armv7-multiplatform/KERNEL/include/uapi -Iinclude/generated/uapi -include /home/jtreep/LINUX/gitc/armv7-multiplatform/KERNEL/include/linux/kconfig.h -D__KERNEL__ -mlittle-endian -Wall -Wundef -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -Werror-implicit-function-declaration -Wno-format-security -fno-delete-null-pointer-checks -O2 -fno-dwarf2-cfi-asm -mabi=aapcs-linux -mno-thumb-interwork -mfpu=vfp -funwind-tables -marm -D__LINUX_ARM_ARCH__=7 -march=armv7-a -msoft-float -Uarm -Wframe-larger-than=1024 -fstack-protector -Wno-unused-but-set-variable -fomit-frame-pointer -Wdeclaration-after-statement -Wno-pointer-sign -fno-strict-overflow -fconserve-stack -Werror=implicit-int -Werror=strict-prototypes -DCC_HAVE_ASM_GOTO -I/home/jtreep/LINUX/gitc/armv7-multiplatform/KERNEL/drivers/media/dvb-core/ -I/home/jtreep/LINUX/gitc/armv7-multiplatform/KERNEL/drivers/media/tuners/  -DMODULE  -D"KBUILD_STR(s)=\#s" -D"KBUILD_BASENAME=KBUILD_STR(drxd_firm)"  -D"KBUILD_MODNAME=KBUILD_STR(drxd)" -c -o drivers/media/dvb-frontends/.tmp_drxd_firm.o drivers/media/dvb-frontends/drxd_firm.c

source_drivers/media/dvb-frontends/drxd_firm.o := drivers/media/dvb-frontends/drxd_firm.c

deps_drivers/media/dvb-frontends/drxd_firm.o := \
    $(wildcard include/config//a.h) \
    $(wildcard include/config/fr/enable//m.h) \
    $(wildcard include/config/freqscan//m.h) \
    $(wildcard include/config/div/echo/enable//m.h) \
    $(wildcard include/config/slave//m.h) \
    $(wildcard include/config/div/blank/enable//m.h) \
  drivers/media/dvb-frontends/drxd_firm.h \
  include/linux/types.h \
    $(wildcard include/config/uid16.h) \
    $(wildcard include/config/lbdaf.h) \
    $(wildcard include/config/arch/dma/addr/t/64bit.h) \
    $(wildcard include/config/phys/addr/t/64bit.h) \
    $(wildcard include/config/64bit.h) \
  include/uapi/linux/types.h \
  /home/jtreep/LINUX/gitc/armv7-multiplatform/KERNEL/arch/arm/include/asm/types.h \
  include/asm-generic/int-ll64.h \
  include/uapi/asm-generic/int-ll64.h \
  arch/arm/include/generated/asm/bitsperlong.h \
  include/asm-generic/bitsperlong.h \
  include/uapi/asm-generic/bitsperlong.h \
  /home/jtreep/LINUX/gitc/armv7-multiplatform/KERNEL/include/uapi/linux/posix_types.h \
  include/linux/stddef.h \
  include/uapi/linux/stddef.h \
  include/linux/compiler.h \
    $(wildcard include/config/sparse/rcu/pointer.h) \
    $(wildcard include/config/trace/branch/profiling.h) \
    $(wildcard include/config/profile/all/branches.h) \
    $(wildcard include/config/enable/must/check.h) \
    $(wildcard include/config/enable/warn/deprecated.h) \
    $(wildcard include/config/kprobes.h) \
  include/linux/compiler-gcc.h \
    $(wildcard include/config/arch/supports/optimized/inlining.h) \
    $(wildcard include/config/optimize/inlining.h) \
  include/linux/compiler-gcc4.h \
    $(wildcard include/config/arch/use/builtin/bswap.h) \
  /home/jtreep/LINUX/gitc/armv7-multiplatform/KERNEL/arch/arm/include/uapi/asm/posix_types.h \
  /home/jtreep/LINUX/gitc/armv7-multiplatform/KERNEL/include/uapi/asm-generic/posix_types.h \
  drivers/media/dvb-frontends/drxd_map_firm.h \

drivers/media/dvb-frontends/drxd_firm.o: $(deps_drivers/media/dvb-frontends/drxd_firm.o)

$(deps_drivers/media/dvb-frontends/drxd_firm.o):
