typedef struct {float x,y,z;} Vec;
typedef struct {char pad[0x104]; Vec a,b,c,d;} Obj;
typedef struct {char pad[0x4c]; Obj *a,*b;} Item;
typedef struct {char pad[0xa0]; Item **begin,**end;} List;
static inline float calc(Obj *p) {register Vec *a=&p->a,*c=&p->c,*b=&p->b,*d=&p->d; return ((a->x*c->x+a->y*c->y+a->z*c->z)+(b->x*d->x+b->y*d->y+b->z*d->z))*0.5f;}
void func_0025DD60(List *l,float *out) {int i,n; *out=0; n=l->end-l->begin; for(i=0;i<n;i++){Item **q=l->begin; q+=i; Item *p=*q; *out+=calc(p->a); *out+=calc(p->b);}}
