typedef struct N {struct N *a,*b; int x;} N;
typedef struct {float x,y,z,w; int i;} V;
typedef struct {N *a,*b; V v; int z[7]; N *c,*d;} O;
extern void *func_002B1FC0(int); extern void *func_003D2910(int);
extern V D_00426508;
O *func_0024FEE8(O *o,V *v) {
 N *p; register V *q; int *z; volatile char pad[0x50];
 p=func_002B1FC0(12);if(!p)p=func_003D2910(12);o->a=p;p->a=p;o->a->b=o->a;
 p=func_002B1FC0(12);if(!p)p=func_003D2910(12);o->b=p;p->a=p;o->b->b=o->b;
 q=&o->v; z=o->z; q->x=D_00426508.x;q->y=D_00426508.y;q->z=D_00426508.z;q->i=-1;q->w=0;
 z[0]=0;z[1]=0;z[2]=0;o->z[3]=0;o->z[4]=0;o->z[5]=0;o->z[6]=0;
 p=func_002B1FC0(12);if(!p)p=func_003D2910(12);o->c=p;p->a=p;o->c->b=o->c;
 p=func_002B1FC0(12);if(!p)p=func_003D2910(12);o->d=p;p->a=p;o->d->b=o->d;
 q->x=v->x;q->y=v->y;q->z=v->z;q->w=v->w;q->i=v->i;return o;
}
