extern s32 func_001D2A40(s32, s32, s32);
extern void func_002B8438(void *);
extern char D_00484828[];
extern f32 func_003AC6C8(s32, s32);

void func_003A4DE8(register s32 arg0, register s32 arg1) {
    func_001D2A40(arg0, 0, arg1);
}

void *func_003A4B60(register void *arg0) {
    func_002B8438(arg0);
    *(char **)((char *)arg0 + 8) = D_00484828;
    return arg0;
}

f32 func_003A4B00(register s32 arg0, register s32 arg1) {
    return func_003AC6C8(arg0, arg1);
}

void *func_003A4AB8(register void *arg0, register void *arg1) {
    *(f32 *)arg0 = *(f32 *)arg1;
    *(f32 *)((char *)arg0 + 4) = *(f32 *)((char *)arg1 + 4);
    *(f32 *)((char *)arg0 + 8) = *(f32 *)((char *)arg1 + 8);
    return arg0;
}
