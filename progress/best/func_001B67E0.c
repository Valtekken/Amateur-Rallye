extern void *func_0021E9C0(s32, void *);
extern s32 func_0021F4B0(void);

s32 func_001B67E0(void *arg0) {
    void *temp_2 = func_0021E9C0(func_0021F4B0(), (char *)arg0 + 4);
    if (temp_2 == NULL) {
        return 0;
    }
    void *temp_2_2 = *(void **)((char *)temp_2 + 0x50);
    if (temp_2_2 == NULL) {
        return 0;
    }
    char *temp_3 = (char *)arg0 + 0x64;
    void *temp_2_3 = (char *)temp_2_2 + 0x50;
    *(f32 *)((char *)arg0 + 0x64) = *(f32 *)((char *)temp_2_2 + 0x50);
    f32 temp_f5 = *(f32 *)((char *)temp_2_3 + 4);
    *(f32 *)(temp_3 + 4) = temp_f5;
    f32 temp_f3 = *(f32 *)((char *)temp_2_3 + 8);
    *(f32 *)(temp_3 + 8) = temp_f3;
    if (*(s32 *)((char *)arg0 + 0xA4) != 0) {
        *(f32 *)((char *)arg0 + 0x70) = 0.0f;
        void *temp_2_4 = (char *)arg0 + 0x70;
        *(s32 *)((char *)temp_2_4 + 8) = 0;
        *(s32 *)((char *)temp_2_4 + 4) = 0;
    } else {
        void *temp_2_5 = (char *)arg0 + 0x94;
        void *temp_3_2 = (char *)arg0 + 0x70;
        f32 temp_f4 = 1.0f / *(f32 *)((char *)arg0 + 0xA0);
        f32 temp_f2 = temp_f3 - *(f32 *)((char *)temp_2_5 + 8);
        f32 temp_f1 = temp_f5 - *(f32 *)((char *)temp_2_5 + 4);
        f32 temp_f0 = *(f32 *)((char *)arg0 + 0x64) - *(f32 *)((char *)arg0 + 0x94);
        f32 sp8 = temp_f2 * temp_f4;
        *(f32 *)((char *)arg0 + 0x70) = temp_f0 * temp_f4;
        *(f32 *)((char *)temp_3_2 + 4) = temp_f1 * temp_f4;
        *(f32 *)((char *)temp_3_2 + 8) = sp8;
    }
    return 1;
}
