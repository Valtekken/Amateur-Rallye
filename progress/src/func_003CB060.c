extern s32 D_0049BBC0[];
extern s32 D_0049B980[];
extern s32 func_00405E90(s32*, s32, s32, s32*, s32, s32*, s32, s32, s32);

s32 func_003CB060(void) {
    D_0049BBC0[0] = 0x12;
    if (func_00405E90(D_0049B980, 1, 0, D_0049BBC0, 0x80, D_0049BBC0, 0x80, 0, 0) < 0) {
        return 0;
    }
    return D_0049BBC0[3];
}
