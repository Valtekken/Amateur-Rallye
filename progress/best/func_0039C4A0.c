s32 func_0039C430(s32 arg0);
s32 func_0039C468(s32 arg0, s32 arg1);
void func_0039C4A0(s32 arg0);
void *func_0039C6C8(void *arg0, void *arg1);

s32 func_0039C430(s32 arg0) {
    return arg0 + 0x10;
}

s32 func_0039C468(s32 arg0, s32 arg1) {
    return arg1;
}

void func_0039C4A0(s32 arg0) {
    s8 local;
    local = 0;
    func_0039C468((s32)&local, func_0039C430(arg0));
}

typedef struct { char b[8]; } U64B;
void *func_003A55E8(void *arg0, void *arg1);

void *func_0039C6C8(void *arg0, void *arg1) {
    func_003A55E8(arg0, arg1);
    *(U64B *)((char *)arg0 + 4) = *(U64B *)((char *)arg1 + 4);
    return arg0;
}
