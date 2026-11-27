extern f32 D_00478468;
extern f32 func_001CF4C0(f32 *arg0);
extern void func_0016F760(void *arg0, f32 arg1);
extern f32 fabsf(f32);

void func_00178468(void *arg0) {
    f32 sp[12];
    f32 var_f0;
    f32 f20;
    s32 i;
    s32 offset;
    u8 *a0 = (u8 *)arg0;
    u8 *c;
    u8 *s0;
    u8 *p;
    u8 *v;

    c = *(u8 **)(a0 + 0xC);
    s0 = *(u8 **)(c + 0x14);
    if (s0 == NULL) goto end;
    if (!(fabsf(*(f32 *)(s0 + 0x28)) > 2.0f)) goto end;

    p = *(u8 **)(c + 0x4);
    v = p + 0x174;
    sp[0] = *(f32 *)(v + 0);
    sp[1] = *(f32 *)(v + 4);
    sp[2] = *(f32 *)(v + 8);

    {
        f32 len = func_001CF4C0(sp);
        if (len < D_00478468) {
            sp[0] = 0.0f;
            sp[1] = 0.0f;
            sp[2] = 0.0f;
        } else {
            sp[0] = sp[0] / len;
            sp[1] = sp[1] / len;
            sp[2] = sp[2] / len;
        }
    }

    v = s0 + 0x10;
    var_f0 = ((sp[0] * *(f32 *)(s0 + 0x10)) + (sp[1] * *(f32 *)(v + 4)) + (sp[2] * *(f32 *)(v + 8)) + 1.0f) * 0.5f;
    if (var_f0 < 0.0f) {
        var_f0 = 0.0f;
    } else if (var_f0 > 1.0f) {
        var_f0 = 1.0f;
    }

    f20 = 1.0f - ((1.0f - var_f0) * 0.15f);
    func_0016F760(*(void **)(a0 + 0x14), f20);

    offset = 0;
    i = 3;
    do {
        u8 *base = *(u8 **)(a0 + 0x10) + offset;
        i--;
        *(f32 *)(base + 0x128) = f20 * *(f32 *)(base + 0x128);
        offset += 0x190;
    } while (i >= 0);

    {
        u8 *c2 = *(u8 **)(a0 + 0xC);
        u8 *p2 = *(u8 **)(c2 + 0x4);
        u8 *v1 = p2 + 0x11C;
        f32 f2 = *(f32 *)(p2 + 0x11C) * f20;
        f32 f1b = *(f32 *)(v1 + 4) * f20;
        f32 f0b = *(f32 *)(v1 + 8) * f20;
        sp[4] = f2;
        sp[6] = f0b;
        sp[5] = f1b;
        p2 = *(u8 **)(c2 + 0x4);
        *(f32 *)(p2 + 0x11C) = f2;
        v1 = p2 + 0x11C;
        {
            u8 *a0b = p2 + 0x104;
            f32 t3 = sp[5];
            f32 t1;
            *(f32 *)(v1 + 4) = t3;
            t1 = sp[6];
            *(f32 *)(v1 + 8) = t1;
            {
                f32 s = *(f32 *)(p2 + 0x20);
                f32 t2b = *(f32 *)(p2 + 0x11C) * s;
                f32 t1b = t1 * s;
                f32 t3b = t3 * s;
                sp[10] = t1b;
                sp[8] = t2b;
                sp[9] = t3b;
                *(f32 *)(p2 + 0x104) = t2b;
                *(f32 *)(a0b + 4) = sp[9];
                *(f32 *)(a0b + 8) = sp[10];
            }
        }
    }

end:
    return;
}
