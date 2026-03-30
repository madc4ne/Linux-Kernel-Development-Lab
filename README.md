# Linux-Kernel-Development-Lab 🐧🧪

A streamlined environment for Linux kernel development and debugging using QEMU and BusyBox.

## 🚀 Quick Start
Run the following command to boot the custom kernel:

```bash
qemu-system-x86_64 \
  -kernel linux-6.8.12/arch/x86/boot/bzImage \
  -initrd busybox/rootfs.cpio.gz \
  -append "console=ttyS0 quiet" \
  -virtfs local,path=.,mount_tag=hostshare,security_model=passthrough,id=hostshare \
  -nographic
```

## 🛠️ Project Goals
- Learn C Programming (KnR) in a low-level environment.
- Explore Linux Kernel internals and driver development.
- Practice minimalist system builds with BusyBox.
