cmd_arch/arm/boot/dts/omap3-zoom3.dtb := /home/jtreep/LINUX/gitc/armv7-multiplatform/dl/gcc-linaro-arm-linux-gnueabihf-4.8-2014.04_linux/bin/arm-linux-gnueabihf-gcc -E -Wp,-MD,arch/arm/boot/dts/.omap3-zoom3.dtb.d.pre.tmp -nostdinc -I/home/jtreep/LINUX/gitc/armv7-multiplatform/KERNEL/arch/arm/boot/dts -I/home/jtreep/LINUX/gitc/armv7-multiplatform/KERNEL/arch/arm/boot/dts/include -I/home/jtreep/LINUX/gitc/armv7-multiplatform/KERNEL/drivers/of/testcase-data -undef -D__DTS__ -x assembler-with-cpp -o arch/arm/boot/dts/.omap3-zoom3.dtb.dts.tmp arch/arm/boot/dts/omap3-zoom3.dts ; /home/jtreep/LINUX/gitc/armv7-multiplatform/KERNEL/scripts/dtc/dtc -O dtb -o arch/arm/boot/dts/omap3-zoom3.dtb -b 0 -i arch/arm/boot/dts/  -d arch/arm/boot/dts/.omap3-zoom3.dtb.d.dtc.tmp arch/arm/boot/dts/.omap3-zoom3.dtb.dts.tmp ; cat arch/arm/boot/dts/.omap3-zoom3.dtb.d.pre.tmp arch/arm/boot/dts/.omap3-zoom3.dtb.d.dtc.tmp > arch/arm/boot/dts/.omap3-zoom3.dtb.d

source_arch/arm/boot/dts/omap3-zoom3.dtb := arch/arm/boot/dts/omap3-zoom3.dts

deps_arch/arm/boot/dts/omap3-zoom3.dtb := \
  arch/arm/boot/dts/omap36xx.dtsi \
  arch/arm/boot/dts/omap3.dtsi \
  /home/jtreep/LINUX/gitc/armv7-multiplatform/KERNEL/arch/arm/boot/dts/include/dt-bindings/gpio/gpio.h \
  /home/jtreep/LINUX/gitc/armv7-multiplatform/KERNEL/arch/arm/boot/dts/include/dt-bindings/interrupt-controller/irq.h \
  /home/jtreep/LINUX/gitc/armv7-multiplatform/KERNEL/arch/arm/boot/dts/include/dt-bindings/pinctrl/omap.h \
  arch/arm/boot/dts/skeleton.dtsi \
  arch/arm/boot/dts/omap-zoom-common.dtsi \
  arch/arm/boot/dts/omap-gpmc-smsc911x.dtsi \
  arch/arm/boot/dts/twl4030.dtsi \
  arch/arm/boot/dts/omap3xxx-clocks.dtsi \
  arch/arm/boot/dts/omap34xx-omap36xx-clocks.dtsi \
  arch/arm/boot/dts/omap36xx-omap3430es2plus-clocks.dtsi \
  arch/arm/boot/dts/omap36xx-am35xx-omap3430es2plus-clocks.dtsi \
  arch/arm/boot/dts/omap36xx-clocks.dtsi \

arch/arm/boot/dts/omap3-zoom3.dtb: $(deps_arch/arm/boot/dts/omap3-zoom3.dtb)

$(deps_arch/arm/boot/dts/omap3-zoom3.dtb):
