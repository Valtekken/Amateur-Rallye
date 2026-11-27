typedef struct { char *begin,*end,*limit; } V;
extern void func_001551C0(V *,int,int,int *),func_00202FE0(void *,void *,void *,V *),func_002B2028(void *);
extern float func_00204588(void *,void *);
extern void *D_0040E618[];
static inline void destroy(V *v) { int n=(v->limit-v->begin)>>2; if(n) { if(n*4) func_002B2028(v->begin); else { { char *p=v->begin; *(void **)p=D_0040E618[-1]; D_0040E618[-1]=p; } } } }
int func_002045F8(void *a,V *b,void *c,void *d) {
 V v; int z; volatile char pad[16]; float f; v.begin=0; v.end=0; v.limit=0; z=0;
 func_001551C0(&v,0,(int)((unsigned)(b->end-b->begin)*0xAAAAAAABu)>>2,&z);
 func_00202FE0(b,d,c,&v);
 f=func_00204588(a,&v); f/=func_00204588(a,c);
 if(f<0.00001f) { destroy(&v); return 1; }
 destroy(&v); return 0;
}
