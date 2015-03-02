cmd_arch/arm/boot/dts/imx6sx-19x19-arm2-csi.dtb := /opt/gcc-linaro-arm-linux-gnueabihf-4.9-2014.09_linux/bin/arm-linux-gnueabihf-gcc -E -Wp,-MD,arch/arm/boot/dts/.imx6sx-19x19-arm2-csi.dtb.d.pre.tmp -nostdinc -I/home/jreep/OSys/kernel/freescale/fsl-linux-2.6/arch/arm/boot/dts -I/home/jreep/OSys/kernel/freescale/fsl-linux-2.6/arch/arm/boot/dts/include -undef -D__DTS__ -x assembler-with-cpp -o arch/arm/boot/dts/.imx6sx-19x19-arm2-csi.dtb.dts.tmp arch/arm/boot/dts/imx6sx-19x19-arm2-csi.dts ; /home/jreep/OSys/kernel/freescale/fsl-linux-2.6/scripts/dtc/dtc -O dtb -o arch/arm/boot/dts/imx6sx-19x19-arm2-csi.dtb -b 0 -i arch/arm/boot/dts/  -d arch/arm/boot/dts/.imx6sx-19x19-arm2-csi.dtb.d.dtc.tmp arch/arm/boot/dts/.imx6sx-19x19-arm2-csi.dtb.dts.tmp ; cat arch/arm/boot/dts/.imx6sx-19x19-arm2-csi.dtb.d.pre.tmp arch/arm/boot/dts/.imx6sx-19x19-arm2-csi.dtb.d.dtc.tmp > arch/arm/boot/dts/.imx6sx-19x19-arm2-csi.dtb.d

source_arch/arm/boot/dts/imx6sx-19x19-arm2-csi.dtb := arch/arm/boot/dts/imx6sx-19x19-arm2-csi.dts

deps_arch/arm/boot/dts/imx6sx-19x19-arm2-csi.dtb := \
  arch/arm/boot/dts/imx6sx-19x19-arm2.dts \
  arch/arm/boot/dts/imx6sx.dtsi \
  /home/jreep/OSys/kernel/freescale/fsl-linux-2.6/arch/arm/boot/dts/include/dt-bindings/clock/imx6sx-clock.h \
  /home/jreep/OSys/kernel/freescale/fsl-linux-2.6/arch/arm/boot/dts/include/dt-bindings/gpio/gpio.h \
  arch/arm/boot/dts/imx6sx-pinfunc.h \
  arch/arm/boot/dts/skeleton.dtsi \

arch/arm/boot/dts/imx6sx-19x19-arm2-csi.dtb: $(deps_arch/arm/boot/dts/imx6sx-19x19-arm2-csi.dtb)

$(deps_arch/arm/boot/dts/imx6sx-19x19-arm2-csi.dtb):
