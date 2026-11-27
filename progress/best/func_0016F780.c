extern void func_00266070(void);
extern void *D_002AD5A8(s32 size);
extern void func_00171400(s32 arg0, void *arg1);
extern void func_001705C8(s32 arg0, f32 arg1);
extern void func_001705F8(s32 arg0, f32 arg1);
extern void func_00170628(s32 arg0, f32 arg1);
extern void func_00170658(s32 arg0, f32 arg1);
extern void func_001705C0(s32 arg0, s32 arg1);
extern void func_001704D0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
extern void func_001705B8(s32 arg0, void *arg1);

void func_0016F780(void *arg0) {
    u8 *a0 = (u8 *)arg0;
    u8 *t;
    s32 i;
    s32 count;

    func_00266070();
    t = *(u8 **)(a0 + 0x10C);

    *(f32 *)(a0 + 0x3C) = *(f32 *)(t + 0x90);
    {
        f32 f1 = *(f32 *)(t + 0x94);
        *(f32 *)(a0 + 0x40) = f1;
        *(f32 *)(a0 + 0x18) = f1;
    }
    *(f32 *)(a0 + 0x44) = (*(f32 *)(t + 0x98) * 6.2831854820251465f) / 60.0f;
    *(f32 *)(a0 + 0x48) = (*(f32 *)(t + 0x9C) * 6.2831854820251465f) / 60.0f;
    *(f32 *)(a0 + 0x50) = *(f32 *)(t + 0xA4);
    *(f32 *)(a0 + 0x4C) = *(f32 *)(t + 0xA0);

    count = *(s32 *)(t + 0xC8);
    *(s32 *)(a0 + 0x60) = count;
    *(void **)(a0 + 0x64) = D_002AD5A8(count * 4);
    *(void **)(a0 + 0x68) = D_002AD5A8(*(s32 *)(a0 + 0x60) * 4);
    *(void **)(a0 + 0x6C) = D_002AD5A8(*(s32 *)(a0 + 0x60) * 4);

    t = *(u8 **)(a0 + 0x10C);
    *(f32 *)(a0 + 0x54) = *(f32 *)(t + 0xDC);
    *(f32 *)(a0 + 0x58) = *(f32 *)(t + 0xE0);
    *(f32 *)(a0 + 0x5C) = *(f32 *)(t + 0xE4);
    *(s32 *)(a0 + 0xFC) = *(s32 *)(t + 0xE8);
    func_00171400(*(s32 *)(a0 + 0x70), t + 0xC0);

    i = 0;
    if (*(s32 *)(a0 + 0x60) > 0) {
        u8 *b0 = a0 + 0xB0;
        do {
            s32 idx = i * 4;
            u8 *t2 = *(u8 **)(a0 + 0x10C);
            i++;
            *(f32 *)(*(u8 **)(a0 + 0x64) + idx) = *(f32 *)(*(u8 **)(t2 + 0xCC) + idx);
            t2 = *(u8 **)(a0 + 0x10C);
            *(f32 *)(*(u8 **)(a0 + 0x68) + idx) = *(f32 *)(a0 + 0x44) * *(f32 *)(*(u8 **)(t2 + 0xD4) + idx) * 0.01f;
            t2 = *(u8 **)(a0 + 0x10C);
            *(f32 *)(*(u8 **)(a0 + 0x6C) + idx) = *(f32 *)(a0 + 0x44) * *(f32 *)(*(u8 **)(t2 + 0xD8) + idx) * 0.01f;
            *(s32 *)(b0 - 0x2C) = 1;
            *(s32 *)(b0) = 1;
            b0 += 4;
        } while (i < *(s32 *)(a0 + 0x60));
    }

    *(s32 *)(a0 + 0xB0) = 0;
    *(s32 *)(a0 + 0xB4) = 0;
    {
        s32 last = *(s32 *)(a0 + 0x60) - 1;
        *(s32 *)(a0 + last * 4 + 0xB0) = 0;
    }

    t = *(u8 **)(a0 + 0x10C);
    *(s32 *)(a0 + 0x74) = *(s32 *)(t + 0xD0);
    func_001705C8(*(s32 *)(a0 + 0x38), *(f32 *)(t + 0xAC));
    func_001705F8(*(s32 *)(a0 + 0x38), *(f32 *)(*(u8 **)(a0 + 0x10C) + 0xB0));
    func_00170628(*(s32 *)(a0 + 0x38), *(f32 *)(*(u8 **)(a0 + 0x10C) + 0xA8));
    func_00170658(*(s32 *)(a0 + 0x38), *(f32 *)(*(u8 **)(a0 + 0x10C) + 0xB4));

    {
        s32 sw = *(s32 *)(*(u8 **)(a0 + 0x10C) + 0xB8);
        if (sw == 0) {
            func_001705C0(*(s32 *)(a0 + 0x38), 0);
        } else if (sw == 2) {
            func_001705C0(*(s32 *)(a0 + 0x38), 1);
        } else if (sw == 1) {
            func_001705C0(*(s32 *)(a0 + 0x38), 2);
        }
    }

    {
        s32 tmp = *(s32 *)(*(u8 **)(a0 + 0x34) + 0x10);
        func_001704D0(*(s32 *)(a0 + 0x38), tmp + 0x190, tmp, tmp + 0x4B0, tmp + 0x320);
    }
    func_001705B8(*(s32 *)(a0 + 0x38), a0);
}
