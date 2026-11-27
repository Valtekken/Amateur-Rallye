#define A(p,t,o) (*(t*)((char*)(p)+(o)))
typedef struct N N;
struct N { N *f0; N *f4; N *f8; N *fC; s8 f10; };
extern void func_001543D8(N **, N *, N *, s8 *, N **);
extern void func_00154758(N **, s8 *, N *, s8 *, N **);

void func_001548B0(void *arg0, void *arg1, N **arg2, s8 *arg3) {
    N *sp0, *sp10, *t3, *t6, *v7, *t, *t2, *v;
    s32 c;
    t3 = A(arg1, N *, 0);
    t6 = *arg2;
    if (t6 == A(t3, N *, 8)) goto eq8;
    if (t6 == t3) goto eqt3;
    sp0 = t6;
    if (A(t6, N *, 0) == 0) {
        t = A(t6, N *, 4);
        if (A(t, N *, 4) == t6) { sp0 = A(t, N *, 0xC); goto search_done; }
    }
    t = sp0;
    t2 = A(t, N *, 8);
    if (t2 == 0) {
        v = A(t, N *, 4);
        sp0 = v;
        while (A(v, N *, 8) == t) { v = A(v, N *, 4); sp0 = v; }
    } else if (A(t2, N *, 0xC) == 0) {
        sp0 = t2;
    } else {
        v = A(t2, N *, 0xC);
        while (A(v, N *, 0xC) != 0) v = A(v, N *, 0xC);
        sp0 = v;
    }
search_done:
    v7 = sp0;
    c = 0;
    if (A(v7, s8, 0x10) < *arg3) c = (*arg3 < A(t6, s8, 0x10));
    if (c == 0) {
        func_00154758(&sp10, arg3, v7, arg3, arg2);
        A(arg0, N *, 0) = sp10;
        return;
    }
    if (A(v7, N *, 0xC) == 0) {
        func_001543D8((N **)arg0, 0, v7, arg3, arg2);
        return;
    }
    goto call543;
eqt3:
    v7 = A(t6, N *, 0xC);
    if (A(v7, s8, 0x10) < *arg3) goto call543;
    func_00154758(&sp0, arg3, v7, arg3, arg2);
    A(arg0, N *, 0) = sp0;
    return;
eq8:
    if (A(arg1, s32, 4) == 0) goto call547;
    if (*arg3 < A((s8 *)arg3, s8, 0x10)) goto call543;
call547:
    func_00154758(&sp0, arg3, t6, arg3, arg2);
    A(arg0, N *, 0) = sp0;
    return;
call543:
    func_001543D8((N **)arg0, t6, t6, arg3, arg2);
}
