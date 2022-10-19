#ifndef _CBM_H_CUSTOM
#define _CBM_H_CUSTOM

/* Kernal-level functions */
unsigned char cbm_k_acptr (void);
unsigned char cbm_k_basin (void);
void cbm_k_bsout (unsigned char C);
unsigned char cbm_k_chkin (unsigned char FN);
unsigned char cbm_k_chrin (void);
void cbm_k_chrout (unsigned char C);
void cbm_k_ciout (unsigned char C);
unsigned char cbm_k_ckout (unsigned char FN);
void cbm_k_clall (void);
void cbm_k_close (unsigned char FN);
void cbm_k_clrch (void);
unsigned char cbm_k_getin (void);
unsigned cbm_k_iobase (void);
void cbm_k_listen (unsigned char dev);
unsigned int cbm_k_load(unsigned char flag, unsigned addr);
unsigned char cbm_k_open (void);
unsigned char cbm_k_readst (void);
unsigned char cbm_k_save(unsigned int start, unsigned int end);
void cbm_k_scnkey (void);
void cbm_k_second (unsigned char addr);
void cbm_k_setlfs (unsigned char LFN, unsigned char DEV,
                                unsigned char SA);
void cbm_k_setnam (const char* Name);
void cbm_k_settim (unsigned long timer);
void cbm_k_talk (unsigned char dev);
void cbm_k_tksa (unsigned char addr);
void cbm_k_udtim (void);
void cbm_k_unlsn (void);
void cbm_k_untlk (void);

#endif 
