typedef struct A { int key; int val; } A;
typedef struct N { struct N *child,*next; char pad[12]; A *begin,*end; int cap; int name; } N;
extern int func_001D4010(void *); extern void func_001D65D0(const char *,...);
extern char D_00476988[],D_00476990[],D_004769A0[],D_004769A8[],D_004769B0[];
extern int D_004262B0[];
void func_001DFF90(void *ctx,N *n) {
 A *p; N *child;
 func_001D65D0(D_00476988,func_001D4010(&n->name));
 p=n->begin;
 while(p!=n->end) {func_001D65D0(D_00476990,func_001D4010(p),p->val);p++;}
 if(!n->child) {func_001D65D0(D_004769A0);return;}
 func_001D65D0(D_004769A8); D_004262B0[3]++;
 child=n->child; while(child) {func_001DFF90(ctx,child);child=child->next;}
 D_004262B0[3]--; func_001D65D0(D_004769B0,func_001D4010(&n->name));
}
