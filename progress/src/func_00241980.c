typedef struct { int x; void **begin; void **end; } V;
extern void func_0023BBA0(int),func_0023E538(void*),func_0023E968(void*),func_0023ADF8(void*,void*),func_00241AB8(int,void*,float,float),func_0023BF28(int,void*,int,void*),func_00273D18(void*,int);
extern int func_0023BBC0(int),func_0027D298(void*);
void func_00241980(int a,V *v,int b,float x,float y){int n,i; void *p; func_0023BBA0(b); if(func_0027D298(v)>0){n=v->end-v->begin; for(i=0;i<n;i++){void **q=v->begin; q+=i; p=*q; if(p && *(int*)((char*)p+0xd8)==1){func_0023BF28(b,p,i,v);func_0023E538(p);func_00241AB8(a,p,x,y);func_0023E968(p);func_0023ADF8(v,p);}}}func_00273D18(&v->begin,func_0023BBC0(b));}
