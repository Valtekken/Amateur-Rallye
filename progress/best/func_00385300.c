typedef struct E72{u32 data[18];}E72;
typedef struct V72{E72*b,*e,*c;}V72;
extern u32 D_0040E618[];
extern void func_002B2028(void*),D_002AD390(void*),func_00386948(void*,s32);
void func_00385300(V72*v,int flags){E72*e,*begin,*p,*cap;int n;e=v->e;begin=v->b;for(;begin<e;begin++){func_00386948(begin,2);}cap=v->c;p=v->b;n=cap-p;if(n){if(n*72)func_002B2028(p);else{*(u32*)p=D_0040E618[-1];D_0040E618[-1]=(u32)p;}}if(flags&1)D_002AD390(v);}
