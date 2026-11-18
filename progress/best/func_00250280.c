typedef struct { s32 *b, *e, *c; } Vec;
extern void func_00276AD8(Vec*, s32*, s32*);
extern s32 func_00258F80(s32 *, s32, s32);
extern s32 func_0024F920(s32, f32 *, f32, f32, f32);
extern s32 func_0024FA00(s32, s32, f32 *);
extern s32 func_0024FB08(s32, s32, f32 *, s32);
extern s32 func_0025CA30(s32);
extern s32 func_0025CA78(s32);
extern s32 func_0025CD78(s32, s32);
extern s32 func_0025DD60(s32, s32);

void func_0024F770(void *arg0, s32 arg1, s32 arg2) {
    s32 **head = *(s32***)(arg0 + 8);
    void *cur = *head;
    while (cur != (void*)head) {
        s32 *ref = *(s32**)((char*)cur + 8);
        if (ref) *ref += 1;
        func_00258F80(ref, arg1, arg2);
        {
            void *next = *(void**)(cur);
            cur = next;
            if (ref) {
                *ref -= 1;
                if (*ref == 0) {
                    void **v = *(void***)(ref + 4);
                    ((void(*)(void*,s32,s32*))*(void**)((char*)v + 12))((void*)((char*)ref + *(s16*)((char*)v + 8)), 3, ref);
                }
            }
        }
    }
}

s32 func_0024F860(s32 arg0, void *arg1, void *arg2, s32 arg3, f32 fparg0) {
    f32 sp[4];
    f32 temp_f2 = *(f32*)((char*)arg2 + 8);
    f32 temp_f1 = *(f32*)arg2;
    f32 temp_f0 = *(f32*)((char*)arg2 + 4);
    sp[0] = temp_f1;
    sp[1] = temp_f0;
    sp[2] = temp_f2;
    sp[3] = fparg0;
    ((s32*)sp)[4] = -1;
    if (func_0024F920(*(s32*)((char*)arg1 + 8), sp, temp_f1, temp_f0, temp_f2) == 0) return 0;
    if (func_0024FA00(arg0, *(s32*)((char*)arg1 + 4), sp) == 0) return 0;
    if (func_0024FB08(arg0, *(s32*)arg1, sp, arg3) == 0) return 0;
    return 1;
}

void func_00250280(void *arg0, s32 arg1) {
    Vec *a = (Vec*)((char*)arg0 + 0x1C);
    if (a->e != a->c) {
        if (a->e) *a->e = arg1;
        a->e++;
    } else {
        func_00276AD8(a, a->e, &arg1);
    }
}

void func_0025C980(s32 arg0, void *arg1) {
    s32 *a1 = (s32*)arg1;
    s32 n = (a1[5] - a1[4]) * (s32)0xAAAAAAAB >> 2;
    /* need correct shift: mult then sra 2 then ... actually /3? */
    s32 i;
    s32 idx = 0;
    if (n <= 0) return;
    for (i = n; i != 0; i--) {
        func_0025CD78(arg0, a1[4] + idx);
        idx += 0xC;
        func_0025DD60(arg0, arg0 + 0x98);
        func_0025CA30(arg0);
        func_0025DD60(arg0, arg0 + 0x9C);
        func_0025CA78(arg0);
    }
}
