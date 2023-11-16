section .data
    msg db "hello world", 0xA

section .text
    global _start
    extern printf

_start:
    ; Prepare arguments for printf
    mov rdi, format_string  ; Format string
    mov rsi, msg            ; Argument for %s in the format string
    call printf             ; Call printf function

    ; Exit the program
    mov rax, 60             ; syscall: exit
    xor rdi, rdi            ; status: 0
    syscall

section .data
    format_string db "Message: %s", 0xA
