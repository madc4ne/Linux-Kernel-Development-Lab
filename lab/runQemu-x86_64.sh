#!/bin/bash

qemu-system-x86_64 -kernel ../linux-6.8.12/arch/x86/boot/bzImage -initrd ../../busybox/rootfs.cpio.gz -append "console=ttyS0 quiet" -virtfs local,path=.,mount_tag=hostshare,security_model=passthrough,id=hostshare -nographic
