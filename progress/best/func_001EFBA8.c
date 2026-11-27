typedef struct {char data[52];} Item;
typedef struct {Item *begin,*end,*cap;} Vec;
typedef struct {Vec **begin,**end,**cap;} Outer;
extern void func_002B2028(void *); extern void D_002AD390(void *); extern char D_0040E618[];
void func_001EFBA8(Outer *o,int flags) {
 Vec **it; Vec *v; Item *p; int n; Vec **q;
 for(it=o->begin;it!=o->end;it++) {v=*it; if(v) {
  p=v->begin; while(p<v->end) p++;
  n=v->cap-v->begin;
  if(n) {if(n*52) func_002B2028(v->begin); else {*(void**)v->begin=*(void**)(D_0040E618-4); *(void**)(D_0040E618-4)=v->begin;}}
  D_002AD390(v);
 }}
 q=o->begin; n=o->cap-q;
 if(n) {if(n*4) func_002B2028(q); else {*q=*(Vec**)(D_0040E618-4); *(Vec***)(D_0040E618-4)=q;}}
 if(flags&1) D_002AD390(o);
}
