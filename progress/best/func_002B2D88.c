extern void func_003CCE88(s32, s32, const char *, s32);
extern void func_003CC9E8(s32, s32, s32 *);
extern s32 func_003FA310(char *, const char *, ...);
extern void func_003FA634(void *, char *);
extern s32 func_003CCCA8(s32, s32, char *, s32, s32, char *);

extern const char D_0047E250[];
extern const char D_0047E280[];
extern char D_0047E288[8];
extern const char D_0047E290[];
extern char D_0047E298[8];

struct UnkObj {
    char pad_0[0x18];
    char *unk18;
};

s32 func_002B2D88(struct UnkObj *arg0, s32 arg1, s32 arg2, void *arg3) {
    char buf1[32];
    s32 sp50;
    s32 sp54;
    char buf2[64];
    volatile char pad[0x30];

    sp50 = 0;
    func_003CCE88(arg1, arg2, D_0047E250, 0);
    func_003CC9E8(0, 0, &sp50);
    func_003FA310(buf1, D_0047E280);
    sp50 = func_003CCCA8(arg1, arg2, buf1, 0, 1, arg0->unk18);
    func_003CC9E8(0, 0, &sp50);
    func_003FA310((char *)arg3, D_0047E288);
    sp54 = 0;
    do {
        func_003FA310(buf2, D_0047E290, arg0->unk18 + 0x20);
        func_003FA634(arg3, buf2);
        sp54 += 1;
        sp50 = func_003CCCA8(arg1, arg2, buf1, 1, 1, arg0->unk18);
        func_003CC9E8(0, 0, &sp50);
    } while (sp50 > 0);
    func_003FA634(arg3, D_0047E298);
    return sp54;
}
