extern void func_001246B8(void);
extern void func_0011DFB8(s32);
extern s32 func_0011E528(s32);
extern void func_001244A8(void*);
extern s32 func_0011E2B8(s32, s32);
extern void func_00124360(void*);
extern void func_0011E278(s32, s32);
extern int func_001D2458(void*, const char*);
extern void func_001E3FE0(s32, void*, void*);
extern void D_002AD390(void*);
extern char D_004481B8[], D_00445B78[], D_00445B90[];
#define X (*(s32*)((char*)arg0+0xC))
void func_001241E8(void *arg0) {
    s32 buf1[4], buf2a[4], buf2b[4], key;
    func_001246B8();
    func_0011DFB8(X);
    if (func_0011E528(X) == 0) {
        s32 r;
        func_001244A8(arg0);
        r = func_0011E2B8(X, 1);
        switch (r) {
        case -3:
            func_0011E278(X, 0xC);
            break;
        case 1: case 2: case 3: case 6:
            func_00124360(arg0);
            func_0011E278(X, 0xC);
            break;
        case 4:
            func_00124360(arg0);
            key = func_001E4280();
            func_001D2458(buf1, D_004481B8);
            func_001D2458(buf2a, D_00445B78);
            func_001E3FE0(key, buf1, buf2a);
            D_002AD390((void*)buf2a[0]);
            D_002AD390((void*)buf1[0]);
            func_0011E278(X, 3);
            break;
        case 5:
            func_00124360(arg0);
            key = func_001E4280();
            func_001D2458(buf1, D_004481B8);
            func_001D2458(buf2b, D_00445B90);
            func_001E3FE0(key, buf1, buf2b);
            D_002AD390((void*)buf2b[0]);
            D_002AD390((void*)buf1[0]);
            func_0011E278(X, 3);
            break;
        }
    }
}
