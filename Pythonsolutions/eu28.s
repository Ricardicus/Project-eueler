	.section	__TEXT,__text,regular,pure_instructions
	.macosx_version_min 10, 10
	.section	__TEXT,__literal16,16byte_literals
	.align	4
LCPI0_0:
	.long	0                       ## 0x0
	.long	1                       ## 0x1
	.long	2                       ## 0x2
	.long	3                       ## 0x3
LCPI0_1:
	.long	4                       ## 0x4
	.long	5                       ## 0x5
	.long	6                       ## 0x6
	.long	7                       ## 0x7
	.section	__TEXT,__text,regular,pure_instructions
	.globl	_main
	.align	4, 0x90
_main:                                  ## @main
	.cfi_startproc
## BB#0:                                ## %overflow.checked
	pushq	%rbp
Ltmp0:
	.cfi_def_cfa_offset 16
Ltmp1:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Ltmp2:
	.cfi_def_cfa_register %rbp
	pushq	%r15
	pushq	%r14
	pushq	%r13
	pushq	%r12
	pushq	%rbx
	subq	$4008024, %rsp          ## imm = 0x3D2858
Ltmp3:
	.cfi_offset %rbx, -56
Ltmp4:
	.cfi_offset %r12, -48
Ltmp5:
	.cfi_offset %r13, -40
Ltmp6:
	.cfi_offset %r14, -32
Ltmp7:
	.cfi_offset %r15, -24
	movq	___stack_chk_guard@GOTPCREL(%rip), %rax
	movq	(%rax), %rax
	movq	%rax, -48(%rbp)
	movl	$12, %eax
	movdqa	LCPI0_0(%rip), %xmm0    ## xmm0 = [0,1,2,3]
	movdqa	LCPI0_1(%rip), %xmm1    ## xmm1 = [4,5,6,7]
	.align	4, 0x90
LBB0_1:                                 ## %vector.body
                                        ## =>This Inner Loop Header: Depth=1
	leal	-11(%rax), %ecx
	movd	%ecx, %xmm2
	pshufd	$0, %xmm2, %xmm2        ## xmm2 = xmm2[0,0,0,0]
	movdqa	%xmm2, %xmm3
	paddd	%xmm0, %xmm3
	paddd	%xmm1, %xmm2
	movdqu	%xmm3, -4008112(%rbp,%rax,4)
	movdqu	%xmm2, -4008096(%rbp,%rax,4)
	leaq	-3(%rax), %rcx
	movd	%ecx, %xmm2
	pshufd	$0, %xmm2, %xmm2        ## xmm2 = xmm2[0,0,0,0]
	movdqa	%xmm2, %xmm3
	paddd	%xmm0, %xmm3
	paddd	%xmm1, %xmm2
	movdqu	%xmm3, -4008080(%rbp,%rax,4)
	movdqu	%xmm2, -4008064(%rbp,%rax,4)
	addq	$16, %rax
	cmpq	$1001993, %rcx          ## imm = 0xF4A09
	jne	LBB0_1
## BB#2:                                ## %scalar.ph
	movl	$1002001, -64(%rbp)     ## imm = 0xF4A11
	movl	$1, %r9d
	xorl	%r8d, %r8d
	movl	$2, %r13d
	movl	$3, %r10d
	movl	$-4, %r11d
	xorl	%r14d, %r14d
	movl	$1, %esi
	.align	4, 0x90
LBB0_3:                                 ## %.preheader
                                        ## =>This Loop Header: Depth=1
                                        ##     Child Loop BB0_5 Depth 2
                                        ##     Child Loop BB0_7 Depth 2
	cmpl	$1001999, %r14d         ## imm = 0xF4A0F
	jg	LBB0_9
## BB#4:                                ## %.lr.ph
                                        ##   in Loop: Header=BB0_3 Depth=1
	leal	2(%r8,%r8), %ecx
	movslq	%r14d, %rdi
	movl	$1001999, %r15d         ## imm = 0xF4A0F
	subl	%r14d, %r15d
	xorl	%edx, %edx
	movl	%r15d, %eax
	divl	%r13d
	movl	%eax, %r12d
	cmpl	$3, %r12d
	cmovael	%r10d, %r12d
	xorl	%edx, %edx
	movl	%r15d, %eax
	divl	%ecx
	notl	%eax
	cmpl	$-4, %eax
	cmovbel	%r11d, %eax
	movl	%eax, %ebx
	negl	%ebx
	notl	%eax
	xorl	%edx, %edx
	andl	$3, %ebx
	movl	$0, %ecx
	movl	$0, %r14d
	je	LBB0_6
	.align	4, 0x90
LBB0_5:                                 ##   Parent Loop BB0_3 Depth=1
                                        ## =>  This Inner Loop Header: Depth=2
	addq	%r13, %rdi
	addl	-4008064(%rbp,%rdi,4), %esi
	incl	%edx
	decl	%ebx
	movl	%esi, %ecx
	movq	%rdi, %r14
	jne	LBB0_5
LBB0_6:                                 ## %.lr.ph.split
                                        ##   in Loop: Header=BB0_3 Depth=1
	cmpl	$3, %eax
	jb	LBB0_8
	.align	4, 0x90
LBB0_7:                                 ##   Parent Loop BB0_3 Depth=1
                                        ## =>  This Inner Loop Header: Depth=2
	addq	%r13, %rdi
	addl	-4008064(%rbp,%rdi,4), %esi
	addq	%r13, %rdi
	addl	-4008064(%rbp,%rdi,4), %esi
	addq	%r13, %rdi
	addl	-4008064(%rbp,%rdi,4), %esi
	leal	3(%rdx), %eax
	addq	%r13, %rdi
	addl	-4008064(%rbp,%rdi,4), %esi
	addl	$4, %edx
	cmpl	%r12d, %eax
	movl	%esi, %ecx
	movq	%rdi, %r14
	jne	LBB0_7
LBB0_8:                                 ## %._crit_edge
                                        ##   in Loop: Header=BB0_3 Depth=1
	movl	%ecx, %esi
LBB0_9:                                 ##   in Loop: Header=BB0_3 Depth=1
	incl	%r9d
	addq	$2, %r13
	incl	%r8d
	cmpl	$125251, %r9d           ## imm = 0x1E943
	jne	LBB0_3
## BB#10:
	leaq	L_.str(%rip), %rdi
	xorl	%eax, %eax
	callq	_printf
	movq	___stack_chk_guard@GOTPCREL(%rip), %rax
	movq	(%rax), %rax
	cmpq	-48(%rbp), %rax
	jne	LBB0_12
## BB#11:
	xorl	%eax, %eax
	addq	$4008024, %rsp          ## imm = 0x3D2858
	popq	%rbx
	popq	%r12
	popq	%r13
	popq	%r14
	popq	%r15
	popq	%rbp
	retq
LBB0_12:
	callq	___stack_chk_fail
	.cfi_endproc

	.section	__TEXT,__cstring,cstring_literals
L_.str:                                 ## @.str
	.asciz	"Sum: %u\n"


.subsections_via_symbols
