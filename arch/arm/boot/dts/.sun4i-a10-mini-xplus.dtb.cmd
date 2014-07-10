cmd_arch/arm/boot/dts/sun4i-a10-mini-xplus.dtb := /home/jtreep/LINUX/gitc/armv7-multiplatform/dl/gcc-linaro-arm-linux-gnueabihf-4.8-2014.04_linux/bin/arm-linux-gnueabihf-gcc -E -Wp,-MD,arch/arm/boot/dts/.sun4i-a10-mini-xplus.dtb.d.pre.tmp -nostdinc -I/home/jtreep/LINUX/gitc/armv7-multiplatform/KERNEL/arch/arm/boot/dts -I/home/jtreep/LINUX/gitc/armv7-multiplatform/KERNEL/arch/arm/boot/dts/include -I/home/jtreep/LINUX/gitc/armv7-multiplatform/KERNEL/drivers/of/testcase-data -undef -D__DTS__ -x assembler-with-cpp -o arch/arm/boot/dts/.sun4i-a10-mini-xplus.dtb.dts.tmp arch/arm/boot/dts/sun4i-a10-mini-xplus.dts ; /home/jtreep/LINUX/gitc/armv7-multiplatform/KERNEL/scripts/dtc/dtc -O dtb -o arch/arm/boot/dts/sun4i-a10-mini-xplus.dtb -b 0 -i arch/arm/boot/dts/  -d arch/arm/boot/dts/.sun4i-a10-mini-xplus.dtb.d.dtc.tmp arch/arm/boot/dts/.sun4i-a10-mini-xplus.dtb.dts.tmp ; cat arch/arm/boot/dts/.sun4i-a10-mini-xplus.dtb.d.pre.tmp arch/arm/boot/dts/.sun4i-a10-mini-xplus.dtb.d.dtc.tmp > arch/arm/boot/dts/.sun4i-a10-mini-xplus.dtb.d

source_arch/arm/boot/dts/sun4i-a10-mini-xplus.dtb := arch/arm/boot/dts/sun4i-a10-mini-xplus.dts

deps_arch/arm/boot/dts/sun4i-a10-mini-xplus.dtb := \
  arch/arm/boot/dts/sun4i-a10.dtsi \
  arch/arm/boot/dts/skeleton.dtsi \
  arch/arm/boot/dts/sunxi-common-regulators.dtsi \

arch/arm/boot/dts/sun4i-a10-mini-xplus.dtb: $(deps_arch/arm/boot/dts/sun4i-a10-mini-xplus.dtb)

$(deps_arch/arm/boot/dts/sun4i-a10-mini-xplus.dtb):
