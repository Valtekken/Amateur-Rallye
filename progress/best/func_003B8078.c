typedef struct Node {struct Node *next,*prev; void *data; int count,extra;} Node;
typedef struct {void *data; int count,extra;} Payload;
extern void *func_002B1FC0(int),*func_003D2910(int),*D_002AD5A8(int); extern void D_002AD530(void *),func_00234260(void *);
int func_003B8078(char *a,int remain,int size) {
 volatile int done=0;
 while(remain>0) {
  Payload tmp={0,0,0}; Node * volatile head=*(Node **)(a+0x3c),*p; int n=size<remain?size:remain; int j; char *mem;
  p=func_002B1FC0(20); if(!p) p=func_003D2910(20);
  if((char *)p+8) *(Payload *)((char *)p+8)=tmp;
  p->next=head; p->prev=head->prev; head->prev->next=p; head->prev=p;
  if(tmp.data) { char *end=(char *)tmp.data+*(int *)((char *)tmp.data-16)*8; while(end!=(char *)tmp.data) { void *vt; end-=8; vt=*(void **)end; (*(void (**)(void *,int))((char *)vt+0x14))(end+*(short *)((char *)vt+0x10),0); } D_002AD530((char *)tmp.data-16); }
  p=(*(Node **)(a+0x3c))->prev; p->count=n;
  mem=D_002AD5A8(n*8+16); *(int *)mem=n; mem+=16;
  { char *q=mem; for(j=n-1;j!=-1;j--) {func_00234260(q); q+=8;} }
  p->data=mem; remain-=n; done+=n;
 }
 return done;
}
