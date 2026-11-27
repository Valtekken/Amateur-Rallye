typedef struct Packed24 { s64 a, b, c; } __attribute__((packed)) Packed24;

static inline void copy_obj(u8 *e) {
    *(f32 *)(e + 0x144) = *(f32 *)(e + 0xA0);
    *(f32 *)(e + 0x148) = *(f32 *)(e + 0xA4);
    *(f32 *)(e + 0x14C) = *(f32 *)(e + 0xA8);
    *(f32 *)(e + 0x134) = *(f32 *)(e + 0xAC);
    *(f32 *)(e + 0x138) = *(f32 *)(e + 0xB0);
    *(f32 *)(e + 0x13C) = *(f32 *)(e + 0xB4);
    *(f32 *)(e + 0x140) = *(f32 *)(e + 0xB8);
    *(Packed24 *)(e + 0x150) = *(Packed24 *)(e + 0xBC);
    *(s32 *)(e + 0x170) = *(s32 *)(e + 0xDC);
    *(f32 *)(e + 0x174) = *(f32 *)(e + 0x11C);
    *(f32 *)(e + 0x178) = *(f32 *)(e + 0x120);
    *(f32 *)(e + 0x17C) = *(f32 *)(e + 0x124);
    *(f32 *)(e + 0x180) = *(f32 *)(e + 0x128);
    *(f32 *)(e + 0x184) = *(f32 *)(e + 0x12C);
    *(f32 *)(e + 0x188) = *(f32 *)(e + 0x130);
}

void func_00173848(void *arg0) {
    u8 *a = (u8 *)arg0;
    s32 n1;
    s32 n2;
    s32 i;
    u8 *e;

    n1 = (s32)(*(u8 **)(a + 0x18) - *(u8 **)(a + 0x14)) >> 2;
    i = 0;
    if (n1 > 0) {
        do {
            u8 **arr = *(u8 ***)(a + 0x14);
            u8 *node = arr[i];
            e = *(u8 **)(*(u8 **)(node + 0xC) + 4);
            i += 1;
            copy_obj(e);
        } while (i < n1);
    }

    n2 = (s32)(*(u8 **)(a + 0x24) - *(u8 **)(a + 0x20)) >> 2;
    i = 0;
    if (n2 > 0) {
        do {
            u8 **arr = *(u8 ***)(a + 0x20);
            e = arr[i];
            i += 1;
            copy_obj(e);
        } while (i < n2);
    }
}
