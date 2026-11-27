typedef struct { void *b; void *e; void *c; } V12;
typedef struct { char pad[8]; V12 v; } Cont;
typedef struct { char pad[4]; Cont *f4; s32 f8, fC; void *f10; } S58;
typedef struct { V12 v; s32 pad; s32 count; } SP;

extern void *func_003852E0(void *);
extern void func_00387328(void *, void *);
extern void func_0038D0B0(void *, void *);
extern void func_0038C760(void *, void *, void *);
extern void func_00385300(void *, s32);

void func_00387258(void *arg0) {
    S58 *s = (S58 *)arg0;
    SP sp;
    s32 i;
    char *vt = *(char **)((char *)s->f10 + 8);
    s32 off = *(s16 *)(vt + 0x90);
    s32 (*fn)(void *, void *, void *) = *(void **)(vt + 0x94);
    fn((char *)s->f10 + off, &sp.count, s->f10);
    for (i = 0; i < sp.count; i++) {
        V12 *v;
        func_003852E0(&sp);
        func_00387328(arg0, &sp);
        v = &s->f4->v;
        if (v->e != v->c) {
            if (v->e != 0) func_0038D0B0(v->e, &sp);
            v->e = (char *)v->e + 0xC;
        } else {
            func_0038C760(v, v->e, &sp);
        }
        func_00385300(&sp, 2);
    }
}
