typedef struct {float x,y,z,w;} V;
typedef struct {int a,b; int pad[2]; V v[4];} E;
extern void func_00217048(E*,E*);
static inline void vc(V*d,V*s){d->x=s->x;d->y=s->y;d->z=s->z;d->w=s->w;}
static inline void ec(E*d,E*s){d->a=s->a;d->b=s->b;vc(&d->v[0],&s->v[0]);vc(&d->v[1],&s->v[1]);vc(&d->v[2],&s->v[2]);vc(&d->v[3],&s->v[3]);}
void func_00217598(E*p,E*end){E v;E*cur=p;for(;cur!=end;cur++){ec(&v,cur);func_00217048(cur,&v);}}
