extern void func_002412C0(void *);
extern void func_0024F770(s32, void *, void *, void *, void *, f32, f32, f32, f32, f32, f32);
extern void *D_00426478;

void func_0023F990(void *arg0) {
    if (*(s32 *)((u8 *)arg0 + 0x34) != 0) {
        void *temp_8 = *(void **)((u8 *)arg0 + 0x2C);
        if (temp_8) {
            void *temp_2 = (void *)((u8 *)temp_8 + 0xBC);
            void *temp_3 = (void *)((u8 *)temp_8 + 0x94);
            f32 temp_f1 = *(f32 *)((u8 *)temp_8 + 0x94);
            void *temp_7 = (void *)((u8 *)temp_8 + 0xA0);
            f32 temp_f6 = *(f32 *)((u8 *)temp_3 + 4);
            f32 temp_f8 = *(f32 *)((u8 *)temp_3 + 8);
            f32 temp_f5 = (temp_f1 * *(f32 *)((u8 *)temp_2 + 4)) + (temp_f6 * *(f32 *)((u8 *)temp_2 + 8)) + (temp_f8 * *(f32 *)((u8 *)temp_7 + 4));
            f32 temp_f4 = (temp_f1 * *(f32 *)((u8 *)temp_2 + 0xC)) + (temp_f6 * *(f32 *)((u8 *)temp_2 + 0x10)) + (temp_f8 * *(f32 *)((u8 *)temp_7 + 8));
            f32 temp_f3 = (temp_f1 * *(f32 *)((u8 *)temp_2 + 0x18)) + (temp_f6 * *(f32 *)((u8 *)temp_2 + 0x1C)) + (temp_f8 * *(f32 *)((u8 *)temp_7 + 0x10));
            func_0024F770(*(s32 *)((u8 *)arg0 + 0x24), D_00426478, temp_3, temp_7, temp_8, *(f32 *)((u8 *)temp_8 + 0xA0) - temp_f5, *(f32 *)((u8 *)temp_7 + 4) - temp_f4, *(f32 *)((u8 *)temp_7 + 8) - temp_f3, temp_f5, temp_f4, temp_f3);
        }
    }
}
