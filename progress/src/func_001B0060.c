#include "context.h"
extern void *D_002AD408(s32);
extern void *func_001B1030(void *);
extern void func_001B0410(void *, s32, s32);
extern void func_0021E620(s32, s32, void *);
extern void func_001577C8(void *, void *, void *);
void func_001B0060(void *arg0, s32 arg1, void *arg2, void *arg3)
{
  void *buf;
  void *vec;
  f32 *p;
  f32 *q;
  u8 *new_var;
  int new_var2;
  arg1 = arg1;
  func_001B0410(arg0, arg1, 1);
  buf = func_001B1030(D_002AD408(0x60));
  p = (f32 *) (((u8 *) buf) + 0x30);
  q = (f32 *) (((u8 *) buf) + 0x3C);
  new_var2 = 0;
  p[new_var2] = *((f32 *) arg2);
  p[1] = *((f32 *) (((u8 *) arg2) + 4));
  p[2] = *((f32 *) (((u8 *) arg2) + 8));
  q[new_var2] = *((f32 *) arg3);
  q[1] = *((f32 *) (((u8 *) arg3) + 4));
  q[2] = *((f32 *) (((u8 *) arg3) + 8));
  func_0021E620(arg1, new_var2, buf);
  vec = ((u8 *) arg0) + 0x44;
  new_var = (u8 *) vec;
  if ((*((void **) (new_var + 4))) != (*((void **) (new_var + 8))))
  {
    void *end = *((void **) (new_var + 4));
    if (end != NULL)
    {
      *((s32 *) end) = arg1;
    }
    *((u32 *) (new_var + 4)) += 4;
  }
  else
  {
    func_001577C8(vec, *((void **) (new_var + 4)), &arg1);
  }
}

