extern s32 D_0049BBC0[];
extern s32 D_0049B980[];
extern s32 func_00405E90(s32*, s32, s32, s32*, s32, s32*, s32, s32, s32);

s32 func_003CB0C8(s32 arg0) {
    D_0049BBC0[1] = arg0;
    D_0049BBC0[0] = 0x14;
    if (func_00405E90(D_0049B980, 1, 0, D_0049BBC0, 0x80, D_0049BBC0, 0x80, 0, 0) < 0) {
        return 0;
    }
    return D_0049BBC0[2];
}
