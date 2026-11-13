/* identical to func_002DB368 (matched), with its names changed by decompdecomp */
typedef struct {
  s32 d;
} S4;

extern u8 D_004262D0[];

S4 *func_0030A090(S4 *first, S4 *last, S4 *result)
{
  int new_var;
  if (first != last)
  {
    do
    {
      if (result != NULL)
      {
        s32 type;
        type = first->d;
        result->d = type;
        new_var = 4;
        if (type >= 0)
        {
          u8 *tbl = *((u8 **) D_004262D0);
          u8 *objs = *((u8 **) (D_004262D0 + 0x24));
          u8 *obj = objs + ((*((s32 *) (tbl + (type * new_var)))) << 3);
          *((s32 *) (obj + new_var)) += 1;
        }
      }
      first++;
      result++;
    }
    while (first != last);
  }
  return result;
}
