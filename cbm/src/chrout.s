.text

#include <cbm_kernal.inc>
;
; void cbm_k_chrout (unsigned char C);
;
.global cbm_k_chrout
cbm_k_chrout:
	jmp $FFD2