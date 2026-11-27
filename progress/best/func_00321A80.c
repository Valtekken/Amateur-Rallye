#define sqrtf func_003F3E80

typedef struct Elem {
    f32 unk00, unk04, unk08, unk0C;
    f32 unk10, unk14, unk18, unk1C;
    f32 unk20, unk24, unk28;
    s8 unk2C, unk2D, unk2E, unk2F;
} Elem;

extern f32 func_003F3E80(f32);

void func_00321A80(void *arg0, void *arg1, void *arg2)
{
    s32 i;
    s32 count;

    if (arg2 == NULL) return;
    {
        s32 bb = *(s32 *)((u8 *)arg2 + 0x78);
        s32 aa = *(s32 *)((u8 *)arg2 + 0x74);
        count = (bb - aa) >> 3;
    }
    if (count == 0) return;
    if (count <= 0) return;

    for (i = 0; i < count; i++) {
        u64 v = *(u64 *)(*(u8 **)((u8 *)arg2 + 0x74) + (i << 3));
        s32 hi, lo, end, j;
        v &= 0xFFF00000FFFFFFFFULL;
        v |= 0x8000000000000000ULL;
        hi = (s32)((v >> 16) & 0x7FFFF);
        lo = (s32)(v & 0xFFFF);
        end = hi + lo;
        for (j = hi; j < end; j++) {
            Elem *e = *(Elem **)((u8 *)arg1 + 0x18) + j;
            f32 r = 6.0f - __builtin_sqrtf(e->unk20 * e->unk20 + e->unk28 * e->unk28);
            f32 f1;
            s32 t;
            if (r > 0.0f) f1 = (r / 6.0f) * 0.5f; else f1 = 0.0f;

            t = (s32)(f1 * 0.75f * 255.0f);
            if (t < 2) t = 2; else if (254 < t) t = 254;
            e->unk2C = (s8)t;

            t = (s32)(f1 * 255.0f);
            if (t < 2) t = 2; else if (254 < t) t = 254;
            e->unk2D = (s8)t;

            t = (s32)(f1 * 0.75f * 255.0f);
            if (t < 2) t = 2; else if (254 < t) t = 254;
            e->unk2E = (s8)t;

            e->unk2F = (s8)254;

            e->unk10 = e->unk20 * 0.8f;
            e->unk14 = e->unk28 * 0.8f;
            e->unk18 = (e->unk20 + 0.0f) * 0.3f + 0.5f;
            e->unk1C = (e->unk28 + 0.0f) * 0.15f + 0.5f;
        }
    }
}
