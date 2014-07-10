cmd_lib/raid6/int4.c := awk -f/home/jtreep/LINUX/gitc/armv7-multiplatform/KERNEL/lib/raid6/unroll.awk -vN=4 < lib/raid6/int.uc > lib/raid6/int4.c || ( rm -f lib/raid6/int4.c && exit 1 )
