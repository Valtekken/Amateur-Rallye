extern void *func_001FDE60(void);
extern void *func_001FDBA8(void *, void *);
extern void func_001FE768(void *, void *);
extern void func_001FEC50(void *, void *, void *);
extern void *func_00201350(void);
extern void func_00289958(void *, void *, void *, void *);

void func_00286C08(char *p, char *q) {
    f32 m[3], v[3], out[3];
    char *src, *dst, *child, *rot;
    void *r;

    if (func_001E3650(func_001E4280(), (s32)(p + 0x54)) > 0) return;
    r = func_001FDBA8(func_001FDE60(), p + 0x10);
    if (r == 0) return;
    func_001FE768(m, r);
    src = *(char **)(q + 0x50) + 0x50;
    v[0] = *(f32 *)(src + 0x0);
    v[1] = *(f32 *)(src + 0x4);
    v[2] = *(f32 *)(src + 0x8);
    func_001FEC50(out, m, v);
    if (out[0] != *(f32 *)(p + 0x58) || out[1] != *(f32 *)(p + 0x5C) || out[2] != *(f32 *)(p + 0x60)) {
        *(s32 *)(*(char **)(func_00201350() + (*(s32 *)(p + 0xC) << 2)) + 0xD0) = 2;
    }
    dst = p + 0x58;
    child = p + 0x14;
    rot = p + 0x2C;
    *(f32 *)(dst + 0x0) = out[0];
    *(f32 *)(dst + 0x4) = out[1];
    *(f32 *)(dst + 0x8) = out[2];
    *(s32 *)(child + 0xC) = *(s32 *)(p + 0xC);
    *(f32 *)(rot + 0x0) = out[0];
    *(f32 *)(rot + 0x4) = out[1];
    *(f32 *)(rot + 0x8) = out[2];
    func_00289958(child, q, child, rot);
}
