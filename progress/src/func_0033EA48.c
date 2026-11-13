/* identical to func_00151670 (matched), with its names changed by decompdecomp */
typedef struct {float x,y,z;} E;
typedef struct {E *b,*e,*c;} Vec;
extern E *func_00151630(E*,E*,E*,int);
extern void *func_002B1FC0(unsigned);
extern void *func_003D2910(unsigned);
extern void *func_00152D28(unsigned);
extern void func_002B2028(void*);
extern u32 D_0040E618[];
static inline void *raw(unsigned size){void *r=func_002B1FC0(size);if(r==0)return func_003D2910(size);return r;}
static inline E *zeroalloc(void){E *p=(E*)D_0040E618[-1];if(p==0)return func_00152D28(0);D_0040E618[-1]=*(u32*)p;return p;}
static inline E *alloc(unsigned n){unsigned size;E *p;if(n){size=n*12;if(size){p=raw(size);}else{p=zeroalloc();}}else p=0;return p;}
static inline void destroy(E *p,E *end){while(p<end)++p;}
static inline void freev(E *p,unsigned n){if(n){unsigned size=n*12;if(size)func_002B2028(p);else{*(u32*)p=D_0040E618[-1];D_0040E618[-1]=(u32)p;}}}
static inline E *copy(const E *first,const E *last,E *result){const E *a=first;int n=last-a;E *d=result;while(n>0){d->x=a->x;d->y=a->y;d->z=a->z;++a;++d;--n;}return d;}
Vec *func_0033EA48(Vec *a,Vec *b){if(b!=a){E *be=b->e,*bb=b->b;unsigned n=be-bb;E *base=a->b;unsigned capacity=a->c-base;if(capacity<n){E *p=alloc(n);func_00151630(bb,be,p,0);destroy(a->b,a->e);freev(a->b,a->c-a->b);a->b=p;a->c=p+n;}else if((unsigned)(a->e-a->b)>=n){E *p=copy(bb,be,a->b);destroy(p,a->e);}else{copy(bb,bb+(a->e-a->b),a->b);func_00151630((E*)((a->e-a->b)*sizeof(E)+(u32)b->b),b->e,a->e,0);}a->e=a->b+n;}return a;}
