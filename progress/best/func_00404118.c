struct Unk18Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    char *unkC;
};

struct S_func_00404118_arg2 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    u8 *unk14;
    struct Unk18Struct *unk18;
};

extern void func_00404098(void *);
extern void func_00404E70(const char *, ...);
extern s32 func_0040B450(s32, void *, s32);
extern s32 func_0040B488(s32, s32, s32);

extern char D_0048C9F0[];
extern char D_0048CA18[];
extern char D_0048CA30[];
extern char D_0048CA48[];

void func_00404118(s32 arg0, s32 arg1, struct S_func_00404118_arg2 *arg2) {
    s32 r;
    u8 *p;
    u8 c;
    s32 var;

    if (arg0 == 3) {
        r = func_0040B488(arg2->unk0, arg2->unk10, arg2->unk4 & 0xFFFF);
        if (r >= 0) {
            arg2->unk10 = arg2->unk10 + r;
            arg2->unk4 = arg2->unk4 - r;
        } else {
            func_00404E70(D_0048CA30, r);
        }
        arg2->unkC = 0;
        return;
    }
    if (arg0 < 4) {
        if (arg0 > 0) {
            if (arg1 == 0) {
                p = arg2->unk14;
                var = 0xC;
                if ((s32)*(u16 *)p > 0xC) {
                    do {
                        c = p[var];
                        var = var + 1;
                        *arg2->unk18->unkC = c;
                        func_00404098(arg2->unk18);
                    } while (var < (s32)*(u16 *)arg2->unk14);
                }
                arg2->unk8 = 0;
            } else {
                if ((u32)(arg2->unk8 + arg1) >= 0x141U) {
                    func_00404E70(D_0048C9F0);
                }
                r = func_0040B450(arg2->unk0, arg2->unk14, arg1 & 0xFFFF);
                if (r < 0) {
                    func_00404E70(D_0048CA18);
                }
                arg2->unk8 = arg2->unk8 + r;
            }
        }
        return;
    }
    if (arg0 == 4) {
        if (arg2->unk4 != 0) {
            func_00404E70(D_0048CA48, arg2->unk4);
        }
        arg2->unkC = 0;
    }
}
