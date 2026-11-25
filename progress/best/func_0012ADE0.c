void func_0012ADE0(void *arg0) {
    if (*(s32*)((u8*)arg0 + 0x18) != 0) {
        *(f32*)((u8*)arg0 + 0x14) = *(f32*)((u8*)arg0 + 0x14) * 0.7f;
        return;
    }
    *(f32*)((u8*)arg0 + 0x14) = 1.0f - ((1.0f - *(f32*)((u8*)arg0 + 0x14)) * 0.7f);
}
