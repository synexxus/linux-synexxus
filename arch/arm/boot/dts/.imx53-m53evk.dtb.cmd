cmd_arch/arm/boot/dts/imx53-m53evk.dtb := /home/jtreep/LINUX/gitc/armv7-multiplatform/dl/gcc-linaro-arm-linux-gnueabihf-4.8-2014.04_linux/bin/arm-linux-gnueabihf-gcc -E -Wp,-MD,arch/arm/boot/dts/.imx53-m53evk.dtb.d.pre.tmp -nostdinc -I/home/jtreep/LINUX/gitc/armv7-multiplatform/KERNEL/arch/arm/boot/dts -I/home/jtreep/LINUX/gitc/armv7-multiplatform/KERNEL/arch/arm/boot/dts/include -I/home/jtreep/LINUX/gitc/armv7-multiplatform/KERNEL/drivers/of/testcase-data -undef -D__DTS__ -x assembler-with-cpp -o arch/arm/boot/dts/.imx53-m53evk.dtb.dts.tmp arch/arm/boot/dts/imx53-m53evk.dts ; /home/jtreep/LINUX/gitc/armv7-multiplatform/KERNEL/scripts/dtc/dtc -O dtb -o arch/arm/boot/dts/imx53-m53evk.dtb -b 0 -i arch/arm/boot/dts/  -d arch/arm/boot/dts/.imx53-m53evk.dtb.d.dtc.tmp arch/arm/boot/dts/.imx53-m53evk.dtb.dts.tmp ; cat arch/arm/boot/dts/.imx53-m53evk.dtb.d.pre.tmp arch/arm/boot/dts/.imx53-m53evk.dtb.d.dtc.tmp > arch/arm/boot/dts/.imx53-m53evk.dtb.d

source_arch/arm/boot/dts/imx53-m53evk.dtb := arch/arm/boot/dts/imx53-m53evk.dts

deps_arch/arm/boot/dts/imx53-m53evk.dtb := \
  arch/arm/boot/dts/imx53.dtsi \
  arch/arm/boot/dts/skeleton.dtsi \
  arch/arm/boot/dts/imx53-pinfunc.h \
  /home/jtreep/LINUX/gitc/armv7-multiplatform/KERNEL/arch/arm/boot/dts/include/dt-bindings/clock/imx5-clock.h \
  /home/jtreep/LINUX/gitc/armv7-multiplatform/KERNEL/arch/arm/boot/dts/include/dt-bindings/gpio/gpio.h \
  /home/jtreep/LINUX/gitc/armv7-multiplatform/KERNEL/arch/arm/boot/dts/include/dt-bindings/input/input.h \

arch/arm/boot/dts/imx53-m53evk.dtb: $(deps_arch/arm/boot/dts/imx53-m53evk.dtb)

$(deps_arch/arm/boot/dts/imx53-m53evk.dtb):
