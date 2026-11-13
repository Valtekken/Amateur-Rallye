/* identical to func_00271EB0 (matched), with its names changed by decompdecomp */
typedef struct Node {struct Node *next,*prev; s32 value;} Node;
extern void *func_002B1FC0(s32); extern void *func_003D2910(s32);
void func_00272330(void *unused, Node **pos, Node *first, Node *last) {
struct { Node *p; char pad[12]; } result, at;
if(first!=last) do {
Node *p; at.p=*pos; p=func_002B1FC0(12); if(!p)p=func_003D2910(12);
if(&p->value)p->value=first->value;
p->next=at.p; p->prev=at.p->prev; at.p->prev->next=p; at.p->prev=p;
result.p=p; first=first->next;
}while(first!=last);
}
