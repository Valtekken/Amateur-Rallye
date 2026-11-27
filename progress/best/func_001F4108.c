typedef struct {char b[52];} E;
typedef struct {E *start,*end,*cap;} Vec;
typedef struct N {int a; struct N *next; int b,c; char *vt;} N;
typedef struct {N *head; char pad[48]; Vec *vec;} Obj;
extern void D_002AD390(void*),*D_002AD408(int),func_002B2028(void*),func_001DF3C8(void*,void*),func_001F4248(void*,void*,void*);
extern void *D_0040E618[];
void func_001F4108(void *a,Obj *b,void *c) {
 volatile char pad[16]; Vec *v=b->vec;
 if(v) { E *q=v->start,*end=v->end,*p=q; int n;
 if(q<end) do {q++;}while(q<end);
 n=v->cap-p;
 if(n) {if(n*52) func_002B2028(p); else {*(void**)p=D_0040E618[-1]; D_0040E618[-1]=p;}}
 D_002AD390(v); }
 { Vec *z=D_002AD408(12); b->vec=z; z->start=(z->end=0); z->cap=0; }
 {N *p=b->head; if(p) do {N *next=p->next; if(p) {char *vt=p->vt; ((void (*)(void*,int))*(void**)(vt+12))((char*)p+*(s16*)(vt+8),3);} p=next;}while(p);}
 func_001DF3C8(b,c); func_001F4248(a,b,b);
}
