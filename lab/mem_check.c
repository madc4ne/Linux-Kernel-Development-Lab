#include <linux/module.h>
#include <linux/kernel.h>

/*
 * mem_check.c - Mengecek ukuran tipe data di lingkungan kernel 6.8.12
 */

int init_module(void) {
    printk(KERN_INFO "========== MEMORY INSPECTOR START ==========\n");
    
    // Menggunakan %zu karena sizeof mengembalikan tipe size_t
    printk(KERN_INFO "[MEM] Ukuran char      : %zu byte\n", sizeof(char));
    printk(KERN_INFO "[MEM] Ukuran int       : %zu bytes\n", sizeof(int));
    printk(KERN_INFO "[MEM] Ukuran long      : %zu bytes\n", sizeof(long));
    printk(KERN_INFO "[MEM] Ukuran long long : %zu bytes\n", sizeof(long long));
    printk(KERN_INFO "[MEM] Ukuran pointer   : %zu bytes\n", sizeof(void *));
    
    // Tambahan untuk melihat batas maksimum u8 (mencegah tumpah/overflow)
    printk(KERN_INFO "[MEM] Info: Jika u8 (1 byte) diisi 256, ia akan 'tumpah' kembali ke 0.\n");
    
    return 0;
}

void cleanup_module(void) {
    printk(KERN_INFO "========== MEMORY INSPECTOR END ==========\n");
}

MODULE_LICENSE("GPL");
MODULE_AUTHOR("K&R Learner");
MODULE_DESCRIPTION("Pengecek ukuran memori tipe data kernel");
