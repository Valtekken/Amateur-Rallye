extern void *D_002AD408(u32);
extern char D_0044DD18[];
extern char D_0044BDF8[];
extern char D_0044BC38[];
extern char D_0044BE80[];
extern char D_0044BE90[];
extern char D_0044BEA0[];
extern char D_0044BEB0[];
extern void func_001D4040(void *, const char *);
extern int func_001E2460(void *, void *);
extern void func_001E2C78(void *, const char *, u32);
extern void func_001E2E38(void *, const char *, void *);
extern void func_001E2B98(void *, const char *, s32);
extern void func_001E2C08(void *, const char *, float);
typedef struct 
{
  u32 key[8];
} KeyBuf;
void *func_00144E60(void *arg0)
{
  u32 *p = (u32 *) D_002AD408(0x24);
  u32 key[8];
  func_001D4040(key, D_0044BDF8);
  u32 k = key[0];
  u32 *p5 = p + 5;
  p[2] = 0;
  p[4] = (u32) D_0044DD18;
  p[3] = 0;
  p[1] = 0;
  p[0] = 0;
  p[5] = 0;
  p5[2] = (p5[1] = 0);
  p[8] = k;
  u32 reader[4];
  func_001E2460(reader, p);
  func_001E2C78(reader, D_0044BC38, *((u32 *) (((u8 *) arg0) + 0xC)));
  func_001E2E38(reader, D_0044BE80, ((u8 *) arg0) + 0x10);
  func_001E2E38(reader, D_0044BE90, ((u8 *) arg0) + 0x14);
  func_001E2B98(reader, D_0044BEA0, *((s32 *) (((u8 *) arg0) + 0x18)));
  func_001E2C08(reader, D_0044BEB0, *((float *) (((u8 *) arg0) + 0x1C)));
  return p;
}

