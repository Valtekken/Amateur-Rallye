typedef struct { int attr; int init; int max; int pad; int pad2; int pad3; int pad4; int pad5; } SemaParam;
extern int CreateSema_2(SemaParam *);
extern void DeleteSema_2(int);
extern void WaitSema_2(int);
extern int func_004053F8(int, void *, int, int, int, int);
extern void *func_00405818(void *);
extern void func_004058C0(void *);
extern char D_0049FF00[];

int func_00405A68(void *arg0, int arg1, int arg2, int arg3, int arg4) {
    void *t;
    int s;
    SemaParam sp;

    t = func_00405818(D_0049FF00);
    if (t == 0) return -1;

    *(void**)arg0 = t;
    *(int*)((char*)arg0 + 4) = *(int*)((char*)t + 0x18);
    *(int*)((char*)t + 0x20) = arg1;
    *(int*)((char*)t + 0x24) = arg2;
    *(int*)((char*)t + 0x28) = arg3;
    *(void**)((char*)t + 0x14) = t;
    *(void**)((char*)t + 0x1C) = arg0;

    if (!(arg4 & 1)) {
        sp.init = 1;
        sp.max = 0;
        s = CreateSema_2(&sp);
        *(int*)((char*)arg0 + 8) = s;
        if (s < 0) {
            func_004058C0(t);
            return -3;
        }
        if (func_004053F8(0x8000000C, t, 0x40, 0, 0, 0) == 0) {
            func_004058C0(t);
            DeleteSema_2(*(int*)((char*)arg0 + 8));
            return -2;
        }
        WaitSema_2(*(int*)((char*)arg0 + 8));
        DeleteSema_2(*(int*)((char*)arg0 + 8));
        return 0;
    }

    *(int*)((char*)arg0 + 8) = -1;
    if (func_004053F8(0x8000000C, t, 0x40, 0, 0, 0) == 0) {
        func_004058C0(t);
        return -2;
    }
    return 0;
}
