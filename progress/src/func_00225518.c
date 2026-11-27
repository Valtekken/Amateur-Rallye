typedef struct V { char *begin,*end,*limit; } V;
typedef struct O { V **begin,**end,**limit; V v; } O;
extern void func_002B2028(void *), D_002AD390(void *);
extern void *D_0040E618[];
static inline void destroy(V *v) { int n=(v->limit-v->begin)>>2; if(n) { if(n*4) func_002B2028(v->begin); else { char *p=v->begin; *(void **)p=D_0040E618[-1]; D_0040E618[-1]=p; } } }
void func_00225518(O *o,int flags) {
 V **p=o->begin;
 while(p!=o->end) { V *v=*p; V **next=p+1; if(v) { char *q=v->begin; while(q<v->end) q+=4; destroy(v); D_002AD390(v); } p=next; }
 { V *v=&o->v; char *q=v->begin; while(q<v->end) q+=4; destroy(v); }
 { int n=(o->limit-o->begin); if(n) { if(n*4) func_002B2028(o->begin); else { V **p=o->begin; *(void **)p=D_0040E618[-1]; D_0040E618[-1]=p; } } }
 if(flags&1) D_002AD390(o);
}
