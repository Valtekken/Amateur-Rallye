typedef struct E36{u32 data[9];}E36;
typedef struct V36{E36*b,*e,*c;}V36;
extern u32 D_0040E618[];
extern void func_002B2028(void*),D_002AD390(void*);
void func_001D6F38(V36*v,int flags){E36*e,*begin,*p,*cap;int n;e=v->e;begin=v->b;for(;begin<e;begin++){}cap=v->c;p=v->b;n=cap-p;if(n){if(n*36)func_002B2028(p);else{*(u32*)p=D_0040E618[-1];D_0040E618[-1]=(u32)p;}}if(flags&1)D_002AD390(v);}
