extern s32 func_002B2028(u32);extern void *func_003CD828(void*); extern void *func_002B1FC0(u32);extern void *func_003D2910(u32);extern void *func_003D2B48(u32);
extern u32 D_00488DF8[]; typedef struct Node{struct Node*next;}Node;extern Node*D_00437E18[];
typedef struct{void*v;char*str;}Obj;typedef struct{u32 next,size;s32 refs,lock;}Pool;
void *func_003D27D8(Obj*a,Obj*b){char*q=b->str;Pool*p=(Pool*)(q-16);char**dst=&a->str;a->v=D_00488DF8;if(p->lock)q=func_003CD828(p);else p->refs++;*dst=q;return a;}
s32 func_003D2EB8(u32 a){return func_002B2028(a);}
void *func_003D2ED8(u32 n){if(n>=129){void*p=func_002B1FC0(n);if(!p)p=func_003D2910(n);return p;}else{u32 z=n+7;Node**s=(Node**)((char*)D_00437E18+(((z>>3)-1)*4));Node*p=*s;if(!p)return func_003D2B48(z&~7u);*s=p->next;return p;}}
void *func_003D2F68(u32 n){void*p=func_002B1FC0(n);if(!p)p=func_003D2910(n);return p;}
