cmd_net/ceph/armor.o := /home/jtreep/LINUX/gitc/armv7-multiplatform/dl/gcc-linaro-arm-linux-gnueabihf-4.8-2014.04_linux/bin/arm-linux-gnueabihf-gcc -Wp,-MD,net/ceph/.armor.o.d  -nostdinc -isystem /home/jtreep/LINUX/gitc/armv7-multiplatform/dl/gcc-linaro-arm-linux-gnueabihf-4.8-2014.04_linux/bin/../lib/gcc/arm-linux-gnueabihf/4.8.3/include -I/home/jtreep/LINUX/gitc/armv7-multiplatform/KERNEL/arch/arm/include -Iarch/arm/include/generated  -Iinclude -I/home/jtreep/LINUX/gitc/armv7-multiplatform/KERNEL/arch/arm/include/uapi -Iarch/arm/include/generated/uapi -I/home/jtreep/LINUX/gitc/armv7-multiplatform/KERNEL/include/uapi -Iinclude/generated/uapi -include /home/jtreep/LINUX/gitc/armv7-multiplatform/KERNEL/include/linux/kconfig.h -D__KERNEL__ -mlittle-endian -Wall -Wundef -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -Werror-implicit-function-declaration -Wno-format-security -fno-delete-null-pointer-checks -O2 -fno-dwarf2-cfi-asm -mabi=aapcs-linux -mno-thumb-interwork -mfpu=vfp -funwind-tables -marm -D__LINUX_ARM_ARCH__=7 -march=armv7-a -msoft-float -Uarm -Wframe-larger-than=1024 -fstack-protector -Wno-unused-but-set-variable -fomit-frame-pointer -Wdeclaration-after-statement -Wno-pointer-sign -fno-strict-overflow -fconserve-stack -Werror=implicit-int -Werror=strict-prototypes -DCC_HAVE_ASM_GOTO  -DMODULE  -D"KBUILD_STR(s)=\#s" -D"KBUILD_BASENAME=KBUILD_STR(armor)"  -D"KBUILD_MODNAME=KBUILD_STR(libceph)" -c -o net/ceph/.tmp_armor.o net/ceph/armor.c

source_net/ceph/armor.o := net/ceph/armor.c

deps_net/ceph/armor.o := \
  include/linux/errno.h \
  include/uapi/linux/errno.h \
  arch/arm/include/generated/asm/errno.h \
  /home/jtreep/LINUX/gitc/armv7-multiplatform/KERNEL/include/uapi/asm-generic/errno.h \
  /home/jtreep/LINUX/gitc/armv7-multiplatform/KERNEL/include/uapi/asm-generic/errno-base.h \

net/ceph/armor.o: $(deps_net/ceph/armor.o)

$(deps_net/ceph/armor.o):
