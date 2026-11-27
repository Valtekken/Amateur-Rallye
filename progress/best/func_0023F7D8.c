extern void func_002412C0(void *);
extern void func_0024F770(s32, void *, void *, void *, void *, f32, f32, f32, f32, f32, f32);

void func_0023F7D8(void *arg0) {
    f32 temp_f0, temp_f0_2, temp_f2, temp_f2_2, temp_f3, temp_f3_2;
    f32 temp_f4, temp_f4_2, temp_f5, temp_f5_2, temp_f7, temp_f7_2;
    void *temp_2, *temp_2_2, *temp_3, *temp_3_2, *temp_7, *temp_7_2, *temp_8, *temp_8_2;

    if (*(s32 *)((u8 *)arg0 + 0x34) != 0) {
        void *temp_8 = *(void **)((u8 *)arg0 + 0x2C);
        temp_2 = (void *)((u8 *)temp_8 + 0xBC);
        if (temp_8 != NULL) {
            temp_3 = (void *)((u8 *)temp_8 + 0x94);
            temp_f0 = *(f32 *)((u8 *)temp_8 + 0x94);
            temp_7 = (void *)((u8 *)temp_8 + 0xA0);
            temp_f7 = *(f32 *)((u8 *)temp_3 + 4);
            temp_f2 = *(f32 *)((u8 *)temp_3 + 8);
            temp_f5 = (temp_f0 * *(f32 *)((u8 *)temp_2 + 4)) + (temp_f7 * *(f32 *)((u8 *)temp_2 + 8)) + (temp_f2 * *(f32 *)((u8 *)temp_7 + 4));
            temp_f4 = (temp_f0 * *(f32 *)((u8 *)temp_2 + 0xC)) + (temp_f7 * *(f32 *)((u8 *)temp_2 + 0x10)) + (temp_f2 * *(f32 *)((u8 *)temp_7 + 8));
            temp_f3 = (temp_f0 * *(f32 *)((u8 *)temp_2 + 0x18)) + (temp_f7 * *(f32 *)((u8 *)temp_2 + 0x1C)) + (temp_f2 * *(f32 *)((u8 *)temp_7 + 0x10));
            func_0024F770(*(s32 *)((u8 *)arg0 + 0x24), temp_2, temp_3, temp_7, temp_8, *(f32 *)((u8 *)temp_8 + 0xA0) - temp_f5, *(f32 *)((u8 *)temp_7 + 4) - temp_f4, *(f32 *)((u8 *)temp_7 + 8) - temp_f3, temp_f5, temp_f4, temp_f3);
        }
    }
}
