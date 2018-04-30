echo 0 > /proc/sys/kernel/randomize_va_space &&\
gcc -fno-pie -fno-stack-protector -z norelro -z execstack -mpreferred-stack-boundary=2 -o malloc_vs_local.out malloc_vs_local.c &&\

gcc -fno-pie -fno-stack-protector -z norelro -z execstack  -mpreferred-stack-boundary=2 -o malloc.out  malloc.c
