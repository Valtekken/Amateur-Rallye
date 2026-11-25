extern volatile u16 D_0042DA10;
void func_003110C0(void) {
    s32 v = (s16)D_0042DA10;
    v = v + 1;
    if (v >= 4) v = 0;
    D_0042DA10 = (u16)v;
}
