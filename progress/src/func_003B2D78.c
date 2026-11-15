/* identical to func_003B1B90 (matched), with its names changed by decompdecomp */
s32 func_003A0BD8(s32,s32);s32 func_00219DA8(s32,s32);s32 func_003A5DC8(register s32 a,register s32 b){func_003A0BD8(a,b);func_00219DA8(a+12,b+12);return a;}
void func_003A36D0(void*,s32,s32);void D_002AD390(void*);
void func_003B1098(register char**a,register s32 b){func_003A36D0(a,(s32)a[0],((s32*)a[2]-(s32*)a[0]));if(b&1){D_002AD390(a);}else{}}
f32 *func_003B1A40(register f32*a,register f32*b){a[0]=b[0];a[1]=b[1];a[2]=b[2];a[3]=b[3];return a;}
void func_003B3AA8(u32);void func_003B2D78(register u32 a,register u32 b,register s32 c){while(a<b){func_003B3AA8(a);a+=24;}}
