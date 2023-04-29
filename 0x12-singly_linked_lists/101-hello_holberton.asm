;this is a commant
; Author : youssef momen
;Date: 2023-apr-29

section .data
    p db "Hello, Holberton",0Ah ;this is a variable call it print

section .text
    global main
    extern printf

main:
    push rbp
    mov rbp, rsp

    lea rdi, [p]
    xor eax, eax
    call printf

    mov rsp, rbp
    pop rbp
    ret
