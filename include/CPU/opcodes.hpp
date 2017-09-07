//prefixes
void DD(uint8_t opcode);
void FD(uint8_t opcode);
void ED(uint8_t opcode);
//8-bit load group
void ldRRx(uint8_t opcode);
void ldRN(uint8_t opcode);
void ldR_HL_(uint8_t opcode);
void ldR_IXd_(uint8_t opcode);
void ldR_IYd_(uint8_t opcode);
void ld_HL_R(uint8_t opcode);
void ld_IXd_R(uint8_t opcode);
void ld_IYd_R(uint8_t opcode);
void ld_HL_N(uint8_t opcode);
void ld_IXd_N(uint8_t opcode);
void ld_IYd_N(uint8_t opcode);
void ldA_BC_(uint8_t opcode);
void ldA_DE_(uint8_t opcode);
void ldA_NN_(uint8_t opcode);
void ld_BC_A(uint8_t opcode);
void ld_DE_A(uint8_t opcode);
void ld_NN_A(uint8_t opcode);
void ldAI(uint8_t opcode);
void ldAR(uint8_t opcode);
void ldIA(uint8_t opcode);
void ldRA(uint8_t opcode);
//16-bit load group
void ldDDNN(uint8_t opcode);
void ldIXNN(uint8_t opcode);
void ldIYNN(uint8_t opcode);
void ldHL_NN_(uint8_t opcode);
void ldDD_NN_(uint8_t opcode);
void ldIX_NN_(uint8_t opcode);
void ldIY_NN_(uint8_t opcode);
void ld_NN_HL(uint8_t opcode);
void ld_NN_DD(uint8_t opcode);
void ld_NN_IX(uint8_t opcode);
void ld_NN_IY(uint8_t opcode);
void ldSPHL(uint8_t opcode);
void ldSPIX(uint8_t opcode);
void ldSPIY(uint8_t opcode);
void pushQQ(uint8_t opcode);
void pushIX(uint8_t opcode);
void pushIY(uint8_t opcode);
void popQQ(uint8_t opcode);
void popIX(uint8_t opcode);
void popIY(uint8_t opcode);
//exchange, block transfer, and search group
void exDEHL(uint8_t opcode);
void exAFAF2(uint8_t opcode);
void exx(uint8_t opcode);
void ex_SP_HL(uint8_t opcode);
void ex_SP_IX(uint8_t opcode);
void ex_SP_IY(uint8_t opcode);
void ldi(uint8_t opcode);
void ldir(uint8_t opcode);
void ldd(uint8_t opcode);
void lddr(uint8_t opcode);
void cpi(uint8_t opcode);
void cpir(uint8_t opcode);
void cpd(uint8_t opcode);
void cpdr(uint8_t opcode);
//8-bit arithmetic group
void addAR(uint8_t opcode);
void addAN(uint8_t opcode);
void addA_HL_(uint8_t opcode);
void addA_IXd_(uint8_t opcode);
void addA_IYd_(uint8_t opcode);
void adcAR(uint8_t opcode);
void adcAN(uint8_t opcode);
void adcA_HL_(uint8_t opcode);
void adcA_IXd_(uint8_t opcode);
void adcA_IYd_(uint8_t opcode);
void subR(uint8_t opcode);
void subN(uint8_t opcode);
void sub_HL_(uint8_t opcode);
void sub_IXd_(uint8_t opcode);
void sub_IYd_(uint8_t opcode);
void sbcAR(uint8_t opcode);
void sbcAN(uint8_t opcode);
void sbcA_HL_(uint8_t opcode);
void sbcA_IXd_(uint8_t opcode);
void sbcA_IYd_(uint8_t opcode);
void andR(uint8_t opcode);
void andN(uint8_t opcode);
void and_HL_(uint8_t opcode);
void and_IXd_(uint8_t opcode);
void and_IYd_(uint8_t opcode);
void orR(uint8_t opcode);
void orN(uint8_t opcode);
void or_HL_(uint8_t opcode);
void or_IXd_(uint8_t opcode);
void or_IYd_(uint8_t opcode);
void xorR(uint8_t opcode);
void xorN(uint8_t opcode);
void xor_HL_(uint8_t opcode);
void xor_IXd_(uint8_t opcode);
void xor_IYd_(uint8_t opcode);
void cpR(uint8_t opcode);
void cpN(uint8_t opcode);
void cp_HL_(uint8_t opcode);
void cp_IXd_(uint8_t opcode);
void cp_IYd_(uint8_t opcode);
void incR(uint8_t opcode);
void inc_HL_(uint8_t opcode);
void inc_IXd_(uint8_t opcode);
void inc_IYd_(uint8_t opcode);
void decR(uint8_t opcode);
void dec_HL_(uint8_t opcode);
void dec_IXd_(uint8_t opcode);
void dec_IYd_(uint8_t opcode);
//general purpose arithmetic
void daa(uint8_t opcode);
void cpl(uint8_t opcode);
void neg(uint8_t opcode);
void ccf(uint8_t opcode);
void scf(uint8_t opcode);
//cpu control group
void nop(uint8_t opcode);
void halt(uint8_t opcode);
void di(uint8_t opcode);
void ei(uint8_t opcode);
void im(uint8_t opcode);
/*
 * 46=0
 * 56=1
 * 5e=2
 *
 * 01000110 = 0
 * 01010110 = 1
 * 01011110 = 2
 */
//jump group
void jpNN(uint8_t opcode);
void jpCCNN(uint8_t opcode);
//call and return group
void callNN(uint8_t opcode);
void callCCNN(uint8_t opcode);
void ret(uint8_t opcode);
void retCC(uint8_t opcode);
//input and output group
void out_N_A(uint8_t opcode);
//convenience functions - not opcodes per se, but used exclusively by them to prevent typing the same commands repeatedly
//these don't have to have the signature `void opcode(uint8_t)`.
inline void push(uint16_t value);
inline uint16_t pop();
inline void cp(uint8_t value,bool b);
inline void addA(uint8_t value);
inline void subA(uint8_t value);
inline void andA(uint8_t value);
inline void orA(uint8_t value);
inline void xorA(uint8_t value);
inline int parity(uint8_t x);
