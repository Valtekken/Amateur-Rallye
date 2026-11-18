f32 func_002004D0(void *arg0) {
    s32 a = *(s32*)((char*)arg0 + 0x8C);
    s32 b = *(s32*)((char*)arg0 + 0x88);
    if (a >= b) {
        return *(f32*)arg0;
    }
    {
        f32 f = *(f32*)arg0;
        return ((f32)a / (f32)b) * f;
    }
}

f32 func_00200510(void *arg0) {
    s32 a = *(s32*)((char*)arg0 + 0x8C);
    s32 b = *(s32*)((char*)arg0 + 0x88);
    if (a >= b) {
        return *(f32*)((char*)arg0 + 0x38);
    }
    {
        f32 f = *(f32*)arg0;
        (void)f;
        return ((f32)a / (f32)b) * *(f32*)((char*)arg0 + 0x38);
    }
}
