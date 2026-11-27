typedef struct Vec3 { f32 x, y, z; } Vec3;
extern void *func_001FDBA8(s32, void *);
extern s32 func_001FDE60(void);
extern f32 func_003F3E80(f32);

void func_0028B358(void *arg0, void *arg1)
{
    void *temp_2, *temp_4_2, *temp_4_3, *temp_3, *temp_2_5;
    Vec3 *base50;
    s32 temp_4, temp_17, temp_2_4;
    s32 *arr;
    f32 t2, t5, t4;
    f32 dx, dy, dz, len2, len;
    f32 sp20, sp24, sp28, scale, s;
    void *a0 = arg0;

    if (*(s32 *)((char *)a0 + 0xC) == 0) *(s32 *)((char *)a0 + 0xC) = 1;

    temp_2 = func_001FDBA8(func_001FDE60(), (char *)a0 + 0x1C);
    if (temp_2 == 0) return;

    base50 = (Vec3 *)((char *)*(void **)((char *)arg1 + 0x50) + 0x50);
    t2 = base50->x; t5 = base50->y; t4 = base50->z;

    temp_4 = *(s32 *)((char *)a0 + 0x14) + 1;
    arr = *(s32 **)temp_2;
    temp_17 = (s32)(((u32)(*(s32 *)((char *)temp_2 + 4) - *(s32 *)temp_2)) * 0xCCCCCCCDu) >> 4;
    {
        s32 sel = temp_4 >= temp_17 ? 0 : temp_4;
        temp_4_2 = (void *)((char *)arr + sel * 0x50);
    }
    temp_4_3 = (char *)temp_4_2 + 0x40;

    dx = *(f32 *)((char *)temp_4_3 + 0) - t2;
    dy = *(f32 *)((char *)temp_4_3 + 4) - t5;
    dz = *(f32 *)((char *)temp_4_3 + 8) - t4;
    sp20 = dx; sp24 = dy; sp28 = dz;

    len2 = dx * dx + dy * dy + dz * dz;
    len = func_003F3E80(len2);
    if (len < 0.5f) {
        temp_2_4 = *(s32 *)((char *)a0 + 0x14) + 1;
        *(s32 *)((char *)a0 + 0x14) = temp_2_4;
        if (temp_2_4 >= temp_17) *(s32 *)((char *)a0 + 0x14) = 0;
    }

    len2 = sp20 * sp20 + sp24 * sp24 + sp28 * sp28;
    if (!(len2 <= 1.1920929e-7f)) {
        s = 1.0f / func_003F3E80(len2);
        sp20 *= s; sp24 *= s; sp28 *= s;
    } else {
        sp20 = 0.0f; sp24 = 0.0f; sp28 = 0.0f;
    }

    scale = *(f32 *)((char *)a0 + 0x18);
    temp_3 = *(void **)((char *)arg1 + 0x50);
    temp_2_5 = (char *)temp_3 + 0x50;
    *(f32 *)((char *)temp_3 + 0x50) = t2 + sp20 * scale;
    *(f32 *)((char *)temp_2_5 + 4) = t5 + sp24 * scale;
    *(f32 *)((char *)temp_2_5 + 8) = t4 + sp28 * scale;
    *(f32 *)((char *)temp_2_5 + 0xC) = 1.0f;
}
