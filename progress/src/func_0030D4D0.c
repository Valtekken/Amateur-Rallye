extern s32 func_003F9698(char *fmt, ...);
extern char D_00484D18[];
extern char D_00484D38[];
extern char D_00484D58[];
s32 func_0030E000(void *arg0, void *arg1, u32 arg2);
extern s32 func_00406080(void *);
extern void func_0030CB08(s32, s32);
extern void func_0030C300(s32, void *, s32);
extern u8 D_004A2B78[];
extern s8 D_0042D5F8;
extern s16 D_004A33C0;
extern s32 D_0042D5A0;
s32 func_0030D4D0(s32 arg0)
{
  s32 ret;
  if (func_00406080(D_004A2B78) != 0)
  {
    return -1;
  }
  if (D_0042D5F8 == 0)
  {
    func_0030CB08(-1, 0);
  }
  D_0042D5F8 = 0;
  if (!ret)
  {
  }
  func_0030C300(0, &D_004A33C0, arg0);
 do { ret = D_0042D5A0; D_0042D5A0 = 0; } while (0);
  D_004A33C0 = 0;
  return ret;
}

extern void func_0030C350(s32);
extern void func_0030C508(u32);
extern void func_0030C3C0(void);
s32 func_0030D428(u32 arg0, u32 arg1, u32 arg2);
extern u8 D_0042D600[];
s32 func_0030D400(u32 arg0);
