typedef struct { s32 **begin, **insert, **end; } Vec;
typedef struct { char pad[0x24]; Vec vec; } A;
extern s32 func_00193B60(void);
extern s32 func_001918C0(s32);
extern void *func_00196E10(void);
extern void *func_001968D0(void *, s32);
extern void *func_00196730(void *, s32);
extern f32 func_00196A70(void *, s32);
extern void *D_002AD408(s32);
extern s32 func_00134BE8(void *);
extern void func_00134C00(s32, s32, void *, void *, s32, f32);
extern void func_00155718(void *, void *, void *);
extern void func_001356E8(A *, s32);
extern void func_00196BA0(void *, void *, s32);
void func_00135FF0(A *arg0) {
 s32 n=func_001918C0(func_00193B60());
 Vec *vec; s32 i,j,off; void *b,*c; f32 f; s32 obj;
 if(n==0) return;
 i=0;
 if(n<=0) goto skip1;
 vec=&arg0->vec;
 for(;i<n;i++) {
  b=func_001968D0(func_00196E10(),i);
  c=func_00196730(func_00196E10(),i);
  f=func_00196A70(func_00196E10(),i);
  obj=func_00134BE8(D_002AD408(0x1C));
  func_00134C00(obj,i,b,c,0,f);
  if(vec->insert!=vec->end) {
   if(vec->insert) *vec->insert=obj;
   vec->insert++;
  } else func_00155718(vec,vec->insert,&obj);
 }
skip1:
 func_001356E8(arg0,0);
 for(i=0;i<n;i++) {
  j=i+1; off=i<<2;
  *(s32*)((char*)*(void**)((char*)arg0->vec.begin+off)+0x18)=i;
  func_00196BA0(func_00196E10(),*(void**)*(void**)((char*)arg0->vec.begin+off),j);
 }
}
