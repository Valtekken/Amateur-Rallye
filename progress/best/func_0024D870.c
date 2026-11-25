extern s32 func_0024D8F8(s32, s32);
extern s32 func_0024D940(s32, s32, s32, s32, s32, s32, s32, s32);
inline s32 inline_fn(s32 *arg0)
{
  return arg0[2];
}

s32 func_0024D870(s32 arg0, void *arg1, void *arg2, s32 arg3)
{
  s32 *a1 = (s32 *) arg1;
  s32 *a2 = (s32 *) arg2;
  s32 *new_var;
  s32 v0;
 do { new_var = a2; if (func_0024D8F8(inline_fn(a1), inline_fn(a2)) == 0) { goto ret_zero; } v0 = func_0024D940(arg0, a1[2], a1[1], a1[0], arg3, inline_fn(a2), (unsigned long long) a2[1], new_var[0]); } while (0);
  if (v0 != 0)
  {
    goto ret_one;
    ret_one:
    return 1;

    if (1)
    {
    }
  }
  ret_zero:
  return 0;

}
