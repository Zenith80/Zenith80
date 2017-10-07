opcodes=new opcode[256]{
	&Z80::nop,&Z80::ldDDNN,&Z80::ld_BC_A,&Z80::incSS,&Z80::incR,&Z80::decR,&Z80::ldRN,&Z80::rlca,
	&Z80::exAFAF2,&Z80::addHLSS,&Z80::ldA_BC_,&Z80::decSS,&Z80::incR,&Z80::decR,&Z80::ldRN,&Z80::rrca,
	//0x10
	&Z80::djnzE,&Z80::ldDDNN,&Z80::ld_DE_A,&Z80::incSS,&Z80::incR,&Z80::decR,&Z80::ldRN,&Z80::rla,
	&Z80::nop,&Z80::addHLSS,&Z80::ldA_DE_,&Z80::decSS,&Z80::incR,&Z80::decR,&Z80::ldRN,&Z80::rra,
	//0x20
	&Z80::nop,&Z80::ldDDNN,&Z80::ld_NN_HL,&Z80::incSS,&Z80::incR,&Z80::decR,&Z80::ldRN,&Z80::daa,
	&Z80::nop,&Z80::addHLSS,&Z80::ldHL_NN_,&Z80::decSS,&Z80::incR,&Z80::decR,&Z80::ldRN,&Z80::cpl,
	//0x30
	&Z80::nop,&Z80::ldDDNN,&Z80::ld_NN_A,&Z80::incSS,&Z80::inc_HL_,&Z80::dec_HL_,&Z80::ld_HL_N ,&Z80::scf,
	&Z80::nop,&Z80::addHLSS,&Z80::ldA_NN_,&Z80::decSS,&Z80::incR,&Z80::decR,&Z80::ldRN,&Z80::ccf,
	//0x40
	&Z80::ldRRx,&Z80::ldRRx,&Z80::ldRRx,&Z80::ldRRx,&Z80::ldRRx,&Z80::ldRRx,&Z80::ldR_HL_,&Z80::ldRRx,
	&Z80::ldRRx,&Z80::ldRRx,&Z80::ldRRx,&Z80::ldRRx,&Z80::ldRRx,&Z80::ldRRx,&Z80::ldR_HL_,&Z80::ldRRx,
	//0x50
	&Z80::ldRRx,&Z80::ldRRx,&Z80::ldRRx,&Z80::ldRRx,&Z80::ldRRx,&Z80::ldRRx,&Z80::ldR_HL_,&Z80::ldRRx,
	&Z80::ldRRx,&Z80::ldRRx,&Z80::ldRRx,&Z80::ldRRx,&Z80::ldRRx,&Z80::ldRRx,&Z80::ldR_HL_,&Z80::ldRRx,
	//0x60
	&Z80::ldRRx,&Z80::ldRRx,&Z80::ldRRx,&Z80::ldRRx,&Z80::ldRRx,&Z80::ldRRx,&Z80::ldR_HL_,&Z80::ldRRx,
	&Z80::ldRRx,&Z80::ldRRx,&Z80::ldRRx,&Z80::ldRRx,&Z80::ldRRx,&Z80::ldRRx,&Z80::ldR_HL_,&Z80::ldRRx,
	//0x70
	&Z80::ld_HL_R,&Z80::ld_HL_R,&Z80::ld_HL_R,&Z80::ld_HL_R,&Z80::ld_HL_R,&Z80::ld_HL_R,&Z80::halt,&Z80::ld_HL_R,
	&Z80::ldRRx,&Z80::ldRRx,&Z80::ldRRx,&Z80::ldRRx,&Z80::ldRRx,&Z80::ldRRx,&Z80::ldR_HL_,&Z80::ldRRx,
	//0x80
	&Z80::addAR,&Z80::addAR,&Z80::addAR,&Z80::addAR,&Z80::addAR,&Z80::addAR,&Z80::addA_HL_,&Z80::addAR,
	&Z80::adcAR,&Z80::adcAR,&Z80::adcAR,&Z80::adcAR,&Z80::adcAR,&Z80::adcAR,&Z80::adcA_HL_,&Z80::adcAR,
	//0x90
	&Z80::subR,&Z80::subR,&Z80::subR,&Z80::subR,&Z80::subR,&Z80::subR,&Z80::sub_HL_,&Z80::subR,
	&Z80::sbcAR,&Z80::sbcAR,&Z80::sbcAR,&Z80::sbcAR,&Z80::sbcAR,&Z80::sbcAR,&Z80::sbcA_HL_,&Z80::sbcAR,
	//0xA0
	&Z80::andR,&Z80::andR,&Z80::andR,&Z80::andR,&Z80::andR,&Z80::andR,&Z80::and_HL_,&Z80::andR,
	&Z80::xorR,&Z80::xorR,&Z80::xorR,&Z80::xorR,&Z80::xorR,&Z80::xorR,&Z80::xor_HL_,&Z80::xorR,
	//0xB0
	&Z80::orR,&Z80::orR,&Z80::orR,&Z80::orR,&Z80::orR,&Z80::orR,&Z80::or_HL_,&Z80::orR,
	&Z80::cpR,&Z80::cpR,&Z80::cpR,&Z80::cpR,&Z80::cpR,&Z80::cpR,&Z80::cp_HL_,&Z80::cpR,
	//0xC0
	&Z80::nop,&Z80::popQQ,&Z80::jpCCNN,&Z80::jpNN,&Z80::nop,&Z80::pushQQ,&Z80::addAN,&Z80::nop,
	&Z80::nop,&Z80::ret,&Z80::jpCCNN,&Z80::CB,&Z80::nop,&Z80::callNN,&Z80::adcAN,&Z80::nop,
	//0xD0
	&Z80::nop,&Z80::popQQ,&Z80::nop,&Z80::out_N_A,&Z80::nop,&Z80::pushQQ,&Z80::subN,&Z80::nop,
	&Z80::nop,&Z80::exx,&Z80::nop,&Z80::inA_N_,&Z80::nop,&Z80::DD,&Z80::sbcAN,&Z80::nop,
	//0xE0
	&Z80::nop,&Z80::popQQ,&Z80::nop,&Z80::ex_SP_HL,&Z80::nop,&Z80::pushQQ,&Z80::andN,&Z80::nop,
	&Z80::nop,&Z80::nop,&Z80::nop,&Z80::exDEHL,&Z80::nop,&Z80::ED,&Z80::xorN,&Z80::nop,
	//0xF0
	&Z80::nop,&Z80::popQQ,&Z80::nop,&Z80::di,&Z80::nop,&Z80::pushQQ,&Z80::orN,&Z80::nop,
	&Z80::nop,&Z80::ldSPHL,&Z80::nop,&Z80::ei,&Z80::nop,&Z80::FD,&Z80::cpN,&Z80::nop,
};
