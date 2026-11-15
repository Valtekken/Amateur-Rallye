extern s32 func_003A0BD8(s32,s32),func_00219DA8(s32,s32);
s32 func_003A5DC8(register s32 a,register s32 b){func_003A0BD8(a,b);func_00219DA8(a+12,b+12);return a;}

extern void func_003A4790(void*,const char*);
extern const char D_004876C8[];
extern void *D_002AD408(u32),*func_00328000(void*,void*);
void func_003AEB50(register s32 a,register u8*b){*(s32*)(b+0x28)=3;*(s32*)(b+0x2c)=0;*(s32*)(b+0x3c)=0;*(s32*)(b+0x40)=0;func_003A4790(b+0x38,D_004876C8);*(f32*)(b+0x44)=0.3f;*(void**)(b+0x24)=func_00328000(D_002AD408(16),b+0x4c);}
void func_003AEBF8(register s32 a,register u8*b){*(s32*)(b+0x28)=24;*(s32*)(b+0x2c)=0;*(s32*)(b+0x3c)=0;*(s32*)(b+0x40)=0;*(f32*)(b+0x44)=0.25f;}
void func_003AEC48(register s32 a,register u8*b){*(s32*)(b+0x28)=5;*(s32*)(b+0x2c)=1;*(s32*)(b+0x3c)=1;*(s32*)(b+0x40)=0;*(f32*)(b+0x44)=0.5f;}
