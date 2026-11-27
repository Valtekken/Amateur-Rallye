extern "C" f32 func_003F3E80(f32);
extern "C" f32 sqrtf(f32) __attribute__((alias("func_003F3E80")));
extern "C" f32 func_003F33C8(f32);
void func_00205490(f32 *arg0, f32 *arg1, f32 *arg2)
{
  f32 len = __builtin_sqrtf(((arg0[1] * arg0[1]) + (arg0[2] * arg0[2])) + (arg0[3] * arg0[3]));
  if (len < 0.001f)
  {
    *arg1 = 0.0f;
    *((u32 *) (&arg2[0])) = 0;
    *((u32 *) (&arg2[1])) = 0;
    *((u32 *) (&arg2[2])) = 0;
    return;
  }
  *arg1 = 2.0f * func_003F33C8(arg0[0]);
  f32 inv = 1.0f / len;
 do { arg2[0] = arg0[1] * inv; arg2[1] = arg0[2] * inv; arg2[2] = arg0[3]; arg2[2] = arg2[2] * inv; } while (0);
}
