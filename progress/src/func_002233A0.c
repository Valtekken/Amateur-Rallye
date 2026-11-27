extern void *D_002AD408(int);
extern char D_0044DD18[], D_004790F8[], D_00479108[], D_00479120[], D_00479138[], D_00479150[], D_00479168[], D_00479178[], D_00479188[], D_00479198[], D_004791A8[];
extern void func_001D4040(void *, const char *);
extern void func_001E00E8(void *);
extern int func_001E1778(void *, void *, float);
extern void func_001DF2B0(void *, int, int);

typedef struct { int a,b,c,d; void *vt; int e,f,g,h; } Obj;

void *func_002233A0(void *unused, char *arg) {
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
    func_001D4040(buf, D_004790F8);
    p->h = *(int *)buf;
    func_001E00E8(local);
    func_001D4040(buf, D_00479108);
    func_001DF2B0(p, func_001E1778(local, buf, *(float *)(arg + 0x3C)), 0);
    func_001D4040(buf, D_00479120);
    func_001DF2B0(p, func_001E1778(local, buf, *(float *)(arg + 0x40)), 0);
    func_001D4040(buf, D_00479138);
    func_001DF2B0(p, func_001E1778(local, buf, *(float *)(arg + 0x44)), 0);
    func_001D4040(buf, D_00479150);
    func_001DF2B0(p, func_001E1778(local, buf, *(float *)(arg + 0x48)), 0);
    func_001D4040(buf, D_00479168);
    func_001DF2B0(p, func_001E1778(local, buf, *(float *)(arg + 0x4C)), 0);
    func_001D4040(buf, D_00479178);
    func_001DF2B0(p, func_001E1778(local, buf, *(float *)(arg + 0x50)), 0);
    func_001D4040(buf, D_00479188);
    func_001DF2B0(p, func_001E1778(local, buf, *(float *)(arg + 0x54)), 0);
    func_001D4040(buf, D_00479198);
    func_001DF2B0(p, func_001E1778(local, buf, *(float *)(arg + 0x58)), 0);
    func_001D4040(buf, D_004791A8);
    func_001DF2B0(p, func_001E1778(local, buf, *(float *)(arg + 0x5C)), 0);
    return p;
}
