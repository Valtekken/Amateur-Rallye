typedef struct { char pad[0x24]; int a; char p[0x1c]; int b,c; } A;
typedef struct { int a; char *b; int c; char *d; int e; char *f; } E;
typedef struct { char pad[0x14]; E *begin,*end; int p,kind; } B;
extern char *func_001D4010(void *);
extern void func_001D4040(void *,char *);
extern int func_003FA760(char *,char *);
extern void func_001E15E0(A *,B *,int);
int func_001E0BF8(A *a,B *b,int *out,int *out2) {
 E *p; int count,eq,tmp; E **vec;
 if(b->kind!=a->c) return 0;
 vec=&b->begin; p=*vec; count=((char*)vec[1]-(char*)p)>>3;
 if(count!=3 && count!=5) return 0;
 if(p->a!=a->a || p->c!=a->b) return 0;
 { char *x=func_001D4010((char*)a+0x38); eq=0; if(p->d && x) eq=func_003FA760(x,p->d)==0; }
 if(!eq) return 0;
 p=b->begin; if(p->e!=a->c) return 0;
 func_001D4040(&tmp,p->b); *out=tmp;
 func_001D4040(&tmp,b->begin->f); *out2=tmp;
 if((((char*)vec[1]-(char*)b->begin)>>3) == 5) func_001E15E0(a,b,3);
 return 1;
}
