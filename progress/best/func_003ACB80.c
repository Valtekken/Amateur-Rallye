typedef struct { s32 value; } CopyTag;
extern s32 func_002C5160(s32, s32, s32, CopyTag);

s32 func_003978C8(register s32 a, register s32 b, register s32 c) {
    return 0 + func_002C5160(a, b, c, (CopyTag){0});
}

extern s32 func_003B19A8(void *, s32);

void func_003ACA78(void *arg0, f32 arg1) {
    f32 v = arg1;
    *(u8 *)((char *)arg0 + 3) = (u8)func_003B19A8(arg0, (s32)(v * 255.0f));
}

extern void func_003B1A40(void *, void *);
extern void func_003A50F0(void *, void *);

void *func_003ACAE8(register void *arg0, register void *arg1) {
    func_003B1A40(arg0, arg1);
    func_003B1A40(arg0 + 0x10, arg1 + 0x10);
    func_003A50F0(arg0 + 0x20, arg1 + 0x20);
    *(s32 *)((char *)arg0 + 0x2C) = *(s32 *)((char *)arg1 + 0x2C);
    return arg0;
}

extern void func_003B1B40(void *, void *);
extern void func_003A4AB8(void *, void *);

void *func_003ACB80(register void *arg0, register void *arg1) {
    func_003B1B40(arg0, arg1);
    func_003B1B40(arg0 + 0x10, arg1 + 0x10);
    func_003A4AB8(arg0 + 0x20, arg1 + 0x20);
    *(s32 *)((char *)arg0 + 0x2C) = *(s32 *)((char *)arg1 + 0x2C);
    return arg0;
    goto Lend;
    goto Lend;
Lend:
    ;
}
