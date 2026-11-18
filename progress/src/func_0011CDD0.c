extern s32 func_00296710(void);
extern s32 func_00296530(s32, void *);
extern s32 func_001E4280(void);
extern s32 func_001E3650(s32, void *);
void func_0011CDD0(void *arg0, void *arg1)
{
  s32 *t16;
  unsigned int r;
  s64 val;
  if (func_00296530(func_00296710(), arg1) != 0)
  {
    t16 = *((s32 **) (((char *) arg1) + 0x4C));
    r = func_001E3650(func_001E4280(), ((char *) arg0) + 0xC);
    val = *((s64 *) (((char *) t16) + 0x78));
    val = val & (-2LL);
    r = r == (*((s32 *) (((char *) arg0) + 0x10)));
    val = val | r;
    *((s64 *) (((char *) t16) + 0x78)) = val;
  }
}

