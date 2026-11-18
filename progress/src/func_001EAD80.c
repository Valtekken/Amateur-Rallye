extern void *D_002AD5A8(s32);

void *func_001EAD80(register void *arg0, register s32 arg1) {
    arg1 = arg1 + 1;
    *(s32 *)((u8 *)arg0 + 0) = 0;
    *(s32 *)((u8 *)arg0 + 4) = 0;
    *(s32 *)((u8 *)arg0 + 8) = arg1;
    *(s32 *)((u8 *)arg0 + 0xC) = (s32)D_002AD5A8(arg1 * 4);
    return arg0;
}
