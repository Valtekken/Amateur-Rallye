/* identical to func_003CB1C0 (matched), with its names changed by decompdecomp */
void func_003CB278(void **arg0, s64 arg1) {
    s32 *p = *arg0;
    *p++ = (s32)arg1;
    *p = (s32)(arg1 >> 32);
    *arg0 = p + 1;
}
