extern int func_0027D298(void *); extern void func_0023E538(void *),func_0023E968(void *),func_0023ADF8(void *,void *),func_00259460(void *,void *);
extern float func_0023BC60(void *); extern int func_0023BDE0(float,float);
typedef struct { int x; char **begin, **end; } Vec;
void func_00259350(void *a, Vec *v, float f) {
 int i,n; char *p; float x;
 if(func_0027D298(v)>0) { n=v->end-v->begin; for(i=0;i<n;i++) { { char **q=v->begin; q+=i; p=*q; } if(p) {func_0023E538(p); x=func_0023BC60(p); *(float *)(p+0xd4)=x; *(int *)(p+0xd8)=func_0023BDE0(x,f); if(x<0.0f) func_00259460(a,p); func_0023E968(p); func_0023ADF8(v,p); } } }
}
