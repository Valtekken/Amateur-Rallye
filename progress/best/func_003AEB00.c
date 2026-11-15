extern s32 func_003A0BD8(s32,s32),func_00219DA8(s32,s32);
s32 func_003A5DC8(register s32 a,register s32 b){func_003A0BD8(a,b);func_00219DA8(a+12,b+12);return a;}

extern void func_003A4790(void*,const char*);
extern const char D_00487690[];
extern void *D_002AD408(u32),*func_00327EA0(void*,void*),*func_00327E60(void*,void*);
void func_003AE9A0(register s32 a,register u8*b){*(s32*)(b+0x28)=10;*(s32*)(b+0x2c)=1;*(s32*)(b+0x3c)=1;*(s32*)(b+0x40)=1;func_003A4790(b+0x38,D_00487690);*(void**)(b+0x24)=func_00327EA0(D_002AD408(16),b+0x4c);*(f32*)(b+0x44)=1.0f;}
void func_003AEA50(register s32 a,register u8*b){*(s32*)(b+0x28)=9;*(s32*)(b+0x2c)=1;*(s32*)(b+0x3c)=1;*(s32*)(b+0x40)=1;func_003A4790(b+0x38,D_00487690);*(void**)(b+0x24)=func_00327E60(D_002AD408(16),b+0x4c);*(f32*)(b+0x44)=0.25f;}
void func_003AEB00(register s32 a,register u8*b){*(s32*)(b+0x28)=3;*(s32*)(b+0x2c)=0;*(s32*)(b+0x3c)=0;*(s32*)(b+0x40)=0;*(f32*)(b+0x44)=0.5f;}
