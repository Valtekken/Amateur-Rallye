extern f32 D_004297F0;
extern char D_00483560[];
extern char D_00483598[];
extern char D_004835B8[];

void *func_002CE9C0(void *, s32);
s32 func_002CEAF8(void *);
void func_002CEE90(s32, s32, f32);
extern s32 func_003F9698(const char *, ...);

void func_002CEBC0(void *arg0, s32 arg1, f32 fparg0) {
    void *t;
    func_003F9698(D_00483560);
    func_003F9698(D_00483598, arg0);
    func_003F9698(D_00483560);
    t = func_002CE9C0(arg0, 1);
    if (t != NULL && func_002CEAF8(t) != 0) {
        func_002CEE90(*(s32 *)((u8 *)t + 4), arg1, fparg0);
        D_004297F0 = fparg0;
    } else if (t != NULL) {
        func_003F9698(D_004835B8, arg0);
    }
}

extern s32 func_002CEDC8(f32);
extern s32 func_0030CA08(s32);
extern s32 func_0030D4D0(s32);
extern s32 func_003F9698(s32 *);
extern s32 D_004297F4;
extern s32 D_004835D8;

void func_002CECB0(void) {
    func_002CEDC8(0.0f);
    s32 one = 1;
    D_004297F4 = one;
    func_0030CA08(0);
    func_0030CA08(1);
    func_0030D4D0(0);
    func_003F9698(&D_004835D8);
}

typedef void (*Handler)(void);
extern Handler D_00437E58;
extern char D_00439570[], D_00484100[];
extern Handler func_002ABA80(int);
extern int func_002B1FC0(int);
extern void *func_003D4938(void *, void *);
extern void func_003D4F40(void *);

void func_002E49A8(int p) {
    void (*raise_error)(void *) = func_003D4F40;
    Handler h;
    do {
        h = D_00437E58;
        if (!h) {
            char *msg = D_00484100;
            raise_error(func_003D4938(D_00439570, msg));
            h = func_002ABA80(1);
        }
        h();
    } while (!func_002B1FC0(p));
}

extern s32 func_0030D390(s32, s32, s32, s32);

void func_002CDD48(s32 arg0, s32 arg1) {
    s32 t = arg1 < 0x30;
    s32 a = (arg0 > 1) ? arg0 : 2;
    s32 b = t ? 0x2F : arg1;
    func_0030D390(a, b, t, 2);
}
