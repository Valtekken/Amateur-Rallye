s32 func_003A9C58(void*); void func_003B0200(s32,s32,s32);
void func_003B0670(void*); void func_003B06A0(void*,s32,void*);
s32 func_003B0158(s32); s32 func_003B0190(s32); s32 func_003AFF08(s32);
void func_003A9C88(s32 a,s32 b){(void)*(volatile s32*)&a;func_003B0200(a,b,func_003A9C58(&a));}
void func_003AA330(void*a,s32 b){char x[16];func_003B0670(x);func_003B06A0(a,b,x);}
s32 func_003A9BD8(register s32 a){register s32 e=func_003B0190(a);register s32 t=func_003B0158(a);return ((e-t)*(s32)0xAAAAAAAB)>>2;}
s32 func_003A9D48(register s32 a,register s32 b){return func_003AFF08(a)+b*4;}

s32 func_003AA3F8(s32 arg0, s32 arg1) {
    return arg0 + (arg1 * 4);
}

s32 func_00154E78(s32, s32, s32, s32, s32);
void func_003AA508(s32 arg0, s32 arg1, s32 arg2) {
    // Stub
}

extern void func_003AD108(void *);
extern void func_003B0C28(void *, s32, void *);
extern void func_00374AB8(void *, s32);
void func_003AA9C8(void *arg0, s32 arg1) {
    char x[0x30];
    func_003AD108(x);
    func_003B0C28(arg0, arg1, x);
    func_00374AB8(x, 2);
}
