typedef struct {void **b,**e,**c;} Vec;
extern void func_00226DC0(Vec *),func_00229658(void *,int),func_002B2028(void *),D_002AD390(void *);
extern void func_003F93CC(void *,void *,int); extern u32 D_0040E618[];
void func_002267C0(Vec *p,int flags){int i=0,n,sz;void **b,**e,**q;void *v;
func_00226DC0(p); n=(s32)((char*)p->e-(char*)p->b)>>2;
if(n>0) do {q=p->b;q+=i;v=*q;if(v)func_00229658(v,3);i++;}while(i<n);
b=p->b;e=p->e;func_003F93CC(b,e,0);p->e=(void**)((char*)p->e-((char*)e-(char*)b));
{ void **start=p->b; int size=(s32)((char*)p->c-(char*)start)>>2; if(size){if(size<<2)func_002B2028(start);else{*start=(void*)D_0040E618[-1];D_0040E618[-1]=(u32)start;}}}
if(flags&1)D_002AD390(p);
}
