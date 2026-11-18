extern s32 func_003CE0D0(s32, s32);
extern s32 func_003D37E0(void *, s64 *, int *);

void func_003D04D0(void **arg0) {
    char *p = (char *)*arg0;
    if ((u32)*(s32 *)(p - 8) >= 2u) {
        func_003CE0D0(*(s32 *)(p - 0x10), 1);
    }
    *(s32 *)(p - 4) = 1;
}

s32 func_003D3A80(void *arg0, u16 *arg1) {
    s64 val;
    int flag;
    if (func_003D37E0(arg0, &val, &flag)) {
        if (flag) {
            val = -val;
        }
        *arg1 = (u16)val;
    }
    return (s32)arg0;
}

s32 func_003D3B40(void *arg0, s32 *arg1) {
    s64 val;
    int flag;
    if (func_003D37E0(arg0, &val, &flag)) {
        if (flag) {
            val = -val;
        }
        *arg1 = (s32)val;
    }
    return (s32)arg0;
}

s32 func_003D3C00(void *arg0, s64 *arg1) {
    s64 val;
    int flag;
    if (func_003D37E0(arg0, &val, &flag)) {
        if (flag) {
            val = -val;
        }
        *arg1 = val;
    }
    return (s32)arg0;
}
