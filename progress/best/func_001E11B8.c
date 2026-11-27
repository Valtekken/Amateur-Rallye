typedef struct { s32 f0; s32 f4; s32 f8; s32 fC; s32 f10; s32 f14; } ObjE;
typedef struct { s32 f0; s32 *f4; s32 f8; s32 fC; s32 f10; ObjE *f14; s32 f18; s32 f1C; s32 f20; } S1E;
typedef struct { s32 pad[9]; s32 f24; s32 pad2[7]; s32 f44; s32 f48; s32 f4C; } S0E;
extern s32 func_001D4010(void *);
extern void func_001D4040(void *, s32);
extern void func_001E15E0(void *, void *, s32);
extern s32 func_003FA388(s32, const char *, s32, s32, s32, s32);
extern s32 func_003FA760(s32, s32);
extern const char D_00476AA8[];

s32 func_001E11B8(S0E *arg0, S1E *arg1, s32 *arg2, s32 arg3) {
    s32 buf[4];
    S1E *b = arg1;
    S0E *a = arg0;
    s32 *p;
    ObjE *obj;
    s32 n, r, ok;
    if (b->f20 != a->f48) return 0;
    obj = b->f14;
    n = (((p = (s32 *)((char *)b + 0x14))[1] - (s32)obj) >> 3);
    if (n == 3 || n == 5) {
        if (obj->f0 != a->f24 || obj->f8 != a->f44) return 0;
        r = func_001D4010(&a->f4C);
        ok = 0;
        if (obj->fC && r) ok = (u32)func_003FA760(r, obj->fC) < 1;
        if (!ok) return 0;
        {
            ObjE *o2 = b->f14;
            if (a->f48 != o2->f10) return 0;
            func_001D4040(buf, o2->f4);
            *arg2 = buf[0];
        }
        n = (p[1] - (s32)b->f14) >> 3;
        if (n == 5) func_001E15E0(a, b, 3);
        obj = b->f14;
        return func_003FA388(obj->f14, D_00476AA8, arg3, arg3 + 4, arg3 + 8, arg3 + 12) == 4;
    }
    return 0;
}
