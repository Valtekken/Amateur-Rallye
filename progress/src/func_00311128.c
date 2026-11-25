/* identical to func_003110C0 (matched), with its names changed by decompdecomp */
extern volatile u16 D_0042DA12;
void func_00311128(void) {
    s32 v = (s16)D_0042DA12;
    v = v + 1;
    if (v >= 4) v = 0;
    D_0042DA12 = (u16)v;
}
