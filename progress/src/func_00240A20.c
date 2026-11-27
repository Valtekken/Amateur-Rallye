typedef struct Node { struct Node *next,*prev; int value; } Node;
typedef struct { Node *head; } List;
typedef struct { int a,b; } Pair;
typedef struct { char pad[12]; Pair **begin,**end,**cap; List **lists,**listend; } Obj;
extern int func_00240FD8(Obj *,int);
int func_00240A20(Obj *o) {
 int i,n=o->end-o->begin, m;
 for(i=0;i<n;i++) { Pair **q=o->begin; Pair *p; int x; q+=i; p=*q; x=p->b; if(!func_00240FD8(o,p->a)) return 0; if(!func_00240FD8(o,x)) return 0; }
 m=o->listend-o->lists;
 for(i=0;i<m;i++) { List **q=o->lists; List *l; Node *p; q+=i; l=*q; p=l->head->next; while(p!=l->head) { if(!func_00240FD8(o,p->value)) return 0; p=p->next; } }
 return 1;
}
