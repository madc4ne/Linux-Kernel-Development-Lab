section .data
    ; The message we want to print
    ; 10 is the ASCII code for a newline (\n)
    msg db "Hello, Kernel World!", 10
    msg_len equ $ - msg    ; A trick to calculate the length of the string

section .text
    global _start          ; The entry point for the linker

_start:
    ; 1. Setup the 'write' system call
    mov rax, 1             ; System call number for sys_write
    mov rdi, 1             ; File descriptor 1 is stdout
    mov rsi, msg           ; Pointer to our string
    mov rdx, msg_len       ; Length of our string
    syscall                ; Invoke the kernel!

    ; 2. Setup the 'exit' system call
    ; If we don't do this, the program will crash (Segfault)
    mov rax, 60            ; System call number for sys_exit
    mov rdi, 0             ; Exit code 0 (success)
    syscall                ; Invoke the kernel!
