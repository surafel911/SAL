cd ~/Documents/Coding/SAL/bin/obj/

x86_64-pc-linux-gnu-gcc -g -O0 -m64 -Werror -std=c99 -fpic -c ../../src/*.c \
-I"/home/surafel911/Documents/Coding/SAL/include/"
x86_64-pc-linux-gnu-gcc -g -O0 -m64 -Werror -std=c99 -fPIC -D_SAL_BUILD_DLL -shared -o ../windows/libsal.dll ../../src/*.c \
-I"/home/surafel911/Documents/Coding/SAL/include/"
x86_64-pc-linux-gnu-gcc-ar rcs ../windows/libsal.a *.o

cd ~/Documents/Coding/SAL/
