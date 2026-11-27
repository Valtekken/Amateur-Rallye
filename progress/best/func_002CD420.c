typedef struct { s32 unk0; s32 unk4; s32 unk8; s32 unkC; } S0;
typedef struct { s32 unk0; s32 unk4; s32 unk8; } S1;

extern void func_003ED178(void);
extern s32 func_003FA580(s32, s32);
extern s32 func_003ECE40(s32);
extern void *func_002CD250(s32);
extern s32 func_003FA310(void *, const char *, s32);
extern void func_002CF418(const char *);
extern void func_002CD548(S0 *);
extern s32 func_003D7CB0(s32);
extern void func_002CD598(S0 *, void *, void *);

extern const char D_004831B8[];
extern const char D_004831C8[];
extern const char D_004831D8[];
extern const char D_004831E8[];
extern const char D_004831F8[];

s32 func_002CD420(S0 *arg0, s32 arg1) {
    char buf[0x100];
    S1 *s3;
    s32 s2;

    func_003ED178();
    if ((arg0->unk0 == 0) || (func_003FA580(arg0->unk8, arg1) != 0)) {
        s2 = func_003ECE40(1);
        s3 = func_002CD250(arg1);
        arg0->unkC = func_003FA310(buf, D_004831B8, arg1);
        func_003FA310(buf + 0x80, D_004831C8, arg1);
        func_002CF418(D_004831D8);
        func_002CD548(arg0);
        arg0->unk8 = func_003D7CB0(arg1);
        func_002CF418(D_004831E8);
        func_002CD598(arg0, buf, buf + 0x80);
        func_002CF418(D_004831F8);
        arg0->unk4 = ((u32)s3->unk8 < (u32)arg0->unk4) ? s3->unk8 : arg0->unk4;
        func_003ECE40(s2);
        arg0->unk0 = 1;
    }
    arg0->unk0 = 1;
    return 1;
}
