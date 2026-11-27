extern f32 D_004264A0;
extern s32 D_00426610;
typedef struct 
{
  f32 x;
  f32 y;
  f32 z;
  f32 w;
} Plane;
s32 func_00236518(u32 *arg0, f32 *arg1)
{
  int new_var;
  int new_var2;
  if (!D_00426610)
  {
    ret0:
    return new_var2 = 0;

  }
  new_var = -1;
  {
    s32 i = new_var2;
    u8 count = ((u8 *) arg0)[3];
    if (count)
    {
      f32 th = D_004264A0;
      Plane *p = (Plane *) ((((*arg0) & 0xFFFFFF) * 0x14) + ((char *) D_00426610));
      f32 v0 = arg1[0];
      f32 v1 = arg1[1];
      f32 v2 = arg1[2];
      s32 minus_one = -1;
      do
      {
        f32 dist = (((p->x * v0) + (p->y * v1)) + (p->z * v2)) + p->w;
        s32 side = 0;
        if (th <= dist)
        {
          side = 1;
        }
        else
          if (dist <= (-th))
        {
          side = new_var;
        }
        if (side != minus_one)
        {
          goto ret0;
        }
        i++;
 do { p = (Plane *) (((char *) p) + 0x14); } while (0);
      }
      while (i < ((s32) count));
    }
    return 1;
  }
}
