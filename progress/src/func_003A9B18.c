/* identical to func_003B3008 (matched), with its names changed by decompdecomp */
extern void func_003B0098(s32,s32);
s32 func_003A9B18(register s32 a,register s32 b){func_003B0098(a,b);return a;}
typedef void (*ReadI)(void*,s32*);typedef void (*ReadF)(void*,float*);
#define F(p,t,o) (*(t*)((char*)(p)+(o)))
extern void func_00250350(s32,s32);
void func_003B5980(void*u,void*a,s32 b,void*c){s32 n,x,i;void*t; i=0;t=F(c,void*,8);F(t,ReadI,148)((char*)c+F(t,s16,144),&n);while(i<n){t=F(c,void*,8);F(t,ReadI,148)((char*)c+F(t,s16,144),&x);func_00250350(b,((s32*)F(a,void*,12))[x]);i++;}}
void func_003B5A30(void*u,void*v,void*a,void*b){float x;void*t=F(b,void*,8);F(t,ReadF,132)((char*)b+F(t,s16,128),&x);F(a,float,40)=x;}
void *func_003B5A70(void*a,void*u,void*b){float v[3]={0,0,0};float x,y,z;void*t; t=F(b,void*,8);F(t,ReadF,132)((char*)b+F(t,s16,128),&x);v[0]=x;t=F(b,void*,8);F(t,ReadF,132)((char*)b+F(t,s16,128),&y);v[1]=y;t=F(b,void*,8);F(t,ReadF,132)((char*)b+F(t,s16,128),&z);v[2]=z;F(a,float,0)=v[0];F(a,float,4)=v[1];F(a,float,8)=v[2];return a;}
