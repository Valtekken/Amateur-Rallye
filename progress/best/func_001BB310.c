#define A(p,t,o) (*(t*)((char*)(p)+(o)))
typedef struct { char b[0x18]; s16 o2; u16 p2; void *f2; s16 o1; u16 p3; void *f1; } VT;
extern void *func_00201350(void);
extern void func_0021E4F0(s32);
extern s32 func_001E4280(void);
extern void func_001D4040(void *, char *);
extern s32 func_001E3598(s32, void *);
extern void *D_002AD408(s32);
extern void *func_001BB4E8(void *);
extern void *func_001C0288(void *);
extern void *func_001BDF68(void *);
extern char D_0044E870[], D_0044EA80[], D_00472D48[];

void func_001BB310(void *arg0, s32 arg1) {
    int k, x, y, z;
    VT *vt;
    if (A(arg0, s32, 0x10) >= A(func_00201350(), s32, 0x10)) {
        func_0021E4F0(arg1);
        return;
    }
    { int t = func_001E4280(); func_001D4040(&k, D_0044E870); x = func_001E3598(t, &k); }
    { int t = func_001E4280(); func_001D4040(&k, D_0044EA80); y = func_001E3598(t, &k); }
    { int t = func_001E4280(); func_001D4040(&k, D_00472D48); z = func_001E3598(t, &k); }
    if (y != 0) A(arg0, void *, 0xC) = func_001BB4E8(D_002AD408(0x80));
    else if (x != 0 || z != 0) A(arg0, void *, 0xC) = func_001C0288(D_002AD408(0x80));
    else A(arg0, void *, 0xC) = func_001BDF68(D_002AD408(0x7C));
    vt = *(VT **)A(arg0, void *, 0xC);
    ((void (*)(void *, s32, void *))vt->f1)((char *)A(arg0, void *, 0xC) + vt->o1, A(arg0, s32, 0x10), A(arg0, void *, 0xC));
    vt = *(VT **)A(arg0, void *, 0xC);
    ((void (*)(void *, s32, void *))vt->f2)((char *)A(arg0, void *, 0xC) + vt->o2, arg1, A(arg0, void *, 0xC));
}
