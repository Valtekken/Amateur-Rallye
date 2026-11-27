extern void *D_002AD408(int);
extern char D_0044DD18[],D_004791C0[],D_004791D0[],D_004791E8[],D_00479200[],D_00479218[],D_00479230[],D_00479248[],D_00479258[],D_00479270[],D_00479280[];
extern void func_001D4040(void *,const char *);
extern void func_001E00E8(void *);
extern int func_001E16B8(void *,void *,int);
extern int func_001E1778(void *,void *,float);
extern void func_001DF2B0(void *,int,int);
typedef struct {int a,b,c,d; void *vt; int e,f,g,h;} Obj;
void *func_002235E8(void *unused,char *arg) {
 char buf[16],local[208]; Obj *p=D_002AD408(0x24); volatile int *q=(int *)((char *)p+0x14);
 p->vt=D_0044DD18; p->c=0;p->d=0;p->b=0;p->a=0;p->e=0;q[2]=0;q[1]=0;p->h=0;
 func_001D4040(buf,D_004791C0);p->h=*(int *)buf;func_001E00E8(local);
 func_001D4040(buf,D_004791D0);func_001DF2B0(p,func_001E16B8(local,buf,*(int *)(arg+0x64)),0);
 func_001D4040(buf,D_004791E8);func_001DF2B0(p,func_001E1778(local,buf,*(float *)(arg+0x68)),0);
 func_001D4040(buf,D_00479200);func_001DF2B0(p,func_001E1778(local,buf,*(float *)(arg+0x6c)),0);
 func_001D4040(buf,D_00479218);func_001DF2B0(p,func_001E1778(local,buf,*(float *)(arg+0x70)),0);
 func_001D4040(buf,D_00479230);func_001DF2B0(p,func_001E1778(local,buf,*(float *)(arg+0x74)),0);
 func_001D4040(buf,D_00479248);func_001DF2B0(p,func_001E1778(local,buf,*(float *)(arg+0x78)),0);
 func_001D4040(buf,D_00479258);func_001DF2B0(p,func_001E1778(local,buf,*(float *)(arg+0x7c)),0);
 func_001D4040(buf,D_00479270);func_001DF2B0(p,func_001E1778(local,buf,*(float *)(arg+0x80)),0);
 func_001D4040(buf,D_00479280);func_001DF2B0(p,func_001E1778(local,buf,*(float *)(arg+0x84)),0);
 return p;
}
