typedef s32 M2C_UNK;
extern M2C_UNK func_002C17E0(M2C_UNK *);
extern M2C_UNK func_002C1818(M2C_UNK *, M2C_UNK);
extern M2C_UNK func_0030E8D0(M2C_UNK *);
extern M2C_UNK func_0030E918(M2C_UNK *, M2C_UNK);
extern M2C_UNK func_003108C8(M2C_UNK *);
extern M2C_UNK func_00310A20(void *, M2C_UNK);
extern M2C_UNK D_0042D690;
extern M2C_UNK D_0042DA28;
extern M2C_UNK D_0042DAB8;
void func_00310B20(s32 arg0, s32 arg1)
{
  char *p;
  s32 n;
  if (arg1 == 0xFFFF)
  {
    if (arg0 != 0)
    {
      n = 3;
      p = (char *) (&D_0042D690);
      do
      {
        n -= 1;
        func_003108C8((M2C_UNK *) p);
        p += 0xE0;
      }
      while (n != (-1));
      func_002C17E0(&D_0042DA28);
      func_0030E8D0(&D_0042DAB8);
      do
      {
      }
      while (0);
      return;
    }
    func_0030E918(&D_0042DAB8, 2);
    n = 0x380;
    func_002C1818(&D_0042DA28, 2);
    p = (char *) (&D_0042D690);
    {
      char *end = p + n;
      if ((p != 0) && (end != p))
      {
        p = p - 0xE0;
        p = end;
        do
        {
          func_00310A20(p, 0);
 do { p -= 0xE0; } while (0);
        }
        while ((end - 0xE0) != end);
      }
    }
  }
}
