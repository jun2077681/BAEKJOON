extern printf
extern scanf

global main

section .data
    output: db "%d",0
    input: db "%d %d",0
section .text

main:
    push ebp
    mov ebp, esp
    
    lea eax, [ebp-4]
    lea ebx, [ebp-8]
    push eax
    push ebx
    push input
    call scanf
    add esp, 12
    
    xor eax,eax
    mov eax, [ebp-4]
    imul eax, [ebp-8]
    
    push eax
    push output
    call printf
    add esp, 8
    
    mov esp, ebp
    pop ebp
    retn
    
