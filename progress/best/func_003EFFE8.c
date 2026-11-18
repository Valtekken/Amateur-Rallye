extern s32 func_001C6780(void *, s32, s32);
extern s32 *func_001C67A0(s32, s32, s32);
extern s32 *func_001C67D0(s32, s32, s32);
typedef struct 
{
  s32 f0;
  s32 f4;
  s32 f8;
} S;
void func_003EFFE8(S *arg0, s32 arg1, s32 arg2, u8 *arg3)
{
  s32 d = arg0->f0;
  s32 q1 = arg1 / d;
  s32 q2 = arg2 / d;
  s32 r = func_001C6780(arg0, arg1 - (d * q1), arg2 - (d * q2));
  s32 new_var;
  s32 *p = func_001C67A0(arg0->f8, q1, q2);
  new_var = arg0->f8;
  if ((*p) != 0)
  {
    s32 *q = func_001C67D0(new_var, q1, q2);
    *((u8 *) ((*q) + r)) = *arg3;
  }
}

