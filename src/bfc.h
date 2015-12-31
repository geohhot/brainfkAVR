
#ifndef __BFC_H__
#define __BFC_H__

#define MAX_ADDRESS 0xFFFF
#define MIN_ADDRESS 300

#define INC_inst 0x03, 0x95
#define DEC_inst 0x0A, 0x95

// LDS - load direct, from data space
#define LDS_inst 0x00, 0x91 // appended with 2 bytes of address
#define STS_inst 0x00, 0x93 // appended with 2 bytes of address

// BRNE - branch if not equal
// #define BRNE_inst 0xF
// BRNE is only limited by +-64 instructions
// will use absolute jumps
/*
 * cpi r16, 0
 * in r20, SREG
 * sbrs r20, 1
 * jmp BACK!
 */
#define CPI_inst 0x00,  0x30 // compare imidiate r16, 0
#define IN_SREG_inst 0x5f, 0xb7
#define SBRS_inst    0x51, 0xFF // skip if Z bit in register (sreg) is set
#define JMP_inst 0x0C,  0x94 // appended with 2 bytes of address

#define BYTE(X) (X & 0xFF), (X >> 8)


#endif