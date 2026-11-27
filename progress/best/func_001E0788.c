typedef struct {int key; char *value;} Pair;
typedef struct {char pad[0x14]; Pair *begin,*end; int cap; int name;} Node;
typedef struct {char pad[0x1c]; int str; int padstr; int key; char pad2[0x1c]; int key2,key3;} C;
extern char *func_001D4010(void *); extern void func_001D4040(int *,char *); extern void func_001E15E0(C*,Node*,int); extern int func_003FA760(char*,char*);
int func_001E0788(C *c,Node *n,int *out1,int *out2) {
 Pair *p; int count,ok=0; int tmp[4]; char *a,*b;
 if(n->name!=c->key3) return 0;
 p=n->begin; count=n->end-p;
 if(count!=3 && count!=5) return 0;
 if(p[0].key!=c->key || p[1].key!=c->key2) return 0;
 a=func_001D4010(&c->str); b=p[1].value;
 if(b && a) ok=func_003FA760(a,b)==0;
 if(!ok) return 0;
 p=n->begin; if(p[2].key!=c->key3) return 0;
 func_001D4040(tmp,p[0].value); *out1=tmp[0];
 func_001D4040(tmp,n->begin[2].value); *out2=tmp[0];
 if(n->end-n->begin==5) func_001E15E0(c,n,3);
 return 1;
}
