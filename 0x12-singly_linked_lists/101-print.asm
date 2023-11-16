section .data
    hello_message db "Hello, Holberton", 0xA

section .text
    global main
    extern printf

main:
    ; Prepare arguments for printf
    mov rdi, hello_message ; Format string
    mov rax, 0             ; Number of vector registers used (variadic function)
    call printf            ; Call printf function

    ; Exit the program
    mov rax, 60            ; syscall: exit
    xor rdi, rdi           ; status: 0
    syscall

section .data
