s32 func_003A3268(s32);s32 func_003A31D8(s32);s32*func_002AFEB8(s32,s32);
s32 func_003A4508(register s32 a){return func_003A31D8(func_003A3268(a));}
static inline __attribute__((always_inline)) s32* init(register s32*p,register s32*q){*p=*q;return p;}
s32*func_003A3BB8(register s32 a,register s32*b){s32*p=func_002AFEB8(4,a);return p?init(p,b):p;}
s32 func_003A3B80(register s32*a){return a[1];}
s32 func_003A3AD0(register s32*a){return a[1];}
