#include "context.h"
extern void func_001FA460(void *);
extern void func_001FA478(void *, s32);
extern void func_001FA4A0(void *, void *, f32);
extern volatile unsigned char func_001F7EC8(void);
extern void func_0021D5B0(void *, void *, f32);
extern char D_004789A0[];
s32 func_001D3920(void *arg0);
void *func_001F2E00(void *arg0);
void func_001F3290(void *arg0, void *arg1);
void *func_001F32E8(void *arg0)
{
  s32 sp[3];
  func_001F7EC8();
  *((char **) (((u8 *) arg0) + 0x10)) = D_004789A0;
  sp[0] = 0;
  sp[1] = (sp[2] = 0);
  func_0021D5B0(((u8 *) arg0) + 0x1C, sp, -1.0f);
  *((s32 *) (((u8 *) arg0) + 0x30)) = 0;
  return arg0;
}

