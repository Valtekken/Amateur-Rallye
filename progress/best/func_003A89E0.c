extern s32 func_003AF380(s32, s32);
extern s32 func_002AFEB8(s32, s32);
extern s32 func_003A8088(void *);
extern s32 func_0039B858(void *, s32, s32);
extern s32 func_003AF470(s32);

void func_003A8990(register s32 arg0, register s32 arg1) {
    func_003AF380(arg0, arg1);
}

void func_003A89E0(register s32 arg0, register s32 *arg1) {
    s32 *temp_2 = func_002AFEB8(4, arg0);
    if (temp_2 != NULL) {
        *temp_2 = *arg1;
    }
}

void func_003A8A68(register void *arg0, register s32 arg1) {
    typedef struct { s32 *begin, *end, *cap; } V;
    V *vec = (V *)arg0;
    if (vec->end != vec->cap) {
        func_003A89E0((s32)vec->end, arg1);
        vec->end = (s32 *)((char *)vec->end + 4);
    } else {
        func_0039B858(arg0, func_003A8088(arg0), arg1);
    }
}

s32 func_003A8B10(register s32 arg0, register s32 arg1) {
    return func_003AF470(arg1);
}
