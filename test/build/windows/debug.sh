cd ~/Documents/Coding/SAL/test/

x86_64-pc-linux-gnu-gcc -g -O0 -Werror -std=c99 -Wl,-rpath='${ORIGIN}' -o bin/linux/main main.c \
-I"/home/surafel911/Documents/Coding/SAL/include/" \
-L"/home/surafel911/Documents/Coding/SAL/test/bin/linux/" \
-lsal

cd ~/Documents/Coding/SAL/

