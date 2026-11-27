extern s32 func_001D4010(void *);
extern s32 func_003FA760(s32, s32);
extern void func_001D4040(void *, void *);
extern void *D_002AD408(s32);
extern void D_002AD390(void *);
extern void func_001E15E0(void *, void *, s32);
extern void func_002B2028(s32);
extern void func_001D2458(void *, s32);
extern void func_001D2488(s32, void *);
extern void func_001535C8(void *, s32, void *);

s32 func_001E0D50(void *arg0, void *arg1, void **arg2, void **arg3)
{
    void *q;
    s32 n;
    s32 i;
    void *obj;
    s32 r;
    s32 e;
    s32 cond;

    q = *(void **)((u8 *)arg1 + 0x14);
    n = *(s32 *)((u8 *)arg1 + 0x18);
    i = (n - (s32) q) >> 3;

    if (*(s32 *)((u8 *)arg1 + 0x20) != *(s32 *)((u8 *)arg0 + 0x48)) {
        return 0;
    }
    if (i != 2 && i != 4) {
        return 0;
    }
    if (*(s32 *)q != *(s32 *)((u8 *)arg0 + 0x24)) {
        return 0;
    }
    if (*(s32 *)((u8 *)q + 8) != *(s32 *)((u8 *)arg0 + 0x44)) {
        return 0;
    }

    r = func_001D4010((u8 *)arg0 + 0x3C);
    e = *(s32 *)((u8 *)q + 0xC);
    cond = 0;
    if (e != 0 && r != 0) {
        cond = func_003FA760(r, e) == 0;
    }
    if (cond == 0) {
        return 0;
    }
    if (i == 4) {
        func_001E15E0(arg0, arg1, 2);
    }

    func_001D4040(arg1, arg1);

    obj = D_002AD408(0xC);
    *arg2 = obj;
    *arg3 = obj;
    *(s32 *)((u8 *)obj + 0) = 0;
    *(s32 *)((u8 *)obj + 4) = 0;
    if (*(void **)((u8 *)arg3) == 0) {
        return 1;
    }
    *(s32 *)((u8 *)obj + 8) = 0;

    return 0;
}
