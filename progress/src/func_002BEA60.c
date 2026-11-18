extern s32 D_00428DC8,D_00428D98;extern s32 D_002AD408(s32),func_002BF9B0(s32);
s32 func_002BF920(void){if(!D_00428DC8)D_00428DC8=func_002BF9B0(D_002AD408(40));return D_00428DC8;}
extern s32 func_002BEA40(void*,s32);
s32 func_002BEA60(void*a){s32 r=1;if(D_00428D98){r=func_002BEA40(a,D_00428D98);if(r)D_00428D98=0;}return r;}
extern void func_002BDFD0(void*,s32);extern s32 func_002BE550(void);extern void func_002BE738(s32,s32,s32,void*);extern u8 D_00480AE0[];
void func_002BE220(void*a){func_002BDFD0(a,1);func_002BE738(func_002BE550(),30,1,D_00480AE0);}
typedef struct Node{struct Node*next;s32 x,y,size;}Node;
Node*func_002BE0D8(void*a,Node**list,s32 min){Node*p=*list,*best=0;s32 size=0x7fffffff;while(p){s32 n=p->size;if(n>=min&&n<size){size=n;best=p;if(size-min<256)break;}p=p->next;}return best;}
