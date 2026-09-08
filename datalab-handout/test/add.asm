; add.asm
section .text
global _start

_start:
    mov eax, 2
    add eax, 3
    mov edi, eax   ; exit code
    mov eax, 60    ; sys_exit
    syscall