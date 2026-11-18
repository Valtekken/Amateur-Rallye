s32 func_003A0BD8(s32,s32);s32 func_00219DA8(s32,s32);
s32 func_003A5DC8(register s32 a,register s32 b){func_003A0BD8(a,b);func_00219DA8((u32)a+12,(u32)b+12);return a;}
extern s32 func_004042B0(s32,s32),func_00404400(s32,s32),func_004044D0(void);extern s32 D_00440960;
s32 func_004034A8(s32 a,s32 b,s32 c){if((u32)(a-1)<2){if(!D_00440960){if(func_004044D0())D_00440960=1;else goto fail;}return func_004042B0(b,c);}fail:return -1;}
s32 func_00403528(s32 a,s32 b,s32 c){if(a==0){if(!D_00440960){if(func_004044D0())D_00440960=1;else goto fail;}return func_00404400(b,c);}fail:return -1;}
extern void func_00403730(u32,u32);
void func_00403858(u32 a,u32 b){func_00403730(a&0xffffffc0u,b&0xffffffc0u);}
