extern s32 func_003A0BD8(s32,s32),func_00219DA8(s32,s32);
s32 func_003A5DC8(register s32 a,register s32 b){func_003A0BD8(a,b);func_00219DA8(a+12,b+12);return a;}
s32 func_003AE3E0(register s32 a,register u8*b){*(s32*)(b+0x28)=12;*(s32*)(b+0x2c)=0;*(s32*)(b+0x3c)=0;*(s32*)(b+0x40)=0;*(f32*)(b+0x44)=0.01f;return a;}
extern void func_003A4790(void*,const char*);
extern const char D_00487550[],D_00487568[],D_00487598[],D_004875B0[];
void func_003AE430(register s32 a,register u8*b){*(s32*)(b+0x28)=3;*(s32*)(b+0x2c)=0;*(s32*)(b+0x3c)=0;*(s32*)(b+0x40)=1;func_003A4790(b+0x34,D_00487550);func_003A4790(b+0x38,D_00487568);*(f32*)(b+0x44)=8.0f;}
void func_003AE4C8(register s32 a,register u8*b){*(s32*)(b+0x28)=22;*(s32*)(b+0x2c)=1;*(s32*)(b+0x3c)=1;*(s32*)(b+0x40)=0;func_003A4790(b+0x34,D_00487598);func_003A4790(b+0x38,D_004875B0);*(f32*)(b+0x44)=24.0f;}
