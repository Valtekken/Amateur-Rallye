/* identical to func_00173768 (matched), with its names changed by decompdecomp */
#include "context.h"
void func_00178280(void *);
void func_001737D8(void *arg0)
{
  s32 new_var;
  void **new_var2;
  s32 count;
  s32 i;
  void **base;
  new_var = *((s32 *) (((u8 *) arg0) + 0x18));
  count = ((new_var - (*((s32 *) (((u8 *) arg0) + 0x14)))) >> 1) >> 1;
  i = 0;
  if (count > i)
  {
    i = 0;
    do
    {
      base = *((void ***) (((u8 *) arg0) + 0x14));
      new_var2 = &base[i];
      func_00178280(*new_var2);
      i++;
    }
    while (i < count);
  }
}

