extern void func_002B2028(void*);
typedef struct Node { struct Node *next,*prev; } Node;
Node **func_00272BC0(Node **out, void *unused, Node **first, Node **last) {
struct {Node *p; int pad[3];} c,a,b;
if (*first != *last) do { Node *p=*first; b.p=p; *first=p->next; a.p=p; {Node *next=a.p->next; Node *prev=a.p->prev; prev->next=next; next->prev=prev; func_002B2028(*(Node *volatile*)&a.p); c.p=next;} } while(*first!=*last);
*out=*last; return out;
}
