s32 func_00152B80(s32, s32 *);
s32 func_003A32A8(s32);
extern s32 D_0040E618[];

s32 func_00397048(s32 arg0) {
    s32 sp0;
    s32 sp4;
    s32 sp8;
    s32 **spC;
    s32 sp10;
    s32 *sp14;
    s32 *sp18;
    s32 sp1C;
    s32 *temp_2;
    s32 *temp_3;

    sp0 = arg0;
    sp4 = 0x14;
    sp8 = func_00152B80(arg0, &sp4);
    if (sp4 == 1) {
        return sp8;
    }
    temp_2 = &D_0040E618[func_003A32A8(sp0)];
    spC = (s32**)temp_2;
    sp10 = sp8;
    temp_3 = (s32*)(sp8 + sp0);
    sp18 = temp_3;
    *temp_2 = (s32)temp_3;
    sp1C = 1;
loop_3:
    sp14 = sp18;
    sp18 = (s32*)((s32)sp18 + sp0);
    if ((sp4 - 1) != sp1C) {
        *sp14 = (s32)sp18;
        sp1C += 1;
        goto loop_3;
    }
    *sp14 = 0;
    return sp10;
}
