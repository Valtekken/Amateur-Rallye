extern u32 D_0040E618[]; extern void func_002B2028(void *), D_002AD390(void *); extern void func_00201718(void *,int),func_002028B0(void *,int);
static inline void drop(u32 *p) { u32 *c=(u32*)p[2], *b=(u32*)p[0]; s32 n=((s32)c-(s32)b)>>2; if(n) {if(n<<2) func_002B2028(b); else {u32 t=D_0040E618[-1]; *b=t; D_0040E618[-1]=(u32)b;}}}
void func_0023C778(void *a,u32 flag){u32 *p=a; drop(p+44);func_00201718(p+15,2);drop(p+12);drop(p+9);drop(p+6);func_002028B0(p+3,2);drop(p);if(flag&1) D_002AD390(a);}
