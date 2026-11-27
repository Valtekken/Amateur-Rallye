extern void func_001D4040(void*,const char*); extern char D_0047C548[],D_0047C558[],D_0047C680[];
typedef struct {float x,y,z,w;} V4;
typedef struct {u32 key;void *vt;float f;int n;V4 m[5];u32 end;} Obj;
static inline void init4(V4*p,float x,float y,float z,float w){p->x=x;p->y=y;p->z=z;p->w=w;}
static inline void copy4(V4*d,V4*s){d->x=s->x;d->y=s->y;d->z=s->z;d->w=s->w;}
Obj *func_002A28E8(Obj*p){u32 key[4];V4 t;func_001D4040(key,D_0047C548);
init4(&t,1,0,0,0);p->key=key[0];p->vt=D_0047C680;p->f=1.234f;p->n=1;p->end=0;copy4(&p->m[0],&t);
init4(&t,0,1,0,0);copy4(&p->m[1],&t);init4(&t,0,0,1,0);copy4(&p->m[2],&t);init4(&t,0,0,0,1);copy4(&p->m[3],&t);init4(&t,1,2,3,4);copy4(&p->m[4],&t);func_001D4040(&t,D_0047C558);p->end=*(u32*)&t;return p;}
