extern s32 func_003A8528(s32, s32);

s32 func_0039AB80(s32 arg0, s32 arg1, s32 arg2, s8 arg3) {
    s32 sp0;
    s32 sp4;
    s32 sp8;
    s8 spC;
    s32 sp10;

    sp0 = arg0;
    sp4 = arg1;
    sp8 = arg2;
    spC = arg3;
    sp10 = arg2;
loop_1:
    if (sp0 != sp4) {
        func_003A8528(sp10, sp0);
        sp0 += 0x30;
        sp10 += 0x30;
        goto loop_1;
    }
    return sp10;
}
