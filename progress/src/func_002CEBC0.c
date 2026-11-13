extern f32 D_004297F0;
extern char D_00483560[];
extern char D_00483598[];
extern char D_004835B8[];

void *func_002CE9C0(void *, s32);
s32 func_002CEAF8(void *);
s32 func_002CEE90(s32, s32, f32);
s32 func_003F9698(const char *, ...);

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
