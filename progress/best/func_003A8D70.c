extern s64 *func_002AFEB8(s32, s32);

s64 *func_003A8D70(register s32 arg0, register s64 *arg1) {
    register s64 *res;
    res = func_002AFEB8(8, arg0);
    if (res != NULL) {
        *res = *arg1;
    }
    return res;
}
