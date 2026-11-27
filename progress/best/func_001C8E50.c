typedef struct 
{
  f32 key;
  u32 v;
} __attribute__((packed)) E8;
extern void func_001C8CF0(void *, void *, s32, s32);
extern void func_001C8C10(s32, s32, s32, u64);
extern void func_001C8D88(void *, void *);
void func_001C8E50(E8 *base, E8 *start, E8 *end, s32 depth)
{
  E8 tmp;
  E8 val8;
  E8 *q;
  E8 *p;
  E8 *new_var;
  s32 off;
  s32 cond;
  f32 new_var2;
  E8 *new_var3;
  func_001C8CF0(base, start, 0, 0);
  if (((u32) start) < ((u32) end))
  {
    p = start;
    q = base;
    for (;;)
    {
      cond = 1;
      new_var2 = *((f32 *) p);
      if (!(new_var2 > (*((f32 *) q))))
      {
        cond = 0;
      }
 do { } while (0);
      if (cond != 0)
      {
        tmp = *p;
        val8 = tmp;
        new_var3 = &val8;
        new_var = p;
        *new_var = *q;
        func_001C8C10((s32) base, 0, ((s32) (((u8 *) start) - ((u8 *) base))) >> 3, *((u64 *) new_var3));
      }
      p++;
      if (!(((u32) p) < ((u32) end)))
      {
        break;
      }
    }

  }
  func_001C8D88(base, start);
}
