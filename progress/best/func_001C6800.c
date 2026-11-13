typedef struct Grid9
{
  s32 size;
  s32 pad;
  s32 table;
} Grid9;
extern s32 func_001C6780(Grid9 *, s32, s32);
extern s32 *func_001C67A0(s32, s32, s32);
extern s32 *func_001C67D0(s32, s32, s32);
inline s32 inline_fn(s32 *arg0)
{
  return *arg0;
}

void func_001C6800(Grid9 *g, s32 x, s32 y, u8 *value)
{
  s32 size = g->size;
  u8 *new_var;
  s32 qx = x / size;
  s32 new_var2;
  unsigned int new_var3;
  s32 qy = y / size;
  s32 index = func_001C6780(g, x - (size * qx), y - (size * qy));
  s32 *tile = func_001C67A0(g->table, qx, qy);
  new_var3 = *tile;
  size = new_var3;
  new_var2 = g->table;
  if (size)
  {
    s32 *t = func_001C67D0(new_var2, qx, qy);
    new_var = &(*value);
    *((u8 *) (inline_fn(t) + index)) = *new_var;
  }
}

