typedef struct { u32 b, e; } Vec;
extern void *func_002DDA20(u32, u32, u32);
extern void func_002C6528(void *, u32, u32, void *);
extern void *func_00303038(void *, void *);
extern void func_00242CF0(u32, u32, u32, u32, u32, void *);

void func_002E3928(u32 a0, u32 a1, void *a2, void *a3, void *a4) {
    Vec *v = (Vec *)a4;
    u32 b = v->b, e = v->e;
    u32 n = e - b, p;

    for (p = b + 0x38; p < e; p += 0x38) {}
    v->e = b;
    if (!a3) return;
    {
        u32 *x = *(u32 **)((char *)a3 + 0x50);
        u32 cnt = x[3];
        if (!cnt) return;
        {
            void *y = *(void **)func_002DDA20(e, e, n);
            u32 cnt2 = *(u32 *)((char *)a3 + 0x5C);
            if (!cnt2) return;
            {
                u32 *cap = (u32 *)((char *)y + 0x14);
                u32 begin = cap[0], end = cap[1];
                u32 capacity = (s32)(end - begin) >> 3;
                if ((s32)cnt2 >= (s32)capacity) {
                    s32 mask = -0x20;
                    u32 aligned = (cnt2 + 0x20) & mask;
                    u32 sp[2];
                    sp[0] = 0; sp[1] = 0;
                    {
                        u32 begin2 = cap[0], end2 = cap[1];
                        u32 capacity2 = (s32)(end2 - begin2) >> 3;
                        if (aligned >= capacity2) func_002C6528(cap, end2, aligned - capacity2, sp);
                        else {
                            u32 newend = begin2 + ((aligned - capacity2) << 3);
                            u32 q;
                            for (q = newend + 8; q < end2; q += 8) {}
                            cap[1] = newend;
                        }
                    }
                }
                {
                    u32 *elem = (u32 *)(begin + (cnt2 << 3));
                    u32 var4;
                    if (elem[1] != *(u32 *)((char *)y + 0x20)) {
                        func_00303038(y, (char *)x + 0xC);
                        elem[0] = begin;
                        elem[1] = *(u32 *)((char *)y + 0x20);
                    }
                    var4 = elem[0];
                    if (!var4) return;
                    {
                        u32 f30 = *(u32 *)((char *)var4 + 0x30);
                        if (f30) func_00242CF0(f30, 0, 1, a1, (u32)a2, (void *)a4);
                    }
                }
            }
        }
    }
}
