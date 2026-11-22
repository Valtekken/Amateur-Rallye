extern void func_002B2028(void *);
extern void *func_003CD828(void *, void *);
extern u32 D_00437E18[];

void **func_003D0DE0(void **arg0, void **arg1) {
    if (arg1 != arg0) {
        void *s = *arg0;
        u32 *h = (u32 *)((char *)s - 16);
        s32 count = h[2] - 1;
        h[2] = count;
        if (!count) {
            u32 n = h[1];
            if (n + 16 >= 129) {
                func_002B2028(h);
            } else {
                u32 idx = (((n + 23) >> 3) - 1);
                u32 *p = &D_00437E18[idx];
                *(u32 *)((char *)s - 16) = *p;
                *p = (u32)h;
            }
        }
        void *p = *arg1;
        u32 *h2 = (u32 *)((char *)p - 16);
        if (h2[3] != 0) {
            p = func_003CD828(h2, p);
        } else {
            h2[2] = h2[2] + 1;
        }
        *arg0 = p;
    }
    return arg0;
}
