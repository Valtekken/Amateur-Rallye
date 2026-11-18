typedef struct S2 S2;
typedef struct S S;
struct S2 {
    u8 pad0[0x74];
    s32 (*fn74)(S*, s32, u64);
    u8 pad1[0x7C-0x78];
    s32 (*fn7C)(S*, s32, s32);
};
struct S {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
    s32 unk_10;
    s32 unk_14;
    s32 unk_18;
    s32 unk_1C;
    s32 unk_20;
    u8 unk_24[0x1C];
    s64 unk_40;
    u16 unk_48;
    u8 unk_4A[0x6];
    S2 *unk_50;
};

s32 func_003D89B0(s32, s32, s64);

s32 func_003DE6B8(S *arg0, s32 arg1, s64 arg2) {
    s32 var_2 = 0;
    if (arg2 != 0) {
        if (arg0->unk_00 & 0x1000) {
            arg0->unk_40 = -1;
        } else {
            s32 t4 = arg0->unk_08;
            s32 t2 = arg0->unk_10;
            if (t4 != t2) {
                s32 res = arg0->unk_50->fn7C(arg0, t2 - t4, 1);
                var_2 = -1;
                if (res == -1) {
                    return -1;
                }
                arg0->unk_40 = res;
            }
        }
        {
            s64 temp_18 = arg0->unk_50->fn74(arg0, arg1, (u64)arg2);
            u16 u = arg0->unk_48;
            if (u != 0) {
                arg0->unk_48 = (u16)(func_003D89B0(u - 1, arg1, arg2) + 1);
            }
            s32 t = arg0->unk_1C;
            arg0->unk_0C = t;
            arg0->unk_04 = t;
            arg0->unk_08 = t;
            arg0->unk_14 = t;
            arg0->unk_10 = t;
            s32 v4 = t;
            if (!(arg0->unk_00 & 0x202)) {
                v4 = arg0->unk_20;
            }
            arg0->unk_18 = v4;
            var_2 = ((s32)temp_18 ^ (s32)arg2) == 0 ? 0 : -1;
        }
    }
    return var_2;
}
