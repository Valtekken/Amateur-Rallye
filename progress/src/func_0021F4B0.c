typedef struct {void **begin,**end,**cap;} Vec;typedef struct {Vec **begin,**end,**cap;} Outer;
extern void func_003F93CC(void*,void*,unsigned);
extern int D_002AD408(int);extern int func_0021E838(int);extern int D_004265D8;
extern void func_001D1900(void*);extern void func_001D2040(int,int);extern void D_002AD390(void*);
void *func_0021F6C8(Vec*a,int*b){int idx=*b;if(idx<=0||(unsigned)idx>=(unsigned)(a->end-a->begin))return 0;return a->begin[idx];}
void func_0021F7D8(Outer*a,void*b){int idx=*(int*)((char*)b+92);if(idx>0){Vec**first=a->begin;if((unsigned)idx<(unsigned)(a->end-first)){Vec*v=first[idx];if(v){void**p=v->begin,**end=v->end;while(p!=end){if(*p==b){void**last=v->end;void**next=p+1;if(next!=last)func_003F93CC(p,next,((s32)((u32)last-(u32)next)>>2)*4);v->end--;break;}p++;}}}}}
int func_0021F4B0(void){if(!D_004265D8)D_004265D8=func_0021E838(D_002AD408(124));return D_004265D8;}
void func_0021FE68(void*a,int flags){void*p;int n=*(int*)((char*)a+48);if(n)func_001D2040(n,3);if(a){p=(char*)a+48;while(a!=p){p=(char*)p-12;func_001D1900(p);}}if(flags&1)D_002AD390(a);}
