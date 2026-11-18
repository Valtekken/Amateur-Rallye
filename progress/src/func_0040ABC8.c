extern s32 func_00405E90(void *, s32, s32, void *, s32, void *, s32, s32, s32);
extern s32 func_00409F48(void);
extern s32 D_004A14C0;
extern s32 D_004A16C0;

s32 func_0040ABC8(s32 arg0, void *arg1, s32 arg2) {
    s32 r;
    r = func_00409F48();
    if (r < 0) {
        return 0xFFFF0000;
    }
    *(s32 *)&D_004A14C0 = arg0;
    *(&D_004A14C0 + 1) = arg2;  /* +4 */
    if (arg2 == 0) {
        *((u8 *)&D_004A14C0 + 8) = *(u8 *)arg1;
    } else if (arg2 == 1) {
        *((u16 *)((u8 *)&D_004A14C0 + 8)) = *(u16 *)arg1;
    } else if (arg2 == 2) {
        *((s32 *)((u8 *)&D_004A14C0 + 8)) = *(s32 *)arg1;
    } else {
        return 0xFFFEFFFE;
    }
    r = func_00405E90(&D_004A16C0, 2, 0, &D_004A14C0, 0x20, &D_004A14C0, 0x10, 0, 0);
    if (r < 0) {
        return 0xFFFEFFFF;
    }
    return 0;
}
