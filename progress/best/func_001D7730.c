/* func_003A5DC8 */
s32 func_003A0BD8(s32, s32);
s32 func_00219DA8(s32, s32);
s32 func_003A5DC8(register s32 arg0, register s32 arg1) {
    func_003A0BD8(arg0, arg1);
    func_00219DA8(arg0 + 0xC, arg1 + 0xC);
    return arg0;
}

/* func_001D7730 */
s32 func_001D7730(void *arg0, s32 arg1) {
    s32 idx;
    s32 cap;
    s32 *arr;
    idx = *(s32 *)arg1;
    if (idx < 0) return -1;
    cap = *(s32 *)((char *)arg0 + 0x18);
    if (idx >= cap) return -1;
    arr = *(s32 **)((char *)arg0 + 0x0C);
    return arr[idx];
}

/* func_001D76D0 */
void **func_001D6BB0(void);
s32 func_001D76D0(s32 arg0, s32 arg1) {
    void **p;
    void *obj;
    s32 *vt;
    s16 off;
    s32 (*fn)(void *, s32, s32, void **);
    s32 r;
    p = func_001D6BB0();
    obj = *(void **)((char *)p + 4);
    vt = *(s32 **)((char *)obj);
    off = *(s16 *)((char *)vt + 0x20);
    fn = *(s32 (**)(void *, s32, s32, void **))((char *)vt + 0x24);
    r = fn((char *)obj + off, arg0 + 0x1C, arg1, p);
    if (r < 0) r = -1;
    return r;
}

/* func_001D7488 */
extern void *D_004761B0;
extern void D_002AD390(void *);
void func_001D7488(void *p, s32 flags) {
    *(void **)((char *)p + 0xC) = &D_004761B0;
    if (flags & 1) D_002AD390(p);
}
