extern "C" {extern char D_00488D80[],D_0047D9A8[];char*func_003CD828(void*,char*);}
inline void*operator new(unsigned int,void*p){return p;}
struct Base{void*v;Base(){}~Base(){v=D_0047D9A8;}};
struct Obj:Base{char*s;__attribute__((always_inline)) Obj(char**b){v=D_00488D80;char*q=*b;char*p=q-16;char**dst=&s;if(*(s32*)(p+12))q=func_003CD828(p,q);else ++*(s32*)(p+8);*dst=q;}};
extern "C" void*func_003D1F08(void*a,char**b){return new(a)Obj(b);}
extern "C" {
extern void D_002AD390(void*);extern char D_0047DB78[];
void func_002AFF50(void*a,s32 b){*(void**)((char*)a+4)=D_0047DB78;if(b&1)D_002AD390(a);}
typedef struct Node{struct Node*o;int a,key;void*buf;int c;struct Node*next;}Node;
extern Node*D_00494CD0;extern void func_002B2028(void*);extern Node*func_003F7300(void);
Node*func_002AFAB8(s32 a){Node**p=&D_00494CD0;Node*n;if(D_00494CD0){do{n=*p;if(n->key==a){*p=n->next;if(n->o)func_002B2028(n->buf);return n;}p=&n->next;}while(n->next);}return func_003F7300();}
void func_002AFA08(int a,Node*b){Node*old=D_00494CD0;b->key=a;b->next=old;D_00494CD0=b;b->o=0;b->buf=0;b->c=0;b->a=0;}
}
