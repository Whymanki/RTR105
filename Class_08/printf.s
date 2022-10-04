	.file	"printf.c"
	.text
	.section	.rodata
.LC0:
	.string	"Characters: %c %c \n"
.LC1:
	.string	"Decimals: %d %ld\n"
.LC2:
	.string	"Preceding with blanks: %10d \n"
.LC3:
	.string	"Preceding with zeros: %010d \n"
	.align 8
.LC4:
	.string	"Some different radices: %d %x %o %#x %#o \n"
.LC6:
	.string	"floats: %4.2f %+.0e %E \n"
.LC7:
	.string	"Width trick: %*d \n"
.LC8:
	.string	"A string"
.LC9:
	.string	"%s \n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	$65, %edx
	movl	$97, %esi
	leaq	.LC0(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	$650000, %edx
	movl	$1977, %esi
	leaq	.LC1(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	$1977, %esi
	leaq	.LC2(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	$1977, %esi
	leaq	.LC3(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	$100, %r9d
	movl	$100, %r8d
	movl	$100, %ecx
	movl	$100, %edx
	movl	$100, %esi
	leaq	.LC4(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	movsd	.LC5(%rip), %xmm1
	movsd	.LC5(%rip), %xmm0
	movq	.LC5(%rip), %rax
	movapd	%xmm1, %xmm2
	movapd	%xmm0, %xmm1
	movq	%rax, -8(%rbp)
	movsd	-8(%rbp), %xmm0
	leaq	.LC6(%rip), %rdi
	movl	$3, %eax
	call	printf@PLT
	movl	$10, %edx
	movl	$5, %esi
	leaq	.LC7(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	.LC8(%rip), %rsi
	leaq	.LC9(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	$0, %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.section	.rodata
	.align 8
.LC5:
	.long	776530087
	.long	1074340351
	.ident	"GCC: (Ubuntu 7.4.0-1ubuntu1~18.04.1) 7.4.0"
	.section	.note.GNU-stack,"",@progbits
