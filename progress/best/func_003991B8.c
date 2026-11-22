extern void func_002C6AF8(s32, s32);
s32 func_003991B8(register s32 arg0, register s32 arg1, register s32 arg2, register s32 arg3, register s32 arg4)
{
  s32 count = (arg1 - arg0) >> 3;
  arg2 -= 8;
  while (count > 0)
  {
    arg1 -= 8;
    func_002C6AF8(arg2, arg1);
    count--;
  }

  return arg2;
}

