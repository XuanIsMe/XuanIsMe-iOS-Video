	.section	__TEXT,__text,regular,pure_instructions
	.macosx_version_min 10, 11
	.globl	_main
	.align	4, 0x90
_main:                                  ## @main
	.cfi_startproc
## BB#0:
	pushq	%rbp
Ltmp0:
	.cfi_def_cfa_offset 16
Ltmp1:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Ltmp2:
	.cfi_def_cfa_register %rbp
	subq	$9216, %rsp             ## imm = 0x2400
	leaq	L_.str(%rip), %rdi
	leaq	-272(%rbp), %rax
	leaq	l_main.c(%rip), %rsi
	movl	$256, %ecx              ## imm = 0x100
	movl	%ecx, %edx
	movq	___stack_chk_guard@GOTPCREL(%rip), %r8
	movq	(%r8), %r8
	movq	%r8, -8(%rbp)
	movl	$0, -9172(%rbp)
	movq	%rax, %r8
	movq	%rdi, -9184(%rbp)       ## 8-byte Spill
	movq	%r8, %rdi
	movq	%rax, -9192(%rbp)       ## 8-byte Spill
	callq	_memcpy
	movq	-9192(%rbp), %rdi       ## 8-byte Reload
	callq	_strlen
	movq	-9184(%rbp), %rdi       ## 8-byte Reload
	movq	%rax, %rsi
	movb	$0, %al
	callq	_printf
	leaq	L_.str(%rip), %rdi
	movl	$8888, %ecx             ## imm = 0x22B8
	movl	%ecx, %edx
	xorl	%esi, %esi
	leaq	-9168(%rbp), %r8
	movq	%rdi, -9200(%rbp)       ## 8-byte Spill
	movq	%r8, %rdi
	movq	%rdx, -9208(%rbp)       ## 8-byte Spill
	movl	%eax, -9212(%rbp)       ## 4-byte Spill
	callq	_memset
	movq	-9200(%rbp), %rdi       ## 8-byte Reload
	movq	-9208(%rbp), %rsi       ## 8-byte Reload
	movb	$0, %al
	callq	_printf
	movq	___stack_chk_guard@GOTPCREL(%rip), %rdx
	movq	(%rdx), %rdx
	cmpq	-8(%rbp), %rdx
	movl	%eax, -9216(%rbp)       ## 4-byte Spill
	jne	LBB0_2
## BB#1:                                ## %SP_return
	xorl	%eax, %eax
	addq	$9216, %rsp             ## imm = 0x2400
	popq	%rbp
	retq
LBB0_2:                                 ## %CallStackCheckFailBlk
	callq	___stack_chk_fail
	.cfi_endproc

	.section	__TEXT,__const
	.align	4                       ## @main.c
l_main.c:
	.asciz	"helloworld\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"

	.section	__TEXT,__cstring,cstring_literals
L_.str:                                 ## @.str
	.asciz	"%lu\n"


.subsections_via_symbols
