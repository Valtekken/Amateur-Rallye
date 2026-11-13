extern void func_001D4040(void *, const char *);
extern void func_001E2460(void *, s32);
extern void func_001E25B0(void *, const char *, void *);
extern void func_0011C718(void *, s32);
extern void *func_001E3700(s32, void *);
extern s32 func_001D4010(void *);
extern s32 func_003FA760(s32, s32);

extern char D_004471C8[], D_0044D6A8[];
extern char D_00446628[], D_0044D800[];
extern const char D_004471E8[], D_00444D00[], D_004471F8[];

static inline void *init_a(void *p, s32 a) { func_001E2460(p, a); return p; }

void func_0011B5B8(void *arg0, s32 arg1, s32 arg2) {
    u8 buf[0x10];
    init_a(buf, arg2);
    func_001E25B0(buf, D_004471E8, (u8 *)arg0 + 0xC);
    func_001E25B0(buf, D_00444D00, (u8 *)arg0 + 0x10);
    func_001E25B0(buf, D_004471F8, (u8 *)arg0 + 0x14);
}

void *func_0011B488(s32 *p) {
    s32 k[4];
    func_001D4040(k, D_004471C8);
    p[1] = k[0];
    p[0] = -1;
    p[2] = (s32)D_0044D6A8;
    p[3] = 0;
    p[4] = 0;
    p[5] = 0;
    return p;
}

void *func_0011B708(s32 *p) {
    s32 k[4];
    func_001D4040(k, D_00446628);
    p[1] = k[0];
    p[0] = -1;
    p[2] = (s32)D_0044D800;
    p[10] = 1;
    *(f32 *)((u8 *)p + 0x54) = 1.0f;
    p[11] = 0;
    p[13] = 0;
    p[17] = 0;
    p[3] = 0;
    p[4] = 0;
    p[5] = 0;
    p[6] = 0;
    p[7] = 0;
    p[8] = 1;
    p[9] = 1;
    p[12] = 0;
    p[14] = 0;
    p[15] = 0;
    p[16] = 0;
    p[18] = 0;
    p[19] = 0;
    p[20] = 0;
    p[22] = 0;
    p[23] = 0;
    p[24] = 0;
    return p;
}

void func_0011BBF8(void *arg0) {
    s32 sp[4];
    void *p44;
    s32 t;
    s32 *p;
    s32 val;
    s32 v30;
    s32 cond;

    p44 = (u8 *)arg0 + 0x44;
    if (*(s32 *)p44 == 0)
        return;

    t = func_001E4280();
    p = func_001E3700(t, p44);
    sp[0] = *p;
    val = func_001D4010(sp);
    v30 = *(s32 *)((u8 *)arg0 + 0x34);
    cond = 0;
    if (v30 != 0 && val != 0) {
        cond = func_003FA760(val, v30) == 0;
    }
    if (cond == 0) {
        func_0011C718(arg0, func_001D4010(sp));
    }
}
