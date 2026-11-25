typedef struct { u16 *f0; u16 *f4; u16 *f8; } Buf;
extern u8 D_0040E618[];
extern void *func_00152D28(u32, s32, void **);
extern void *func_002B1FC0(u32, s32, s32 *);
extern void func_002B2028(void *);
extern void *func_002FAC50(void *, void *, void *, u32);
extern void func_002FBDC8(void *, void *, void *);
extern void *func_002FBE00(void *, u32, void *, u32);
extern void *func_003D2910(u32);

void func_002FBE30(Buf *arg0, u32 arg1, u32 arg2, u16 *arg3) {
    s32 sp[6];
    sp[5] = (s32)arg2;
    if (arg2 == 0) return;
    {
        u16 *cur = arg0->f4;
        if ((u32)(arg0->f8 - cur) >= arg2) {
            s32 gap = cur - (u16 *)arg1;
            if (arg2 >= (u32)gap) {
                u16 *p;
                arg0->f4 = cur + (arg2 - (u32)gap);
                func_002FAC50((void *)arg1, cur, arg0->f4, 0);
                func_002FBE00(cur, arg2 - (u32)gap, (void *)&sp[0], 0);
                p = cur + gap;
                arg0->f4 = p;
                func_002FBDC8((void *)arg1, cur, (void *)&sp[0]);
                return;
            }
            {
                u16 *a = cur;
                u16 *b = cur - arg2;
                s32 n = b - (u16 *)arg1;
                func_002FAC50(cur - arg2, cur, cur, 0);
                arg0->f4 = cur + arg2;
                while (n > 0) {
                    b--;
                    a--;
                    n--;
                    *a = *b;
                }
                func_002FBDC8((void *)arg1, (void *)((u16 *)arg1 + arg2), (void *)&sp[0]);
                return;
            }
        }
        goto grow;
    }
grow:
    {
        u16 *cur = arg0->f4;
        s32 avail = cur - arg0->f0;
        u32 more = (u32)avail < arg2;
        s32 total;
        u32 bytes;
        void *mem;
        void *r;
        sp[4] = avail;
        total = avail + *(more ? &sp[5] : &sp[4]);
        bytes = (u32)total * 2;
        if (total != 0) {
            if (bytes != 0) {
                mem = func_002B1FC0(bytes, (s32)more, &sp[4]);
                if (mem == 0) mem = func_003D2910(bytes);
            } else {
                void **slot = (void **)(D_0040E618 - 4);
                void *head = *slot;
                if (head != 0) {
                    mem = head;
                    *slot = *(void **)mem;
                } else {
                    mem = func_00152D28(0, (s32)more, slot);
                }
            }
        } else {
            mem = 0;
        }
        r = func_002FAC50(arg0->f0, (void *)arg1, mem, 0);
        r = func_002FBE00(r, (u32)sp[5], arg3, 0);
        r = func_002FAC50((void *)arg1, arg0->f4, r, 0);
        {
            u16 *s = arg0->f0;
            u16 *e = (u16 *)arg0->f4;
            while (s < e) s += 2;
        }
        {
            u16 *old = arg0->f0;
            s32 n = arg0->f8 - old;
            if (n != 0) {
                if ((u32)(n * 2) != 0) {
                    func_002B2028(old);
                } else {
                    void **slot = (void **)(D_0040E618 - 4);
                    *(void **)old = *slot;
                    *slot = old;
                }
            }
        }
        arg0->f4 = (u16 *)r;
        arg0->f8 = (u16 *)mem + total;
        arg0->f0 = (u16 *)mem;
    }
}
