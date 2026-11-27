extern void *D_002AD408(int);
extern char D_0044DD18[],D_00479438[],D_00479440[],D_00479458[],D_00479468[],D_00479488[],D_004794A0[],D_004794B8[],D_004794C8[],D_004794D8[],D_004794F0[];
extern void func_001D4040(void *,const char *);
extern void func_001E00E8(void *);
extern int func_001E16B8(void *,void *,int);
extern int func_001E1778(void *,void *,float);
extern void func_001DF2B0(void *,int,int);
typedef struct {int a,b,c,d; void *vt; int e,f,g,h;} Obj;
void *func_00223DB8(void *unused,char *arg) {
 char buf[16],local[208]; Obj *p=D_002AD408(0x24); volatile int *q=(int *)((char *)p+0x14);
 p->vt=D_0044DD18; p->c=0;p->d=0;p->b=0;p->a=0;p->e=0;q[2]=0;q[1]=0;p->h=0;
 func_001D4040(buf,D_00479438);p->h=*(int *)buf;func_001E00E8(local);
 func_001D4040(buf,D_00479440);func_001DF2B0(p,func_001E16B8(local,buf,*(int *)(arg+0x38)),0);
 func_001D4040(buf,D_00479458);func_001DF2B0(p,func_001E1778(local,buf,*(float *)(arg+0xE4)),0);
 func_001D4040(buf,D_00479468);func_001DF2B0(p,func_001E1778(local,buf,*(float *)(arg+0xE8)),0);
 func_001D4040(buf,D_00479488);func_001DF2B0(p,func_001E1778(local,buf,*(float *)(arg+0xEC)),0);
 func_001D4040(buf,D_004794A0);func_001DF2B0(p,func_001E1778(local,buf,*(float *)(arg+0xF0)),0);
 func_001D4040(buf,D_004794B8);func_001DF2B0(p,func_001E1778(local,buf,*(float *)(arg+0xF4)),0);
 func_001D4040(buf,D_004794C8);func_001DF2B0(p,func_001E1778(local,buf,*(float *)(arg+0xF8)),0);
 func_001D4040(buf,D_004794D8);func_001DF2B0(p,func_001E1778(local,buf,*(float *)(arg+0xFC)),0);
 func_001D4040(buf,D_004794F0);func_001DF2B0(p,func_001E1778(local,buf,*(float *)(arg+0x100)),0);
 return p;
}
