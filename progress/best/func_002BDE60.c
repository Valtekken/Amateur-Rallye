extern s32 func_003A0BD8(s32,s32),func_00219DA8(s32,s32);
s32 func_003A5DC8(register s32 a,register s32 b){func_003A0BD8(a,b);func_00219DA8(12+a,12+b);return a;}
extern u8 D_00480878[],D_004805E0[],D_00480898[],D_004805D8[],D_004808E8[];extern void func_002BF428(void*,void*);
void*func_002BDE60(volatile s32*p){p[3]=0;p[0]=0;p[1]=(s32)D_00480878;p[2]=0;return (void*)p;}
void*func_002BDDC0(s32*p){func_002BF428(p,D_004805E0);p[8]=0;p[10]=0;p[3]=(s32)D_00480898;p[10]=0;p[11]=0;p[9]=0;return p;}
void*func_002BDD48(s32*p){func_002BF428(p,D_004805D8);p[9]=0;p[3]=(s32)D_004808E8;p[10]=0;p[8]=0;return p;}
