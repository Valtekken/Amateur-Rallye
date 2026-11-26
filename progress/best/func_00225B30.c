extern char D_00479710[];
extern char D_00478EB8[];
extern s32 D_004262B0[];
extern int func_003F9698(char *, ...);
extern void func_002258C8(s32, s32);

typedef struct { char *begin, *end, *cap; } V;

void func_00225B30(s32 unused, V *v) {
    s32 *it;
    s32 obj;
    func_003F9698(D_00479710, (v->end - v->begin) >> 2, (v->cap - v->begin) >> 2);
    D_004262B0[3]++;
    for (it = (s32 *)v->begin; (char *)it != v->end; ) {
        obj = *it++;
        func_002258C8(unused, obj);
    }
    D_004262B0[3]--;
    func_003F9698(D_00478EB8);
}
