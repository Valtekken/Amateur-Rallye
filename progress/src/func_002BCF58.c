extern void func_0040AF58(void);
extern void func_002BC8F0(void *, void *);
extern void func_0040AFA0(void);
extern void WakeupThread_2(s32);
struct S_inner { char pad[0x58]; s32 f58; s32 f5c; };
struct S_mid { char pad[0x8]; struct S_inner *f08; };
struct S_outer { char pad[0x1C]; s32 f1c; s32 f20; char pad1[4]; void *f28; };
void func_002BCF58(void *arg0) {
    struct S_outer *s1 = (struct S_outer *)arg0;
    void *p;
    for (;;) {
        if (s1->f28 == 0) return;
        if (s1->f1c != 0) return;
        func_0040AF58();
        p = s1->f28;
        func_002BC8F0(p, &s1->f28);
        func_0040AFA0();
        {
            struct S_inner *t = ((struct S_mid *)p)->f08;
            if (t != 0) {
                s1->f20++;
                t->f58 = 1;
                if (t->f5c != 0) WakeupThread_2(t->f5c);
            }
        }
    }
}
