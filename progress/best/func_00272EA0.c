void *func_00272EA0(void *arg0, void *arg1, void *arg2) {
    if (arg0 != arg1) {
        do {
            arg0 = (char *)arg0 + 0x14;
            if (arg2 != NULL) {
                *(u32 *)arg2 = 0;
                *(u32 *)((char *)arg2 + 4) = 0;
                *(u32 *)((char *)arg2 + 8) = 0;
                *(f32 *)arg2 = *(f32 *)arg0;
                *(f32 *)((char *)arg2 + 4) = *(f32 *)((char *)arg0 + 4);
                *(f32 *)((char *)arg2 + 8) = *(f32 *)((char *)arg0 + 8);
                *(f32 *)((char *)arg2 + 0xC) = *(f32 *)((char *)arg0 + 0xC);
                *(u32 *)((char *)arg2 + 0x10) = *(u32 *)((char *)arg0 + 0x10);
                arg0 = (char *)arg0 + 0x14;
            }
            arg2 = (char *)arg2 + 0x14;
        } while (arg0 != arg1);
    }
    return arg2;
}
