typedef struct {void **begin,**end,**cap;} V;
typedef struct {char pad[12]; V v;} Obj;
typedef struct {char pad[12]; void *p;} A;
typedef struct {A *a; int pad; char v[12]; float f;} E;
extern int func_00233E78(void *,void *,void *,float),func_0024E420(void *,E *,void *);
extern void func_001CAD18(V *,void **,E **);
int func_0024E2C8(void *a,Obj *b,void *c,char *d,char *e,V *out,int all) {
 V *v=&b->v; char *d0=d+24,*e0=e+24; int i,n=v->end-v->begin; E *p;
 for(i=0;i<n;i++) { void **q=v->begin; q+=i; p=*q;
 if(func_00233E78(c,p->a->p,p->v,p->f) && func_0024E420(a,p,d0) && func_0024E420(a,p,e0)) {
 if(!all) return 1;
 if(out->end!=out->cap) { if(out->end) *out->end=p; out->end++; } else func_001CAD18(out,out->end,&p);
 }} if(!all) return 0; return out->end-out->begin !=0;
}
