typedef struct H {int a,size,refs,flag;} H;
typedef struct R {void *p; int n;} R;
typedef struct V {R *b,*e,*c;} V;
typedef struct G {int *map; int x[2]; int *reverse; int y[2]; int *fb,*fe,*fc; R *records; int z[2]; int count;} G;
typedef struct O {int a,b; int *ib,*ie,*ic; V v;} O;
extern G D_004262D0; extern H D_0040E658; extern int D_0040E618[];
extern void func_00378330(int),func_002FA388(int),func_002B2028(void*),func_00152720(void*,void*,void*),func_0030BD50(void*,void*),func_0030B000(void*,void*);
extern int func_002FD7A0(void*);
static inline void drop(void *p){H*h=(H*)p-1;if(!--h->refs){if(h->size+16)func_002B2028(h);else {h->a=D_0040E618[-1];D_0040E618[-1]=(int)h;}}}
static inline void *hold(void*p){H*h=(H*)p-1;if(h->flag)return (void*)func_00151930(h);h->refs++;return p;}
static inline void assign(R*d,R*s){if(s!=d){drop(d->p);d->p=hold(s->p);}d->n=s->n;}
static inline void destroy(V*v){int n=v->c-v->b;if(n){if(n*8)func_002B2028(v->b);else{*(int*)v->b=D_0040E618[-1];D_0040E618[-1]=(int)v->b;}}}
void func_00307060(O*o){register int *i; int *end,id,j; register int last; R tmp; V v,t; t.b=0;t.e=0;t.c=0; R *d,*s;
func_00378330(o->b);func_00378330(o->a);func_002FA388(func_002FD7A0(o));
end=o->ie;
for(i=o->ib;i<end;i++){id=*i;if(id>=0){j=D_004262D0.map[id];if(!--D_004262D0.records[j].n){last=--D_004262D0.count;if(j!=last){d=&D_004262D0.records[j];s=&D_004262D0.records[last];int k=D_004262D0.reverse[last];assign(d,s);D_004262D0.map[k]=j;D_004262D0.reverse[j]=k;}d=&D_004262D0.records[D_004262D0.count];tmp.p=hold(&D_0040E658+1);tmp.n=0;assign(d,&tmp);drop(tmp.p);if(D_004262D0.fe!=D_004262D0.fc){if(D_004262D0.fe)*D_004262D0.fe=id;D_004262D0.fe++;}else func_00152720(&D_004262D0.fb,D_004262D0.fe,&id);}*i=-1;}}
o->ie=o->ib;o->v.e=o->v.b;func_0030BD50(&v,&o->v);func_0030B000(&o->v,&t);func_0030B000(&t,&v);destroy(&v);destroy(&t);}
