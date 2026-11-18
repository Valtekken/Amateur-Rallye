/* identical to func_002AB1B8 (matched), with its names changed by decompdecomp */
s32 func_001C6780(void*, s32, s32);
s32 *func_001C67A0(s32, s32, s32);

s32 func_00276EE0(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 d = *(s32 *)arg0;
    s32 q1 = arg1 / d;
    s32 q2 = arg2 / d;
    s32 r = func_001C6780(arg0, arg1 - d * q1, arg2 - d * q2);
    return *func_001C67A0(*(s32 *)((char*)arg0 + 0x8), q1, q2) + r;
}

void *D_002AD408(s32);
void func_001D4040(void*, const char*);
extern char D_0047C590[];
extern char D_0047C5A0[];
extern char D_0047C5B0[];
extern char D_0047C5C0[];
extern char D_0047C5D0[];
extern char D_0047C648[];

static inline __attribute__((always_inline)) s32 *init4040(s32 *p, const char *s) { func_001D4040(p, s); return p; }

void *func_002A2D60(void *arg0) {
    s32 sp0[4];
    s32 sp10[4];
    ((s32*)arg0)[2] = 0;
    ((s32*)arg0)[3] = 0;
    ((s32*)arg0)[4] = 0;
    ((s32*)arg0)[5] = 0;
    ((s32*)arg0)[0] = *init4040(sp0, D_0047C590);
    ((s32*)arg0)[1] = (s32)D_0047C648;
    ((s32*)arg0)[2] = *init4040(sp10, D_0047C5A0);
    ((s32*)arg0)[3] = *init4040(sp10, D_0047C5B0);
    ((s32*)arg0)[4] = *init4040(sp10, D_0047C5C0);
    ((s32*)arg0)[5] = *init4040(sp10, D_0047C5D0);
    return arg0;
}

void func_002A2E48(void *arg0) {
    void *temp_2 = func_002A2D60(D_002AD408(0x18));
    ((s32*)temp_2)[0] = ((s32*)arg0)[0];
    ((s32*)temp_2)[2] = ((s32*)arg0)[2];
    ((s32*)temp_2)[3] = ((s32*)arg0)[3];
    ((s32*)temp_2)[4] = ((s32*)arg0)[4];
    ((s32*)temp_2)[5] = ((s32*)arg0)[5];
}

extern s32 D_00494C30;
extern char D_0044DD18[];
s32 func_001DF2B0(void*, s32, s32);
s32 func_001FF0F8(void*);
s32 func_002936B0(void*, void*);

void *func_002A25C8(void) {
    s32 sp0[4];
    s32 sp10[4];
    void *obj = D_002AD408(0x24);
    void *tmp = (char*)obj + 0x14;
    ((s32*)obj)[4] = (s32)D_0044DD18;
    ((s32*)obj)[2] = 0;
    ((s32*)obj)[3] = 0;
    ((s32*)obj)[1] = 0;
    ((s32*)obj)[0] = 0;
    ((s32*)obj)[5] = 0;
    ((s32*)tmp)[0] = 0;
    ((s32*)tmp)[2] = 0;
    ((s32*)tmp)[1] = 0;
    ((s32*)obj)[8] = D_00494C30;
    sp0[0] = 0;
    func_001DF2B0(obj, func_002936B0(sp0, tmp), 0);
    sp10[0] = 0;
    func_001DF2B0(obj, func_001FF0F8(sp10), 0);
    return obj;
}
