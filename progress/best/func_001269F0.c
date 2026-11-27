extern void func_003F9698(const char *);
extern s32 func_002B4740();
extern void func_002B4488(s32, s32, s32);
extern s32 func_002B1FC0(s32);
extern void func_001D1AD8(void *);
extern void func_001D4040(char *, const char *);
extern void *func_002A1880(void *, void *, s32);
extern void func_001DF640(void *, void *, s32 *, s32 *);
extern s32 func_00126828(void *, s32);
extern s32 func_002B33D8(s32, s32, s32, void *, s32, s32);
extern void func_002B2028(s32);
extern char D_00448850[];
extern char D_00448868[];
typedef struct { s32 pad[2]; s16 off; s16 pad2; void (*fn)(void *, s32); } VT;
typedef struct { s32 pad[4]; VT *vt; } Obj2;

void func_001269F0(void *arg0) {
    char sp[0x130];
    Obj2 *o, *o2;
    s32 v;
    func_003F9698(D_00448850);
    if (*(s32 *)((char *)arg0 + 0x60) != 0) {
        v = func_002B4740();
        func_002B4488(v, 0, 0);
    }
    *(s32 *)(sp + 0x118) = 0x32000;
    *(s32 *)(sp + 0x114) = func_002B1FC0(0x32000);
    func_001D1AD8(sp + 0x64);
    func_001D4040(sp + 0x80, D_00448868);
    o = (Obj2 *)func_002A1880(sp + 0x110, sp + 0x80, 2);
    func_001DF640(sp, o, (s32 *)(sp + 0x114), (s32 *)(sp + 0x118));
    if (o != 0) {
        VT *vt = o->vt;
        s16 off = vt->off;
        void (*fn)(void *, s32) = vt->fn;
        fn((char *)o + off, 3);
    }
    *(s32 *)(sp + 0x124) = 0x32000;
    *(s32 *)(sp + 0x120) = func_002B1FC0(0x32000);
    func_001D1AD8(sp + 0xF4);
    func_001D4040(sp + 0x80, D_00448868);
    o2 = (Obj2 *)func_002A1880(sp + 0x11C, sp + 0x80, 3);
    func_001DF640(sp + 0x90, o2, (s32 *)(sp + 0x120), (s32 *)(sp + 0x124));
    if (o2 != 0) {
        VT *vt2 = o2->vt;
        s16 off2 = vt2->off;
        void (*fn2)(void *, s32) = vt2->fn;
        fn2((char *)o2 + off2, 3);
    }
    *(s32 *)((char *)arg0 + 0xAC) = *(s32 *)(sp + 0x118);
    *(s32 *)((char *)arg0 + 0x7C) = *(s32 *)(sp + 0x120);
    *(s32 *)((char *)arg0 + 0xB0) = *(s32 *)(sp + 0x124);
    *(s32 *)((char *)arg0 + 0x78) = *(s32 *)(sp + 0x114);
    v = func_002B4740(*(s32 *)(sp + 0x120), *(s32 *)(sp + 0x124));
    v = func_002B33D8(v, 0, 0, (char *)arg0 + 0x78, 0, 0);
    *(s32 *)((char *)arg0 + 0x14) = func_00126828(arg0, v);
    *(s32 *)((char *)arg0 + 0x20) = 1;
    func_002B2028(*(s32 *)(sp + 0x114));
    func_002B2028(*(s32 *)(sp + 0x120));
}
