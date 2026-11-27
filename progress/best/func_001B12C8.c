extern f32 func_001D5DF0(s32);
extern s32 func_001D5F70(void);
void func_001B15E8(void *arg0);
extern f32 func_001D5E70(s32, f32, f32);
extern void func_001B15E8(void *);
void func_001B1380(void *arg0);
extern f32 func_001D5E70(s32, f32, f32);
extern s32 func_001D5F70(void);
void func_001B12C8(void *arg0)
{
  f32 x = func_001D5E70(func_001D5F70(), 0.1f, 1.0f);
  f32 v = (*((f32 *) (((u8 *) arg0) + 0xC))) + 0.01f;
 do { *((f32 *) (((u8 *) arg0) + 0xC)) = v; if (x < (v * 0.1f)) { *((f32 *) (((u8 *) arg0) + 0xC)) = 0.0f; *((f32 *) (((u8 *) arg0) + 0x54)) = func_001D5E70(func_001D5F70(), 0.0f, *((f32 *) (((u8 *) arg0) + 0x58))); } else if ((x * 0.5f) < (v * 0.1f)) { *((f32 *) (((u8 *) arg0) + 0x54)) = 0.0f; } } while (0);
}
