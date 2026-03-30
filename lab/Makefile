obj-m += mem_check.o
KDIR := /home/user/kernel-vlab/vanilla-kernel/linux-6.8.12 # Sesuaikan path ini!

all:
	$(MAKE) -C $(KDIR) M=$(PWD) modules

clean:
	$(MAKE) -C $(KDIR) M=$(PWD) clean
