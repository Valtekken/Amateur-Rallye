extern void D_002AD390(void*); extern void func_002B2028(void*); extern void *func_003CD828(void*); extern s32 func_002B2078(void*,u32); extern s32 func_003D2D38(void*,u32);
extern u32 D_0047D9A8[],D_00488DF8[]; extern void *D_00437E18[];
typedef struct {void* v; char* str;} Obj;
typedef struct {void* next;u32 size;s32 refs;s32 lock;} Pool;
void func_003D2868(Obj*a,s32 b){char*q=a->str;Pool*p=(Pool*)(q-16);s32 n=p->refs-1;p->refs=n;if(!n){u32 z=p->size;if(z+16>=129)func_002B2028(p);else{void**s=&D_00437E18[((z+23)>>3)-1];*(void**)(q-16)=*s;*s=p;}}a->v=D_0047D9A8;if(b&1)D_002AD390(a);}
void *func_003D27D8(Obj*a,Obj*b){char*q=b->str;Pool*p=(Pool*)(q-16);a->v=D_00488DF8;if(p->lock)q=func_003CD828(p);else p->refs++;a->str=q;return a;}
s32 func_003D2DE8(void*a,s32 b,u32 c){s32 r=func_002B2078(a,c);if(!r)r=func_003D2D38(a,c);return r;}
void func_003D2E30(void*a,s32 b){if(b&1)D_002AD390(a);}
