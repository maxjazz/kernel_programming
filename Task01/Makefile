TARGET = hellomod

ifneq ($(KERNELRELEASE),)
    obj-m := $(TARGET).o
else
    KERNELDIR ?= /lib/modules/$(shell uname -r)/build
    PWD := $(shell pwd)

default:
	$(MAKE) -C $(KERNELDIR) M=$(PWD) modules

endif

clean:
	@rm -f *.o .*.com .*.flags *.mod.c *.order 
	@rm -f .*.*.cmd *.symvers *~ *.*~ TODO.*
	@rm -fR .tmp*
	@rm -rf .tmp_versions


