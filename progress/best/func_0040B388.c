extern s32 Deci2Call_2(s32, void *, s32, s32, s32, s32);
extern s32 D_004A1768;

void func_0040B388(s32 arg0, s32 arg1, s32 arg2) {
    s32 base = (s32)&D_004A1768 | 0x20000000;
    Deci2Call_2(1, (void *)((s32)&D_004A1768 & 0xFFFF), arg0 & 0xFFFF, arg1, arg2, base);
}
