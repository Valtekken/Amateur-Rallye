s32 func_003AE568(register s32 arg0, register void *arg1) {
    ((s32 *)arg1)[0x28/4] = 2;
    ((s32 *)arg1)[0x2C/4] = 1;
    ((s32 *)arg1)[0x3C/4] = 1;
    ((s32 *)arg1)[0x40/4] = 0;
    *(f32 *)((char *)arg1 + 0x44) = 0.3f;
    return arg0;
}
