typedef struct { void **begin, **end, **limit; } Vec;
typedef struct { int unused; void **begin,**end; } Input;
extern int func_003F93CC(void *,void *,int);
extern float func_0023BC60(void *);
extern void func_00273B58(Vec *,void **,void **);
extern float D_00479B50;
void func_0023C970(char *a, Input *b) {
 Vec *v=(Vec *)(a+0xB0); void **start=v->begin, **end=v->end; int i=0,n; void *p; float threshold;
 func_003F93CC(start,end,0);
 v->end=(void **)((char *)v->end-((char *)end-(char *)start));
 n=b->end-b->begin;
 if(n>0) { threshold=D_00479B50;
 do {
   void **q=b->begin; float f; q+=i; p=*q;
   f=func_0023BC60(p);
   if(threshold<=f && f<0.0f) {
     Vec *dst=(Vec *)(a+0xB0); void **e=dst->end;
     if(e!=dst->limit) { if(e) *e=p; dst->end++; }
     else func_00273B58(dst,e,&p);
   }
   i++;
 } while(i<n); }
}
