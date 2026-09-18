	.file	"practice.c"
	.text
	.section .rdata,"dr"
.LC0:
	.ascii " |\0"
	.text
	.globl	generateGrid
	.def	generateGrid;	.scl	2;	.type	32;	.endef
	.seh_proc	generateGrid
generateGrid:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$48, %rsp
	.seh_stackalloc	48
	.seh_endprologue
	movl	$3, -12(%rbp)
	movl	$3, -16(%rbp)
	movl	$0, -4(%rbp)
	jmp	.L2
.L5:
	movl	$0, -8(%rbp)
	jmp	.L3
.L4:
	leaq	.LC0(%rip), %rax
	movq	%rax, %rcx
	call	printf
	addl	$1, -8(%rbp)
.L3:
	movl	-16(%rbp), %eax
	cmpl	%eax, -8(%rbp)
	jb	.L4
	movl	$10, %ecx
	call	putchar
	addl	$1, -4(%rbp)
.L2:
	movl	-12(%rbp), %eax
	cmpl	%eax, -4(%rbp)
	jb	.L5
	nop
	nop
	addq	$48, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section .rdata,"dr"
.LC1:
	.ascii "Index %d: %d\12\0"
	.text
	.globl	newConcepts
	.def	newConcepts;	.scl	2;	.type	32;	.endef
	.seh_proc	newConcepts
newConcepts:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$48, %rsp
	.seh_stackalloc	48
	.seh_endprologue
	movl	$5, -8(%rbp)
	movl	$20, %ecx
	call	malloc
	movq	%rax, -16(%rbp)
	movq	-16(%rbp), %rax
	movl	$1, (%rax)
	movq	-16(%rbp), %rax
	addq	$8, %rax
	movl	$3, (%rax)
	movl	$0, -4(%rbp)
	jmp	.L7
.L8:
	movl	-4(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	movq	-16(%rbp), %rax
	addq	%rdx, %rax
	movl	(%rax), %edx
	movl	-4(%rbp), %eax
	leaq	.LC1(%rip), %rcx
	movl	%edx, %r8d
	movl	%eax, %edx
	call	printf
	addl	$1, -4(%rbp)
.L7:
	movl	-4(%rbp), %eax
	cmpl	-8(%rbp), %eax
	jl	.L8
	nop
	nop
	addq	$48, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.globl	main
	.def	main;	.scl	2;	.type	32;	.endef
	.seh_proc	main
main:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	call	__main
	call	newConcepts
	movl	$0, %eax
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.def	__main;	.scl	2;	.type	32;	.endef
	.ident	"GCC: (Rev13, Built by MSYS2 project) 15.2.0"
	.def	printf;	.scl	2;	.type	32;	.endef
	.def	putchar;	.scl	2;	.type	32;	.endef
	.def	malloc;	.scl	2;	.type	32;	.endef
