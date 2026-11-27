extern void func_001D4040(char *, const char *); extern f32 func_001E3610(s32, void *); extern char D_0044F648[],D_0044F660[],D_0044F678[],D_0044F690[],D_00473530[]; typedef struct {s32 a,b,c; f32 d,e; void *f;} S;
S *func_0016BC08(S *p){char buf[16]; f32 a,b,c,d; p->a=0;p->b=0;p->c=0;p->f=D_00473530;
{s32 t=func_001E4280();func_001D4040(buf,D_0044F648);a=func_001E3610(t,buf);}
{s32 t=func_001E4280();func_001D4040(buf,D_0044F660);b=func_001E3610(t,buf);}
{s32 t=func_001E4280();func_001D4040(buf,D_0044F678);c=func_001E3610(t,buf);}
{s32 t=func_001E4280();func_001D4040(buf,D_0044F690);d=func_001E3610(t,buf);}
c+=d; a=(b+a)-(b+a)*0.19f; c-=c*0.09f; p->d=a*a;p->e=c*c; return p;}
