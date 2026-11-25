typedef struct { u8 *f0; u8 *f4; u8 *f8; } Obj;
typedef struct { u8 pad0[16]; u8 *f4; u8 *f8; u8 *fC; } Node;
extern u8 D_0040E618[];
extern void func_0027D7A0(void *, s32);
extern void func_00219DA8(void *, void *);
extern void *func_002788A8(void *, void *, void *, s32);
extern void *func_002B1FC0(s32, s32);
extern void func_002B2028(void *);
extern void *func_003D2910(s32);
extern void *func_00152D28(s32, s32, void **);

void func_00278908(Obj *arg0, Node *arg1, s32 arg2) {
    u8 sp[32];
    u8 *cur = arg0->f4;
    u8 *end = arg0->f8;
    if (cur != end) {
        u8 *p, *q;
        s32 n;
        void **slot;
        if (cur != 0) func_0027D7A0(cur, cur - 0x10);
        arg0->f4 = cur + 0x10;
        func_0027D7A0(sp, arg2);
        p = cur - 0x20;
        q = cur - 0x10;
        n = (p - (u8 *)arg1) >> 4;
        while (n > 0) {
            u32 tmp;
            p -= 0x10;
            q -= 0x10;
            n--;
            tmp = *(u32 *)p;
            *(u32 *)q = tmp;
            func_00219DA8(q + 4, p + 4);
        }
        *(void **)arg1 = *(void **)sp;
        func_00219DA8((u8 *)arg1 + 4, sp + 4);
        {
            void *base = *(void **)(sp + 4);
            s32 words = (*(u8 **)(sp + 8) - (u8 *)base) >> 2;
            if (words != 0) {
                if ((u32)(words * 4) != 0) func_002B2028(base);
                else { slot = (void **)(D_0040E618 - 4); *(void **)base = *slot; *slot = base; }
            }
        }
    } else {
        s32 cnt = (cur - arg0->f0) >> 4;
        s32 blocks = cnt ? cnt * 2 : 1;
        s32 bytes = blocks * 0x10;
        void *mem;
        void *r, *t;
        u8 *p;
        if (blocks != 0) {
            if (bytes != 0) {
                mem = func_002B1FC0(bytes, blocks);
                if (mem == 0) mem = func_003D2910(bytes);
            } else {
                void **slot = (void **)(D_0040E618 - 4);
                void *head = *slot;
                if (head != 0) { mem = head; *slot = *(void **)mem; }
                else mem = func_00152D28(0, blocks, slot);
            }
        } else { mem = 0; }
        r = func_002788A8(arg0->f0, arg1, mem, 0);
        if (r != 0) func_0027D7A0(r, arg2);
        t = func_002788A8(arg1, cur, (u8 *)r + 0x10, 0);
        p = arg0->f0;
        if ((u32)p < (u32)cur) {
            u8 *v = ((Node *)p)->fC;
            do {
                u8 *q = ((Node *)p)->f4;
                s32 n = (v - q) >> 2;
                if (n != 0) {
                    if ((u32)(n * 4) != 0) func_002B2028(q);
                    else {
                        void **slot = (void **)(D_0040E618 - 4);
                        *(void **)q = *slot;
                        *slot = q;
                    }
                }
                p += 0x10;
            } while ((u32)p < (u32)cur);
        }
        {
            u8 *base = arg0->f0;
            s32 n = (arg0->f8 - base) >> 4;
            if (n != 0) {
                if ((u32)(n * 0x10) != 0) func_002B2028(base);
                else {
                    void **slot = (void **)(D_0040E618 - 4);
                    *(void **)base = *slot;
                    *slot = base;
                }
            }
        }
        arg0->f4 = t;
        arg0->f8 = (u8 *)((u32)mem + bytes);
        arg0->f0 = mem;
    }
}
