cmd_arch/arm/boot/dts/imx53-ard.dtb := /opt/gcc-linaro-arm-linux-gnueabihf-4.9-2014.09_linux/bin/arm-linux-gnueabihf-gcc -E -Wp,-MD,arch/arm/boot/dts/.imx53-ard.dtb.d.pre.tmp -nostdinc -I/home/jreep/OSys/kernel/freescale/fsl-linux-2.6/arch/arm/boot/dts -I/home/jreep/OSys/kernel/freescale/fsl-linux-2.6/arch/arm/boot/dts/include -undef -D__DTS__ -x assembler-with-cpp -o arch/arm/boot/dts/.imx53-ard.dtb.dts.tmp arch/arm/boot/dts/imx53-ard.dts ; /home/jreep/OSys/kernel/freescale/fsl-linux-2.6/scripts/dtc/dtc -O dtb -o arch/arm/boot/dts/imx53-ard.dtb -b 0 -i arch/arm/boot/dts/  -d arch/arm/boot/dts/.imx53-ard.dtb.d.dtc.tmp arch/arm/boot/dts/.imx53-ard.dtb.dts.tmp ; cat arch/arm/boot/dts/.imx53-ard.dtb.d.pre.tmp arch/arm/boot/dts/.imx53-ard.dtb.d.dtc.tmp > arch/arm/boot/dts/.imx53-ard.dtb.d

source_arch/arm/boot/dts/imx53-ard.dtb := arch/arm/boot/dts/imx53-ard.dts

deps_arch/arm/boot/dts/imx53-ard.dtb := \
  arch/arm/boot/dts/imx53.dtsi \
  arch/arm/boot/dts/skeleton.dtsi \
  arch/arm/boot/dts/imx53-pinfunc.h \

arch/arm/boot/dts/imx53-ard.dtb: $(deps_arch/arm/boot/dts/imx53-ard.dtb)

$(deps_arch/arm/boot/dts/imx53-ard.dtb):
