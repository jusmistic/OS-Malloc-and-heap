echo 0 > /proc/sys/kernel/randomize_va_space &&\
gcc -fno-pie -fno-stack-protector -z norelro -z execstack -o malloc malloc.c
