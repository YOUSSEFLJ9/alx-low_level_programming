;this is a commant
; Author : youssef momen
;Date: 2023-apr-29

section .data


section .text
    global main
    extern printf

main:
    mov   edi, format
	  xor   eax, eax
	  call  printf
	  mov 	eax, 0
	  ret
     format: db `Hello, Holberton\n`,0

