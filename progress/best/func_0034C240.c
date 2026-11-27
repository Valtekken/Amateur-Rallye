typedef struct N {struct N *next; int unk; void **begin; void **end; void **cap;} N;
typedef struct {N **begin,**end,**cap;} V;
typedef struct {int unk; V v; int count;} T;
extern char D_0040E618[];
extern void func_002B2028(void *);
void func_0034C240(T *a) {
 unsigned i; V *v=&a->v; 
 for (i=0;i<(unsigned)(v->end-a->v.begin);i++) {
  N *p=a->v.begin[i]; 
  while(p) {
   int n=p->cap-p->begin; N *next=p->next; void **b=p->begin;
   if(n) {
    if(n*4!=0) func_002B2028(b);
    else { *b=*(void***)((D_0040E618 + (-4))); *(void***)(D_0040E618-4)=b; }
   }
   func_002B2028(p); p=next;
  }
  a->v.begin[i]=0;
 }
 a->count=0;
}
