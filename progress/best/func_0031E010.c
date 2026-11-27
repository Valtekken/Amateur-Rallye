extern s32 D_0043C000;
extern u32 D_002AD5A8(s32, s32);
extern void func_003F931C(u32, u32, s32);
extern void D_002AD530(u32);

typedef struct S_inner {
    u32 unk_00;
    u32 unk_04;
    s32 unk_08;
    s32 unk_0C;
    u32 unk_10;
} S_inner;

typedef struct S_D_0042D690 {
    s32 unk_00;
    void *unk_04;
    s32 unk_08;
    s32 unk_0C;
    void *unk_10;
    S_inner *unk_14;
} S_D_0042D690;

void func_0031E010(S_D_0042D690 *arg0, s32 arg1) {
    S_inner *inner = arg0->unk_14;
    s32 temp_3 = inner->unk_0C;
    if ((inner->unk_08 - temp_3) < 4) {
        u32 temp_5 = (u32)temp_3 + 0x24u;
        D_0043C000 = inner->unk_10;
        s32 var_3 = 0;
        if (temp_5 > 1U) {
            do {
                var_3 += 1;
            } while ((u32)(1 << var_3) < temp_5);
        }
        s32 temp_4 = 1 << var_3;
        u32 temp_2 = D_002AD5A8(temp_4, temp_5);
        s32 temp_6 = inner->unk_0C;
        u32 temp_17 = (temp_2 + 0x7Fu) & 0xFFFFFF80u;
        if (temp_6 > 0) {
            func_003F931C(temp_17, inner->unk_00, temp_6 * 4);
        }
        u32 temp_4_2 = inner->unk_04;
        if (temp_4_2 != 0) {
            D_002AD530(temp_4_2);
        }
        inner->unk_04 = temp_2;
        inner->unk_00 = temp_17;
        inner->unk_08 = temp_4 - 0x20;
        D_0043C000 = 0;
    }
    s32 temp_3_2 = temp_3 + 1;
    ((u32 *)inner->unk_00)[temp_3] = 0x50000000u;
    inner->unk_0C = temp_3_2;
    ((u32 *)inner->unk_00)[temp_3_2] = (u32)arg1 & 0x0FFFFFFFu;
    inner->unk_0C = temp_3 + 2;
    ((u32 *)inner->unk_00)[temp_3 + 2] = 0;
    inner->unk_0C = temp_3 + 3;
    ((u32 *)inner->unk_00)[temp_3 + 3] = 0;
    inner->unk_0C = temp_3 + 3;
}
