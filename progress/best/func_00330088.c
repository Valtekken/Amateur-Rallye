extern s32 func_002DDA20(void);
extern void func_002C6528(void *, void *, s32, void *);
extern s32 func_00303038(void *, void *);
extern s32 func_00371148(s32);

typedef struct {
    s32 _0;
    s32 _4;
    s32 f8;
    s32 fC;
    s32 f10;
    s32 f14;
    s32 f18;
    s32 f1C;
    s32 f20;
} S1;

s32 func_00330088(void *arg0, S1 *arg1)
{
    s32 n;
    void *obj;
    void *begin, *end, *a;
    s32 cap, aligned, tmp;
    void *slot;
    s32 r;
    s32 sp;

    n = arg1->fC;
    if (n == 0)
        return 0;
    obj = *(void **)func_002DDA20();
    n = arg1->fC;
    if (n == 0)
        goto done;
    a = (char *)obj + 0x14;
    begin = *(void **)((char *)obj + 0x14);
    end = *(void **)((char *)obj + 0x18);
    cap = ((s32)end - (s32)begin) >> 3;
    if ((u32)n < (u32)cap)
        goto L164;
    aligned = (n + 0x20) & ~0x1F;
    if ((u32)aligned >= (u32)cap) {
        func_002C6528(a, end, aligned - cap, &sp);
    } else {
        tmp = (s32)aligned * 8 + (s32)begin;
        if ((u32)tmp < (u32)end) {
            s32 v = tmp + 8;
            while ((u32)v < (u32)end)
                v += 8;
            tmp = v;
        }
        *(s32 *)((char *)a + 4) = tmp;
    }
L164:
    slot = (char *)begin + n * 8;
    if (*(s32 *)((char *)slot + 4) != *(s32 *)((char *)obj + 0x20)) {
        *(void **)slot = func_00303038(obj, (char *)arg1 + 0xC);
        *(s32 *)((char *)slot + 4) = *(s32 *)((char *)obj + 0x20);
    }
    r = *(s32 *)slot;
done:
    if (r != 0)
        return func_00371148(r);
    return 0;
}
