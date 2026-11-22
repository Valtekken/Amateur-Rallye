extern void D_002AD390(void*),func_0026FFC8(void*);
typedef struct N {struct N*next,*prev;void*value;} N;
typedef struct {N*head;} L;
void func_002296D0(L*p){N*n; volatile N *h[2];for(n=p[0].head->next;(h[0]=p[0].head,n!=h[0]);n=n->next)if(n->value)D_002AD390(n->value);func_0026FFC8(p);for(n=p[1].head->next;(h[1]=p[1].head,n!=h[1]);n=n->next)if(n->value)D_002AD390(n->value);func_0026FFC8(p+1);}
