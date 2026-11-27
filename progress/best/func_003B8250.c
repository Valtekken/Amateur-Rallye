extern void *func_002B1FC0(int), *func_003D2910(int), *D_002AD5A8(int);
extern void D_002AD530(void *), func_00236008(void *);
typedef struct { void *data; int size, cap; } Arr;
typedef struct Node { struct Node *next,*prev; Arr arr; } Node;
int func_003B8250(char *a,int n,int step) {
 int total=0, count, i; Node *volatile head; Node *node; Arr tmp; char *mem; void **p,**end;
 while(n>0) {
 count=step<n?step:n; head=*(Node **)(a+0x40);
 tmp.data=0;tmp.size=0;tmp.cap=0;
 node=func_002B1FC0(20); if(!node) node=func_003D2910(20);
 if(&node->arr) node->arr=tmp;
 node->next=head;node->prev=head->prev;head->prev->next=node;head->prev=node;
 if(tmp.data) { p=(void **)tmp.data; end=p+*(int *)((char *)p-16); while(p!=end) { void *v; --end; v=*end; (*(void (**)(void *,int))(*(char **)v+0x14))((char *)end+*(s16 *)(*(char **)v+0x10),0); } D_002AD530((char *)tmp.data-16); }
 node=(*(Node **)(a+0x40))->prev;node->arr.size=count;
 mem=D_002AD5A8(count*4+16); *(int *)mem=count; mem+=16;
 { char *q=mem; for(i=count-1;i!=-1;i--,q+=4) func_00236008(q); }
 node->arr.data=mem;n-=count;total+=count;
 }
 return total;
}
