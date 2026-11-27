extern void func_001D4040(void *, const char *);
extern char D_00479BA8[];
extern char D_00479BB8[];
extern char D_0047A228[];
extern s32 D_004267A0;
extern s32 D_004922F0[];
typedef struct 
{
  volatile s32 f[2];
} V;
void *func_00261BF8(s32 *p)
{
  V *q = (V *) p;
  s32 k[4];
  s32 g;
  func_001D4040(k, D_00479BA8);
  g = D_004267A0;
  p[2] = (s32) D_0047A228;
  q->f[0] = -1;
  q->f[1] = k[0];
  p[4] = 0;
  p[5] = 0;
  if (g == 0)
  {
    func_001D4040(D_004922F0, D_00479BB8);
    D_004267A0 = 1;
  }
  p[3] = 0;
  p[5] = D_004922F0[0];
  *((f32 *) (((u8 *) p) + 0x18)) = 80.0f;
  *((f32 *) (((u8 *) p) + 0x1C)) = 40.0f;
  *((f32 *) (((u8 *) p) + 0x20)) = 1.0f;
  p[9] = 0;
  return p;
}

