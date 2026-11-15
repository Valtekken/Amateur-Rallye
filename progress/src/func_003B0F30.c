s32 func_003A0BD8(s32,s32); s32 func_00219DA8(s32,s32);
s32 func_003A5DC8(register s32 a,register s32 b){func_003A0BD8(a,b);func_00219DA8(a+12,b+12);return a;}
s32 func_00151A28(s32,s32,u32,s32,s32);
s32 func_003B0F30(register s32 a,register s32 b,register s32 c){return func_00151A28(a,0,0xFFFFFFFFu,b,c);}
void func_003A3460(void*,s32);
void *func_003B0FB0(register void*a,register s32 b){func_003A3460(a,b);*(s32*)((char*)a+4)=0;return a;}
s32 func_003A35D0(u32);void func_003B2FE0(s32);
void func_003B1010(register u32 a,register u32 b,register s32 c){while(a<b){func_003B2FE0(func_003A35D0(a));a+=4;}}
