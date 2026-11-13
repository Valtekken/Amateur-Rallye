extern s32 func_0024C5F0(s32);
extern s32 func_00250478(s32);

typedef struct S_func_00241210_arg0 {
    s32 f00;
    s32 f04;
    s32 f08;
    s32 *unkC;
    s32 *unk10;
    s32 f14;
    s32 *unk18;
    s32 *unk1C;
} S_func_00241210_arg0;

void func_00241210(S_func_00241210_arg0 *arg0) {
    s32 count;
    s32 i;

    count = (s32)(((u32)arg0->unk10 - (u32)arg0->unkC) >> 2);
    if (count > 0) {
        i = 0;
        do {
            func_0024C5F0(arg0->unkC[i]);
            i++;
        } while (i < count);
    }
    count = (s32)(((u32)arg0->unk1C - (u32)arg0->unk18) >> 2);
    if (count > 0) {
        i = 0;
        do {
            func_00250478(arg0->unk18[i]);
            i++;
        } while (i < count);
    }
}
