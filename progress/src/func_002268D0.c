typedef struct {float x,y,z;} V;
typedef struct {void **b,**e,**c; V a,d;} Obj;
extern void *D_002AD408(int); extern void *func_00229328(void *,void *); extern void func_0026FA80(Obj *,void **,void **);
Obj *func_002268D0(Obj *p,Obj *q) {int i,n; void *x,*y; V *a=&p->a,*b=&q->a,*c=&p->d,*d=&q->d;
a->x=b->x;a->y=b->y;a->z=b->z;c->x=d->x;c->y=d->y;c->z=d->z;
n=(int)((char*)q->e-(char*)q->b)>>2;
for(i=0;i<n;i++){{void **t=q->b; t+=i; x=*t;}y=func_00229328(D_002AD408(28),x);if(p->e!=p->c){if(p->e)*p->e=y;p->e++;}else func_0026FA80(p,p->e,&y);}
return p;}
