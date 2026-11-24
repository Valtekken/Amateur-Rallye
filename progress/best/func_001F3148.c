typedef struct V { float x,y,z; } V; typedef struct A { V *b,*e; } A; typedef struct B { A **b,**e; } B; typedef struct O { char pad[28]; B *b; char pad2[24]; A *a; } O;
extern int func_001EF980(B *, int, A *);
void func_001F3148(float *s,O *o) { V *p; A **q; int n; A *a;
p=o->a->b; while(p!=o->a->e) {p->x*=*s;p->y*=*s;p->z*=*s;p++;}
a=o->a; if(func_001EF980(o->b,a->e-a->b,a)) n=o->b->e-o->b->b; else n=0;
if(n) {q=o->b->b; while(q!=o->b->e) {p=(*q)->b; while(p!=(*q)->e) {p->x*=*s;p->y*=*s;p->z*=*s;p++;}q++;}}}
