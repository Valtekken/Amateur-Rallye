typedef struct {void **b,**e,**c;} Vec;
extern void *func_00152D28(int),*func_002B1FC0(int),*func_003D2910(int);
extern void func_002B2028(void *),func_003F93CC(void *,void *,int);extern u32 D_0040E618[];
static inline void *alloc(unsigned z){void *q=func_002B1FC0(z);if(!q)q=func_003D2910(z);return q;}
static inline void *za(void){u32 *q=(u32*)D_0040E618[-1];if(!q)return func_00152D28(0);D_0040E618[-1]=*q;return q;}
Vec *func_00206AA0(Vec *p,int n){void **v,**b;int bytes,k; volatile int allocator;
p->b=0;p->e=0;p->c=0;
if(n){bytes=n*4;if((short)n){if(bytes) v=alloc(bytes);else v=za();}else {v=0;bytes=0;}
func_003F93CC(v,0,0);b=p->b;k=(s32)((char*)p->c-(char*)b)>>2;if(k){if(k*4)func_002B2028(b);else{*b=(void*)D_0040E618[-1];D_0040E618[-1]=(u32)b;}}
p->c=(void**)((char*)v+bytes);p->b=v;p->e=v;
}return p;}
