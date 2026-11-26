extern s32 func_0024A308(void *, s32, s32, s32, s32, s32);

s32 func_00249068(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 n = (*(s32 *)((char *)arg0 + 0x34) - *(s32 *)((char *)arg0 + 0x30)) >> 2;
    s32 found = 0;
    s32 i = 0;
    if (n > 0) {
        do {
            s32 v = *(s32 *)(*(char **)((char *)arg0 + 0x30) + (i << 2));
            if (v != 0) {
                if (func_0024A308(arg0, arg1, arg2, arg3, v, arg4) != 0)
                    found = 1;
            }
            i++;
        } while (i < n);
    }
    return found;
}
