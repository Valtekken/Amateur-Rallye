extern void func_001D4040(s32 *arg0, const char *arg1);
extern void func_003FA310(char *arg0, const char *arg1, ...);
extern char D_00472360[];
extern char D_00472370[];
extern void *D_00473820;
typedef struct 
{
  s32 v[4];
} S16;
void *func_0019FCD0(void *arg0)
{
  S16 slot0;
  S16 slot1;
  char **new_var;
  S16 slot2;
  S16 slot3;
  char *sp20_ptr;
  register s32 i;
  func_001D4040(slot0.v, D_00472360);
  sp20_ptr = (char *) slot2.v;
  *((s32 *) (((u8 *) arg0) + 0x4)) = slot0.v[0];
  *((s32 *) (((u8 *) arg0) + 0x0)) = -1;
  *((void **) (((u8 *) arg0) + 0x8)) = &D_00473820;
  *((f32 *) (((u8 *) arg0) + 0x14)) = 500.0f;
  *((f32 *) (((u8 *) arg0) + 0x18)) = 5.0f;
  *((f32 *) (((u8 *) arg0) + 0x1C)) = 100.0f;
  *((f32 *) (((u8 *) arg0) + 0x24)) = 100.0f;
  *((s32 *) (((u8 *) arg0) + 0x10)) = 0;
  *((f32 *) (((u8 *) arg0) + 0x20)) = 100.0f;
  *((s32 *) (((u8 *) arg0) + 0x2C)) = 0;
  *((s32 *) (((u8 *) arg0) + 0x30)) = 0;
  i = 0;
  do
  {
    slot1.v[0] = 0;
    new_var = &sp20_ptr;
    func_003FA310(*new_var, D_00472370, i);
    i++;
    func_001D4040(&slot1.v[0], *new_var);
  }
  while (i < 0x3F);
  return arg0;
}

