/* identical to func_001E2510 (matched), with its names changed by decompdecomp */
extern void func_001D4040(void*,const char*);extern int func_001E00E8(void*);extern int func_001E0368(void*,void*,int*,void*);
typedef struct Node{int x;struct Node*next;}Node;
int func_001E2470(Node***p,const char*s,int*out){struct{int b[4];int n;char pad[12];char a[208];}l;Node*q;func_001D4040(l.b,s);l.n=0;func_001E00E8(l.a);q=**p;while(q){if(func_001E0368(l.a,q,&l.n,out)&&l.n==l.b[0])return 1;q=q->next;}out[0]=0;return 0;}
