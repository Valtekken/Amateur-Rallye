extern s32 D_0044E7F0;
extern s32 D_0044E7F4;
extern s32 D_0040E67C;
extern char D_0047EDA0[];
extern char D_0047EDA8[];
extern char D_0047EDB0[];
extern s32 func_002B61D0(void *, const char *, s32);
extern void func_002B6108(void *, const char *);
extern void *func_002BB060(void);
extern void func_002BB840(void *, s32, s32);

void func_002B5F48(void *arg0) {
    s32 v;
    if (D_0044E7F0 != 0) {
        v = func_002B61D0(arg0, D_0047EDA0, 0);
        func_002B6108(arg0, D_0047EDA0);
    } else {
        v = func_002B61D0(arg0, D_0047EDA8, 0);
        func_002B6108(arg0, D_0047EDA8);
    }
    if (D_0044E7F4 != 0) {
        func_002BB840(func_002BB060(), D_0040E67C, v);
        func_002B6108(arg0, D_0047EDB0);
    }
}
