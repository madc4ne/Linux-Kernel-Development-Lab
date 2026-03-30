#include <linux/module.h>
#include <linux/kernel.h>

int init_module(void) {
    int number = 50;
    printk(KERN_INFO "Value of the number variable is: %d\n", number);
    printk(KERN_INFO "K&R di dalam Kernel: Hello World!\n");
    return 0;
}

void cleanup_module(void) {
    printk(KERN_INFO "Keluar dari Kernel...\n");
}

MODULE_LICENSE("GPL");
