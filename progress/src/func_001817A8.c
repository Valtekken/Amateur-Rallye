extern u32 D_0040E618[]; extern char D_00473DD0[],D_0044DCD8[]; extern void D_002AD390(void *),D_002AD530(void *),func_002B2028(void *);
typedef struct {void **begin,**end,**cap;} Vec;
typedef struct {char pad[8];void *vt; char pad2[4];void *ptr;char pad3[20];Vec v0,v1,v2;} Obj;
static __inline__ void free_vec(Vec *v){void **cap=v->cap,**begin=v->begin; s32 n=cap-begin;if(n){s32 size=n<<2;if(size)func_002B2028(begin);else{*(void **)begin=(void *)D_0040E618[-1];D_0040E618[-1]=(u32)begin;}}}
static __inline__ void destroy(Vec *v){void **p;for(p=v->begin;p<v->end;p++){} free_vec(v);}
void func_001817A8(Obj *a,int flags){a->vt=D_00473DD0;if(a->ptr)D_002AD530(a->ptr);destroy(&a->v2);{Vec *v=&a->v1; void **end=v->end; void **p=v->begin; for(;p<end;++p){} free_vec(v);} {Vec *v=&a->v0; void **end=v->end; void **p=v->begin; for(;p<end;++p){} free_vec(v);}a->vt=D_0044DCD8;if(flags&1)D_002AD390(a);}
