extern void func_003CE0D0(void**, s32, s32);
extern void func_003D13B0(char*);
extern char D_00488CF0[];
extern s32 func_003CD948(void*, s32, s32, s32, s32);
extern s32 func_003CDC40(void*, s32, s32, s32, s32, s32);
extern s32 func_003F93CC(s32, s32, s32);

void *func_003CFF48(void **p, u32 pos) {
    void *q = *p;
    if (pos >= *(u32*)((char*)q - 0x10)) {
        func_003D13B0(D_00488CF0);
    }
    void *r = (char*)q + pos;
    if (*(u32*)((char*)q - 8) >= 2) {
        func_003CE0D0(p, *(s32*)((char*)q - 0x10), 1);
        r = (char*)*p + pos;
    }
    *(s32*)((char*)*p - 4) = 1;
    return r;
}

void func_003D0B80(void *arg0, s32 arg1, s32 arg2) {
    func_003CD948(arg0, 0, 0xFFFFFFFFu, arg1, arg2);
}

void func_003D0C50(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_003CDC40(arg0, 0, 0xFFFFFFFFu, arg1, arg2, arg3);
}

void func_003D0C80(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (arg3 != 0) {
        func_003F93CC(arg0 + 0x10 + arg1, arg2, arg3);
    }
}
