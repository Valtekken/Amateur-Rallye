extern f32 func_0025D180(void *, s32, s32);
typedef struct 
{
  char _0[0xC];
  char * volatile c;
  char _10[0x90];
  s32 *a0;
  s32 *a4;
} A;
void func_0025D098(A *arg0)
{
  s32 n = (((s32) arg0->a4) - ((s32) arg0->a0)) >> 2;
  s32 i = 0;
  int new_var;
  new_var = 0;
  if (n > new_var)
  {
    do
    {
      s32 j = new_var;
      s32 src0 = arg0->a0[i];
      if (n > new_var)
      {
        do
        {
          f32 v = func_0025D180(arg0, src0, arg0->a0[j]);
          f32 *row = *((f32 **) (arg0->c + (i * 0xC)));
          row[j] = v;
          ++j;
        }
        while (j < n);
      }
      ++i;
    }
    while (i < n);
  }
}

