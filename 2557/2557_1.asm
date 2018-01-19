section .data
    msg db "Hello World!",0x0A,0
    
section .text
    global main
    extern printf
    
main:
    push ebp
    mov ebp, esp
    push msg
    call printf
    mov esp, ebp
    pop ebp
    retn
