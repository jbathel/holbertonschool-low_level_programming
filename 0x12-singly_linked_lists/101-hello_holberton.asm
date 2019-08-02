iglobal _start

section .text

_start:
mov rax, 1        ; write(
		mov rdi, 1        ;   STDOUT_FILENO,
		mov rsi, msg      ;   "Hello, Holberton\n",
		mov rdx, msglen   ;   sizeof("Hello, world!\n")
		syscall           ; );

mov rax, 60       ; exit(
		mov rdi, 0        ;   EXIT_SUCCESS
		syscall           ; );

section .data
msg: db "Hello, Holberton\n", 14
msglen: equ $ - msg

