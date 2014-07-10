cmd_arch/arm/boot/dts/imx6dl-cubox-i.dtb := /home/jtreep/LINUX/gitc/armv7-multiplatform/dl/gcc-linaro-arm-linux-gnueabihf-4.8-2014.04_linux/bin/arm-linux-gnueabihf-gcc -E -Wp,-MD,arch/arm/boot/dts/.imx6dl-cubox-i.dtb.d.pre.tmp -nostdinc -I/home/jtreep/LINUX/gitc/armv7-multiplatform/KERNEL/arch/arm/boot/dts -I/home/jtreep/LINUX/gitc/armv7-multiplatform/KERNEL/arch/arm/boot/dts/include -I/home/jtreep/LINUX/gitc/armv7-multiplatform/KERNEL/drivers/of/testcase-data -undef -D__DTS__ -x assembler-with-cpp -o arch/arm/boot/dts/.imx6dl-cubox-i.dtb.dts.tmp arch/arm/boot/dts/imx6dl-cubox-i.dts ; /home/jtreep/LINUX/gitc/armv7-multiplatform/KERNEL/scripts/dtc/dtc -O dtb -o arch/arm/boot/dts/imx6dl-cubox-i.dtb -b 0 -i arch/arm/boot/dts/  -d arch/arm/boot/dts/.imx6dl-cubox-i.dtb.d.dtc.tmp arch/arm/boot/dts/.imx6dl-cubox-i.dtb.dts.tmp ; cat arch/arm/boot/dts/.imx6dl-cubox-i.dtb.d.pre.tmp arch/arm/boot/dts/.imx6dl-cubox-i.dtb.d.dtc.tmp > arch/arm/boot/dts/.imx6dl-cubox-i.dtb.d

source_arch/arm/boot/dts/imx6dl-cubox-i.dtb := arch/arm/boot/dts/imx6dl-cubox-i.dts

deps_arch/arm/boot/dts/imx6dl-cubox-i.dtb := \
  arch/arm/boot/dts/imx6dl.dtsi \
  /home/jtreep/LINUX/gitc/armv7-multiplatform/KERNEL/arch/arm/boot/dts/include/dt-bindings/interrupt-controller/irq.h \
  arch/arm/boot/dts/imx6dl-pinfunc.h \
  arch/arm/boot/dts/imx6qdl.dtsi \
  /home/jtreep/LINUX/gitc/armv7-multiplatform/KERNEL/arch/arm/boot/dts/include/dt-bindings/interrupt-controller/arm-gic.h \
  arch/arm/boot/dts/skeleton.dtsi \
  arch/arm/boot/dts/imx6qdl-cubox-i.dtsi \
  arch/arm/boot/dts/imx6qdl-microsom.dtsi \
  arch/arm/boot/dts/imx6qdl-microsom-ar8035.dtsi \

arch/arm/boot/dts/imx6dl-cubox-i.dtb: $(deps_arch/arm/boot/dts/imx6dl-cubox-i.dtb)

$(deps_arch/arm/boot/dts/imx6dl-cubox-i.dtb):
