#include "context.h"
inline s32 inline_fn(void **arg0, u8 *arg1, int arg2)
{
  return ((s32) (((u8 *) arg0) - arg1)) >> arg2;
}

void *func_001983F8(void *arg0, void *arg1)
{
  void **base;
  void *new_var;
  void **end;
  s32 count;
  s32 i;
  void **p;
  base = *((void ***) arg0);
  end = *((void ***) (((u8 *) arg0) + 4));
  count = inline_fn(end, (u8 *) base, 2);
  if (count > 0)
  {
    new_var = arg1;
 do { i = 0; } while (0);
    p = base;
    do
    {
      void *entry = *p;
      i++;
      if (entry == 0)
      {
      }
      else
        if ((*((void **) entry)) != new_var)
      {
      }
      else
      {
        return entry;
      }
      p++;
    }
    while (i < count);
  }
  return 0;
}

void *func_00198450(void *arg0);
