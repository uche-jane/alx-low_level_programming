section .data
    msg db "Hello, Holberton",0x0a,0  ; message to be printed with a newline

section .text
    global main
    extern printf
    
main:
    ; prepare arguments for printf function
    push qword msg  ; push address of message to the stack
    mov rdi, qword [rsp]  ; move address of message to rdi register as the first argument for printf
    
    ; call printf function
    call printf
    
    ; clean up the stack
    add rsp, 8
    
    ; exit program
    xor eax, eax
    ret

