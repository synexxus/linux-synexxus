cmd_arch/arm/boot/dts/imx6q-sabrelite.dtb := /opt/gcc-linaro-arm-linux-gnueabihf-4.9-2014.09_linux/bin/arm-linux-gnueabihf-gcc -E -Wp,-MD,arch/arm/boot/dts/.imx6q-sabrelite.dtb.d.pre.tmp -nostdinc -I/home/jreep/OSys/kernel/freescale/fsl-linux-2.6/arch/arm/boot/dts -I/home/jreep/OSys/kernel/freescale/fsl-linux-2.6/arch/arm/boot/dts/include -undef -D__DTS__ -x assembler-with-cpp -o arch/arm/boot/dts/.imx6q-sabrelite.dtb.dts.tmp arch/arm/boot/dts/imx6q-sabrelite.dts ; /home/jreep/OSys/kernel/freescale/fsl-linux-2.6/scripts/dtc/dtc -O dtb -o arch/arm/boot/dts/imx6q-sabrelite.dtb -b 0 -i arch/arm/boot/dts/  -d arch/arm/boot/dts/.imx6q-sabrelite.dtb.d.dtc.tmp arch/arm/boot/dts/.imx6q-sabrelite.dtb.dts.tmp ; cat arch/arm/boot/dts/.imx6q-sabrelite.dtb.d.pre.tmp arch/arm/boot/dts/.imx6q-sabrelite.dtb.d.dtc.tmp > arch/arm/boot/dts/.imx6q-sabrelite.dtb.d

source_arch/arm/boot/dts/imx6q-sabrelite.dtb := arch/arm/boot/dts/imx6q-sabrelite.dts

deps_arch/arm/boot/dts/imx6q-sabrelite.dtb := \
  arch/arm/boot/dts/imx6q.dtsi \
  arch/arm/boot/dts/imx6q-pinfunc.h \
  arch/arm/boot/dts/imx6qdl.dtsi \
  arch/arm/boot/dts/skeleton.dtsi \
  /home/jreep/OSys/kernel/freescale/fsl-linux-2.6/arch/arm/boot/dts/include/dt-bindings/gpio/gpio.h \

arch/arm/boot/dts/imx6q-sabrelite.dtb: $(deps_arch/arm/boot/dts/imx6q-sabrelite.dtb)

$(deps_arch/arm/boot/dts/imx6q-sabrelite.dtb):
