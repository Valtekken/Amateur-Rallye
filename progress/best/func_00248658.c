typedef struct { float a,b,c,d; int e; } V;
typedef struct { int *begin,*end; int cap; } B;
typedef struct { B *b; char pad2[8]; void **items; char pad3[12]; unsigned shift; int z; unsigned mask; } T; typedef struct {char pad[0x24]; T t;} H;
typedef struct { char pad[4]; int flag; char pad2[12]; V v; } E;
typedef struct { E **begin,**end; } L;
extern V D_004264A8;
void func_00248658(H *h,L *l) {
 int n=l->end-l->begin, i;
 for(i=0;i<n;i++) { E **p=l->begin; p+=i; E *e=*p; if(e) {
 T *t=&h->t; B *b=t->b; b+=((unsigned)e >> t->shift)&t->mask; int found=0; int *q;
 if(b->end!=b->begin) { q=b->begin; while(q!=b->end) { if(t->items[*q]==e) {found=1;break;} q++; } }
 if(found) e->flag=-1; else {e->flag=1;{V *v=&e->v; v->a=D_004264A8.a;v->b=D_004264A8.b;v->c=D_004264A8.c;v->d=D_004264A8.d;v->e=D_004264A8.e;}}
 }}
}
