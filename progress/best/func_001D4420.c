typedef struct {
    void *unk0; // +0x0
    void *unk4; // +0x4
    s32 unk8;   // +0x8
} S_func_001D4388_arg0;

extern s32 func_00152D28(s32);
extern s32 func_002B1FC0(s32);
extern void func_002B2028(void *);
extern s32 func_003D2910(s32);
extern void func_003F93CC(void *, s32, s32);

extern s32 D_0040E618[];

void func_001D4420(void *arg0, u32 arg1) {
    S_func_001D4388_arg0 *p = (S_func_001D4388_arg0 *)arg0;
    s32 temp_18 = p->unk0;
    s32 temp_diff = (s32)((p->unk8 - temp_18) >> 2);
    s32 var_16 = 0;
    s32 var_19 = 0;
    if (temp_diff < (s32)arg1) {
        if (arg1 != 0) {
            var_19 = arg1 * 4;
            if (var_19 != 0) {
                void *temp_2 = func_002B1FC0(var_19);
                if (temp_2 != NULL) {
                    var_16 = (s32)temp_2;
                } else {
                    var_16 = (s32)func_003D2910(var_19);
                }
            }
        }
        func_003F93CC((void *)var_16, temp_18, temp_diff * 4);
        // epilogue stubs omitted for brevity
        (void)arg1;
    }
}
