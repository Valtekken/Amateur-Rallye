extern u32 D_0040E618[]; extern void func_002B2028(void*),D_002AD390(void*); extern void func_00217788(void*,void*,u32,void*);
typedef struct {char *start,*end,*cap;} V;
void func_001FDD38(V *a,u32 *idx,void *value) {u32 i=*idx,off; int zero; V *p; char *start,*end,*orig; s32 n,diff;
 if(i >= (u32)((a->end-a->start)>>2)){zero=0;func_00217788(a,a->end,i-((a->end-a->start)>>2)+1,&zero);off=i*4;}
 else {p=*(V**)(a->start+i*4);off=i*4;if(p){orig=start=p->start;end=p->end;if(start<end){do{start+=0x50;}while(start<end);}
 diff=(s32)(p->cap-orig);n=(diff*(s32)0xcccccccd)>>4;if(n){if(n*0x50)func_002B2028(orig);else{*(u32*)orig=D_0040E618[-1];D_0040E618[-1]=(u32)orig;}}D_002AD390(p);}}
 *(void**)(a->start+off)=value;
}
