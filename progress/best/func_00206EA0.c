extern char D_00478578[], D_0040E618[];
extern void D_002AD390(void *),func_00208590(void *,int),func_002B2028(void *);
typedef struct { int pad; char *begin,*end,*cap; void *vt;} Obj;
void func_00206EA0(Obj *p,int flags) {
 char *a,*b; int d,n; char **v=&p->begin; int f=flags&1;
 p->vt=D_00478578; b=p->end; a=p->begin; d=b-a;
 while((unsigned)a<(unsigned)b){func_00208590(a,2);a+=24;}
 *(volatile char **)&p->end=*(volatile char **)&p->end-d;
 b=*(char * volatile *)&p->end;a=*(char * volatile *)&p->begin;
 while(a<b){func_00208590(a,2);a+=24;}
 a=*v;n=(int)((unsigned)(p->cap-a)*0xAAAAAAABu)>>3;
 if(n){if(n*24)func_002B2028(a);else {*(void **)a=*(void **)(D_0040E618-4);*(void **)(D_0040E618-4)=a;}}
 if(f)D_002AD390(p);
}
