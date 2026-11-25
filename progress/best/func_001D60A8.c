extern char D_0048F200[];
extern s32 func_003FA9B8(char *);
extern void func_003FDAF0(char *, const char *, void *);

void func_001D60A8(void *arg0, const char *fmt, ...) {
    char *ap = (char *)__builtin_frame_address(0) + 0x90;
    {
        s32 i = 0;
        while (i < *(s32 *)((char *)arg0 + 4) * 2) {
            D_0048F200[i] = 0x20;
            i++;
        }
    }
    func_003FDAF0(D_0048F200 + *(s32 *)((char *)arg0 + 4) * 2, fmt, ap);
    {
        void *vt = *(void **)((char *)arg0 + 8);
        char *vp = (char *)vt + 0x70;
        s32 r = func_003FA9B8(D_0048F200);
        void (*fn)(void *, void *, s32) = (void (*)(void *, void *, s32))*(void **)(vp + 4);
        fn((char *)arg0 + *(s16 *)vp, D_0048F200, r);
    }
}
