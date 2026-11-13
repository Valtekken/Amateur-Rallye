/* identical to func_003A9C88 (matched), with its names changed by decompdecomp */
s32 func_003A3880(void*); void func_003ABAB8(s32,s32,s32);
void func_003A4A10(void*); void func_003B0268(void*,s32,void*);
s32 func_003B0158(s32); s32 func_003B0190(s32); s32 func_003AFF08(s32);
void func_003A38B0(s32 a,s32 b){(void)*(volatile s32*)&a;func_003ABAB8(a,b,func_003A3880(&a));}
void func_003A9CE8(void*a,s32 b){char x[16];func_003A4A10(x);func_003B0268(a,b,x);}
s32 func_003A9BD8(register s32 a){register s32 e=func_003B0190(a);register s32 t=func_003B0158(a);return ((e-t)*(s32)0xAAAAAAAB)>>2;}
s32 func_003A9D48(register s32 a,register s32 b){return func_003AFF08(a)+b*4;}
