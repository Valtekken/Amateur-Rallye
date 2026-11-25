typedef struct V{void **b,**c,**e; s32 idx;}V;
extern u32 func_001D3BB8(void*,s32);
extern void *D_002AD408(s32);
extern void *func_001D3AF8(void*,s32);
extern void func_001D7EC0(void*,void*,void*);
void func_001D3DD0(V*v,s32 arg1){void*p;if(func_001D3BB8(v->b[v->idx],arg1)==0){s32 idx=v->idx+1;v->idx=idx;if(idx==(s32)((s32)v->c-(s32)v->b)>>2){p=func_001D3AF8(D_002AD408(0xC),0x8000);if(v->c!=v->e){if(v->c)*v->c=p;v->c++;}else func_001D7EC0(v,v->c,&p);}func_001D3BB8(v->b[v->idx],arg1);}}
