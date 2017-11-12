	.section	__TEXT,__text,regular,pure_instructions
	.macosx_version_min 10, 13
	.globl	_cross
	.p2align	4, 0x90
_cross:                                 ## @cross
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
	movapd	16(%rbp), %xmm1
	movapd	32(%rbp), %xmm2
	movaps	48(%rbp), %xmm3
	movapd	64(%rbp), %xmm0
	movaps	%xmm3, %xmm4
	movhlps	%xmm4, %xmm4            ## xmm4 = xmm4[1,1]
	movapd	%xmm1, %xmm5
	shufpd	$1, %xmm2, %xmm5        ## xmm5 = xmm5[1],xmm2[0]
	unpcklpd	%xmm1, %xmm2    ## xmm2 = xmm2[0],xmm1[0]
	mulsd	%xmm1, %xmm4
	movapd	%xmm1, %xmm6
	movhlps	%xmm6, %xmm6            ## xmm6 = xmm6[1,1]
	movaps	%xmm3, %xmm1
	shufpd	$1, %xmm0, %xmm1        ## xmm1 = xmm1[1],xmm0[0]
	unpcklpd	%xmm3, %xmm0    ## xmm0 = xmm0[0],xmm3[0]
	mulpd	%xmm5, %xmm0
	mulpd	%xmm1, %xmm2
	subpd	%xmm2, %xmm0
	movapd	%xmm0, %xmm1
	movhlps	%xmm1, %xmm1            ## xmm1 = xmm1[1,1]
	mulsd	%xmm3, %xmm6
	subsd	%xmm6, %xmm4
	movsd	%xmm4, -8(%rbp)
	fldl	-8(%rbp)
	popq	%rbp
	retq
	.cfi_endproc

	.section	__TEXT,__literal16,16byte_literals
	.p2align	4
LCPI1_0:
	.quad	-9223372036854775808    ## double -0
	.quad	-9223372036854775808    ## double -0
	.section	__TEXT,__text,regular,pure_instructions
	.globl	_vabs
	.p2align	4, 0x90
_vabs:                                  ## @vabs
	.cfi_startproc
## BB#0:
	pushq	%rbp
Lcfi3:
	.cfi_def_cfa_offset 16
Lcfi4:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Lcfi5:
	.cfi_def_cfa_register %rbp
	movaps	16(%rbp), %xmm5
	movaps	32(%rbp), %xmm3
	movaps	LCPI1_0(%rip), %xmm2    ## xmm2 = [-0.000000e+00,-0.000000e+00]
	movaps	%xmm5, %xmm1
	xorps	%xmm2, %xmm1
	xorps	%xmm4, %xmm4
	movaps	%xmm5, %xmm0
	cmpltsd	%xmm4, %xmm0
	andps	%xmm0, %xmm1
	andnps	%xmm5, %xmm0
	orps	%xmm1, %xmm0
	movhlps	%xmm5, %xmm5            ## xmm5 = xmm5[1,1]
	movaps	%xmm5, %xmm6
	xorps	%xmm2, %xmm6
	movaps	%xmm5, %xmm1
	cmpltsd	%xmm4, %xmm1
	andps	%xmm1, %xmm6
	andnps	%xmm5, %xmm1
	orps	%xmm6, %xmm1
	xorps	%xmm3, %xmm2
	movaps	%xmm3, %xmm5
	cmpltsd	%xmm4, %xmm5
	andps	%xmm5, %xmm2
	andnps	%xmm3, %xmm5
	orps	%xmm2, %xmm5
	movsd	%xmm5, -8(%rbp)
	fldl	-8(%rbp)
	popq	%rbp
	retq
	.cfi_endproc

	.globl	_np
	.p2align	4, 0x90
_np:                                    ## @np
	.cfi_startproc
## BB#0:
	pushq	%rbp
Lcfi6:
	.cfi_def_cfa_offset 16
Lcfi7:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Lcfi8:
	.cfi_def_cfa_register %rbp
	subq	$48, %rsp
	movapd	16(%rbp), %xmm1
	movaps	32(%rbp), %xmm0
	movaps	%xmm0, -32(%rbp)        ## 16-byte Spill
	movapd	%xmm1, -16(%rbp)        ## 16-byte Spill
	movapd	%xmm1, %xmm0
	callq	___fpclassifyd
	cmpl	$4, %eax
	jne	LBB2_2
## BB#1:
	movapd	-16(%rbp), %xmm0        ## 16-byte Reload
	jmp	LBB2_3
LBB2_2:
	xorpd	%xmm0, %xmm0
	movapd	-16(%rbp), %xmm1        ## 16-byte Reload
	blendpd	$1, %xmm0, %xmm1        ## xmm1 = xmm0[0],xmm1[1]
	movapd	%xmm1, %xmm0
LBB2_3:
	movapd	%xmm0, -16(%rbp)        ## 16-byte Spill
	movhlps	%xmm0, %xmm0            ## xmm0 = xmm0[1,1]
	callq	___fpclassifyd
	cmpl	$4, %eax
	je	LBB2_5
## BB#4:
	movdqa	-16(%rbp), %xmm0        ## 16-byte Reload
	movq	%xmm0, %xmm0            ## xmm0 = xmm0[0],zero
	movdqa	%xmm0, -16(%rbp)        ## 16-byte Spill
LBB2_5:
	movapd	-32(%rbp), %xmm0        ## 16-byte Reload
	movapd	%xmm0, -32(%rbp)        ## 16-byte Spill
	callq	___fpclassifyd
	cmpl	$4, %eax
	jne	LBB2_7
## BB#6:
	movapd	-32(%rbp), %xmm0        ## 16-byte Reload
	jmp	LBB2_8
LBB2_7:
	xorpd	%xmm0, %xmm0
	movapd	-32(%rbp), %xmm1        ## 16-byte Reload
	blendpd	$1, %xmm0, %xmm1        ## xmm1 = xmm0[0],xmm1[1]
	movapd	%xmm1, %xmm0
LBB2_8:
	movlpd	%xmm0, -40(%rbp)
	movaps	-16(%rbp), %xmm0        ## 16-byte Reload
	movaps	%xmm0, %xmm1
	movhlps	%xmm1, %xmm1            ## xmm1 = xmm1[1,1]
	fldl	-40(%rbp)
	addq	$48, %rsp
	popq	%rbp
	retq
	.cfi_endproc


.subsections_via_symbols
