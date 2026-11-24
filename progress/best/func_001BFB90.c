typedef void (*Fn)(void*);
#define F(p,t,o) (*(t*)((char*)(p)+(o)))
static inline void run(void *p){void *v=F(p,void*,0xdc); F(v,Fn,0x1c)((char*)p+F(v,short,0x18) );}
typedef struct { void **begin,**end; } V;
void func_001BFB90(void *a){V *v=(V*)((char*)a+4); void **p=v->begin; void *x; while(p!=v->end){ x=*p++;run(x); }
if(F(a,int,0x78)) F(F(a,void*,0x28),int,0xa8)=1; else F(F(a,void*,0x28),int,0xa8)=0;
x=F(a,void*,0x1c);if(x)run(x);x=F(a,void*,0x20);if(x)run(x);x=F(a,void*,0x24);if(x)run(x);x=F(a,void*,0x2c);if(x)run(x);
}
