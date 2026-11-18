void func_0022E748(void *arg0, void *arg1, s32 arg2) {
    if (arg2 <= 0) return;
    do {
        f32 v = *(f32 *)((u8 *)arg1 + 4);
        *(f32 *)((u8 *)arg1 + 4) = v + v;
        arg1 = (u8 *)arg1 + 0xC;
        arg2--;
    } while (arg2 != 0);
}
