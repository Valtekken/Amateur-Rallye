typedef struct V { char *begin,*end,*cap; } V;
extern char D_0040E618[]; extern void func_00175AD0(void *,int); extern void func_002B2028(void *); extern void D_002AD390(void *);
void func_00176B20(V *o, int flags) {
 V *p=(V*)o->begin,*end=(V*)o->end;
 while(p<end) { char *stop=p->end,*x=p->begin; V *next=p+1;
 while(x<stop){func_00175AD0(x,2);x+=48;}
 {char *q=p->begin; int n=(int)((u32)(p->cap-q)*0xaaaaaaabu)>>4;
 if(n){if(n*48)func_002B2028(q);else {*(void**)q=*(void**)(D_0040E618-4);*(void**)(D_0040E618-4)=q;}}}
 p=next;
 }
 { char *q=o->begin; int n=(int)((u32)(o->cap-q)*0xaaaaaaabu)>>2;
 if(n){if(n*12)func_002B2028(q);else {*(void**)q=*(void**)(D_0040E618-4);*(void**)(D_0040E618-4)=q;}}}
 if(flags&1)D_002AD390(o);
}
