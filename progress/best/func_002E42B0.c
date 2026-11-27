typedef struct E { void *p; int n; } E; typedef struct M { char pad[20]; E *begin,*end; char pad2[4]; int gen; } M; typedef struct I { char pad[12]; int id; } I; typedef struct A { char pad[80]; I *p; } A;
extern M **func_002DDA20(void); extern void func_002C6528(void *,void *,unsigned,void *); extern void *func_00303038(void *,void *); extern int func_002E3650(int,A *);
int func_002E42B0(int a,A *b) { M *m=*func_002DDA20(); I *i=b->p; int n=i->id; E *e; void *v=0;
if(n) { if(n >= ((int)((char*)m->end-(char*)m->begin)>>3)) { unsigned count=(n+32)&~31; E *end=m->end; unsigned len=((char*)end-(char*)m->begin)>>3; int tmp[2]; tmp[0]=0;tmp[1]=0;
if(count<len) { E *p=m->begin+count; int delta=(char*)end-(char*)p; if(p<end){ E *q=p+1; do { q++; } while(q<end); } m->end=(E*)((char*)end-delta); } else func_002C6528(&m->begin,end,count-len,tmp);
} e=m->begin+n; if(e->n!=m->gen){e->p=func_00303038(m,&i->id);e->n=m->gen;} v=e->p; }
if(v && *(int *)((char *)v+0x38)) return func_002E3650(a,b); return 0; }
