extern s32 func_001B0780(void *, void *, s32);
extern s32 func_001B0878(void *, s32);
extern s32 func_001D5EB0(s32, s32, s32);
extern s32 func_001D5F70(void);
extern void func_001D4040(void *, const char *);
extern void D_002AD530(void *);
extern void *D_002AD5A8(int);
extern u32 D_00472910[];
extern u32 D_00473328[];
void func_001AA308(void *arg0, void *arg1);
void func_001AA3B8(void *arg0)
{
  f32 new_var;
  f32 val = (*((f32 *) (((u8 *) arg0) + 0x68))) + (*((f32 *) (((u8 *) arg0) + 0x64)));
  *((f32 *) (((u8 *) arg0) + 0x68)) = val;
  if ((*((s32 *) (((u8 *) arg0) + 0x28))) != 0)
  {
    new_var = *((f32 *) (((u8 *) arg0) + 0x6C));
    if (new_var < val)
    {
      *((s32 *) (((u8 *) arg0) + 0x68)) = 0;
    }
  }
  else
  {
    f32 limit = *((f32 *) (((u8 *) arg0) + 0x6C));
    if (limit < val)
    {
      *((f32 *) (((u8 *) arg0) + 0x68)) = limit;
      if ((*((s32 *) (((u8 *) arg0) + 0x30))) != 0)
      {
        s32 count = *((s32 *) (((u8 *) arg0) + 0x54));
        if (count < (*((s32 *) (((u8 *) arg0) + 0x58))))
        {
          *((s32 *) (((u8 *) arg0) + 0x54)) = count + 1;
        }
        else
        {
          *((s32 *) (((u8 *) arg0) + 0x68)) = (*((s32 *) (((u8 *) arg0) + 0x54)) = 0);
        }
      }
    }
  }
}

s32 func_001B0630(void *arg0);
void func_001A15F8(void *arg0);
