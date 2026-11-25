/* identical to func_002B6740 (matched), with its names changed by decompdecomp */
extern s32 func_00406EA8(s32, s32);
extern void func_00407130(s32);

typedef struct VT {
    char p0[0x58];
    s16 off58; void *fn5C;
    s16 off60; void *fn64;
    char p1[0x10];
    s16 off78; void *fn7C;
} VT;
typedef struct Obj { char pad[8]; VT *vt; } Obj;

s32 func_002B7138(Obj *self) {
    s32 ret = 0;
    VT *vt = self->vt;
    s32 fd = ((s32 (*)(Obj *))vt->fn7C)((Obj *)((char *)self + vt->off78));
    vt = self->vt;
    ((void (*)(Obj *))vt->fn5C)((Obj *)((char *)self + vt->off58));
    s32 fd2 = func_00406EA8(fd, 1);
    if (fd2 >= 0) {
        vt = self->vt;
        ret = 1;
        ((void (*)(Obj *, s32))vt->fn64)((Obj *)((char *)self + vt->off60), fd2);
        func_00407130(fd2);
        vt = self->vt;
        ((void (*)(Obj *))vt->fn5C)((Obj *)((char *)self + vt->off58));
    }
    return ret;
}
