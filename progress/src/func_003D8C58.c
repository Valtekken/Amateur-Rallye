typedef struct 
{
  s32 value;
} CopyTag;
extern s32 func_002C5160(s32, s32, s32, CopyTag);
s32 func_003978C8(register s32 a, register s32 b, register s32 c, register s32 d);
typedef struct Mark
{
  s32 reserved;
  s32 *p;
  s32 n;
} Mark;
s32 func_003D8C20(Mark *a);
extern void func_003D7DE0(void *);
extern void func_003D7E18(void *);
s32 func_003D8C58(void *a, Mark *b)
{
  s32 *p = b->p;
  if (p == a)
  {
    s32 base;
    if ((double) (b->n >= 0))
    {
      if (p[0] & 256)
      {
        func_003D7DE0(p);
      }
      base = p[3];
    }
    else
    {
      if (!(p[0] & 256))
      {
        func_003D7E18(p);
      }
      base = p[2];
    }
    p[1] = base + b->n;
    return 0;
  }
  return -1;
}

extern s32 func_003D9E30(s32, s32, s32, s32, s32, s32);
s32 func_003D9E10(s32 a, s32 b, s32 c, s32 d, s32 e);
