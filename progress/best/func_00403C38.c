extern s32 SetSyscall_7(s32, s32);
extern s32 Copy_4(s32, void *, s32);
extern s32 FlushCache_2(s32);
extern s32 GetEntryAddress_6(s32);

extern s32 D_00440968;
extern s32 D_004410A8;
extern s32 D_004410D0;

void func_00403C38(void) {
    s32 *var_17;
    u32 var_18;
    s32 temp_4, temp_5;

    if (!(*(s32 *)0x10001810 & 0x100)) {
        var_18 = 2;
        var_17 = (s32 *)&D_004410D0 + 4; /* +0x10 */
        SetSyscall_7(*((s32 *)&D_004410D0), *((s32 *)&D_004410D0 + 1));
        Copy_4(0x80076000, &D_00440968, 0x740);
        Copy_4(0x82000, &D_004410A8, 0x28);
        FlushCache_2(0);
        FlushCache_2(2);
        SetSyscall_7(*((s32 *)&D_004410D0 + 2), *((s32 *)&D_004410D0 + 3));
        do {
            var_18 += 1;
            temp_4 = *var_17;
            temp_5 = GetEntryAddress_6(*var_17);
            var_17 += 2;
            SetSyscall_7(temp_4, temp_5);
        } while (var_18 < 8U);
    }
}
