extern _printf
extern _scanf
global main

section .data
	out: db "%s%c%s", 0
	str: db "강한친구 대한육군",0
	
section .text

global _main
_main:
	push ebp
	mov ebp,esp
    sub esp,8

	push str
	push 0xA
	push str
	push out
	call _printf
	add esp,12


    
	mov eax,0
	mov esp,ebp
	pop ebp
	mov eax,0
	ret