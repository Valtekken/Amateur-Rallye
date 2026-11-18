void func_003B9520(void *a);
extern s32 func_003CC348(s32, s32, void *, s32);
extern s32 D_004361F0;
s32 func_003CC480(s32 a, s32 b, void *c);
extern s32 PollSema_2(s32);
extern s32 SignalSema_2(s32);
extern s32 func_00405E90(void *, s32, s32, void *, s32, void *, s32, s32, s32);
extern s32 D_004361F4;
typedef struct Rpc8
{
  s32 w[10];
} Rpc8;
extern Rpc8 D_0049BC40;
extern s32 D_0049BCC0[];
extern s32 D_0049D200[];
s32 func_003CC4B8(s32 a);
void func_003CC648(void *a)
{
  s32 *p = (s32 *) (((u32) a) | 0x20000000);
  s32 i;
  u8 *d;
  if (p[0])
  {
    d = (u8 *) p[2];
    i = 0;
    if (p[0] > 0)
    {
      u8 *base = ((u8 *) p) + 16;
      do
      {
        i = base[i++];
        *(d++) = i;
      }
      while (i < p[0]);
    }
  }
  if (p[1])
  {
    d = (u8 *) p[3];
    i = 0;
    if (p[1] > 0)
    {
      u8 *base = ((u8 *) p) - -80;
      do
      {
        *(d++) = base[i++];
      }
      while (i < p[1]);
    }
  }
}

