typedef struct S002DA068 {
    s32 unk0;
    f32 unk4;
    f32 unk8;
    f32 unkC;
    f32 unk10;
    f32 unk14;
    f32 unk18;
    f32 unk1C;
} S002DA068;

extern void func_002DA5A8(S002DA068 *arg0, S002DA068 *arg1, S002DA068 *arg2, s32 arg3);
extern S002DA068 *func_002DA780(S002DA068 *arg0, S002DA068 *arg1, S002DA068 *arg2);

void func_002DA8D8(S002DA068 *arg0, S002DA068 *arg1, S002DA068 *arg2, s32 arg3) {
    S002DA068 sp;
    S002DA068 *sp4;
    S002DA068 *sp10;
    S002DA068 *pivot;
    S002DA068 *mid;
    S002DA068 *last;
    S002DA068 *p4;
    S002DA068 *p10;
    s32 count;

    count = (s32)(arg1 - arg0);
    if (count < 0x11) {
        return;
    }

    sp4 = (S002DA068 *)((char *)&sp + 4);
    sp10 = (S002DA068 *)((char *)&sp + 0x10);

loop_2:
    if (arg3 == 0) {
        func_002DA5A8(arg0, arg1, arg1, 0);
        return;
    }

    {
        s32 byteCount = (s32)((char *)arg1 - (char *)arg0);
        f32 f2 = arg0->unk1C;
        s32 cond;
        s32 cond2;

        arg3--;
        last = arg1 - 1;
        mid = arg0 + ((s32)((byteCount >> 5) + ((u32)byteCount >> 31)) >> 1);

        {
            f32 f1 = mid->unk1C;

            cond = 1;
            if (!(f2 < f1)) {
                cond = 0;
            }

            if (cond != 0) {
                cond2 = 1;
                if (!(f1 < last->unk1C)) {
                    cond2 = 0;
                }
                if (cond2 != 0) {
                    pivot = mid;
                } else {
                    cond2 = 1;
                    if (!(f2 < last->unk1C)) {
                        cond2 = 0;
                    }
                    pivot = arg0;
                    if (cond2 != 0) {
                        pivot = last;
                    }
                }
            } else {
                cond = 1;
                if (!(f2 < last->unk1C)) {
                    cond = 0;
                }
                if (cond != 0) {
                    pivot = arg0;
                } else {
                    cond2 = 1;
                    if (!(f1 < last->unk1C)) {
                        cond2 = 0;
                    }
                    pivot = mid;
                    if (cond2 != 0) {
                        pivot = last;
                    }
                }
            }
        }

        p4 = (S002DA068 *)((char *)pivot + 4);
        p10 = (S002DA068 *)((char *)pivot + 0x10);
        sp.unk0 = pivot->unk0;
        sp.unk4 = pivot->unk4;
        sp4->unk4 = *(f32 *)((char *)p4 + 4);
        sp4->unk8 = *(f32 *)((char *)p4 + 8);
        sp.unk10 = pivot->unk10;
        sp10->unk4 = *(f32 *)((char *)p10 + 4);
        sp10->unk8 = *(f32 *)((char *)p10 + 8);
        sp.unk1C = pivot->unk1C;

        {
            S002DA068 *tmp = func_002DA780(arg0, arg1, &sp);
            func_002DA8D8(tmp, arg1, 0, arg3);
            arg1 = tmp;
        }
    }

    count = (s32)(arg1 - arg0);
    if (count >= 0x11) {
        goto loop_2;
    }
}
