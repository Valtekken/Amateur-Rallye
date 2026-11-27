extern void *D_004262D0[];
typedef struct 
{
  f32 a;
  f32 b;
} PF;
typedef struct 
{
  s32 a;
  s32 b;
} PI;
typedef struct 
{
  s32 f0;
  s32 f4;
  PF p[3];
  PI q[3];
  PI r[2];
} S48;
typedef struct 
{
  s32 a;
  s32 count;
} C8;
typedef struct 
{
  void *tab;
  char pad[0x20];
  void *base;
} D;
void *func_0038CFB8(S48 *dst, S48 *src)
{
  s32 id = src->f0;
  PI *new_var;
  dst->f0 = id;
  if (id >= 0)
  {
    s32 idx = ((s32 *) ((D *) (&D_004262D0))->tab)[id];
    C8 *c = (C8 *) (((char *) ((D *) (&D_004262D0))->base) + (idx * 8));
    c->count++;
  }
  dst->f4 = src->f4;
  {
    PF *sp = src->p;
    PF *dp = dst->p;
    s32 i = 2;
    s32 stop = -1;
    do
    {
      i--;
      dp->a = sp->a;
      dp->b = sp->b;
      sp++;
      dp++;
    }
    while (i != stop);
  }
  new_var = dst->r;
  {
    PI *sp = src->q;
    PI *dp = dst->q;
    s32 i = 2;
    s32 stop = -1;
    do
    {
      i--;
      dp->a = sp->a;
      dp->b = sp->b;
      sp++;
      dp++;
    }
    while (i != stop);
  }
  {
    PI *sp = src->r;
    PI *dp = new_var;
    s32 i = 1;
    s32 stop = -1;
    do
    {
      i--;
      dp->a = sp->a;
      dp->b = sp->b;
      sp++;
      dp++;
    }
    while (i != stop);
  }
  return dst;
}

