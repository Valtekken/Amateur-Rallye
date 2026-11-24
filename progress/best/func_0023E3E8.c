#define V4(p,o) (*(volatile f32 *)((u8 *)(p)+(o)))
#define V4I(p,o) (*(volatile s32 *)((u8 *)(p)+(o)))
extern s32 func_0023E538(void *);
void func_0023E3E8(void *arg0, s32 arg1, s32 arg2, register void *arg3, register void *arg4, s32 arg5, register void *arg6, register void *arg7, f32 f0, f32 f1, f32 f2, f32 f3, s32 sp0, s32 sp8)
{
  register volatile f32 *p2;
  register volatile f32 *p3;
  register volatile f32 *p4;
  register u8 *b = (u8 *) arg0;
  func_0023E538(arg0);
  V4I(b, 0x4C) = arg1;
  V4I(b, 0x50) = arg2;
  arg3++;
  arg3--;
  p2 = (volatile f32 *) (b + 0xC);
  p3 = (volatile f32 *) (b + 0x2C);
  p4 = (volatile f32 *) (b + 0x38);
  V4(b, 0x0) = V4(arg3, 0x0);
  V4(b, 0x4) = V4(arg3, 0x4);
  V4(b, 0x8) = V4(arg3, 0x8);
  V4(b, 0xC) = V4(arg4, 0x0);
  p2[1] = V4(arg4, 0x4);
  p2[2] = V4(arg4, 0x8);
  V4(b, 0x18) = f0;
  V4(b, 0x1C) = f1;
  V4(b, 0x20) = f2;
  V4(b, 0x24) = f3;
  V4I(b, 0x28) = arg5;
  {
    register s32 v0 = *((volatile s32 *) (&sp0));
    V4(b, 0x2C) = V4(arg6, 0x0);
    p3[1] = V4(arg6, 0x4);
    p3[2] = V4(arg6, 0x8);
    V4(b, 0x38) = V4(arg7, 0x0);
    p4[1] = V4(arg7, 0x4);
    p4[2] = V4(arg7, 0x8);
    V4I(b, 0x44) = v0;
  }
  V4I(b, 0x48) = sp8;
  V4I(b, 0xD4) = 0;
  V4I(b, 0xD8) = 0;
}

