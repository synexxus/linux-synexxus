cmd_arch/arm/boot/dts/omap4-panda.dtb := /home/jtreep/LINUX/gitc/armv7-multiplatform/dl/gcc-linaro-arm-linux-gnueabihf-4.8-2014.04_linux/bin/arm-linux-gnueabihf-gcc -E -Wp,-MD,arch/arm/boot/dts/.omap4-panda.dtb.d.pre.tmp -nostdinc -I/home/jtreep/LINUX/gitc/armv7-multiplatform/KERNEL/arch/arm/boot/dts -I/home/jtreep/LINUX/gitc/armv7-multiplatform/KERNEL/arch/arm/boot/dts/include -I/home/jtreep/LINUX/gitc/armv7-multiplatform/KERNEL/drivers/of/testcase-data -undef -D__DTS__ -x assembler-with-cpp -o arch/arm/boot/dts/.omap4-panda.dtb.dts.tmp arch/arm/boot/dts/omap4-panda.dts ; /home/jtreep/LINUX/gitc/armv7-multiplatform/KERNEL/scripts/dtc/dtc -O dtb -o arch/arm/boot/dts/omap4-panda.dtb -b 0 -i arch/arm/boot/dts/  -d arch/arm/boot/dts/.omap4-panda.dtb.d.dtc.tmp arch/arm/boot/dts/.omap4-panda.dtb.dts.tmp ; cat arch/arm/boot/dts/.omap4-panda.dtb.d.pre.tmp arch/arm/boot/dts/.omap4-panda.dtb.d.dtc.tmp > arch/arm/boot/dts/.omap4-panda.dtb.d

source_arch/arm/boot/dts/omap4-panda.dtb := arch/arm/boot/dts/omap4-panda.dts

deps_arch/arm/boot/dts/omap4-panda.dtb := \
  arch/arm/boot/dts/omap443x.dtsi \
  arch/arm/boot/dts/omap4.dtsi \
  /home/jtreep/LINUX/gitc/armv7-multiplatform/KERNEL/arch/arm/boot/dts/include/dt-bindings/gpio/gpio.h \
  /home/jtreep/LINUX/gitc/armv7-multiplatform/KERNEL/arch/arm/boot/dts/include/dt-bindings/interrupt-controller/arm-gic.h \
  /home/jtreep/LINUX/gitc/armv7-multiplatform/KERNEL/arch/arm/boot/dts/include/dt-bindings/interrupt-controller/irq.h \
  /home/jtreep/LINUX/gitc/armv7-multiplatform/KERNEL/arch/arm/boot/dts/include/dt-bindings/pinctrl/omap.h \
  arch/arm/boot/dts/skeleton.dtsi \
  arch/arm/boot/dts/omap4-cpu-thermal.dtsi \
  /home/jtreep/LINUX/gitc/armv7-multiplatform/KERNEL/arch/arm/boot/dts/include/dt-bindings/thermal/thermal.h \
  arch/arm/boot/dts/omap4-panda-common.dtsi \
  arch/arm/boot/dts/elpida_ecb240abacn.dtsi \
  arch/arm/boot/dts/twl6030.dtsi \
  arch/arm/boot/dts/twl6030_omap4.dtsi \
  arch/arm/boot/dts/omap44xx-clocks.dtsi \
  arch/arm/boot/dts/omap443x-clocks.dtsi \

arch/arm/boot/dts/omap4-panda.dtb: $(deps_arch/arm/boot/dts/omap4-panda.dtb)

$(deps_arch/arm/boot/dts/omap4-panda.dtb):
