extern void func_001D4040(void *, const char *);
extern void func_001E2460(void *, s32);
extern void func_001E25B0(void *, const char *, void *);
extern void func_0011C718(void *, s32);
extern void *func_001E3700(s32, void *);
extern s32 func_001D4010(void *);
extern s32 func_003FA760(s32, s32);
extern char D_004471C8[];
extern char D_0044D6A8[];
extern char D_00446628[];
extern char D_0044D800[];
extern const char D_004471E8[];
extern const char D_00444D00[];
extern const char D_004471F8[];
inline static void *init_a(void *p, s32 a)
{
  func_001E2460(p, a);
  return p;
}

void func_0011B5B8(void *arg0, s32 arg1, s32 arg2);
void *func_0011B488(s32 *p);
void *func_0011B708(s32 *p)
{
  s32 k[4];
  func_001D4040(k, D_00446628);
  p[1] = k[0];
  p[0] = -1;
  p[2] = (s32) D_0044D800;
  p[10] = 1;
  *((f32 *) (((u8 *) p) + 0x54)) = 1.0f;
  p[13] = 0;
  p[17] = 0;
  p[3] = 0;
  p[11] = 0;
  p[4] = 0;
  p[5] = 0;
  p[6] = 0;
  p[7] = 0;
  p[8] = 1;
  p[9] = 1;
  p[12] = 0;
  p[3] = 0;
  p[14] = 0;
  p[15] = 0;
  p[16] = 0;
  p[18] = 0;
  p[19] = 0;
  p[20] = 0;
  p[22] = 0;
  p[23] = 0;
  p[24] = 0;
  return p;
}

void func_0011BBF8(void *arg0);
