extern s32 func_003A0BD8(s32,s32);extern s32 func_00219DA8(s32,s32);
s32 func_003A5DC8(register s32 a,register s32 b){func_003A0BD8(a,b);func_00219DA8(a+12,b+12);return a;}
extern s32 func_003FA760(s32,s32);
s32 func_002AFF80(s32*a,s32*b){s32 r=0;if(b==a || func_003FA760(*a,*b)==0)r=1;return r;}
s32 func_002B0028(s32*a,s32*b,s32 c,s32 d){return func_002AFF80(a,b)?d:0;}
s32 func_002B0058(char*a,s32*b,s32 c,s32 d,s32 e,s32 f){s32 r=d;if(!func_002AFF80((s32*)a,b)){char*p=*(char**)(a+8);char*v=*(char**)(p+4);r=(*(s32(**)(void*,s32*,s32,s32,s32,s32))(v+20))(p+*(s16*)(v+16),b,c,d,e,f);}return r;}
