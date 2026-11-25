extern volatile u16 D_0042DA10;
extern volatile u16 D_0042DA12;
void func_00310E68(void) {
    s16 t = (s16)D_0042DA12;
    s32 v = t + 1;
    s32 u = (s16)D_0042DA10;
    if (v >= 4) v = 0;
    if (v == u) return;
    D_0042DA12 = (u16)v;
}
