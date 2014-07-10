cmd_lib/raid6/neon8.c := awk -f/home/jtreep/LINUX/gitc/armv7-multiplatform/KERNEL/lib/raid6/unroll.awk -vN=8 < lib/raid6/neon.uc > lib/raid6/neon8.c || ( rm -f lib/raid6/neon8.c && exit 1 )
