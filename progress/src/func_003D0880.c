extern s32 D_002AD390(void*);
extern void func_002B2028(void*,void*,void*);
extern void*D_00437E18[];
typedef struct{char*str;}Obj;
typedef struct{void*next;u32 size;s32 refs,lock;}Pool;
s32 func_003D0880(Obj*a,s32 b){char*q=a->str;Pool*p=(Pool*)(q-16);s32 n=p->refs-1;p->refs=n;if(!n){u32 z=p->size;if(z+16>=129)func_002B2028(p,p,q);else{void**s=(void**)((char*)D_00437E18+((((z+23)>>3)-1)*4));*(void**)(q-16)=*s;*s=p;}}if(b&1)return D_002AD390(a);}
