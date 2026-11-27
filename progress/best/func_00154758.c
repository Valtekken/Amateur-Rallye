typedef struct N { int color; struct N *parent,*left,*right; signed char key; } N;
typedef struct {N *head; int count;} Tree;
typedef struct {N *node; int inserted;} Result;
extern void func_001543D8(N **,Tree *,N *,N *,signed char *);
Result *func_00154758(Result *out,Tree *tree,signed char *key) {
 N *cur=tree->head,*next=cur->parent,*tmp,*parent,*res; N *it; struct { N *p; char pad[12]; } sp10,sp20; volatile char pad[16]; int cmp=1;
 if(next) { cur=next; do { cmp=*key<cur->key; next=cmp?cur->left:cur->right; if(next)cur=next; } while(next); }
 it=cur;
 if(cmp) {
 sp10.p=tree->head->left;
 if(cur==sp10.p) {func_001543D8(&sp20.p,tree,next,cur,key); res=sp20.p; goto inserted;}
 if(!cur->color && cur->parent->parent==cur) it=cur->right;
 else {
 tmp=it; next=tmp->left;
 if(next) {tmp=next; while(tmp->right) tmp=tmp->right; it=tmp;}
 else {parent=tmp->parent; it=parent; while(tmp==parent->left) {parent=parent->parent; tmp=it; it=parent;} }
 }
 }
 if(it->key<*key) {func_001543D8(&sp10.p,tree,next,cur,key); res=sp10.p; inserted: out->inserted=1; out->node=res;}
 else {out->node=it;out->inserted=0;}
 return out;
}
