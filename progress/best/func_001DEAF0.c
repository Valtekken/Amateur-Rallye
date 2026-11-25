extern void func_003F9698(const char *, ...);
extern char D_004768D0[];
extern char D_00476900[];
extern char D_00476910[];
extern char D_00476918[];

typedef struct {
    s32 cursor;
    char **begin;
    char **end;
} S_Deaf0;

typedef struct {
    char **begin;
    char **end;
} Inner_Deaf0;

void func_001DEAF0(S_Deaf0 *arg0) {
    Inner_Deaf0 *lst = (Inner_Deaf0 *)((char *)arg0 + 4);
    char *fmt;
    char **p;
    func_003F9698(D_004768D0, arg0->cursor, lst->end - arg0->begin);
    p = arg0->begin;
    if ((u32)p < (u32)lst->end) {
        fmt = D_00476900;
        do {
            char *s = (arg0->cursor == p - arg0->begin) ? D_00476910 : D_00476918;
            char **item = (char **)*p;
            p++;
            func_003F9698(fmt, s, *item, item);
        } while ((u32)p < (u32)lst->end);
    }
}
