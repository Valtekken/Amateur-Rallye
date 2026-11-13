typedef struct { s8 unk_00; s8 unk_01; s8 unk_02; s8 unk_03; } S4;

void func_00340230(S4 *arg0, f32 arg1) {
    s32 v = (s32)(arg1 * 255.0f);
    s32 max = 0xFE;
    if (v < 2) {
        v = 2;
    } else if (max < v) {
        v = max;
    }
    arg0->unk_01 = (s8)v;
}

void func_00340270(S4 *arg0, f32 arg1) {
    s32 v = (s32)(arg1 * 255.0f);
    s32 max = 0xFE;
    if (v < 2) {
        v = 2;
    } else if (max < v) {
        v = max;
    }
    arg0->unk_02 = (s8)v;
}
