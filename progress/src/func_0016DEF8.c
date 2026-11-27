typedef struct { s32 *b,*e,*c; } Vec;
extern void func_001C6998(Vec *, s32 *, void *);
extern void func_0016E1D8(void *);
extern void func_0016F080(void *, s32);

void func_0016DEF8(void *arg0, s32 v) {
    Vec *a = (Vec *)((char *)arg0 + 8);
    if (a->e != a->c) {
        if (a->e) *a->e = v;
        a->e++;
    } else {
        func_001C6998(a, a->e, &v);
    }
    func_0016E1D8(arg0);
    func_0016F080(arg0, v);
}
