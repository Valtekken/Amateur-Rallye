typedef struct E { void *p; int n; } E; typedef struct M { char pad[20]; E *begin,*end; char pad2[4]; int gen; } M; typedef struct I { char pad[12]; int id; } I; typedef struct A { char pad[80]; I *p; } A;
extern M **func_002DDA20(void); extern void func_002C6528(void *,void *,unsigned,void *); extern void *func_00303038(void *,void *); extern void func_0025AE90(void *); extern void func_0025AE98(void *,int); extern int func_0025C018(void *,int,int,int,int,int,int);
int func_002E4530(int unused,int a,int b,int c,int d,int e,A *arg) { M *m=*func_002DDA20(); I *i=arg->p; int n=i->id; E *ent; void *v=0;
if(n) { if(n >= ((int)((char*)m->end-(char*)m->begin)>>3)) { unsigned count=(n+32)&~31; E *end=m->end; unsigned len=((char*)end-(char*)m->begin)>>3; int tmp[2]; tmp[0]=0;tmp[1]=0;
if(count<len) { E *p=m->begin+count; int delta=(char*)end-(char*)p; if(p<end){ E *q=p+1; do { q++; } while(q<end); } m->end=(E*)((char*)end-delta); } else func_002C6528(&m->begin,end,count-len,tmp);
} ent=m->begin+n; if(ent->n!=m->gen){ent->p=func_00303038(m,&i->id);ent->n=m->gen;} v=ent->p; }
if(v && *(int *)((char *)v+0x30)) { int tmp[4],r;func_0025AE90(tmp);r=func_0025C018(tmp,*(int*)((char*)v+0x30),a,b,c,d,e);func_0025AE98(tmp,2);return r;} return 0; }
