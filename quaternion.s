	.section	__TEXT,__text,regular,pure_instructions
	.macosx_version_min 10, 13
	.section	__TEXT,__literal8,8byte_literals
	.p2align	3
LCPI0_0:
	.quad	4602678819172646912     ## double 0.5
LCPI0_1:
	.quad	4580687790470784785     ## double 0.017453292499999998
	.section	__TEXT,__text,regular,pure_instructions
	.globl	_quat
	.p2align	4, 0x90
_quat:                                  ## @quat
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
	subq	$64, %rsp
	movaps	16(%rbp), %xmm1
	movaps	%xmm1, -16(%rbp)        ## 16-byte Spill
	mulsd	LCPI0_0(%rip), %xmm0
	movsd	%xmm0, -24(%rbp)        ## 8-byte Spill
	callq	_sin
	movapd	-16(%rbp), %xmm1        ## 16-byte Reload
	movapd	%xmm1, %xmm2
	mulsd	%xmm0, %xmm2
	movapd	%xmm2, -64(%rbp)        ## 16-byte Spill
	movhlps	%xmm1, %xmm1            ## xmm1 = xmm1[1,1]
	mulsd	%xmm0, %xmm1
	movapd	%xmm1, -16(%rbp)        ## 16-byte Spill
	mulsd	32(%rbp), %xmm0
	movapd	%xmm0, -48(%rbp)        ## 16-byte Spill
	movsd	-24(%rbp), %xmm0        ## 8-byte Reload
                                        ## xmm0 = mem[0],zero
	mulsd	LCPI0_1(%rip), %xmm0
	callq	_cos
	movapd	-64(%rbp), %xmm2        ## 16-byte Reload
	unpcklpd	-16(%rbp), %xmm2 ## 16-byte Folded Reload
                                        ## xmm2 = xmm2[0],mem[0]
	movapd	-48(%rbp), %xmm1        ## 16-byte Reload
	unpcklpd	%xmm0, %xmm1    ## xmm1 = xmm1[0],xmm0[0]
	movapd	%xmm2, %xmm0
	addq	$64, %rsp
	popq	%rbp
	retq
	.cfi_endproc


.subsections_via_symbols
