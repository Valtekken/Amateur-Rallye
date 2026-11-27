extern char *func_001D4010(void*);
extern void func_001D4040(void*,const char*),func_001E15E0(void*,void*,int);
extern int func_003FA388(const char*,const char*,void*),func_003FA760(const char*,const char*);
extern char D_00476AA0[];
typedef struct { int a; char *b; int c; char *d; int e; char *f; } Entry;
typedef struct { Entry *start,*end; } Vec;
typedef struct { char pad[0x14]; Vec vec; int pad1; int type; } List;
typedef struct { char pad[0x18]; char str[12]; int a; char pad2[0x1c]; int b,type; } Obj;
int func_001E0630(Obj *a,List *b,int *out,void *v) {
 int n,ok; char *s; Entry *p; char sp[16]; volatile Vec *vec;
 if(b->type==a->type) {
  vec=&b->vec; p=b->vec.start; n=((char*)vec->end-(char*)p)>>3;
  if((n==3||n==5)&&p->a==a->a&&p->c==a->b) {
   s=func_001D4010(a->str); ok=0;
   if(p->d && s) ok=func_003FA760(s,p->d)==0;
   if(ok && b->vec.start->e==a->type) {
    func_001D4040(sp,b->vec.start->b); *out=*(int*)sp;
    if((((char*)vec->end-(char*)b->vec.start)>>3)==5) func_001E15E0(a,b,3);
    return func_003FA388(b->vec.start->f,D_00476AA0,v)==1;
   }
  }
 }
 return 0;
}
