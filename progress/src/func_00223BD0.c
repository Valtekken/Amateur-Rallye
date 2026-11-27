extern void *D_002AD408(int);
extern char D_0044DD18[], D_00479390[], D_004793A0[], D_004793B8[], D_004793D0[], D_004793E8[], D_00479400[], D_00479410[], D_00479428[];
extern void func_001D4040(void *, const char *);
extern void func_001E00E8(void *);
extern int func_001E1778(void *, void *, float);
extern int func_001E2090(void *, void *, void *);
extern void func_001DF2B0(void *, int, int);

typedef struct { int a,b,c,d; void *vt; int e,f,g,h; } Obj;

void *func_00223BD0(void *unused, char *arg) {
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
    func_001D4040(buf, D_00479390);
    p->h = *(int *)buf;
    func_001E00E8(local);
    func_001D4040(buf, D_004793A0);
    func_001DF2B0(p, func_001E2090(local, buf, arg + 0x98), 0);
    func_001D4040(buf, D_004793B8);
    func_001DF2B0(p, func_001E1778(local, buf, *(float *)(arg + 0xA4)), 0);
    func_001D4040(buf, D_004793D0);
    func_001DF2B0(p, func_001E1778(local, buf, *(float *)(arg + 0xA8)), 0);
    func_001D4040(buf, D_004793E8);
    func_001DF2B0(p, func_001E1778(local, buf, *(float *)(arg + 0xAC)), 0);
    func_001D4040(buf, D_00479400);
    func_001DF2B0(p, func_001E1778(local, buf, *(float *)(arg + 0xB0)), 0);
    func_001D4040(buf, D_00479410);
    func_001DF2B0(p, func_001E1778(local, buf, *(float *)(arg + 0xB4)), 0);
    func_001D4040(buf, D_00479428);
    func_001DF2B0(p, func_001E1778(local, buf, *(float *)(arg + 0xB8)), 0);
    return p;
}
