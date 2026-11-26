extern s32 func_00249218(void *, s32, s32, s32, s32, s32);

s32 func_00249140(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 found = 0, i = 0;
    s32 n = (*(s32 *)((char *)arg0 + 0x5C) - *(s32 *)((char *)arg0 + 0x58)) >> 2;
    if (n > 0) {
        do {
            s32 v = *(s32 *)(*(char **)((char *)arg0 + 0x58) + (i << 2));
            if (v != 0) {
                if (func_00249218(arg0, arg1, arg2, arg3, v, arg4) != 0)
                    found = 1;
            }
            i++;
        } while (i < n);
    }
    return found;
}
