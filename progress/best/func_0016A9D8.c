extern f32 fabsf(f32);
typedef struct 
{
  f32 x;
  f32 y;
  f32 z;
} P;
typedef struct 
{
  P *b;
  P *e;
} A;
f32 func_0016A9D8(s32 a0, void *a1, A *a2, f32 x)
{
  f32 new_var;
  P *b = a2->b;
  s32 n = a2->e - b;
  s32 n1 = n - 1;
  if (n1 >= 3)
  {
    s32 n2 = n - 2;
    f32 y1 = b[1].y;
    f32 y0 = b[0].y;
    f32 three = 3.0f;
    f32 fifty = 50.0f;
    f32 d = fabsf((y0 - y1) - (b[n2].y - b[n1].y));
    if (d > 20.0f)
    {
      d = 20.0f;
    }
    if (d > three)
    {
      new_var = fifty;
      return x - ((x / 100.0f) * ((((d - three) / 17.0f) * new_var) + 5.0f));
    }
 do { } while (0);
  }
  return x;
}
