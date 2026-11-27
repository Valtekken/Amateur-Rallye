extern void func_001CB748(void*,void*,void*,void*);
extern void **func_00201350(void);
void func_00289958(u8 *arg0,u8 *arg1){
f32 a[3],b[3],c[3],out[3],t;f32 *pa,*po;u8 *obj;
if (func_001E3650(func_001E4280(), (s32)(arg0+0x3C)) > 0) return;
b[0]=1.0f;
pa=(f32*)(arg0+0x18);
a[0]=pa[0]; a[1]=pa[1]; a[2]=pa[2];
b[1]=0; b[2]=0;
if (*(s32*)(arg0+0x14) != 0) {
  f32 *s = *(f32**)(arg1+0x50)+0x14;
  b[0]=s[0]; b[1]=s[1]; b[2]=s[2];
} else {
  f32 *q = pa+3;
  b[0]=a[0]+q[0]; b[2]=a[2]+q[2]; b[1]=a[1]+q[1];
  c[0]=b[0]; c[1]=b[1]; c[2]=b[2];
}
{ f32 *r=(f32*)(arg0+0x30);
  t=*(f32*)(arg0+0x30); b[0]=b[0]+t;
  t=r[1]; b[1]=b[1]+t;
  t=r[2]; b[2]=b[2]+t; }
obj=*(u8**)((u32)func_00201350() + ((u32)*(s32*)(arg0+0xC)<<2));
out[0]=0;
po=out; po[1]=1.0f;
out[2]=0;
func_001CB748(a,b,po,obj+0x90);
{ f32 *p=(f32*)(obj+0xB0), *q=(f32*)(obj+0x90);
  p[0]=-p[0]; p[1]=-p[1]; p[2]=-p[2];
  q[0]=-q[0]; q[1]=-q[1]; q[2]=-q[2]; }
}
