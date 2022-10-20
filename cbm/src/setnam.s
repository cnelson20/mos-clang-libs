.text

#include <cbm.inc>
__rs1 = __rc2

;
; void cbm_k_setnam (const char* Name);
;	
.global cbm_k_setnam
cbm_k_setnam:
	lda __rs1 
	pha
	lda __rs1 + 1
	pha
	jsr strlen
	ply
	plx
	jmp SETNAM