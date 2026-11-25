extern void D_002AD390(void*);extern void func_00292F28(void*);extern void func_002A59B8(void*,void*,s32,void*);extern void func_002B2028(void*);extern u32 D_0040E618[];
typedef struct {void **b; void **e;} V;
typedef struct {void *p; char pad[4]; void *e;} E;
void func_00293408(V *v,u32 *arg1,void *val){u32 idx=*arg1;void *end=v->e;s32 n=((char*)end-(char*)v->b)>>2;s32 off;if(idx>=(u32)n){s32 tmp=0;func_002A59B8(v,end,(s32)(idx-n+1),&tmp);off=idx<<2;}else{E*old=(E*)v->b[idx];off=idx<<2;if(old){E*b=old;func_00292F28(old);s32 n2=((char*)b->e-(char*)b->p)>>2;if(n2){void*p=b->p;if((n2<<2)!=0)func_002B2028(p);else{*(u32*)p=D_0040E618[-1];D_0040E618[-1]=(u32)p;}}D_002AD390(old);}}void *base=v->b;*((void**)((char*)base+off))=val;}
