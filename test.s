	.section	__TEXT,__text,regular,pure_instructions
	.macosx_version_min 10, 13
	.section	__TEXT,__literal16,16byte_literals
	.p2align	4
LCPI0_0:
	.quad	4611686018427387904     ## double 2
	.quad	4611686018427387904     ## double 2
LCPI0_4:
	.space	16
	.section	__TEXT,__literal8,8byte_literals
	.p2align	3
LCPI0_1:
	.quad	4611686018427387904     ## double 2
LCPI0_2:
	.quad	4607182418800017408     ## double 1
LCPI0_3:
	.quad	4640537203540230144     ## double 180
	.section	__TEXT,__text,regular,pure_instructions
	.globl	_main
	.p2align	4, 0x90
_main:                                  ## @main
	.cfi_startproc
## BB#0:
	pushq	%rbp
Lcfi0:
	.cfi_def_cfa_offset 16
Lcfi1:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Lcfi2:
	.cfi_def_cfa_register %rbp
	pushq	%rbx
	andq	$-32, %rsp
	subq	$832, %rsp              ## imm = 0x340
Lcfi3:
	.cfi_offset %rbx, -24
	movaps	LCPI0_0(%rip), %xmm0    ## xmm0 = [2.000000e+00,2.000000e+00]
	movaps	%xmm0, 704(%rsp)
	movsd	LCPI0_1(%rip), %xmm0    ## xmm0 = mem[0],zero
	movaps	%xmm0, 720(%rsp)
	movapd	704(%rsp), %xmm0
	movapd	720(%rsp), %xmm1
	movapd	%xmm1, 16(%rsp)
	movapd	%xmm0, (%rsp)
	callq	_vabs
	fstpl	248(%rsp)
	unpcklpd	%xmm1, %xmm0    ## xmm0 = xmm0[0],xmm1[0]
	movsd	248(%rsp), %xmm1        ## xmm1 = mem[0],zero
	movsd	LCPI0_1(%rip), %xmm2    ## xmm2 = mem[0],zero
	divpd	%xmm1, %xmm2
	movapd	LCPI0_0(%rip), %xmm1    ## xmm1 = [2.000000e+00,2.000000e+00]
	divpd	%xmm0, %xmm1
	movapd	%xmm1, 672(%rsp)
	movapd	%xmm2, 688(%rsp)
	movapd	672(%rsp), %xmm0
	movapd	688(%rsp), %xmm1
	movapd	%xmm1, 16(%rsp)
	movapd	%xmm0, (%rsp)
	callq	_np
	movapd	%xmm0, 784(%rsp)        ## 16-byte Spill
	movapd	%xmm1, 768(%rsp)        ## 16-byte Spill
	fstpl	240(%rsp)
	movsd	240(%rsp), %xmm2        ## xmm2 = mem[0],zero
	movaps	%xmm2, 64(%rsp)         ## 16-byte Spill
	movsd	LCPI0_2(%rip), %xmm3    ## xmm3 = mem[0],zero
	movaps	%xmm3, 656(%rsp)
	xorps	%xmm3, %xmm3
	movaps	%xmm3, 640(%rsp)
	movapd	%xmm0, %xmm3
	unpcklpd	%xmm1, %xmm3    ## xmm3 = xmm3[0],xmm1[0]
	movapd	%xmm3, 96(%rsp)         ## 16-byte Spill
	movapd	%xmm3, 608(%rsp)
	movaps	%xmm2, 624(%rsp)
	movaps	608(%rsp), %xmm0
	movaps	624(%rsp), %xmm1
	movaps	%xmm1, 48(%rsp)
	movaps	%xmm0, 32(%rsp)
	movapd	640(%rsp), %xmm0
	movapd	656(%rsp), %xmm1
	movapd	%xmm1, 16(%rsp)
	movapd	%xmm0, (%rsp)
	callq	_cross
	fstpl	232(%rsp)
	unpcklpd	%xmm1, %xmm0    ## xmm0 = xmm0[0],xmm1[0]
	movapd	%xmm0, 160(%rsp)        ## 16-byte Spill
	movsd	232(%rsp), %xmm0        ## xmm0 = mem[0],zero
	movaps	%xmm0, 80(%rsp)         ## 16-byte Spill
	movsd	LCPI0_2(%rip), %xmm0    ## xmm0 = mem[0],zero
	movaps	%xmm0, 592(%rsp)
	xorps	%xmm0, %xmm0
	movaps	%xmm0, 576(%rsp)
	movaps	64(%rsp), %xmm0         ## 16-byte Reload
	movaps	%xmm0, 560(%rsp)
	movaps	96(%rsp), %xmm0         ## 16-byte Reload
	movaps	%xmm0, 544(%rsp)
	movaps	544(%rsp), %xmm0
	movaps	560(%rsp), %xmm1
	movaps	%xmm1, 48(%rsp)
	movaps	%xmm0, 32(%rsp)
	movapd	576(%rsp), %xmm0
	movapd	592(%rsp), %xmm1
	movapd	%xmm1, 16(%rsp)
	movapd	%xmm0, (%rsp)
	callq	_cross
	fstpl	224(%rsp)
	unpcklpd	%xmm1, %xmm0    ## xmm0 = xmm0[0],xmm1[0]
	movsd	224(%rsp), %xmm1        ## xmm1 = mem[0],zero
	movapd	%xmm0, 512(%rsp)
	movaps	%xmm1, 528(%rsp)
	movapd	512(%rsp), %xmm0
	movapd	528(%rsp), %xmm1
	movapd	%xmm1, 16(%rsp)
	movapd	%xmm0, (%rsp)
	callq	_vabs
	fstpl	216(%rsp)
	unpcklpd	%xmm1, %xmm0    ## xmm0 = xmm0[0],xmm1[0]
	movsd	216(%rsp), %xmm1        ## xmm1 = mem[0],zero
	movapd	160(%rsp), %xmm2        ## 16-byte Reload
	divpd	%xmm0, %xmm2
	movapd	80(%rsp), %xmm0         ## 16-byte Reload
	divpd	%xmm1, %xmm0
	movapd	%xmm2, 480(%rsp)
	movapd	%xmm0, 496(%rsp)
	movapd	480(%rsp), %xmm0
	movapd	496(%rsp), %xmm1
	movapd	%xmm1, 16(%rsp)
	movapd	%xmm0, (%rsp)
	callq	_np
	movapd	%xmm0, %xmm2
	movapd	%xmm2, 160(%rsp)        ## 16-byte Spill
	movapd	%xmm1, 752(%rsp)        ## 16-byte Spill
	fstpl	208(%rsp)
	movsd	208(%rsp), %xmm3        ## xmm3 = mem[0],zero
	movaps	%xmm3, 80(%rsp)         ## 16-byte Spill
	movaps	64(%rsp), %xmm0         ## 16-byte Reload
	movaps	%xmm0, 464(%rsp)
	movaps	96(%rsp), %xmm0         ## 16-byte Reload
	movaps	%xmm0, 448(%rsp)
	unpcklpd	%xmm1, %xmm2    ## xmm2 = xmm2[0],xmm1[0]
	movapd	%xmm2, 112(%rsp)        ## 16-byte Spill
	movapd	%xmm2, 416(%rsp)
	movaps	%xmm3, 432(%rsp)
	movaps	416(%rsp), %xmm0
	movaps	432(%rsp), %xmm1
	movaps	%xmm1, 48(%rsp)
	movaps	%xmm0, 32(%rsp)
	movapd	448(%rsp), %xmm0
	movapd	464(%rsp), %xmm1
	movapd	%xmm1, 16(%rsp)
	movapd	%xmm0, (%rsp)
	callq	_cross
	fstpl	200(%rsp)
	unpcklpd	%xmm1, %xmm0    ## xmm0 = xmm0[0],xmm1[0]
	movapd	%xmm0, 128(%rsp)        ## 16-byte Spill
	movsd	200(%rsp), %xmm0        ## xmm0 = mem[0],zero
	movaps	%xmm0, 144(%rsp)        ## 16-byte Spill
	movaps	64(%rsp), %xmm0         ## 16-byte Reload
	movaps	%xmm0, 400(%rsp)
	movaps	96(%rsp), %xmm0         ## 16-byte Reload
	movaps	%xmm0, 384(%rsp)
	movaps	80(%rsp), %xmm0         ## 16-byte Reload
	movaps	%xmm0, 368(%rsp)
	movaps	112(%rsp), %xmm0        ## 16-byte Reload
	movaps	%xmm0, 352(%rsp)
	movaps	352(%rsp), %xmm0
	movaps	368(%rsp), %xmm1
	movaps	%xmm1, 48(%rsp)
	movaps	%xmm0, 32(%rsp)
	movapd	384(%rsp), %xmm0
	movapd	400(%rsp), %xmm1
	movapd	%xmm1, 16(%rsp)
	movapd	%xmm0, (%rsp)
	callq	_cross
	fstpl	192(%rsp)
	unpcklpd	%xmm1, %xmm0    ## xmm0 = xmm0[0],xmm1[0]
	movsd	192(%rsp), %xmm1        ## xmm1 = mem[0],zero
	movapd	%xmm0, 320(%rsp)
	movaps	%xmm1, 336(%rsp)
	movapd	320(%rsp), %xmm0
	movapd	336(%rsp), %xmm1
	movapd	%xmm1, 16(%rsp)
	movapd	%xmm0, (%rsp)
	callq	_vabs
	fstpl	184(%rsp)
	unpcklpd	%xmm1, %xmm0    ## xmm0 = xmm0[0],xmm1[0]
	movsd	184(%rsp), %xmm1        ## xmm1 = mem[0],zero
	movapd	128(%rsp), %xmm2        ## 16-byte Reload
	divpd	%xmm0, %xmm2
	movapd	144(%rsp), %xmm0        ## 16-byte Reload
	divpd	%xmm1, %xmm0
	movapd	%xmm2, 288(%rsp)
	movapd	%xmm0, 304(%rsp)
	movapd	288(%rsp), %xmm0
	movapd	304(%rsp), %xmm1
	movapd	%xmm1, 16(%rsp)
	movapd	%xmm0, (%rsp)
	callq	_np
	movsd	%xmm0, 144(%rsp)        ## 8-byte Spill
	movsd	%xmm1, 128(%rsp)        ## 8-byte Spill
	fstpl	176(%rsp)
	movsd	176(%rsp), %xmm0        ## xmm0 = mem[0],zero
	movsd	%xmm0, 112(%rsp)        ## 8-byte Spill
	leaq	L_.str(%rip), %rbx
	leaq	L_.str.1(%rip), %rsi
	movb	$3, %al
	movq	%rbx, %rdi
	movaps	784(%rsp), %xmm0        ## 16-byte Reload
	movaps	768(%rsp), %xmm1        ## 16-byte Reload
	movaps	64(%rsp), %xmm2         ## 16-byte Reload
	callq	_printf
	leaq	L_.str.2(%rip), %rsi
	movb	$3, %al
	movq	%rbx, %rdi
	movaps	160(%rsp), %xmm0        ## 16-byte Reload
	movaps	752(%rsp), %xmm1        ## 16-byte Reload
	movaps	80(%rsp), %xmm2         ## 16-byte Reload
	callq	_printf
	leaq	L_.str.3(%rip), %rsi
	movb	$3, %al
	movq	%rbx, %rdi
	movsd	144(%rsp), %xmm0        ## 8-byte Reload
                                        ## xmm0 = mem[0],zero
	movsd	128(%rsp), %xmm1        ## 8-byte Reload
                                        ## xmm1 = mem[0],zero
	movsd	112(%rsp), %xmm2        ## 8-byte Reload
                                        ## xmm2 = mem[0],zero
	callq	_printf
	movaps	64(%rsp), %xmm0         ## 16-byte Reload
	movaps	%xmm0, 272(%rsp)
	movaps	96(%rsp), %xmm0         ## 16-byte Reload
	movaps	%xmm0, 256(%rsp)
	movaps	256(%rsp), %xmm0
	movaps	272(%rsp), %xmm1
	movaps	%xmm1, 16(%rsp)
	movaps	%xmm0, (%rsp)
	movsd	LCPI0_3(%rip), %xmm0    ## xmm0 = mem[0],zero
	callq	_quat
	movaps	%xmm1, %xmm2
	movaps	%xmm0, %xmm1
	movhlps	%xmm1, %xmm1            ## xmm1 = xmm1[1,1]
	movaps	%xmm2, %xmm3
	movhlps	%xmm3, %xmm3            ## xmm3 = xmm3[1,1]
	leaq	L_.str.4(%rip), %rdi
	leaq	L_.str.5(%rip), %rsi
	movb	$4, %al
	callq	_printf
	xorl	%eax, %eax
	leaq	-8(%rbp), %rsp
	popq	%rbx
	popq	%rbp
	retq
	.cfi_endproc

	.section	__TEXT,__cstring,cstring_literals
L_.str:                                 ## @.str
	.asciz	"%s x: %f y: %f z: %f\n"

L_.str.1:                               ## @.str.1
	.asciz	"dir:"

L_.str.2:                               ## @.str.2
	.asciz	"right:"

L_.str.3:                               ## @.str.3
	.asciz	"up:"

L_.str.4:                               ## @.str.4
	.asciz	"%s x: %f y: %f z: %f w: %f\n"

L_.str.5:                               ## @.str.5
	.asciz	"quat:"


.subsections_via_symbols
