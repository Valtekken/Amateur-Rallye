extern s32 func_00296710(void);
extern s32 func_00296530(s32, s32);
extern void func_00296550(s32, s32, float *, float *);
extern void func_002965B8(s32, s32, float, float);
extern s32 func_00194C40(void);
extern void func_00193C78(s32, s32);
extern void func_0011D998(void *, s32);
extern s32 func_001E4280(void);
extern s32 func_001E3650(s32, s32);
typedef struct 
{
  char pad[32];
  s32 p20;
  s32 flag24;
  s32 value;
} Sl;
void func_0011D718(Sl *o, s32 id)
{
  if (func_00296530(func_00296710(), id) != 0)
  {
    func_0011D998(o, id);
    if (o->flag24 != 0)
    {
      float x = 0.0f;
      float y = 0.0f;
      float d;
      float v;
      func_00296550(func_00296710(), id, &x, &y);
      d = (((float) o->value) - x) * 0.5f;
      if (__builtin_fabsf(d) < 5.0f)
      {
        if (d < 0.0f)
        {
          d = -5.0f;
        }
        else
        {
          d = 5.0f;
        }
      }
      v = (float) o->value;
      if (x < v)
      {
        x = x + d;
        if (v <= x)
        {
          x = v;
          o->flag24 = 0;
        }
      }
      else
      {
        x = x + d;
        if (x <= v)
        {
          x = v;
          o->flag24 = 0;
        }
      }
      func_002965B8(func_00296710(), id, x, y);
      func_00193C78(func_00194C40(), 1);
    }
    else
    {
      s32 *pp = &o->p20;
      if ((*pp) != 0)
      {
        float x;
        float y;
        s32 n = func_001E3650(func_001E4280(), (s32) pp);
        s32 iv;
        x = 0.0f;
        y = 0.0f;
        func_00296550(func_00296710(), id, &x, &y);
        iv = (s32) x;
        o->value = iv;
        if (iv != n)
        {
 do { o->value = n; o->flag24 = 1; } while (0);
        }
      }
      func_00193C78(func_00194C40(), 0);
    }
  }
}
