s32 func_001D3920(void *arg0);
void func_001DCD50(void *arg0, s32 arg1, s32 *arg2)
{
  s32 stride;
  s32 *base;
  s32 *dest;
  int new_var;
  s32 i;
  new_var = 0;
  if (arg1 < new_var)
  {
    return;
  }
  if (arg1 >= (*((s32 *) (((char *) arg0) + 0x10))))
  {
    return;
  }
  i = new_var;
  stride = *((s32 *) (((char *) arg0) + 0xC));
  base = *((s32 **) (((char *) arg0) + 8));
  dest = base + (arg1 * stride);
  if (stride <= new_var)
  {
    return;
  }
  do
  {
    *dest = *arg2;
    i++;
    arg2++;
    dest++;
  }
  while (i < (*((s32 *) (((char *) arg0) + 0xC))));
}

typedef struct 
{
  s16 adjust;
  s16 pad;
  void (*fn)(void *, s32);
} VtEntry_001DDC00;
extern void D_002AD390(void *);
void func_001DDC00(void *self, s32 flags);
extern void func_001DCB88(void *, s32);
void func_001DDFE0(void *arg0, s32 arg1);
