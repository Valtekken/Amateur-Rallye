extern f32 func_003F2F50(f32);
extern f32 func_003F3140(f32);
typedef struct 
{
  f32 x;
  f32 y;
  f32 z;
} Vec3;
void func_001DBBA8(void *arg0, f32 fparg0)
{
  f32 rad;
  f32 c;
  f32 s;
  Vec3 *p;
  Vec3 *end;
  rad = (fparg0 * 3.1415927f) / 180.0f;
  c = func_003F2F50(rad);
  s = func_003F3140(rad);
  p = *((Vec3 **) arg0);
  end = *((Vec3 **) (((u8 *) arg0) + 4));
  if (p != end)
  {
 do { do { f32 y = p->y; f32 z = p->z; f32 ny = (y * c) - (z * s); f32 nz = (y * s) + (z * c); p->y = ny; p->z = nz; p++; end = *((Vec3 **) (((u8 *) arg0) + 4)); } while (p != end); } while (0);
  }
}

extern void func_001DCC78(void *, s32, s32, void *);
void func_001DC508(void *arg0, void *arg1);
