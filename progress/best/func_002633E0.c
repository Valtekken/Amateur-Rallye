void func_002660C8(void *arg0);
void *func_002633E0(void *arg0)
{
  char *new_var;
  volatile s32 sp[4];
  f32 f1;
  char *p = (char *) arg0;
  char *q = p + 4;
  void *v0 = arg0;
  sp[2] = 0;
 do { if (arg0 || p) { *((s32 *) (p + 0x10)) = 0; *((s32 *) (p + 0x14)) = 0; } else { *((s32 *) (p + 0x10)) = 0; *((s32 *) (p + 0x14)) = 0; } } while (0);
  f1 = *((f32 *) (p + 0x10));
  *((s32 *) (p + 0x18)) = 0;
  *((s32 *) (p + 0x1C)) = 0;
  sp[0] = 0;
  sp[1] = 0;
  *((f32 *) (p + 4)) = f1;
  *((s32 *) (p + 0)) = 0;
  *((f32 *) ((new_var = q) + 4)) = f1;
  *((f32 *) (new_var + 8)) = *((f32 *) ((void *) (&sp[2])));
  return v0;
}

void func_002632B8(void *arg0, void *arg1);
