extern s32 D_002AD408(s32);
extern s32 func_0011DA70(s32, s32);
extern s32 func_00297500(void);
extern s32 func_002971B0(s32);
extern void func_00297398(s32, s32);
extern s32 func_00196028(void);
extern s32 func_00194D58(s32, s32);
extern void func_001D4040(void *, char *);
extern void func_001E3D10(s32, void *, s32);
extern char D_00449028[], D_00449050[];

typedef struct { char pad[0xC]; s32 v; } A;

void func_0012A2E8(A *arg0) {
    char sp[0x10];
    s32 r, h1, h2, h3, h4;
    arg0->v = func_0011DA70(D_002AD408(0x10), 0x1E);
    r = func_00297500();
    if (func_002971B0(r) == -1) {
        func_00297398(func_00297500(), 1);
    }
    if (func_00194D58(func_00196028(), 0x3C) == 1) {
        h1 = func_001E4280();
        func_001D4040(sp, D_00449028);
        func_001E3D10(h1, sp, 1);
    } else {
        h2 = func_001E4280();
        func_001D4040(sp, D_00449028);
        func_001E3D10(h2, sp, 0);
    }
    if (func_00194D58(func_00196028(), 0x47) == 1) {
        h3 = func_001E4280();
        func_001D4040(sp, D_00449050);
        func_001E3D10(h3, sp, 1);
    } else {
        h4 = func_001E4280();
        func_001D4040(sp, D_00449050);
        func_001E3D10(h4, sp, 0);
    }
}
