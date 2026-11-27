extern void *D_002AD408(int);
extern char D_0044DD18[], D_00479338[], D_00479340[], D_00479350[], D_00479360[], D_00479378[];
extern void func_001D4040(void *, const char *);
extern void func_001E00E8(void *);
extern int func_001E1778(void *, void *, float);
extern void func_001DF2B0(void *, int, int);

typedef struct { int a,b,c,d; void *vt; int e,f,g,h; } Obj;

void *func_00223A78(void *unused, char *arg) {
    char buf[16];
    char local[208];
    Obj *p = D_002AD408(0x24);
    volatile int *q = (int *)((char *)p + 0x14);
    p->vt = D_0044DD18;
    p->c = 0;
    p->d = 0;
    p->b = 0;
    p->a = 0;
    p->e = 0;
    q[2] = 0;
    q[1] = 0;
    p->h = 0;
    func_001D4040(buf, D_00479338);
    p->h = *(int *)buf;
    func_001E00E8(local);
    func_001D4040(buf, D_00479340);
    func_001DF2B0(p, func_001E1778(local, buf, *(float *)(arg + 0x88)), 0);
    func_001D4040(buf, D_00479350);
    func_001DF2B0(p, func_001E1778(local, buf, *(float *)(arg + 0x8C)), 0);
    func_001D4040(buf, D_00479360);
    func_001DF2B0(p, func_001E1778(local, buf, *(float *)(arg + 0x90)), 0);
    func_001D4040(buf, D_00479378);
    func_001DF2B0(p, func_001E1778(local, buf, *(float *)(arg + 0x94)), 0);
    return p;
}
