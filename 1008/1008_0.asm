extern printf
extern scanf
global main

section .data
    fmt: db "%d %d",0
    out: db "%.9lf",0
    dot: db ".",0
section .text

main:
    push ebp
    mov ebp,esp
    sub esp,8

    lea edx, [ebp-8]
    push edx
    lea edx, [ebp-4]
    push edx
    push fmt
    call scanf
    add esp,12
    
    cvtsi2sd xmm0, dword [ebp-8]
    cvtsi2sd xmm1, dword [ebp-4]
    divsd xmm1, xmm0

    movsd [ebp-8], xmm1
    
    push dword [ebp-4]
    push dword [ebp-8]
    push out
    call printf
    add esp,12
    
    mov eax,0
    mov esp,ebp
    pop ebp
    mov eax,0
    ret
