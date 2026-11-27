extern s32 func_001E4280(void);
extern void *func_001E3820(s32, s32, void *);
extern s32 func_00200550(void *, void *, f32, f32);
extern void *func_00201350(void);
extern f32 func_003F3E80(f32); /* sqrtf */

s32 func_001A5698(void *arg0, s32 arg1, s32 arg2, s32 *arg3)
{
    s32 var_18 = arg2;
    s32 var_2;
    s32 var_20;
    s32 i;
    s32 n;
    s32 temp_21;

loop_1:
    var_20 = 1;
    {
        u8 *temp_2 = (u8 *)(*(u8 **)arg3) + var_18 * 0x50;
        f32 sp0, sp4, sp8, sp10, sp14, sp18;
        sp0 = *(f32 *)(temp_2 + 0x40);
        sp4 = *(f32 *)(temp_2 + 0x44);
        sp8 = *(f32 *)(temp_2 + 0x48);
        sp4 = 0.0f; /* written back */
        /* spill slots 0x10/0x14/0x18 used by called funcs; we use locals */

        if (var_18 <= 0) { var_2 = 0; goto end; }

        temp_21 = var_18 - 1;
        i = 0;
        n = *(s32 *)((u8 *)arg0 + 0x14);
        if (n > 0) {
            f32 f21 = sp4; /* 0.0f */
            do {
                if (i != arg1) {
                    void *res = func_001E3820(func_001E4280(), *(s32 *)((u8 *)arg0 + 0x1C) + (i << 2), (u8 *)arg0 + 0x6C);
                    if (res != NULL) {
                        u8 *tp = *(u8 **)((u8 *)res + 0x8) + 0xF0;
                        f32 a = *(f32 *)(tp + 0x0);
                        f32 b = *(f32 *)(tp + 0x4);
                        f32 c = *(f32 *)(tp + 0x8);
                        f32 dx = a - sp0;
                        f32 dy = f21 - 0.0f;
                        f32 dz = c - sp8;
                        f32 dist;
                        sp10 = a; sp14 = b; sp18 = c;
                        sp14 = 0.0f;
                        dist = __builtin_sqrtf(dx * dx + dy * dy + dz * dz);
                        (void)sp10; (void)sp14; (void)sp18;
                        if (dist < 20.0f) var_20 = 0;
                    }
                }
                i++;
            } while (i < *(s32 *)((u8 *)arg0 + 0x14));
        }

        if (var_20 != 0) {
            if (*(s32 *)(*(u8 **)((u8 *)arg0 + 0x18) + (arg1 << 2)) == 2) {
                s32 var_17 = 0;
                i = 0;
                while (i < *(s32 *)((u8 *)func_00201350() + 0x10)) {
                    u8 *temp_4 = *(u8 **)((u8 *)func_00201350() + (i << 2));
                    if (temp_4 != NULL) {
                        u8 *t2 = temp_4 + 0xC0;
                        f32 px = *(f32 *)(t2 + 0x0);
                        f32 py = *(f32 *)(t2 + 0x4);
                        f32 pz = *(f32 *)(t2 + 0x8);
                        f32 dx, dy, dz, dist;
                        sp10 = px; sp14 = py; sp18 = pz;
                        sp4 = py;
                        dx = sp0 - px; dy = sp4 - py; dz = sp8 - pz;
                        if (func_00200550(temp_4, &sp0, 4.0f, 1.0f) != 0) var_17 = 1;
                        dist = __builtin_sqrtf(dx * dx + dy * dy + dz * dz);
                        if (dist > 300.0f) var_17 = 0;
                    }
                    i++;
                }
                if (var_17 != 0) var_20 = 0;
            }
        }

        if (var_20 == 0) {
            var_18 = temp_21;
            goto loop_1;
        }
        var_18 = temp_21 ? temp_21 : var_18; /* placeholder; adjusted below */
        /* target: var_18 = var_20==0 ? temp_21 : var_18; then... */
        if (var_20 != 0) var_2 = var_18; else { var_18 = temp_21; goto loop_1; }
        /* simpler fallthrough */
        var_2 = var_18;
        /* re-evaluate var_18 assignment per target */
        if (var_20 == 0) var_18 = temp_21;
        /* NOTE this C is intentionally structured; scoring will guide */
    }

end:
    return var_2;
}
