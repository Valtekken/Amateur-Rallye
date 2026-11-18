extern s32 func_001E3650(s32, s32);
extern s32 func_001E4280(void);
extern void func_001D4040(void*, const char*);
extern void func_0029FA58(void*, void*, s32);
extern void func_0029FA68(void*, void*, float*);
extern s32 func_003FA310(void*, const char*);
extern char D_00447398[], D_00444D28[];

void func_0011D240(void *arg0, void *arg1) {
    char fmtbuf[0x40];
    s32 keybuf[4];
    float sp50[4], sp60[4];
    s32 key, temp, flag, val, unkc;
    void *p;
    float *v;

    func_003FA310(fmtbuf, D_00447398);
    key = func_001E4280();
    func_001D4040(keybuf, fmtbuf);
    unkc = *(s32*)((char*)arg0 + 0xC);
    temp = func_001E3650(key, (s32)keybuf) ^ *(s32*)((char*)arg0 + 0x14);
    flag = (temp == 0);
    sp50[0] = 1.0f;
    v = sp50; v[1] = 1.0f; v[2] = 1.0f; v[3] = 1.0f;
    val = flag;
    if (unkc == 0) {
        sp60[0] = 0.9f;
        v = sp60; v[1] = 0.9f; v[2] = 0.9f; v[3] = 0.5f;
        val = flag ? 3 : 2;
        sp50[0] = sp60[0]; sp50[1] = sp60[1]; sp50[2] = sp60[2]; sp50[3] = sp60[3];
    }
    p = *(void**)((char*)arg1 + 0x4);
    if (p != 0) {
        func_001D4040(keybuf, D_00444D28);
        if (*(s32*)((char*)p + 0x4) == keybuf[0]) {
            func_0029FA58(p, arg1, val);
            func_0029FA68(p, arg1, sp50);
        }
    }
}
