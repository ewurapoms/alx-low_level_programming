section .text
    global main

section .data
    msg: db "Hello, Holberton", 10, 0

main:
    mov rax, 1
    mov rdi, 1
    mov rsi, msg
    syscall

    mov rax, 60
    mov rdi, rdi
    syscall
