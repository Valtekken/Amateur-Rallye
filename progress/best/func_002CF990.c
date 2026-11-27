extern void func_001D4040(void *,const char *);
extern void func_001E3D10(int,void *,int);
extern void func_002B2028(void *);
extern void func_002D0C38(void *,int),func_002D13F0(void *,int);
extern char D_004836D0[];
typedef struct Node { struct Node *next,*prev; int pad; void *obj; } Node;
typedef struct { int pad,enabled; char pad2[32]; Node *a,*b; } State;
void func_002CF990(State *s) {
 union { char buf[16]; Node *n; } u; Node *end,*next; volatile Node *tmp; volatile char pad[64];
 if(s->enabled) { int x=func_001E4280(); func_001D4040(u.buf,D_004836D0); func_001E3D10(x,u.buf,0); }
 end=s->a; u.n=end->next;
 while(((u32)u.n ^ (u32)end)) { if(u.n->obj) func_002D13F0(u.n->obj,3); next=u.n->next; u.n->prev->next=next; next->prev=u.n->prev; tmp=u.n; func_002B2028((void*)tmp); u.n=next; end=s->a; }
 end=s->b; u.n=end->next;
 while(((u32)u.n ^ (u32)end)) { if(u.n->obj) func_002D0C38(u.n->obj,3); next=u.n->next; u.n->prev->next=next; next->prev=u.n->prev; tmp=u.n; func_002B2028((void*)tmp); u.n=next; end=s->b; }
}
