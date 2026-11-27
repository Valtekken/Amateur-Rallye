typedef struct {float x,y,z;} V;
typedef struct N {struct N *a,*b; int c;} N;
typedef struct {V a,b,c,d; N *e,*f; int g;} O;
extern V D_00426508; extern N *func_002B1FC0(int),*func_003D2910(int);
O *func_00231290(O *p,V *a,V *b){V *v=&D_00426508,*x=&p->b,*y=&p->c,*z=&p->d; N *n; volatile char pad[32];
p->a.x=v->x;p->a.y=v->y;p->a.z=v->z;
x->x=v->x;x->y=v->y;x->z=v->z;
y->x=v->x;y->y=v->y;y->z=v->z;
z->x=v->x;z->y=v->y;z->z=v->z;
n=func_002B1FC0(12);if(!n)n=func_003D2910(12);p->e=n;n->a=n;p->e->b=p->e;
n=func_002B1FC0(12);if(!n)n=func_003D2910(12);p->f=n;n->a=n;p->f->b=p->f;
p->g=-1;p->a.x=a->x;p->a.y=a->y;p->a.z=a->z;x->x=b->x;x->y=b->y;x->z=b->z;return p;}
