typedef struct 
{
  s32 value;
} CopyTag;
extern s32 func_002C5160(s32, s32, s32, CopyTag);
s32 func_003978C8(register s32 a, register s32 b, register s32 c, register s32 d);
extern void D_002AD390(void *);
extern s32 func_0019EAC8(s32, s32);
void func_00178E50(void *arg0, s32 arg1);
f32 func_001780E0(void *arg0);
float func_00178090(void *arg0)
{
  void *q = *((void **) (((char *) arg0) + 0x14));
  float new_var;
  float x = (*((float *) (((char *) q) + 0x28))) / (*((float *) (((char *) q) + 0x44)));
  float low = 0.0f;
  float high = 1.0f;
  new_var = x;
  if (new_var < low)
  {
    if (low || q)
    {
      return low;
    }
    else
    {
      return low;
    }
  }
  if (x > high)
  {
    x = high;
  }
  return x;
}

