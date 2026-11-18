extern s32 func_00409F48(void);
extern s32 func_0040A048(void);
extern void func_003F931C(void *dst, const void *src, u32 n);
extern s32 func_003FAD88(void *dst, s32 id, u32 n);
extern s32 func_00405E90(void *, s32, s32, void *, s32, void *, s32, s32, s32);

typedef struct {
    s32 x0;
    s32 x4;
    u8 pad[0xFC];
    u8 buf[0x100];
} S14C0;

extern S14C0 D_004A14C0;
extern u8 D_004A14C8[504];
extern u8 D_004A16C0[40];

s32 func_0040A720(s32 arg0, s32 size, u8 *src, s32 *out, s32 arg4) {
    s32 ret = (s32)0xFFFF0000;
    u8 *hdr;
    if (func_00409F48() < 0) return ret;
    if (func_0040A048() != 0) return (s32)0xFFFEFFFC;
    func_003FAD88(D_004A14C8, arg0, 0xFC);
    hdr = D_004A14C8 - 8;
    hdr[0x103] = 0;
    if (src != 0) {
        if (size >= 0xFD) {
            __builtin_memcpy(D_004A14C8 + 0xFC, src, 0xFC);
            D_004A14C0.x0 = 0xFC;
        } else {
            func_003F931C(D_004A14C8 + 0xFC, src, size);
            *(s32 *)hdr = size;
        }
    } else {
        hdr[0x104] = 0;
        *(s32 *)hdr = 0;
    }
    {
        s32 r = func_00405E90(D_004A16C0, arg4, 0, &D_004A14C0, 0x200, &D_004A14C0, 8, 0, 0);
        if (r < 0) return (s32)0xFFFEFFFF;
        {
            s32 a = D_004A14C0.x4;
            s32 b = D_004A14C0.x0;
            *out = a;
            return b;
        }
    }
}
