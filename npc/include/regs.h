#ifndef __REGS_H__
#define __REGS_H__

void dump_gpr();
uint64_t isa_reg_str2val(const char *s, bool *success); 

#endif
