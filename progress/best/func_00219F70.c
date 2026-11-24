typedef struct {int *begin,*end,*cap;} V; typedef struct {V v[2];} V2;
extern void *func_00152D28(unsigned);extern void *func_002B1FC0(unsigned);extern void *func_003D2910(unsigned);extern void func_003F93CC(void*,const void*,unsigned);extern u32 D_0040E618[];
static inline void *alloc(unsigned z){void*q=func_002B1FC0(z);if(!q)q=func_003D2910(z);return q;}
static inline void *zeroalloc(void){int*q=(int*)D_0040E618[-1];if(!q)return func_00152D28(0);D_0040E618[-1]=*q;return q;}
static inline void copy(V*d,V*s){unsigned n,bytes;int*p;volatile int allocator;
n=s->end-s->begin;d->begin=0;d->end=0;d->cap=0;
if(n){bytes=n*4;if(bytes)p=alloc(bytes);else p=zeroalloc();}else{p=0;bytes=0;}
d->begin=p;d->end=p;d->cap=(int*)((char*)p+bytes);
{int*sb=s->begin;int diff=(char*)s->end-(char*)sb;func_003F93CC(p,sb,(diff>>2)*4);d->end=(int*)((char*)p+diff);}}
V2 *func_00219F70(V2*a,V2*b){volatile int allocator2[4];copy(&a->v[0],&b->v[0]);copy(&a->v[1],&b->v[1]);return a;}
