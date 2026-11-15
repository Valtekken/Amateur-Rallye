#define F(p,t,o) (*(t*)((char*)(p)+(o)))
typedef s32(*Read)(void*,s32*);
extern void*D_002AD408(s32);extern void*func_0024FDC8(void*);extern void func_00250200(void*,s32);extern void func_00250280(void*,s32);
#define READ(b,p) F(F(b,void*,8),Read,148)((char*)b+F(F(b,void*,8),s16,144),p)
void*func_003B5838(void*u,register s32**a,register void*b){s32 n,x,m,y; s32 i=0;void*r=func_0024FDC8(D_002AD408(64));F(r,s32,44)=1;
READ(b,&n);while(i<n){i++;READ(b,&x);func_00250200(r,*(s32*)((char*)*a+(x<<2)));}
i=0;READ(b,&m);while(i<m){i++;READ(b,&y);func_00250280(r,*(s32*)((char*)*a+(y<<2)));}return r;}
