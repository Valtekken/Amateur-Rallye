extern void *func_002B8C18(void);
extern void func_002618C8(void *, void *, s32, s32);
extern void *func_00276FA0(void *, s32, s32);
extern void *D_002AD408(s32, s32);

s32 func_002AAC00(s32 unused, s32 arg1, char *arg2) {
    s32 sp4, sp8, result = 0;
    f32 sp0, spC, sp10, sp14;
    char *obj, *vt, *vt2, *obj2, *newobj;
    void *f;

    obj = func_002B8C18();
    vt = *(char **)(obj + 8);
    f = *(void **)(vt + 0x4C);
    if (((s32 (*)(char *, s32, s32, s32))f)(obj + *(s16 *)(vt + 0x48), arg1, 0, 1) != 0) {
        sp0 = 0.0f; sp4 = 0; sp8 = 0; spC = 0.0f; sp10 = 0.0f;
        vt = *(char **)(obj + 8);
        f = *(void **)(vt + 0x84);
        ((void (*)(char *, void *))f)(obj + *(s16 *)(vt + 0x80), &sp0);
        vt = *(char **)(obj + 8);
        f = *(void **)(vt + 0x94);
        ((void (*)(char *, s32 *))f)(obj + *(s16 *)(vt + 0x90), &sp4);
        vt = *(char **)(obj + 8);
        f = *(void **)(vt + 0x94);
        ((void (*)(char *, s32 *))f)(obj + *(s16 *)(vt + 0x90), &sp8);
        vt = *(char **)(obj + 8);
        f = *(void **)(vt + 0x84);
        ((void (*)(char *, f32 *))f)(obj + *(s16 *)(vt + 0x80), &spC);
        vt = *(char **)(obj + 8);
        f = *(void **)(vt + 0x84);
        ((void (*)(char *, f32 *))f)(obj + *(s16 *)(vt + 0x80), &sp10);
        func_002618C8(arg2, &sp0, sp4, sp8);
        *(f32 *)(arg2 + 4) = spC;
        *(f32 *)(arg2 + 8) = sp10;
        newobj = *(char **)arg2;
        vt = *(char **)(obj + 8);
        obj2 = obj + *(s16 *)(vt + 0x50);
        vt2 = vt + 0x50;
        if (newobj == 0) {
            newobj = func_00276FA0(D_002AD408(0x10, 0x32), 0x32, 0x32);
        }
        f = *(void **)(vt2 + 4);
        result = ((s32 (*)(char *, void *, s32))f)(obj2, *(void **)(newobj + 4), sp8 * sp4 * 4);
    } else {
        sp14 = 16.0f;
        func_002618C8(arg2, &sp14, 0x10, 0x10);
        *(f32 *)(arg2 + 8) = 0.0f;
        *(f32 *)(arg2 + 4) = 0.0f;
    }
    if (obj != 0) {
        vt = *(char **)(obj + 8);
        f = *(void **)(vt + 0xC);
        ((void (*)(char *, s32))f)(obj + *(s16 *)(vt + 8), 3);
    }
    return result;
}
