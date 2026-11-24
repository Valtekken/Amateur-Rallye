extern f32 D_00426508[];
typedef struct {int a,b,c;} V;
typedef struct {int a,b,c; V v1,v2; int x,y; V v3,v4,v5; int z,w; float f[3]; int q,r;} T;
static inline void init(V *v){v->a=0;v->c=(v->b=0);}
static inline void vec(float *d,float *s){d[0]=s[0];d[1]=s[1];d[2]=s[2];}
T *func_0022C938(T *p){volatile int stack[24]; p->a=0;p->b=0;p->c=0;init(&p->v1);init(&p->v2);p->x=0;p->y=0;init(&p->v3);init(&p->v4);init(&p->v5);p->z=0;p->w=0;vec(p->f,D_00426508);p->q=0;p->r=0;return p;}
