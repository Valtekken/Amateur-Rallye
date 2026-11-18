typedef struct{ s32 w[7]; } Entry;extern Entry D_0049B9D0[][4];extern char *func_003CA3B0(s32,s32);
s32 func_003CA410(s32 a,s32 b){if(!D_0049B9D0[a][b].w[4])return 0;return *(s32*)(func_003CA3B0(a,b)+0x58);}
s32 func_003F931C(u32);s32 func_003FA9B8(u32);s32 func_003F9288(u32);
s32 func_003D12D0(u32 a){return func_003F931C(a);}
s32 func_003D12F0(u32 a){return func_003FA9B8(a);}
s32 func_003D1310(u32 a){return func_003F9288(a);}
