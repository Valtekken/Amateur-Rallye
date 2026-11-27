typedef struct Vec3 { f32 x, y, z; } Vec3;

extern s32 func_00174108(void *, void *);
extern void func_0023B7D8(s32, void *, f32);
extern void func_0023B820(s32, void *, f32);
extern void func_0025C980(s32, void *, s32, f32, f32);
extern void func_0025E028(s32, void *, s32, f32, f32);
extern void func_0025E8D0(s32, void *, s32, f32, f32);
extern f32 D_00426508[];

static inline void set_vecs(u8 *e) {
    f32 *s = D_00426508;
    /* +0x1A4 */
    *(f32 *)(e + 0x1A4) = s[0];
    *(f32 *)(e + 0x1A8) = s[1];
    *(f32 *)(e + 0x1AC) = s[2];
    /* +0x1B0 */
    *(f32 *)(e + 0x1B0) = s[0];
    *(f32 *)(e + 0x1B4) = s[1];
    *(f32 *)(e + 0x1B8) = s[2];
}

void func_00173DF0(void *arg0, f32 fparg0) {
    u8 *a = (u8 *)arg0;
    s32 i;
    s32 n;
    s32 m;
    s32 k;
    u8 *temp_16;
    u8 *e;
    u8 *unk2C;
    f32 temp_f20;
    f32 temp_f21 = fparg0;
    u8 *arr;

    unk2C = *(u8 **)(a + 0x2C);
    n = (s32)(*(u8 **)(unk2C + 8) - *(u8 **)(unk2C + 4)) >> 2;
    temp_f20 = *(f32 *)(*(u8 **)(a + 0x34) + 0x50);
    i = 0;
    if (n > 0) {
        do {
            arr = *(u8 **)(*(u8 **)(a + 0x2C) + 4);
            temp_16 = *(u8 **)(arr + (i << 2));
            *(s32 *)(temp_16 + 0xDC) = 1;
            if ((func_00174108(a, *(u8 **)(temp_16 + 0x4C)) != 0) && (*(s32 *)(*(u8 **)(temp_16 + 0x50) + 0x1C8) == 0)) {
                *(s32 *)(temp_16 + 0xDC) = 0;
            }
            if ((func_00174108(a, *(u8 **)(temp_16 + 0x50)) != 0) && (*(s32 *)(*(u8 **)(temp_16 + 0x4C) + 0x1C8) == 0)) {
                *(s32 *)(temp_16 + 0xDC) = 0;
            }
            i += 1;
        } while (i < n);
    }

    func_0023B820(*(s32 *)(a + 0x30), *(u8 **)(a + 0x2C), temp_f21 * 10.0f);
    func_0023B7D8(*(s32 *)(a + 0x30), *(u8 **)(a + 0x2C), temp_f20);

    m = (s32)(*(u8 **)(a + 0x18) - *(u8 **)(a + 0x14)) >> 2;
    k = 0;
    if (m > 0) {
        do {
            u8 **arr2 = *(u8 ***)(a + 0x14);
            e = *(u8 **)(*(u8 **)(arr2[k] + 0xC) + 4);
            k += 1;
            set_vecs(e);
        } while (k < m);
    }

    {
        u8 *base = a + 0x20;
        m = (s32)(*(u8 **)(base + 4) - *(u8 **)(a + 0x20)) >> 2;
        k = 0;
        if (m > 0) {
            do {
                u8 **arr3 = *(u8 ***)(a + 0x20);
                e = arr3[k];
                k += 1;
                set_vecs(e);
            } while (k < m);
        }
    }

    func_0025E8D0(*(s32 *)(a + 0x4C), *(u8 **)(a + 0x2C), *(s32 *)(a + 0x30), temp_f20, temp_f21);
    func_0025C980(*(s32 *)(a + 0x3C), *(u8 **)(a + 0x2C), *(s32 *)(a + 0x30), temp_f20, temp_f21);
    func_0025E028(*(s32 *)(a + 0x48), *(u8 **)(a + 0x2C), *(s32 *)(a + 0x30), temp_f20, temp_f21);
}
