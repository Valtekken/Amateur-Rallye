extern void func_001D4040(void *, char *);
extern s32 func_001189C0(void);
extern s32 func_00194C40(void);
extern s32 func_001942E8(s32, s32);
extern void func_001E3EC0(s32, void *, s32);
extern s32 func_00194738(s32);
extern s32 func_0021F4B0(void);
extern void *func_0021E9C0(s32, void *);
extern char D_0044A1E0[], D_0044A200[], D_0044A220[];

typedef struct { char pad[0x18]; s32 v; } Rec52;
typedef struct { char pad[0x10]; s32 flag; } Arg;
typedef struct B { char pad[0x78]; u64 bits; } B;
typedef struct { char pad[0x4C]; B *b; } Obj;

void func_00133528(Arg *arg0) {
    char sp[0x10];
    s32 r;
    if (arg0->flag != 0) return;
    {
        s32 h = func_001E4280();
        s32 base, idx;
        func_001D4040(sp, D_0044A1E0);
        base = func_001189C0();
        idx = func_001942E8(func_00194C40(), 0);
        func_001E3EC0(h, sp, ((Rec52 *)((char *)base + idx * 52))->v);
        if (func_00194738(func_00194C40()) != 0) {
            h = func_001E4280();
            func_001D4040(sp, D_0044A200);
            base = func_001189C0();
            idx = func_001942E8(func_00194C40(), 1);
            func_001E3EC0(h, sp, ((Rec52 *)((char *)base + idx * 52))->v);
        } else {
            s32 o = func_0021F4B0();
            Obj *obj;
            func_001D4040(sp, D_0044A220);
            obj = func_0021E9C0(o, sp);
            if (obj != 0) {
                B *b = obj->b;
                if (b != 0) {
                    b->bits &= ~(u64)1;
                }
            }
        }
        r = 1;
    }
    arg0->flag = r;
}
