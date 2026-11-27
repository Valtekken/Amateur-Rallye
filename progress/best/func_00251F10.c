typedef struct {void **begin, **end, **limit;} Vec;
typedef struct N {struct N *next,*prev; void *value;} N;
extern int func_0024C758(void *),func_0024C788(void *);
extern void func_001CAD18(void *,void **,void **);
extern N *func_002B1FC0(int),*func_003D2910(int);
void func_00251F10(int a,int b,char *src,char *yes,char *no,N **list) {
 volatile char pad[32]; Vec *v=(Vec *)(src+12),*dst; int i,n; void *p,*t1,*t2; void **end,**tp;
 n=v->end-v->begin;
 for(i=0;i<n;i++) { void **q=v->begin; q+=i; p=*q;
 if(func_0024C758(p)) { N *volatile at=*list; N *node=func_002B1FC0(12); if(!node) node=func_003D2910(12); if(&node->value) node->value=p; node->next=at; node->prev=at->prev; at->prev->next=node; at->prev=node;  }
 else { int r=func_0024C788(p); if(r==-1) {t1=p;dst=(Vec *)(yes+12);end=dst->end;if(end==dst->limit) {func_001CAD18(dst,end,&t1);continue;} goto insert;}
 else if(r==1) {t2=p;tp=&t2;dst=(Vec *)(no+12);end=dst->end;if(end!=dst->limit) {insert: if(end) *end=p; dst->end++;} else func_001CAD18(dst,end,tp);}
 }}
}
