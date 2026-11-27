typedef struct V { int *begin,*end,*cap; } V;
extern int func_003F93CC(void *,void *,int);
extern void func_002B2028(void *);
extern void D_002AD390(void *);
extern int D_0040E618[];
void func_00208590(V *v, int flags) {
 V *w=v+1; int *e=v->end; int *b=v->begin; int n;
 func_003F93CC(b,e,0); v->end=(int *)((char *)v->end-((char *)e-(char *)b));
 { int *b2=w->begin; int *e2=w->end; func_003F93CC(b2,e2,0); w->end=(int *)((char *)w->end-((char *)e2-(char *)b2)); }
 { int *p=w->begin; n=w->cap-p;
 if(n) { if(n*4) func_002B2028(p); else { *p=D_0040E618[-1]; D_0040E618[-1]=(int)p; } } }
 { int *cap=v->cap; int *p=v->begin; n=cap-p;
 if(n) { if(n*4) func_002B2028(p); else { *p=D_0040E618[-1]; D_0040E618[-1]=(int)p; } } }
 if(flags&1) D_002AD390(v);
}
