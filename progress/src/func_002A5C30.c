/* identical to func_001EAE10 (matched), with its names changed by decompdecomp */
extern void func_001D2488(s32, void *);

s32 *func_002A5C30(s32 *arg0, s32 arg1, s32 *arg2) {
    s32 *var_16;
    s32 *var_17;
    var_17 = arg0;
    var_16 = arg2;
    if (var_17 != arg1) {
        do {
            if (var_16 != NULL) {
                *var_16 = *(s32 *)var_17;
                func_001D2488((s32)((u8 *)var_16 + 4), (void *)((u8 *)var_17 + 4));
            }
            var_17 = (s32 *)((u8 *)var_17 + 8);
            var_16 = (s32 *)((u8 *)var_16 + 8);
        } while (var_17 != arg1);
    }
    return var_16;
}
