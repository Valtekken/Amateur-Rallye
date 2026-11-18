/* identical to func_002D0670 (matched), with its names changed by decompdecomp */
typedef struct Node{struct Node *next;} Node;
extern char *func_002B1FC0(u32);extern char *func_003D2910(u32);
extern char *D_00437E08,*D_00437E0C;extern u32 D_00437E10;extern Node *D_00437E18[];
static inline u32 index(u32 n){return ((n+7)>>3)-1;}
char *func_003D29A0(u32 size,u32 *n){u32 total,left,bytes,i;char *r;
total=size**n;left=D_00437E0C-D_00437E08;
if(left>=total){char *result=D_00437E08;D_00437E08+=total;return result;}
if(left>=size){*n=left/size;total=size**n;r=D_00437E08;D_00437E08+=total;return r;}
bytes=2*total+(((D_00437E10>>4)+7)&~7);
if(left){Node * volatile *slot=D_00437E18+index(left);((volatile Node*)D_00437E08)->next=*slot;*slot=(Node*)D_00437E08;}
D_00437E08=func_002B1FC0(bytes);
if(!D_00437E08){for(i=size;i<129;i+=8){Node **slot=D_00437E18+index(i);{Node *p=*slot;if(p){D_00437E0C=(char*)p+i;*slot=p->next;D_00437E08=(char*)p;return func_003D29A0(size,n);}}}
D_00437E0C=0;{char *p=func_002B1FC0(bytes);if(!p)p=func_003D2910(bytes);D_00437E08=p;}}
D_00437E10+=bytes;D_00437E0C=D_00437E08+bytes;
return func_003D29A0(size,n);}
