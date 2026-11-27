extern void func_003A3170(s32, s32);
extern s32 func_003A3948(void *);
extern s32 func_003A39C0(void *);
extern s32 func_003A3B08(void *);
extern s32 func_003B30B0(void *, s32);
extern s32 func_003B3118(void *, s32);
extern void func_003B3180(void *, s32);
extern void func_003B31F0(void *, s32);
extern s32 *func_003B3270(void *);
extern void func_003B32C8(void *);
extern void func_003B3320(s32, s32 *);

s32 func_003B13A0(void *arg0, s32 arg1) {
    s32 sp0;
    s32 sp4;
    s32 sp8;
    s32 spC;
    s32 sp10;
    s32 temp_3;
    s32 temp_3_2;

    temp_3 = *(s32 *)((u8 *)arg0 + 0x30);
    sp0 = temp_3;
    *(s32 *)((u8 *)arg0 + 0x30) = temp_3 + 1;
    if (*(s32 *)((u8 *)arg0 + 0x34) < *(s32 *)((u8 *)arg0 + 0x30)) {
        *(s32 *)((u8 *)arg0 + 0x34) = *(s32 *)((u8 *)arg0 + 0x30);
    }
    sp4 = func_003A3948((u8 *)arg0 + 0x24);
    if (sp0 >= sp4) {
        sp8 = (sp0 + 0x40) & ~0x3F;
        func_003B3180((u8 *)arg0 + 0x24, sp8);
        func_003B31F0((u8 *)arg0 + 0xC, sp8);
    }
    func_003A3170(func_003B30B0((u8 *)arg0 + 0x24, sp0), arg1);
    if (func_003A3B08((u8 *)arg0 + 0x18) != 0) {
        sp8 = *func_003B3270((u8 *)arg0 + 0x18);
        func_003B32C8((u8 *)arg0 + 0x18);
    } else {
        temp_3_2 = *(s32 *)((u8 *)arg0 + 0x38);
        sp8 = temp_3_2;
        *(s32 *)((u8 *)arg0 + 0x38) = temp_3_2 + 1;
        spC = func_003A39C0(arg0);
        if (sp8 >= spC) {
            sp10 = (sp8 + 0x40) & ~0x3F;
            func_003B31F0(arg0, sp10);
        }
    }
    func_003B3320(func_003B3118(arg0, sp8), &sp0);
    func_003B3320(func_003B3118((u8 *)arg0 + 0xC, sp0), &sp8);
    return sp8;
}
