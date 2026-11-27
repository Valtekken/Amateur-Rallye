extern s32 func_002B1FC0(s32);
extern s32 func_001D1AD8(void *);
extern void func_001D4040(void *, char *);
extern void *func_002A1880(void *, void *, s32);
extern void func_001DF640(void *, void *, s32 *, s32 *);
extern s32 func_002B4740(s32, s32);
extern void func_002B33D8(s32, s32, s32, void *, s32, s32);
extern void func_002B2028(s32);
extern char D_00448868[];

typedef struct {
    char p0[0x64];
    char b64[0x1C];
    char b80[0x10];
    char b90[0x64];
    char bF4[0x1C];
    char b110[4];
    s32 v114;
    s32 v118;
    char b11C[4];
    s32 v120;
    s32 v124;
} Frame;

typedef struct V {
    char pad[8];
    s16 off;
    s16 pad2;
    void (*fn)(void *, s32);
} V;
typedef struct O {
    char pad[0x10];
    V *vt;
} O;

typedef struct {
    char pad[0x10];
    s32 v10, v14;
    char pad2[0x2C];
    s32 v44, v48;
    char pad3[0x34];
    s32 v80;
} Arg;

void func_00129DD0(Arg *arg0) {
    Frame fr;
    void *o1, *o2;
    fr.v118 = 0x32000;
    fr.v114 = func_002B1FC0(0x32000);
    func_001D1AD8(fr.b64);
    func_001D4040(fr.b80, D_00448868);
    o1 = func_002A1880(fr.b110, fr.b80, 2);
    func_001DF640(&fr, o1, &fr.v114, &fr.v118);
    if (o1 != 0) {
        V *vt = ((O *)o1)->vt;
        vt->fn((char *)o1 + vt->off, 3);
    }
    fr.v124 = 0x32000;
    fr.v120 = func_002B1FC0(0x32000);
    func_001D1AD8(fr.bF4);
    func_001D4040(fr.b80, D_00448868);
    o2 = func_002A1880(fr.b11C, fr.b80, 3);
    func_001DF640(fr.b90, o2, &fr.v120, &fr.v124);
    if (o2 != 0) {
        V *vt = ((O *)o2)->vt;
        vt->fn((char *)o2 + vt->off, 3);
    }
    arg0->v14 = fr.v120;
    arg0->v44 = fr.v118;
    arg0->v48 = fr.v124;
    arg0->v10 = fr.v114;
    func_002B33D8(func_002B4740(fr.v120, fr.v124), arg0->v80, 0, &arg0->v10, 0, 0);
    func_002B2028(fr.v114);
    func_002B2028(fr.v120);
}
