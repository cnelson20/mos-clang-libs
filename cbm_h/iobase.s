.text

;
; unsigned cbm_k_iobase (void);
;
.global cbm_k_iobase
	jsr $FFF3
	txa
	sty __rc2
	ldx __rc2
	rts
	