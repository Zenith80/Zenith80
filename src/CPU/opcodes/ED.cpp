opcodesED=new opcode[256]{
	//0x00
	&Z80::nop,&Z80::nop,&Z80::nop,&Z80::nop,&Z80::nop,&Z80::nop,&Z80::nop,&Z80::nop,
	&Z80::nop,&Z80::nop,&Z80::nop,&Z80::nop,&Z80::nop,&Z80::nop,&Z80::nop,&Z80::nop,
	//0x10
	&Z80::nop,&Z80::nop,&Z80::nop,&Z80::nop,&Z80::nop,&Z80::nop,&Z80::nop,&Z80::nop,
	&Z80::nop,&Z80::nop,&Z80::nop,&Z80::nop,&Z80::nop,&Z80::nop,&Z80::nop,&Z80::nop,
	//0x20
	&Z80::nop,&Z80::nop,&Z80::nop,&Z80::nop,&Z80::nop,&Z80::nop,&Z80::nop,&Z80::nop,
	&Z80::nop,&Z80::nop,&Z80::nop,&Z80::nop,&Z80::nop,&Z80::nop,&Z80::nop,&Z80::nop,
	//0x30
	&Z80::nop,&Z80::nop,&Z80::nop,&Z80::nop,&Z80::nop,&Z80::nop,&Z80::nop,&Z80::nop,
	&Z80::nop,&Z80::nop,&Z80::nop,&Z80::nop,&Z80::nop,&Z80::nop,&Z80::nop,&Z80::nop,
	//0x40
	&Z80::nop,&Z80::nop,&Z80::sbcHLSS,&Z80::ld_NN_DD,&Z80::neg,&Z80::nop,&Z80::im,&Z80::ldIA,
	&Z80::nop,&Z80::nop,&Z80::adcHLSS,&Z80::ldDDNN,&Z80::nop,&Z80::nop,&Z80::nop,&Z80::ldRA,
	//0x50
	&Z80::nop,&Z80::nop,&Z80::sbcHLSS,&Z80::ld_NN_DD,&Z80::nop,&Z80::nop,&Z80::im,&Z80::ldAI,
	&Z80::nop,&Z80::nop,&Z80::adcHLSS,&Z80::ldDDNN,&Z80::nop,&Z80::nop,&Z80::im,&Z80::ldAR,
	//0x60
	&Z80::nop,&Z80::nop,&Z80::sbcHLSS,&Z80::ld_NN_DD,&Z80::nop,&Z80::nop,&Z80::nop,&Z80::rrd,
	&Z80::nop,&Z80::nop,&Z80::adcHLSS,&Z80::ldDDNN,&Z80::nop,&Z80::nop,&Z80::nop,&Z80::rld,
	//0x70
	&Z80::nop,&Z80::nop,&Z80::sbcHLSS,&Z80::ld_NN_DD,&Z80::nop,&Z80::nop,&Z80::nop,&Z80::nop,
	&Z80::nop,&Z80::nop,&Z80::adcHLSS,&Z80::ldDDNN,&Z80::nop,&Z80::nop,&Z80::nop,&Z80::nop,
	//0x80
	&Z80::nop,&Z80::nop,&Z80::nop,&Z80::nop,&Z80::nop,&Z80::nop,&Z80::nop,&Z80::nop,
	&Z80::nop,&Z80::nop,&Z80::nop,&Z80::nop,&Z80::nop,&Z80::nop,&Z80::nop,&Z80::nop,
	//0x00
	&Z80::nop,&Z80::nop,&Z80::nop,&Z80::nop,&Z80::nop,&Z80::nop,&Z80::nop,&Z80::nop,
	&Z80::nop,&Z80::nop,&Z80::nop,&Z80::nop,&Z80::nop,&Z80::nop,&Z80::nop,&Z80::nop,
	//0xA0
	&Z80::ldi,&Z80::cpi,&Z80::nop,&Z80::nop,&Z80::nop,&Z80::nop,&Z80::nop,&Z80::nop,
	&Z80::ldd,&Z80::cpd,&Z80::nop,&Z80::nop,&Z80::nop,&Z80::nop,&Z80::nop,&Z80::nop,
	//0xB0
	&Z80::ldir,&Z80::cpir,&Z80::nop,&Z80::nop,&Z80::nop,&Z80::nop,&Z80::nop,&Z80::nop,
	&Z80::lddr,&Z80::cpdr,&Z80::nop,&Z80::nop,&Z80::nop,&Z80::nop,&Z80::nop,&Z80::nop,
	//0xC0
	&Z80::nop,&Z80::nop,&Z80::nop,&Z80::nop,&Z80::nop,&Z80::nop,&Z80::nop,&Z80::nop,
	&Z80::nop,&Z80::nop,&Z80::nop,&Z80::nop,&Z80::nop,&Z80::nop,&Z80::nop,&Z80::nop,
	//0xD0
	&Z80::nop,&Z80::nop,&Z80::nop,&Z80::nop,&Z80::nop,&Z80::nop,&Z80::nop,&Z80::nop,
	&Z80::nop,&Z80::nop,&Z80::nop,&Z80::nop,&Z80::nop,&Z80::nop,&Z80::nop,&Z80::nop,
	//0xE0
	&Z80::nop,&Z80::nop,&Z80::nop,&Z80::nop,&Z80::nop,&Z80::nop,&Z80::nop,&Z80::nop,
	&Z80::nop,&Z80::nop,&Z80::nop,&Z80::nop,&Z80::nop,&Z80::nop,&Z80::nop,&Z80::nop,
	//0xF0
	&Z80::nop,&Z80::nop,&Z80::nop,&Z80::nop,&Z80::nop,&Z80::nop,&Z80::nop,&Z80::nop,
	&Z80::nop,&Z80::nop,&Z80::nop,&Z80::nop,&Z80::nop,&Z80::nop,&Z80::nop,&Z80::nop,
};
