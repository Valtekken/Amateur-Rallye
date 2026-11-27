typedef struct F F; typedef struct Ops { char pad[0x6c]; s64 (*read)(F*,unsigned char*,int,struct Ops*); } Ops;
struct F {int flags; unsigned char *cur,*end,*p0,*p1,*p2,*p3,*buf,*limit; char pad[0x1c]; s64 pos; char pad2[8]; Ops *ops;};
extern void func_003D7E50(F*),func_003D8350(F*),func_003D8A78(void); extern int *func_003F73E0(void);
int func_003DE7D8(F *f){s64 n; unsigned char *p; Ops *o;
if(f->flags&4){*func_003F73E0()=9;return -1;}
if(f->cur<f->end)return *f->cur;
if(!f->buf)func_003D8350(f);
if(f->flags&0x202)func_003D8A78();
func_003D7E50(f);p=f->buf;o=f->ops;f->cur=p;f->p0=p;f->end=p;f->p3=p;f->p2=p;f->p1=p;
n=o->read(f,p,f->limit-p,o);
if(n<=0){if(n==0)f->flags|=0x10;else {n=0;f->flags|=0x20;}}
f->end+=(s32)n;if(!n)return -1;if(f->pos!=-1)f->pos+=n;return *f->cur;}
