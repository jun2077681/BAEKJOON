extern printf
extern scanf

global main

section .data
    output: db "%d",0
    input: db "%d",0
section .text

main:
    push ebp
    mov ebp, esp
    
    lea eax, [ebp-4]
    push DWORD eax
    push dword input
    call scanf
    add esp, 8
    
    mov eax, [ebp-4]
    cmp eax, 1
    mov ebx, 1
    jz re
    cmp eax, 0
    mov ebx, 1
    jz re

    mov ebx, 1
    e:
    imul ebx, eax
    sub eax, 1
    cmp eax, 0
    jnz e    

    re:
    push ebx
    push dword output
    call printf
    add esp, 8
    
    mov esp, ebp
    pop ebp
    retn
    
