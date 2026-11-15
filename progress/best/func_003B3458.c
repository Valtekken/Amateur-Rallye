s32 func_003B1F80(s32);
s32 func_003B35F0(s32, s32);
void *func_003B3D88(void *, s32 *);
void *func_003B3DC0(s32, s32, void *);
void *func_003A3A38(void *, s32);

s32 func_003B31F0(register s32 arg0, register s32 arg1) {
    s32 val = -1;
    func_003B3D88((void *)arg0, &val);
    func_003B3DC0(arg0, arg1, (void *)arg0);
    func_003A3A38((void *)arg0, 2);
    return 0;
}

extern s32 func_003A3B80(s32);

s32 func_003B3270(register s32 arg0) {
    s32 val = func_003A3B80(arg0);
    return val + (s32)0xFFFFFFFC;
}

extern void func_003B2FE0(s32);

void func_003B32C8(register void *arg0) {
    s32 *p = (s32 *)((u8 *)arg0 + 4);
    *p = *p + (s32)0xFFFFFFFC;
    func_003B2FE0(*p);
}

s32 func_003B3458(register s32 arg0) {
    return arg0;
}
