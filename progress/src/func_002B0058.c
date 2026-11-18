extern s32 func_002AFF80(s32*,s32*);
s32 func_002B0058(char*a,s32*b,s32 c,s32 d,s32 e,s32 f){if(func_002AFF80((s32*)a,b))return d;{char*p=*(char**)(a+8);char*v=*(char**)(p+4);return (*(s32(**)(void*,s32*,s32,s32,s32,s32))(v+20))(p+*(s16*)(v+16),b,c,d,e,f);}}
