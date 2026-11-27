extern void func_001D4040(void*,const char*);
extern char D_0047B1C0[],D_0047C7B8[];
typedef struct {float x,y,z;} V3;
typedef struct {float x,y,z,w;} V4;
typedef struct {int id;u32 key;void *vt;u32 a,b,c;V3 pos;float f24,f28,f2c;V4 m[4];} Obj;
static inline void init3(V3*p,float x,float y,float z){p->x=x;p->y=y;p->z=z;}
static inline void copy3(V3*d,V3*s){d->x=s->x;d->y=s->y;d->z=s->z;}
static inline void init4(V4*p,float x,float y,float z,float w){p->x=x;p->y=y;p->z=z;p->w=w;}
static inline void copy4(V4*d,V4*s){d->x=s->x;d->y=s->y;d->z=s->z;d->w=s->w;}
Obj *func_00289090(Obj*p){u32 key[4];V3 v;V4 t;func_001D4040(key,D_0047B1C0);
init3(&v,0,0,0);p->key=key[0];p->id=-1;p->vt=D_0047C7B8;copy3(&p->pos,&v);
init4(&t,1,0,0,0);p->f24=0;p->f2c=0;p->c=0;p->b=0;p->a=0;copy4(&p->m[0],&t);
init4(&t,0,1,0,0);copy4(&p->m[1],&t);init4(&t,0,0,1,0);copy4(&p->m[2],&t);init4(&t,0,0,0,1);copy4(&p->m[3],&t);return p;}
