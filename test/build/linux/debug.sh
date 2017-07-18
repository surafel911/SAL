cd ~/Documents/Coding/SAL/test/

g++ -g -O0 -Werror  -Wl,-rpath='${ORIGIN}' -o bin/linux/main main.c \
-I"/home/surafel911/Documents/Coding/SAL/include/" \
-L"/home/surafel911/Documents/Coding/SAL/test/bin/linux/" \
-lsal

cd ~/Documents/Coding/SAL/

