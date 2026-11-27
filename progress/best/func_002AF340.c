typedef struct { int a,b,c; int *list; int count; } Obj;
extern int func_002AF270(int); extern void *func_002B1FC0(int);
extern void func_002AF2B8(int,void *,unsigned *,int *); extern int *func_002AF008(void *,int);
void func_002AF340(Obj *o) {
 int *p,*q,n,size; struct {void *a; int b; void *c; int d;} sp; int hi; unsigned lo;
 if(o->list) { p=o->list; n=0; while(*p) {n+=func_002AF270(*p);p++;} }
 else n=func_002AF270(o->c);
 size=n*4; o->count=n;
 sp.a=func_002B1FC0(size); sp.c=func_002B1FC0(size);
 sp.b=0;sp.d=0;lo=0xffffffffU;hi=0;
 if(o->list) {q=o->list; if (*q) { unsigned *lp=&lo; int *hp=&hi; do {func_002AF2B8(*q,&sp,lp,hp);q++;} while(*q); }}
 else func_002AF2B8(o->c,&sp,&lo,&hi);
 o->list=func_002AF008(&sp,n);o->a=lo;o->b=hi;
}
