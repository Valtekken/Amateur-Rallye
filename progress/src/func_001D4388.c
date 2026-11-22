extern int func_003F9698(const char *, ...);
extern void *func_001D4568(void *, int);
extern const char D_00475E90[];
extern const char D_00475EA8[];
typedef struct { char *begin; char *cur; } Vec;
void func_001D4388(Vec *v) {
    int i;
    func_003F9698(D_00475E90);
    for (i = 0; i < (((s32)v->cur - (s32)v->begin) >> 2); i++) {
        void *val = func_001D4568(v, i);
        func_003F9698(D_00475EA8, i, val);
    }
}
