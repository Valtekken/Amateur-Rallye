extern s32 func_003A0BD8(s32,s32);extern s32 func_00219DA8(s32,s32);
s32 func_003A5DC8(register s32 a,register s32 b){func_003A0BD8(a,b);func_00219DA8(a+12,b+12);return a;}

extern s32 func_003D89B0(s32,s32,s32);
s32 func_003D6FA8(void*a){u16 n=*(u16*)((u8*)a+72);s32 p;if(!n)return -1;p=*(s32*)((u8*)a+16);return func_003D89B0(n-1,p,*(s32*)((u8*)a+20)-p);}
s32 func_003D8C20(u32);s32 func_003D8C58(u32);
s32 func_003D7110(u32 a){return func_003D8C20(a);}s32 func_003D7130(u32 a){return func_003D8C58(a);}
