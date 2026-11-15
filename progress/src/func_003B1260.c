s32 func_003A0BD8(s32,s32);s32 func_00219DA8(s32,s32);
s32 func_003A5DC8(register s32 a,register s32 b){func_003A0BD8(a,b);func_00219DA8(a+12,b+12);return a;}
void func_003A36D0(void*,s32,s32);void D_002AD390(void*);
void func_003B1098(register s32*a,register s32 b){func_003A36D0(a,a[0],(a[2]-a[0])>>2);if(b&1){D_002AD390(a);}else{}}
s32 func_003B30B0(s32,s32);s32 func_003B1260(register s32 a,register s32 b){return func_003B30B0(a+36,b);}
s32 func_003A3910(s32);s32 func_003B3118(s32,s32);s32 func_003B12C8(register s32 a,register s32 b){s32 t;t=func_003A3910(func_003B3118(a+12,b));return t;}
