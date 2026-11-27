extern void *D_002AD408(int);
extern char D_0044DD18[], D_00479560[], D_00479570[], D_00479588[], D_004795A0[];
extern void func_001D4040(void *, const char *);
extern void func_001E00E8(void *);
extern int func_001E16B8(void *, void *, int);
extern int func_001E2090(void *, void *, void *);
extern int func_001E1778(void *, void *, float);
extern void func_001DF2B0(void *, int, int);
typedef struct { int a,b,c,d; void *vt; int e,f,g,h; } Obj;
void *func_00224188(void *unused, char *arg) {
    char buf[16]; char local[208];
    Obj *p = D_002AD408(0x24);
    volatile int *q=(int *)((char *)p+0x14);
    p->vt = D_0044DD18; p->c=0; p->d=0; p->b=0; p->a=0;
    p->e=0; q[2]=0; q[1]=0; p->h=0;
    func_001D4040(buf,D_00479560); p->h=*(int *)buf;
    func_001E00E8(local);
    func_001D4040(buf,D_00479570);
    func_001DF2B0(p,func_001E16B8(local,buf,*(int *)(arg+0x144)),0);
    func_001D4040(buf,D_00479588);
    func_001DF2B0(p,func_001E2090(local,buf,arg+0x134),0);
    func_001D4040(buf,D_004795A0);
    func_001DF2B0(p,func_001E1778(local,buf,*(float *)(arg+0x140)),0);
    return p;
}
