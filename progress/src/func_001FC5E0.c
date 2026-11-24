extern char D_004782A0[];
extern char D_004782C8[];
extern char D_004774D8[];
extern s32 D_004262B0[];
extern int func_003F9698(char *, ...);
extern char *func_001D4010(void *);

typedef struct { char *begin, *end, *cap; } V;

void func_001FC5E0(void *unused, V *v) {
    s32 *it;
    func_003F9698(D_004782A0, (v->end - v->begin) >> 2, (v->cap - v->begin) >> 2);
    D_004262B0[3]++;
    for (it = (s32 *)v->begin; (char *)it != v->end; ) {
        char *obj = (char *)*it++;
        func_003F9698(D_004782C8, func_001D4010(obj + 4));
    }
    D_004262B0[3]--;
    func_003F9698(D_004774D8);
}
