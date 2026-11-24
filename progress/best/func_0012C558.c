#define I(p,o) (*(s32*)((char*)(p)+(o)))
#define F(p,o) (*(f32*)((char*)(p)+(o)))
#define P(p,o) (*(void**)((char*)(p)+(o)))
extern void func_0012C2B8(void *, s32, s32);
extern void func_0012C3D0(void *);
extern void func_0012D208(void *, s32, s32);
void func_0012C558(void *p)
{
  void *in = P(p, 0x24);
  s32 left;
  s32 right;
  s32 press;
  s32 edge;
  s32 *new_var;
  s32 fire;
  s32 x;
  f32 f;
  f32 t;
  left = I(in, 0x2c);
  I(p, 0x28) = left;
  right = I(in, 0x30);
  I(p, 0x2c) = right;
  press = I(in, 0x1c);
  edge = 0;
  if (press)
  {
    edge = I(p, 0x30) == 0;
  }
  I(p, 0x30) = press;
  if (I(p, 0x60) > 0)
  {
    I(p, 0x60)--;
  }
  if (I(p, 0x64) > 0)
  {
    I(p, 0x64)--;
  }
  if (I(p, 0x74) > 0)
  {
    I(p, 0x74)--;
  }
  fire = 0;
  if (press && (I(p, 0x1c) == 0x25))
  {
    fire = I(p, 0x80) == 0;
  }
  if (!left)
  {
    I(p, 0x60) = 0;
    F(p, 0x6c) = 8.0f;
  }
  if (!right)
  {
    I(p, 0x64) = 0;
    F(p, 0x70) = 8.0f;
  }
  if (!fire)
  {
    I(p, 0x74) = 0;
    F(p, 0x78) = 8.0f;
  }
  new_var = &x;
  if (left && (!I(p, 0x60)))
  {
    f = F(p, 0x20);
    x = I(p, 0x1c) - 1;
    I(p, 0x1c) = x;
    t = f - ((f32) x);
    if (((*new_var) == 0x24) && (I(P(p, 0x40), -16) == 12))
    {
      I(p, 0x1c) = 0x25;
      t = f - ((f32) I(p, 0x1c));
    }
    if (I(p, 0x1c) < 0)
    {
      I(p, 0x1c) = (((s32) ((I(p, 0x14) - I(p, 0x10)) * 0xB6DB6DB7)) >> 2) - 1;
    }
    f = F(p, 0x6c);
    I(p, 0x60) = (s32) f;
    f *= 0.5f;
    F(p, 0x6c) = f;
    F(p, 0x20) = ((f32) I(p, 0x1c)) + t;
    if (f < 2.0f)
    {
      F(p, 0x6c) = 2.0f;
    }
    if ((I(p, 0x1c) == 0) && (I(P(p, 0x40), -16) == 12))
    {
      I(p, 0x1c) = 0x26;
    }
    I(p, 0x80) = 0;
  }
  if (right && (!I(p, 0x64)))
  {
    f = F(p, 0x20);
    x = I(p, 0x1c) + 1;
    I(p, 0x1c) = x;
    t = f - ((f32) x);
    if ((x == 0x27) && (I(P(p, 0x40), -16) == 12))
    {
      I(p, 0x1c) = 0x26;
      t = f - ((f32) I(p, 0x1c));
    }
    if (((u32) I(p, 0x1c)) >= ((u32) (((s32) ((I(p, 0x14) - I(p, 0x10)) * 0xB6DB6DB7)) >> 2)))
    {
      I(p, 0x1c) = 0;
    }
    f = F(p, 0x70);
    I(p, 0x64) = (s32) f;
    f *= 0.5f;
    F(p, 0x70) = f;
    F(p, 0x20) = ((f32) I(p, 0x1c)) + t;
    if (f < 2.0f)
    {
      F(p, 0x70) = 2.0f;
    }
    I(p, 0x80) = 0;
  }
  if (fire && (!I(p, 0x74)))
  {
    func_0012D208(p, 0x25, fire);
    func_0012C3D0(p);
    f = F(p, 0x78);
    I(p, 0x74) = (s32) f;
    f *= 0.5f;
    F(p, 0x78) = f;
    if (f < 2.0f)
    {
      F(p, 0x78) = 2.0f;
    }
  }
  if (edge)
  {
    x = I(p, 0x1c);
    if ((x == 0x26) || I(p, 0x80))
    {
      I(p, 0x5c) = 1;
    }
    else
      if (x != 0x25)
    {
      func_0012C2B8(p, x, 1);
    }
  }
}

