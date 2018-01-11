extern _printf
extern _scanf
global main

section .data
	out: db "%s%c%s%c%s%c%s%c%s", 0
	pic1: db '|\_/|',0
	pic2: db '|q p|   /}',0
	pic3: db '( 0 )"""\',0
	pic4: db '|"^"`    |',0
	pic5: db '||_/=\\__|',0
	
section .text

global _main
_main:
	push ebp
	mov ebp,esp
    sub esp,8

	push pic5
	push 0xA
	push pic4
	push 0xA
	push pic3
	push 0xA
	push pic2
	push 0xA
	push pic1
	push out
	call _printf
	add esp,12


    
	mov eax,0
	mov esp,ebp
	pop ebp
	mov eax,0
	ret