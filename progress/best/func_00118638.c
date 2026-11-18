typedef struct 
{
  f32 x;
  f32 y;
  f32 z;
  f32 w;
} Vec4;
typedef struct 
{
  s32 f0;
  s32 f4;
  s32 f8;
  s32 fC;
  s32 f10;
  s32 f14;
  s32 f18;
  s32 f1C;
  Vec4 v;
} Obj;
extern void func_001D2CD8(void *, volatile int);
extern void D_002AD390(unsigned long);
void func_00118638(Obj *arg0, s32 a1, s32 a2, s32 a3, s32 a4, unsigned int a5, s32 a6, s32 a7, s32 *a8, Vec4 a9)
{
  Obj *new_var2;
  f32 new_var7;
  f32 new_var3;
  f32 new_var5;
  s32 *new_var6;
  s32 new_var;
  f32 *new_var4;
  Vec4 *v;
  arg0->f0 = a1;
  arg0->f4 = a2;
  arg0->f8 = a3;
  arg0->fC = a4;
  new_var6 = a8;
  arg0->f10 = a5;
  arg0->f14 = a6;
  arg0->f18 = a7;
  new_var2 = arg0;
  func_001D2CD8(&new_var2->f1C, *new_var6);
  new_var7 = a9.y;
  new_var5 = a9.w;
  new_var = *new_var6;
  arg0->v.x = a9.x;
  v = &arg0->v;
  v->y = new_var7;
  new_var3 = new_var5;
  v->w = new_var3;
  new_var4 = &a9.z;
  new_var7 = *new_var4;
  v->z = new_var7;
  D_002AD390(new_var);
}

