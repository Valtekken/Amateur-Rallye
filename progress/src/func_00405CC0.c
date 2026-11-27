typedef struct { int attr; int init; int max; int pad; int pad2; int pad3; int pad4; int pad5; } SemaParam;
extern int CreateSema_2(SemaParam *);
extern void DeleteSema_2(int);
extern void WaitSema_2(int);
extern int func_004053F8(int, void *, int, int, int, int);
extern void *func_00405818(void *);
extern void func_004058C0(void *);
extern char D_0049FF00[];

int func_00405CC0(void *arg0, int arg1, int arg2) {
    void *t;
    int s;
    SemaParam sp;

    *(int*)((char*)arg0 + 0x10) = 0;
    *(int*)((char*)arg0 + 0x24) = 0;
    t = func_00405818(D_0049FF00);
    if (t == 0) return -1;

    *(void**)arg0 = t;
    *(int*)((char*)arg0 + 4) = *(int*)((char*)t + 0x18);
    *(int*)((char*)t + 0x20) = arg1;
    *(void**)((char*)t + 0x14) = t;
    *(void**)((char*)t + 0x1C) = arg0;

    if (!(arg2 & 1)) {
        sp.init = 1;
        sp.max = 0;
        s = CreateSema_2(&sp);
        *(int*)((char*)arg0 + 8) = s;
        if (s < 0) {
            func_004058C0(t);
            return -3;
        }
        if (func_004053F8(0x80000009, t, 0x40, 0, 0, 0) == 0) {
            func_004058C0(t);
            DeleteSema_2(*(int*)((char*)arg0 + 8));
            return -2;
        }
        WaitSema_2(*(int*)((char*)arg0 + 8));
        DeleteSema_2(*(int*)((char*)arg0 + 8));
        return 0;
    }

    *(int*)((char*)arg0 + 8) = -1;
    if (func_004053F8(0x80000009, t, 0x40, 0, 0, 0) == 0) {
        func_004058C0(t);
        return -2;
    }
    return 0;
}
