void *func_001740B8(void *arg0, s32 arg1)
{
  char **base = *((char ***) (((char *) arg0) + 0x14));
  char *end = *((char **) (((char *) arg0) + 0x18));
  s32 n;
  s32 i = 0;
  char **p = base;
  while (i < (((s32) (end - ((char *) base))) >> 2))
  {
    char *e = *p;
    if ((*((s32 *) (((char *) (*((char **) (e + 0xC)))) + 4))) == arg1)
    {
      return e;
    }
    i++;
    p++;
  }

  return NULL;
}

