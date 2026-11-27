typedef struct 
{
  char _0[8];
  s32 x;
  s32 y;
} Inner;
typedef struct 
{
  Inner *p;
  char _4[0xC];
  f32 scale;
} Outer;
extern void func_002611B0(void *, s32, s32 *, s32 *);
extern u8 *func_001C6750(void *, s32, s32);
extern void func_00261708(s32, void *, f32);
s32 func_002612F8(s32 arg0, Outer *arg1, s32 arg2)
{
  s32 sp0 = 0;
  s32 sp4 = 0;
  s32 lim;
  Inner *q;
  func_002611B0(arg1, arg2, &sp0, &sp4);
  q = arg1->p;
  lim = q->x;
  if (sp0 >= lim)
  {
    sp0 = lim - 1;
  }
  else
    if (sp0 < 0)
  {
    sp0 = 0;
  }
  q = arg1->p;
  lim = q->y;
  if (sp4 >= lim)
  {
    sp4 = lim - 1;
  }
  else
    if (sp4 < 0)
  {
 do { sp4 = 0; } while (0);
  }
  func_00261708(arg0, arg1, ((f32) (*func_001C6750(arg1->p, sp0, sp4))) / arg1->scale);
  return arg0;
}
