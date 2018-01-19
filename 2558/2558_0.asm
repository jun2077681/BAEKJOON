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
    push DWORD eax
    push DWORD ebx
    push dword input
    call scanf
    add esp, 12
    
    mov eax, [ebp-4]
    add eax, [ebp-8]
    
    push eax
    push dword output
    call printf
    add esp, 8
    
    mov esp, ebp
    pop ebp
    retn
    
