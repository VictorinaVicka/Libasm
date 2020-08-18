			global		_ft_strcmp

			section		.text

_ft_strcmp:
			mov			rax, 0
			mov			rbx, 0
			mov 		rcx, 0
			jmp			whale

whale:
			mov			al, byte[rdi + rcx]
			mov			bl, byte[rsi + rcx]
			cmp			al, bl
			jne			dif
			je 			equally

dif:
			sub			rax, rbx
			ret

equally:
			cmp			al, 0
			je			return
			inc			rcx
			jmp			whale
return:
			mov			rax, 0
			ret