extern s32 func_003A0BD8(s32,s32),func_00219DA8(s32,s32);
s32 func_003A5DC8(register s32 a,register s32 b){func_003A0BD8(a,b);func_00219DA8(a+12,b+12);return a;}

extern void func_003A4790(void*,const char*);
extern const char D_00487708[],D_00487738[];
extern void *D_002AD408(u32),*func_00327F70(void*,void*);
void func_003AECA0(register s32 a,register u8*b){*(s32*)(b+0x28)=17;*(s32*)(b+0x2c)=1;*(s32*)(b+0x3c)=1;*(s32*)(b+0x40)=1;func_003A4790(b+0x38,D_00487708);*(void**)(b+0x24)=func_00327F70(D_002AD408(16),b+0x4c);*(f32*)(b+0x44)=4.0f;}
void func_003AED50(register s32 a,register u8*b){*(s32*)(b+0x28)=1;*(s32*)(b+0x2c)=0;*(s32*)(b+0x3c)=0;*(s32*)(b+0x40)=0;func_003A4790(b+0x34,D_00487738);*(f32*)(b+0x44)=10.0f;}
extern s32 func_003A3EB0(s32);
s32 func_003AF0A8(register s32 n){return n==0?0:func_003A3EB0(n*0x30);}
