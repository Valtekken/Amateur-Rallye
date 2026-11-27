extern void *D_002AD408(int);
extern char *func_001D4010(void *);
extern void func_001D4040(void *, const char *);
extern void func_001D4810(void *, const char *);
extern void *func_0021E290(void *);
extern void func_0021E620(void *, int, void *);
extern void func_0021E748(void *, void *);
extern void func_0028EDB0(void *, void *, void *, float, float);
extern void func_0028EFC8(void *, void *, void *, char *, float, float);
extern void func_003FA310(void *, const char *, char *, ...);
extern unsigned int func_003FA9B8(char *);
extern char D_0047B538[], D_0047B5E8[], D_0047B600[], D_0047B610[];

int func_0028E9A8(void *arg0, void *arg1) {
    int sp0;
    char sp10[0x100];
    char sp110[0x100];
    char *p;
    unsigned int i;
    void *obj;
    void *t;

    if (*(int *)((char *)arg0 + 0x10) == 0) {
        sp0 = 0;
        func_001D4810(&sp0, D_0047B5E8);
        func_0028EDB0(arg0, arg1, &sp0, 0.0f, 0.0f);
    }
    if (*(int *)((char *)arg0 + 0x14) == 0) {
        sp0 = 0;
        func_001D4810(&sp0, D_0047B600);
        func_0028EFC8(arg0, arg1, &sp0, func_001D4010((char *)arg0 + 0x18), 0.0f, 0.0f);
        *(int *)((char *)arg0 + 0xC) = 1;
        return 1;
    } else {
        i = 0;
        func_003FA310(sp10, D_0047B610, func_001D4010((char *)arg0 + 0x18));
        while (i < func_003FA9B8(sp10)) {
            obj = func_0021E290(D_002AD408(0x7C));
            t = *(void **)((char *)arg1 + 8);
            func_001D4040(&sp0, D_0047B538);
            p = sp10 + i;
            if (*(int *)((char *)t + 4) == sp0) {
                void *v = *(void **)((char *)t + 8);
                void *r;
                r = ((void *(*)(void *, void *)) *(void **)((char *)v + 0x14))((char *)t + *(short *)((char *)v + 0x10), t);
                *(unsigned int *)((char *)r + 0x10) = i;
                func_0021E620(obj, 0, r);
                p = sp10 + i;
            }
            sp0 = *p;
            i++;
            func_0021E748(obj, &sp0);
            *(int *)((char *)*(void **)((char *)obj + 0x50) + 0x60) = 1;
            {
                char *src = (char *)*(void **)((char *)arg1 + 0x50) + 0x20;
                char *dst = (char *)*(void **)((char *)obj + 0x50) + 0x20;
                int j;
                for (j = 0; j < 0x40; j += 4) *(float *)(dst + j) = *(float *)(src + j);
            }
            func_003FA310(sp110, D_0047B610, p);
            sp110[1] = 0;
            sp0 = 0;
            func_001D4810(&sp0, D_0047B600);
            func_0028EFC8(arg0, obj, &sp0, sp110, 0.0f, 0.0f);
        }
        *(int *)((char *)arg0 + 0xC) = 1;
        return 1;
    }
}
