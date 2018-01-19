extern printf
extern scanf
global main

section .data
    out: db "%s %c%s",0
    id: db "jun2077681",0
    n: db "237",0

section .text

main:
    push ebp
    mov ebp,esp
    sub esp,8

    push id
    push 0xA
    push n
    push out
    call printf
    add esp,12
    
    mov eax,0
    mov esp,ebp
    pop ebp
    mov eax,0
    ret
