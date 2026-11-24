s32 func_001F2578(void *arg0, s32 arg1, s32 arg2)
{
  s32 temp_6;
  int new_var;
  if ((arg1 < 0) || ((temp_6 = *((s32 *) (((char *) arg0) + 0)), (((u32) arg1) < ((u32) (((s32) (((*((s32 *) (((char *) arg0) + 4))) - temp_6) * 0xBA2E8BA3)) >> 3))) == 0)))
  {
    return 0;
  }
 do { new_var = (arg1 * 0x58) + temp_6; return ((*((s32 *) (((char *) new_var) + 0x4C))) != 0) && (((u32) arg2) != 0); } while (0);
}
