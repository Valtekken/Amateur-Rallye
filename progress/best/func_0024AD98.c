typedef struct Node { int a,b,c,d,e; float f[4]; int g; } Node;
typedef struct { void **begin,**end,**cap; } Vec;
typedef struct { int x; Vec free; Vec used; } Pool;
extern Pool D_00426778,D_00426548;
extern struct {float f[4];int g;} D_004264A8;
extern void func_00244788(int),func_0023F7D8(int);
extern int func_0024AF58(int,int,int,int);
extern void func_001CAB58(Vec *,void **,void **),func_001CB098(Vec *,void **,void **);
int func_0024AD98(int a,int b,int c,int d) {
 int result; Node *p; void *q; Vec *used,*free;
 func_00244788(c);func_0023F7D8(b);result=func_0024AF58(a,c,b,d)!=0;
 used=&D_00426778.used;free=&D_00426778.free;
 while(used->begin!=used->end) {
 p=used->end[-1]; used->end--; p->a=0;p->b=-1;p->c=-1;p->d=0;p->e=0;
 p->f[0]=D_004264A8.f[0];p->f[1]=D_004264A8.f[1];p->f[2]=D_004264A8.f[2];p->f[3]=D_004264A8.f[3];p->g=D_004264A8.g;
 if(free->end!=free->cap) {if(free->end)*free->end=p;free->end++;}else func_001CAB58(free,free->end,(void**)&p);
 }
 used=&D_00426548.used;free=&D_00426548.free;
 while(used->begin!=used->end) {q=used->end[-1]; used->end--;
 if(free->end!=free->cap){if(free->end)*free->end=q;free->end++;}else func_001CB098(free,free->end,&q);
 } return result;
}
