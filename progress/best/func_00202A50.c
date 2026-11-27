typedef struct V { int *begin,*end,*cap; } V;
typedef struct { V *begin,*end; } Outer;
extern int func_003F93CC(void *,void *,int);
extern void func_002B2028(void *);
extern int D_0040E618[];
void func_00202A50(Outer *o) {
 unsigned i; V *p,*end; int bytes;
 i=0; if ((int)((unsigned)((char *)o->end-(char *)o->begin)*0xAAAAAAABu)>>2) {
 do { int *b,*e; p=&o->begin[i]; i++; b=p->begin; e=p->end;
 func_003F93CC(b,e,0); p->end=(int *)((char *)p->end-((char *)e-(char *)b));
 } while(i<(unsigned)((int)((unsigned)((char *)o->end-(char *)o->begin)*0xAAAAAAABu)>>2));
 }
 { V *end2=o->end; V *p2=o->begin; int bytes2; bytes2=(char *)end2-(char *)p2;
 while(p2<end2) { int *cap=p2->cap; int *b=p2->begin; int n=cap-b; if(n) { if(n*4) func_002B2028(b); else { *b=D_0040E618[-1]; D_0040E618[-1]=(int)b; } } p2++; }
 o->end=(V *)((char *)o->end-bytes2); }
}
