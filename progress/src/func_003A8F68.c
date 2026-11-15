s32 func_003A0BD8(s32, s32);
s32 func_00219DA8(s32, s32);

s32 func_003A5DC8(register s32 arg0, register s32 arg1) {
    func_003A0BD8(arg0, arg1);
    func_00219DA8(arg0 + 0xC, arg1 + 0xC);
    return arg0;
}

void *func_003A8F68(register void *arg0) {
    return *(void **)arg0 + 0x4;
}

void *func_003A8FA0(register void *arg0) {
    return *(void **)arg0 + 0x8;
}

void *func_003A8FD8(register void *arg0) {
    return *(void **)arg0 + 0xC;
}
