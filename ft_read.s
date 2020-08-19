			global		_ft_read

			extern		___error

			section		.text
_ft_read:
			push		rbx
			mov			rax, 0x2000003
			syscall
			jc			error
			pop			rbx
			ret
error:
			mov			rdx, rax
			call		___error
			mov			[rax], rdx
			mov			rax, -1
			pop			rbx
			ret
