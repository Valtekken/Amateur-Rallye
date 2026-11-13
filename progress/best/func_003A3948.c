s32 func_003A3790(void*); void func_003AB990(s32,s32,s32);
s32 func_003A3880(void*); void func_003ABAB8(s32,s32,s32);
s32 func_003ABC58(s32); s32 func_003ABC90(s32);

void func_003A37C0(s32 a,s32 b){(void)*(volatile s32*)&a;func_003AB990(a,b,func_003A3790(&a));}
void func_003A38B0(s32 a,s32 b){(void)*(volatile s32*)&a;func_003ABAB8(a,b,func_003A3880(&a));}
s32 func_003A3910(register s32*a){return *a;}
s32 func_003A3948(s32 arg0){s32 t=func_003ABC90(arg0);return (t-func_003ABC58(arg0))>>3;}
