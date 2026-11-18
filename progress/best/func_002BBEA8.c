extern s32 func_002AD350(void *, f32);
extern void func_002B2028(void *);
extern s32 func_002BB070(void *);
extern void func_002BB150(void *, s32, void *);
extern void func_003F9698(void *, s32, void *);

extern u8 D_00428978[];
extern char D_00480328[];
extern char D_00480350[];

void func_002BBEA8(s32 arg1) {
    void *var_16;
    s32 temp_3;
    void *temp_3_2;
    s32 temp_2;
    f32 var_f0;

    if (func_002BB070(D_00428978) != 0) {
        var_16 = (void *)((arg1 * 0xC) + (s32)D_00428978);
    } else {
        var_16 = NULL;
    }
    if (var_16 != NULL) {
        temp_3 = *(s32 *)((u8*)var_16 + 4);
        if (temp_3 != 0 && (u32)temp_3 != 0xFFFFFFFFu) {
            temp_3_2 = *(void **)((u8*)var_16 + 0);
            temp_2 = *(s32 *)((u8*)temp_3_2 + 8);
            if (temp_2 >= 0) {
                var_f0 = (f32) temp_2;
            } else {
                var_f0 = 2.0f * (f32) ((temp_2 & 1) | ((u32) temp_2 >> 1));
            }
            func_003F9698(D_00480328, func_002AD350(D_00428978, var_f0 * 0.0000009536743f), (u8*)temp_3_2 + 0x18);
            func_002B2028(*(void **)((u8*)var_16 + 4));
            *(s32 *)((u8*)var_16 + 4) = 0;
        }
    }
    func_002BB150(D_00428978, arg1, D_00480350);
}
