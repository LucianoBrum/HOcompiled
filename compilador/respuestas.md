1. (está mal, poner que espero y no que pasó)
- Pre-procesador:
	que incluya todos los headers y macros que tenga mi código
- Compilacion I:
	va a "traducir" mi código a lenguaje assembler
- Compilacion II:
	va a "traducir" el código en assembler que generé en el paso de compilacion I a lenguaje de máquina.
- Linkeo:
	voy a generar finalmente el ejecutable "calculator.e"

2. lo que contiene calculator.h, que, al no estar todavía definido, a su vez incluye <stdio.h>

3. tengo dos funciones: main y add_numbers
main:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movl	%edi, -20(%rbp)
	movq	%rsi, -32(%rbp)
	movl	$11, %esi
	movl	$31, %edi
	call	add_numbers
	movl	%eax, -4(%rbp)
	movl	$.LC0, %eax
	movl	-4(%rbp), %edx
	movl	%edx, %esi
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf
	movl	$0, %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc

add_numbers:
.LFB1:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	%edi, -4(%rbp)
	movl	%esi, -8(%rbp)
	movl	-8(%rbp), %eax
	movl	-4(%rbp), %edx
	addl	%edx, %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc

4. Las T de add_numbers y main indican que son texto (funciones) a las que puedo acceder y la U de printf indica que es algo undefined a lo que también puedo acceder
5. main y add_numbers siguen siendo texto (funciones) accesibles pero ahora printf a pesar de seguir undefined indica que debe ser ejecutado en GLIBC_2.2.5.

