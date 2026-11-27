typedef struct {int a,prev,next;unsigned short id,pad;} Node;
typedef struct {Node *begin,*end;int pad;short *map;} Obj;
extern int *func_002DDA20(void);extern void func_00302FF0(int);
void func_00377D58(Obj *o,short *arg){short index;Node *p,*base;int prev,next;volatile short a[8],b[8],c[8];
func_00302FF0(*func_002DDA20());
{short *m=o->map;short v=*arg;m+=v;index=*m;}base=o->begin;p=base+index;prev=p->prev;next=p->next;
{Node *q=base,*r=base;q+=prev;r+=next;q->next=next;r->prev=prev;}
{unsigned x=p->id; a[0]=x;{short *m=o->map;m+=((int)(x<<16)>>16);*m=-1;}}
if(index!=o->end-o->begin-1){*p=o->end[-1];base=o->begin;prev=p->prev;next=p->next;{Node *q=base,*r=base;q+=next;r+=prev;q->prev=index;r->next=index;}{unsigned x=p->id;b[0]=x;c[0]=index;{short *m=o->map;m+=((int)(x<<16)>>16);*m=index;}}}
o->end--;
}
