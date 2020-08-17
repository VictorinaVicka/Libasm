			global		_ft_strlen

			section		.text
_ft_strlen:
			mov			rax, 0
			cmp			rdi, 0
			jz			return

while:
			cmp			byte[rdi + rax], 0
			jz			return
			inc			rax
			jmp			while

return:
			ret