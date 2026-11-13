s32 func_00151930(void *);
s32 func_003A31D8(void *);

s32 func_003AB660(register void *arg0) {
    if (*(s32 *)((s8 *)arg0 + 0xC) != 0) {
        return func_00151930(arg0);
    }
    (*(s32 *)((s8 *)arg0 + 8))++;
    return func_003A31D8(arg0);
}
