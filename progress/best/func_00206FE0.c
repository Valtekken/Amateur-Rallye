extern void func_00208560(void *);
extern void func_00208590(void *, s32);
extern void func_0021A258(void *, u32, s32, void *);

void func_00206FE0(u32 *arg0, u32 arg1) {
    u8 sp[0x18];
    u32 *p19 = arg0 + 1;
    u32 b, e, cnt, p, diff;
    arg0[0] = arg1;
    func_00208560(sp);
    b = arg0[1];
    e = p19[1];
    cnt = (u32)(((s32)((e - b) * 0xAAAAAAABu)) >> 3);
    if (arg1 < cnt) {
        p = b + arg1 * 0x18;
        diff = e - p;
        if (p < e) {
            do {
                func_00208590((void *)p, 2);
                p += 0x18;
            } while (p < e);
        }
        p19[1] = p19[1] - diff;
    } else {
        func_0021A258(p19, e, arg1 - cnt, sp);
    }
    func_00208590(sp, 2);
}
