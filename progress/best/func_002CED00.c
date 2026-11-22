extern s32 D_004297F4;
extern s32 D_004297F8;
extern void *func_002D04D0(void);
extern s32 func_0030C930(s32, s32, s32);

void func_002CED00(f32 fparg0) {
    s32 s0 = 0;
    s32 s1 = 0;
    s32 s2;
    f32 temp_f1;
    f32 mult_result;
    s32 temp;

    if (D_004297F4 != 0) {
        s0 = 0;
        s1 = 0;
    } else {
        temp_f1 = *(f32 *)((u8 *)func_002D04D0() + 0x14);
        mult_result = fparg0 * 16383.75f * temp_f1;
        temp = (s32)mult_result;
        if (temp < 0) {
            s1 = 0;
        } else if (temp < 0x3000) {
            s1 = temp;
        } else {
            s1 = 0x2FFF;
        }
        s0 = s1;
    }

    s2 = D_004297F8;
    if (s2 != s0) {
        func_0030C930(0, s0, s1);
        func_0030C930(1, s0, s1);
        D_004297F8 = s0;
    }
}
