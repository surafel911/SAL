cd ~/Documents/Coding/SAL/bin/obj/

gcc -m64 -O3 -Werror -std=c99 -fpic -c ../../src/*.c \
-I"/home/surafel911/Documents/Coding/SAL/include/"
gcc -m64 -O3 -Werror -std=c99 -fpic -D_SAL_BUILD_DLL -shared -o ../linux/libsal.so ../../src/*.c \
-I"/home/surafel911/Documents/Coding/SAL/include/"
ar rcs ../linux/libsal.a *.o

cd ~/Documents/Coding/SAL/
