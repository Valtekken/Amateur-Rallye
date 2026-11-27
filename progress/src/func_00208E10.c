typedef struct { int *begin,*end,*cap; } Vec;
typedef struct { unsigned count; char pad[8]; Vec a; char pad2[16]; Vec b,c,d,e; } Obj;
extern int func_003F93CC(void *,void *,int);
extern void func_001551C0(Vec *,void *,unsigned,void *);
static inline void resize(Vec *v,unsigned n,void *zero) {
 int *end=v->end; int size=end-v->begin;
 if(n<(unsigned)size) { int *p=(int *)((n*4)+(unsigned)v->begin); func_003F93CC(p,end,0); v->end=(int *)((char *)v->end-((char *)end-(char *)p)); }
 else func_001551C0(v,end,n-size,zero);
}
void func_00208E10(Obj *o,unsigned n) {
 int z0,z10; float z4,z8,zc;
 o->count=n;
 z0=0; resize(&o->b,n,&z0); z4=0.0f; resize(&o->c,n,&z4); z8=0.0f; resize(&o->d,n,&z8); zc=0.0f; resize(&o->e,n,&zc); z10=0; resize(&o->a,n,&z10);
}
