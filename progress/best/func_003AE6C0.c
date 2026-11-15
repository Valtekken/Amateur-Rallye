extern s32 func_003A0BD8(s32,s32),func_00219DA8(s32,s32);
s32 func_003A5DC8(register s32 a,register s32 b){func_003A0BD8(a,b);func_00219DA8(a+12,b+12);return a;}
void func_003AE618(register s32 a,register u8*b){*(s32*)(b+0x28)=2;*(s32*)(b+0x2c)=1;*(s32*)(b+0x3c)=1;*(s32*)(b+0x40)=0;*(f32*)(b+0x44)=0.15f;}
void func_003AE670(register s32 a,register u8*b){*(s32*)(b+0x28)=6;*(s32*)(b+0x2c)=0;*(s32*)(b+0x3c)=1;*(s32*)(b+0x40)=0;*(f32*)(b+0x44)=0.25f;}
void func_003AE6C0(register s32 a,register u8*b){*(s32*)(b+0x28)=6;*(s32*)(b+0x2c)=0;*(s32*)(b+0x3c)=0;*(s32*)(b+0x40)=0;*(f32*)(b+0x44)=0.25f;}
