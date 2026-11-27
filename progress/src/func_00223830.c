extern void *D_002AD408(int);
extern char D_0044DD18[], D_00479290[], D_00479298[], D_004792A8[], D_004792B8[], D_004792D0[], D_004792E8[], D_004792F8[], D_00479308[], D_00479318[], D_00479328[];
extern void func_001D4040(void *, const char *);
extern void func_001E00E8(void *);
extern int func_001E1778(void *, void *, float);
extern void func_001DF2B0(void *, int, int);

typedef struct { int a,b,c,d; void *vt; int e,f,g,h; } Obj;

void *func_00223830(void *unused, char *arg) {
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
    func_001D4040(buf, D_00479290);
    p->h = *(int *)buf;
    func_001E00E8(local);
    func_001D4040(buf, D_00479298);
    func_001DF2B0(p, func_001E1778(local, buf, *(float *)(arg + 0xBC)), 0);
    func_001D4040(buf, D_004792A8);
    func_001DF2B0(p, func_001E1778(local, buf, *(float *)(arg + 0xC0)), 0);
    func_001D4040(buf, D_004792B8);
    func_001DF2B0(p, func_001E1778(local, buf, *(float *)(arg + 0xC4)), 0);
    func_001D4040(buf, D_004792D0);
    func_001DF2B0(p, func_001E1778(local, buf, *(float *)(arg + 0xC8)), 0);
    func_001D4040(buf, D_004792E8);
    func_001DF2B0(p, func_001E1778(local, buf, *(float *)(arg + 0xCC)), 0);
    func_001D4040(buf, D_004792F8);
    func_001DF2B0(p, func_001E1778(local, buf, *(float *)(arg + 0xD0)), 0);
    func_001D4040(buf, D_00479308);
    func_001DF2B0(p, func_001E1778(local, buf, *(float *)(arg + 0xD4)), 0);
    func_001D4040(buf, D_00479318);
    func_001DF2B0(p, func_001E1778(local, buf, *(float *)(arg + 0xD8)), 0);
    func_001D4040(buf, D_00479328);
    func_001DF2B0(p, func_001E1778(local, buf, *(float *)(arg + 0xDC)), 0);
    return p;
}
