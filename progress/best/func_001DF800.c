extern int func_001D1BC8(void*,const char*),func_001D1CC8(void*,void*,int),func_001D1DB0(void*,void*,int);
extern void func_001D4040(void*,void*),func_001D2488(void*,void*),func_001D2CD8(void*,void*),func_001EAE78(void*,void*,void*),D_002AD390(void*),func_001DF2B0(void*,void*,int);
extern void *func_001DF758(void*,int);
extern char D_00476948[],D_00476950[],D_00476958[],D_00476960[],D_00476968[];
typedef struct { void *a,*b; } Pair;
typedef struct { void *start; Pair *end,*cap; } Vec;
int func_001DF800(char *a,char *b,int depth) {
 Pair p; void **pb; Vec *v; Pair *q; char *t=a+100; int slash; void *child;
 if(!func_001D1BC8(t,D_00476948)) return 0;
 if(!func_001D1CC8(t,a,100)) return 0;
 func_001D4040(b+32,a);
 while(func_001D1CC8(t,a,100)) {
  p.a=0;p.b=0;pb=&p.b;func_001D4040(&p,a);
  if(!func_001D1BC8(t,D_00476950) || !func_001D1DB0(t,a,100)) goto cleanup;
  func_001D2CD8(pb,a);
  v=(Vec*)(b+20);q=v->end;
  if(q!=v->cap) {if(q){q->a=p.a;func_001D2488(&q->b,pb);}v->end++;} else func_001EAE78(v,q,&p);
  D_002AD390(p.b);
 }
 slash=func_001D1BC8(t,D_00476958);
 if(!func_001D1BC8(t,D_00476960)) return 0;
 if(slash) return 1;
 while(!func_001D1BC8(t,D_00476968)) {
  child=func_001DF758(a,depth+1);if(!child)return 0;
  func_001DF2B0(b,child,0);
 }
 if(!func_001D1CC8(t,a,100))return 0;
 func_001D4040(&p,a);
 if(*(void**)(b+32)!=p.a)return 0;
 return func_001D1BC8(t,D_00476960)!=0;
 cleanup: D_002AD390(p.b); return 0;
}
