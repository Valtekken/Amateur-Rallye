extern void *func_00152D28(void *a0, void *a1);
extern void *func_002B1FC0(s32 size);
extern void func_002B2028(void *ptr);
extern void func_00385300(void *ptr, s32 arg1);
extern void func_0038C440(void *dst, void *src);
extern void *func_0038C700(void *a0, void *a1, void *a2, s32 a3);
extern void func_0038D0B0(void *dst, void *src);
extern void *func_003D2910(s32 size);
extern u8 D_0040E618[];

typedef struct Vec { u8 *start; u8 *end; u8 *cap; } Vec;

void func_0038C760(Vec *arg0, u8 *arg1, void *arg2) {
    u8 sp[0xC];
    u8 *end = arg0->end;
    u8 *cap = arg0->cap;
    if (end != cap) {
        if (end == 0) goto skip;
        func_0038D0B0(end, end - 0xC);
    skip:
        arg0->end = arg0->end + 0xC;
        func_0038D0B0(sp, arg2);
        {
            u8 *p = arg0->end;
            u8 *var_17 = p - 0x18;
            s32 count = (s32)((var_17 - arg1) * (s32)0xAAAAAAAB) >> 2;
            if (count > 0) {
                u8 *var_18 = p - 0x18;
                do {
                    var_17 -= 0xC;
                    func_0038C440(var_18, var_17);
                    count--;
                    var_18 -= 0xC;
                } while (count > 0);
            }
        }
        func_0038C440(arg1, sp);
        func_00385300(sp, 2);
        return;
    }

    {
        s32 cur = (s32)((end - arg0->start) * (s32)0xAAAAAAAB) >> 2;
        s32 newCount = 1;
        if (cur != 0) newCount = cur * 2;
        {
            u8 *newBuf = 0;
            s32 sz;
            if (newCount == 0) { newBuf = 0; goto after_alloc; }
            sz = newCount * 0xC;
            if (sz != 0) {
                newBuf = func_002B1FC0(sz);
                if (newBuf != 0) goto after_alloc;
                newBuf = func_003D2910(sz);
            } else {
                void **fp = (void **)(D_0040E618 - 4);
                if (*fp == 0) { newBuf = func_00152D28(0, 0); }
                else { newBuf = *fp; *fp = *(void **)newBuf; }
            }
        after_alloc:
            {
                u8 *res = func_0038C700(arg0->start, arg1, newBuf, 0);
                if (res != 0) func_0038D0B0(res, arg2);
                {
                    u8 *oldEnd = arg0->end;
                    u8 *newEnd = func_0038C700(arg1, oldEnd, res + 0xC, 0);
                    u8 *it = arg0->start;
                    if (it < oldEnd) {
                        u8 *v = it;
                        do { func_00385300(v, 2); it += 0xC; v = it; } while (it < oldEnd);
                    }
                    {
                        u8 *start = arg0->start;
                        s32 oldCapCount = (s32)((arg0->cap - start) * (s32)0xAAAAAAAB) >> 2;
                        if (oldCapCount != 0) {
                            if (oldCapCount * 0xC != 0) func_002B2028(start);
                            else {
                                void **fp = (void **)(D_0040E618 - 4);
                                *(void **)start = *fp;
                                *fp = start;
                            }
                        }
                    }
                    arg0->end = newEnd;
                    arg0->start = newBuf;
                    arg0->cap = newBuf + newCount * 0xC;
                }
            }
        }
    }
}
