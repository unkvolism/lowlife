obj-m := lkm.o
CC = gcc -Wall 
build := /lib/modules/`uname -r`/build

all:
	$(MAKE) -C $(build) M=`pwd` modules

clean:
	$(MAKE) -C $(build) M=`pwd` clean
