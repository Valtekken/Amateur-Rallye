void func_00142068(void *arg1, f32 fparg0) {
    f32 sp0, sp4, sp8, spC;
    f32 temp_f12, var_f12, var_f1;
    var_f12 = fparg0;
    var_f1 = 1.0f;
    if (var_f12 > 1.0f) var_f12 = 1.0f;
    if (var_f12 < 0.0f) var_f12 = 0.0f;
    temp_f12 = 1.0f - var_f12;
    if (temp_f12 > 0.8f) {
        ((s32*)arg1)[3] = 0x3F800000;
        sp0=sp4=sp8=spC=1.0f;
        ((f32*)arg1)[0]=((f32*)arg1)[1]=((f32*)arg1)[2]=1.0f;
    } else if (temp_f12 > 0.6f && temp_f12 <= 0.8f) {
        ((f32*)arg1)[2]=0.0f;
        ((s32*)arg1)[3]=0x3F800000;
        sp0=0.0f; sp4=1.0f; sp8=0.0f; spC=1.0f;
        ((f32*)arg1)[0]=0.0f;
    } else if (temp_f12 > 0.4f && temp_f12 <= 0.6f) {
        sp8=0.0f;
        ((s32*)arg1)[3]=0x3F800000;
        ((f32*)arg1)[2]=sp8;
        sp0=1.0f; sp4=1.0f; spC=1.0f;
        ((f32*)arg1)[0]=((f32*)arg1)[1]=1.0f;
    } else if (temp_f12 > 0.2f && temp_f12 <= 0.4f) {
        ((f32*)arg1)[1]=0.75f;
        ((f32*)arg1)[2]=0.3f;
        ((s32*)arg1)[3]=0x3F800000;
        sp0=1.0f; sp4=0.75f; sp8=0.3f; spC=1.0f;
        ((f32*)arg1)[0]=1.0f;
    } else {
        sp4=0.0f;
        ((s32*)arg1)[3]=0x3F800000;
        ((f32*)arg1)[2]=sp4;
        sp0=1.0f; sp8=0.0f; spC=1.0f;
        ((f32*)arg1)[0]=1.0f;
        ((f32*)arg1)[1]=sp4;
    }
    ((s32*)arg1)[3]=0;
}
