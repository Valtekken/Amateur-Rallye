typedef struct V {float x,y,z;} V;
typedef struct M {V x;float p0;V y;float p1;V z;float p2;V t;float w;} M;
typedef struct {float e;} E;
static inline void copy(V*d,V*s){d->x=s->x;d->y=s->y;d->z=s->z;}
static inline int near(float v){E s={1.1920929e-6f};float ne=-s.e;return ne<=v && v<=s.e;}
void func_001B19C0(void*unused,M*a,M*b){
  V t; copy(&t,&a->t); copy(&a->z,&b->z); a->z.y=0;
  if(near(a->z.x)) if(near(a->z.z)) a->z.x=1.0f;
  a->y.x=0; a->y.y=1; a->y.z=0;
  {float f=a->y.x, x=a->z.x, z=a->z.z, y=a->z.y*f;
   a->x.y=x*f-z*f; a->x.z=y-x; a->x.x=z-y;}
  copy(&a->t,&t); a->w=1;
}
