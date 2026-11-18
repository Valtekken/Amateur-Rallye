/* identical to func_003D6C10 (matched), with its names changed by decompdecomp */
extern s32 func_003A0BD8(s32,s32);extern s32 func_00219DA8(s32,s32);
s32 func_003A5DC8(register s32 a,register s32 b){func_003A0BD8(a,b);func_00219DA8(12+a,12+b);return a;}

s32 func_003D83C8(u32);s32 func_003D6BE8(u32 a){return func_003D83C8(a);}
s32 func_003D8578(s32,s32,s32);u64 func_003D6C40(s32 a,s32 b,u64 c){return (u32)func_003D8578(a,b,(s32)c);}
s32 func_003D6BB8(void*a,s32 b){u8*v=*(void**)((u8*)a+80);return (*(s32(**)(void*,s32))(v+20))((u8*)a+*(s16*)(v+16),b);}
