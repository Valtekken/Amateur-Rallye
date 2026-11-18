typedef struct { s32 value; } CopyTag;
extern s32 func_002C5160(s32, s32, s32, CopyTag);

s32 func_003978C8(register s32 a, register s32 b, register s32 c, register s32 d) {
    return func_002C5160(a, b, c, (CopyTag){0});
}

f32 func_0025E5B8(void *arg0, void *arg1) {
    f32 *v0 = (f32 *)((u8 *)arg0 + 0xC);
    f32 *v1 = (f32 *)((u8 *)arg1 + 0xC);
    f32 dot = v0[0] * v1[0] + v0[1] * v1[1] + v0[2] * v1[2];
    f32 f2 = 0.0f;
    void *p0 = *(void **)((u8 *)arg0 + 0x4C);
    void *p1 = *(void **)((u8 *)arg1 + 0x4C);
    if (p0 == p1) {
        if (*(s32 *)((u8 *)p0 + 0x1C8) != 0) {
            f2 = dot + 0.0f;
        }
    } else if (p0 == *(void **)((u8 *)arg1 + 0x50)) {
        if (*(s32 *)((u8 *)p0 + 0x1C8) != 0) {
            f2 = 0.0f - dot;
        }
    }
    void *p2 = *(void **)((u8 *)arg0 + 0x50);
    if (p2 == p1) {
        if (*(s32 *)((u8 *)p2 + 0x1C8) != 0) {
            f2 = f2 - dot;
        }
        return f2;
    }
    if (p2 == *(void **)((u8 *)arg1 + 0x50)) {
        if (*(s32 *)((u8 *)p2 + 0x1C8) != 0) {
            f2 = f2 + dot;
        }
    }
    return f2;
}

extern void func_0025E0D8(void *, void *);
extern void func_0025E298(void *);
extern void func_0025E338(void *);
extern void func_0025E4A0(void *);
extern void func_0025E670(void *);
extern void func_0025E708(void *);

void func_0025E028(void *arg0, void *arg1) {
    s32 n = (*(s32 *)((u8 *)arg1 + 0x14) - *(s32 *)((u8 *)arg1 + 0x10)) * (s32)0xAAAAAAAB >> 2;
    if (n > 0) {
        s32 i = 0;
        s32 cnt = n;
        while (cnt > 0) {
            cnt--;
            func_0025E0D8(arg0, (void *)((u8 *)*(void **)((u8 *)arg1 + 0x10) + i));
            i += 0xC;
            func_0025E338(arg0);
            func_0025E4A0(arg0);
            func_0025E670(arg0);
            func_0025E298(arg0);
            func_0025E708(arg0);
            if (cnt != 0) {
                *(s32 *)((u8 *)arg1 + 0x10);
            }
        }
    }
}

extern void func_00201620(void *);
extern void func_002027E8(void *);

void *func_0025DEB0(void *arg0) {
    *(s32 *)arg0 = 0;
    *(s32 *)((u8 *)arg0 + 4) = 0;
    *(s32 *)((u8 *)arg0 + 8) = 0;
    func_002027E8((u8 *)arg0 + 0xC);
    *(s32 *)((u8 *)arg0 + 0x18) = 0;
    void *t = (u8 *)arg0 + 0x18;
    *(s32 *)((u8 *)t + 8) = 0;
    *(s32 *)((u8 *)t + 4) = 0;
    func_00201620((u8 *)arg0 + 0x24);
    void *t2 = (u8 *)arg0 + 0x98;
    *(s32 *)((u8 *)arg0 + 0x98) = 0;
    *(s32 *)((u8 *)t2 + 8) = 0;
    *(s32 *)((u8 *)t2 + 4) = 0;
    return arg0;
}
