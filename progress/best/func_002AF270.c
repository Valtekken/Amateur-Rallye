extern s32 func_003A0BD8(s32,s32);extern s32 func_00219DA8(s32,s32);
s32 func_003A5DC8(register s32 a,register s32 b){func_003A0BD8(a,b);func_00219DA8(a+12,b+12);return a;}
typedef struct {s32 offset,flag;u32 addr,size;} N;
typedef struct {N**p;s32 n;} L;
void func_002AF2B8(N*p,s32*l,u32*lo,u32*hi){u32 min=*lo,max=*hi;if(p->offset){do{if(p->flag&&p->addr){s32 n=l[1];*(s32*)(l[0]+n*4)=(s32)p;l[1]=n+1;{u32 a=p->addr,b=a+p->size;min=a<min?a:min;max=max<b?b:max;}}p=(N*)((char*)p+p->offset+4);}while(p->offset);}*lo=min;*hi=max;}
s32 func_002AF270(char *p){s32 off=*(s32*)p; s32 count=0; s32 flag,n;char*q;if(!off)goto done;flag=*(volatile s32*)(p+4);goto body;loop:off=n;flag=*(volatile s32*)(p+4);body:if(flag){if(*(s32*)(p+8))count++;}q=p+off;n=*(s32*)(q+4);p=q+4;if(n)goto loop;done:return count;}
extern char D_0047D9A8[];extern void D_002AD390(void*);
void func_002AED50(void*p,s32 b){*(void**)p=D_0047D9A8;if(b&1)D_002AD390(p);}
