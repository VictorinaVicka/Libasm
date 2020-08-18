			global		_ft_strcpy

			section		.text
_ft_strcpy:
			mov			rcx, 0

while:
			mov			ah, byte[rsi + rcx]
			mov			byte[rdi + rcx], ah
			cmp			ah, 0
			jz			return
			inc			rcx
			jmp			while
return:
			mov			rax, rdi
			ret