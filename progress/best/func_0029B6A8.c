s32 func_002971B0(s32);
s32 func_00297340(s32, s32);
s32 func_00297500();
void func_0029B6A8(void *arg0) {
    s32 t;
    if (func_00297340(func_00297500(), *(s32*)((char*)arg0+0xC)) == 0) {
        if (func_002971B0(func_00297500()) != *(s32*)((char*)arg0+0xC)) {
            *(s32*)((char*)arg0+0x44) = 0;
        }
    } else {
        if (*(s32*)((char*)arg0+0x20) != 0) {
            t = *(s32*)((char*)arg0+0x50);
            if (t == *(s32*)((char*)arg0+0x1C)) {
                *(s32*)((char*)arg0+0x44) = 0;
            } else if (t != 0) {
                goto skip;
            }
        }
        *(s32*)((char*)arg0+0x44) = 1;
    }
skip:
    if (*(s32*)((char*)arg0+0x44) == 0) {
        t = *(s32*)((char*)arg0+0x50);
        if (t > 0) {
            *(s32*)((char*)arg0+0x50) = t - 1;
        }
    } else {
        t = *(s32*)((char*)arg0+0x50);
        if (t < *(s32*)((char*)arg0+0x1C)) {
            *(s32*)((char*)arg0+0x50) = t + 1;
        }
    }
    {
        s32 a = *(s32*)((char*)arg0+0x50);
        s32 b = *(s32*)((char*)arg0+0x18);
        if (a >= b) {
            f32 f1 = *(f32*)((char*)arg0+0x4C);
            f32 f2 = (f32)(a - b);
            f32 f0 = *(f32*)((char*)arg0+0x10);
            *(f32*)((char*)arg0+0x48) = f0 + f1 * f2;
        }
    }
}
