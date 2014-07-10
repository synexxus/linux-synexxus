cmd_arch/arm/boot/dts/omap2420-n810-wimax.dtb := /home/jtreep/LINUX/gitc/armv7-multiplatform/dl/gcc-linaro-arm-linux-gnueabihf-4.8-2014.04_linux/bin/arm-linux-gnueabihf-gcc -E -Wp,-MD,arch/arm/boot/dts/.omap2420-n810-wimax.dtb.d.pre.tmp -nostdinc -I/home/jtreep/LINUX/gitc/armv7-multiplatform/KERNEL/arch/arm/boot/dts -I/home/jtreep/LINUX/gitc/armv7-multiplatform/KERNEL/arch/arm/boot/dts/include -I/home/jtreep/LINUX/gitc/armv7-multiplatform/KERNEL/drivers/of/testcase-data -undef -D__DTS__ -x assembler-with-cpp -o arch/arm/boot/dts/.omap2420-n810-wimax.dtb.dts.tmp arch/arm/boot/dts/omap2420-n810-wimax.dts ; /home/jtreep/LINUX/gitc/armv7-multiplatform/KERNEL/scripts/dtc/dtc -O dtb -o arch/arm/boot/dts/omap2420-n810-wimax.dtb -b 0 -i arch/arm/boot/dts/  -d arch/arm/boot/dts/.omap2420-n810-wimax.dtb.d.dtc.tmp arch/arm/boot/dts/.omap2420-n810-wimax.dtb.dts.tmp ; cat arch/arm/boot/dts/.omap2420-n810-wimax.dtb.d.pre.tmp arch/arm/boot/dts/.omap2420-n810-wimax.dtb.d.dtc.tmp > arch/arm/boot/dts/.omap2420-n810-wimax.dtb.d

source_arch/arm/boot/dts/omap2420-n810-wimax.dtb := arch/arm/boot/dts/omap2420-n810-wimax.dts

deps_arch/arm/boot/dts/omap2420-n810-wimax.dtb := \
  arch/arm/boot/dts/omap2420-n8x0-common.dtsi \
  arch/arm/boot/dts/omap2420.dtsi \
  arch/arm/boot/dts/omap2.dtsi \
  /home/jtreep/LINUX/gitc/armv7-multiplatform/KERNEL/arch/arm/boot/dts/include/dt-bindings/gpio/gpio.h \
  /home/jtreep/LINUX/gitc/armv7-multiplatform/KERNEL/arch/arm/boot/dts/include/dt-bindings/interrupt-controller/irq.h \
  /home/jtreep/LINUX/gitc/armv7-multiplatform/KERNEL/arch/arm/boot/dts/include/dt-bindings/pinctrl/omap.h \
  arch/arm/boot/dts/skeleton.dtsi \

arch/arm/boot/dts/omap2420-n810-wimax.dtb: $(deps_arch/arm/boot/dts/omap2420-n810-wimax.dtb)

$(deps_arch/arm/boot/dts/omap2420-n810-wimax.dtb):
