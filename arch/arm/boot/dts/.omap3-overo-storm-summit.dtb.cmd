cmd_arch/arm/boot/dts/omap3-overo-storm-summit.dtb := /home/jtreep/LINUX/gitc/armv7-multiplatform/dl/gcc-linaro-arm-linux-gnueabihf-4.8-2014.04_linux/bin/arm-linux-gnueabihf-gcc -E -Wp,-MD,arch/arm/boot/dts/.omap3-overo-storm-summit.dtb.d.pre.tmp -nostdinc -I/home/jtreep/LINUX/gitc/armv7-multiplatform/KERNEL/arch/arm/boot/dts -I/home/jtreep/LINUX/gitc/armv7-multiplatform/KERNEL/arch/arm/boot/dts/include -I/home/jtreep/LINUX/gitc/armv7-multiplatform/KERNEL/drivers/of/testcase-data -undef -D__DTS__ -x assembler-with-cpp -o arch/arm/boot/dts/.omap3-overo-storm-summit.dtb.dts.tmp arch/arm/boot/dts/omap3-overo-storm-summit.dts ; /home/jtreep/LINUX/gitc/armv7-multiplatform/KERNEL/scripts/dtc/dtc -O dtb -o arch/arm/boot/dts/omap3-overo-storm-summit.dtb -b 0 -i arch/arm/boot/dts/  -d arch/arm/boot/dts/.omap3-overo-storm-summit.dtb.d.dtc.tmp arch/arm/boot/dts/.omap3-overo-storm-summit.dtb.dts.tmp ; cat arch/arm/boot/dts/.omap3-overo-storm-summit.dtb.d.pre.tmp arch/arm/boot/dts/.omap3-overo-storm-summit.dtb.d.dtc.tmp > arch/arm/boot/dts/.omap3-overo-storm-summit.dtb.d

source_arch/arm/boot/dts/omap3-overo-storm-summit.dtb := arch/arm/boot/dts/omap3-overo-storm-summit.dts

deps_arch/arm/boot/dts/omap3-overo-storm-summit.dtb := \
  arch/arm/boot/dts/omap3-overo-storm.dtsi \
  arch/arm/boot/dts/omap36xx.dtsi \
  arch/arm/boot/dts/omap3.dtsi \
  /home/jtreep/LINUX/gitc/armv7-multiplatform/KERNEL/arch/arm/boot/dts/include/dt-bindings/gpio/gpio.h \
  /home/jtreep/LINUX/gitc/armv7-multiplatform/KERNEL/arch/arm/boot/dts/include/dt-bindings/interrupt-controller/irq.h \
  /home/jtreep/LINUX/gitc/armv7-multiplatform/KERNEL/arch/arm/boot/dts/include/dt-bindings/pinctrl/omap.h \
  arch/arm/boot/dts/skeleton.dtsi \
  arch/arm/boot/dts/omap3-overo-base.dtsi \
  arch/arm/boot/dts/twl4030.dtsi \
  arch/arm/boot/dts/twl4030_omap3.dtsi \
  arch/arm/boot/dts/omap3-overo-summit-common.dtsi \
  arch/arm/boot/dts/omap3-overo-common-peripherals.dtsi \
  arch/arm/boot/dts/omap3xxx-clocks.dtsi \
  arch/arm/boot/dts/omap34xx-omap36xx-clocks.dtsi \
  arch/arm/boot/dts/omap36xx-omap3430es2plus-clocks.dtsi \
  arch/arm/boot/dts/omap36xx-am35xx-omap3430es2plus-clocks.dtsi \
  arch/arm/boot/dts/omap36xx-clocks.dtsi \

arch/arm/boot/dts/omap3-overo-storm-summit.dtb: $(deps_arch/arm/boot/dts/omap3-overo-storm-summit.dtb)

$(deps_arch/arm/boot/dts/omap3-overo-storm-summit.dtb):
