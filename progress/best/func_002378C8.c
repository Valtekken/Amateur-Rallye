typedef struct N { struct N *a,*b; int x; } N;
typedef struct { N *head; char *begin,*end,*limit; int a,b,c; } S;
extern void *func_002B1FC0(int),*func_003D2910(int);
extern void func_002B2028(void *),func_003F93CC(void *,void *,int);
extern void *D_0040E618[];
S *func_002378C8(S *s) {
 N *p; char *old,*q; int n,bytes,cap;
 p=func_002B1FC0(12); if(!p) p=func_003D2910(12); s->head=p; p->a=p; s->head->b=s->head;
 { char **v=&s->begin; char **w=(char **)&s->a; v[0]=0; v[1]=0; v[2]=0; w[0]=0; w[1]=0; w[2]=0; }
 { volatile char pad[64]; } old=s->begin; if((unsigned)((s->limit-old)>>2)<8) {
 n=(s->end-old)>>2; q=func_002B1FC0(32); if(!q) q=func_003D2910(32); bytes=n*4;
 func_003F93CC(q,old,bytes);
 old=s->begin; cap=(s->limit-old)>>2;
 if(cap) { if(cap*4) func_002B2028(old); else { *(void **)old=D_0040E618[-1]; D_0040E618[-1]=old; } }
 s->begin=q; s->end=q+bytes; s->limit=q+32;
 } return s;
}
