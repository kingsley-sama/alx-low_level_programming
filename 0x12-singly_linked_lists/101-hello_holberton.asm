	global main
	main	:
	push rbp ; <- use 8 bytes of stack space, to align the stack

	mov rdi,formatStr ; first argument: format string
	mov al,0 ; magic for varargs (0==no magic, to prevent a crash!)

	extern printf
	call printf

	pop rbp
	ret

	formatStr:
	db `hello holberton\n`,0
