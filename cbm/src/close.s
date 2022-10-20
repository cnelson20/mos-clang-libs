.text

#include <cbm.inc>

;
; void cbm_k_close (unsigned char FN);
;
.global cbm_k_close
cbm_k_close:
	jmp $FFC3