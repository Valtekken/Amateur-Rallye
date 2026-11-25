/* identical to func_00251D20 (matched), with its names changed by decompdecomp */
s32 func_00257FB0(s32 unused, void *arg1)
{
  register s32 i;
  s32 n;
  s32 **p;
  s32 *begin = *((s32 **) arg1);
  s32 *end = *((s32 **) (((char *) arg1) + 4));
  n = end - begin;
 do { if (n <= 0) { goto done; } i = 0; } while (0);
  p = (s32 **) begin;
  while (1)
  {
    s32 *elem = (s32 *) (*p);
    if (elem[1] == 0)
    {
      return 1;
    }
    i++;
    if (i >= n)
    {
      goto done;
    }
    p++;
  }

  done:
  return 0;

}
