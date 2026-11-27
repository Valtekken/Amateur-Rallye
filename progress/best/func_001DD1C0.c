extern f32 func_003F3978(f32, f32);
extern void func_001DCC78(void *, s32, s32, s32);

typedef struct {
    u32 pad0;
    u32 pad1;
    u32 *unk8;
    s32 unkC;
    s32 unk10;
} S_func_001DD1C0_arg0;

void func_001DD1C0(S_func_001DD1C0_arg0 *arg0, f32 fparg0) {
    s32 i;
    s32 j;

    for (i = 0; i < arg0->unk10; i++) {
        for (j = 0; j < arg0->unkC; j++) {
            u32 pix = arg0->unk8[i * arg0->unkC + j];
            f32 fr = func_003F3978((f32)(pix & 0xFF) * (1.0f / 255.0f), fparg0);
            f32 fg = func_003F3978((f32)((pix >> 8) & 0xFF) * (1.0f / 255.0f), fparg0);
            f32 fb = func_003F3978((f32)((pix >> 16) & 0xFF) * (1.0f / 255.0f), fparg0);
            s32 or_ = (s32)(fr * 255.0f) & 0xFF;
            s32 og = (s32)(fg * 255.0f) & 0xFF;
            s32 ob = (s32)(fb * 255.0f) & 0xFF;
            func_001DCC78((void *)arg0, j, i, (s32)(((pix >> 24) << 24) | ((u32)ob << 16) | ((u32)og << 8) | (u32)or_));
        }
    }
}
