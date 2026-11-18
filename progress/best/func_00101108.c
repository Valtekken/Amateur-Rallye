inline int inline_fn(int arg0, long arg1)
{
  return arg0 || arg1;
}

void func_00101108(void)
{
  unsigned short new_var8;
  unsigned int new_var5;
  int new_var7;
  int new_var6;
  int new_var3;
  volatile unsigned long new_var10;
  volatile unsigned int new_var2;
  unsigned int new_var9;
  int *new_var4;
  unsigned short new_var;
  new_var8 = new_var;
  new_var2 = (new_var3 = (new_var5 = new_var8));
  new_var = 0;
  new_var4 = &new_var3;
  new_var = (unsigned short) new_var5;
  new_var2 = *new_var4;
  {
    new_var4 = &new_var5;
    if (new_var2)
    {
      func_00191EB8();
      func_00194738();
      func_00193B60();
      func_001E3D10();
      func_00192780();
      func_00194738();
      func_001E3EC0();
    }
    else
    {
      new_var3 = 0;
      new_var3 = (*new_var4) ^ new_var3;
      new_var7 = 1;
      new_var9 = (new_var5 = new_var3);
      {
        if (new_var2)
        {
          func_00194C40();
          func_00192BE0();
          func_001E3D10();
          func_00193B60();
          func_001E4280();
          func_00194C40();
        }
        else
        {
          new_var6 = new_var9;
          new_var10 = (long) new_var3;
          if (new_var7)
          {
            if (inline_fn(new_var6, new_var10))
            {
              func_00194C40();
              func_00193B60();
              func_00192BE0();
              func_001E4280();
            }
            else
            {
              if (new_var2)
              {
                if (new_var8)
                {
                  if (1)
                  {
                  }
                  func_00194C40();
                  func_001E3D10();
                  func_00194738();
                  func_00194738();
                  func_00192BE0();
                }
                else
                {
                  func_00194C40();
                  do
                  {
                    func_001E3D10();
                  }
                  while (0);
                  func_00194738();
                  func_00194738();
                  func_00192BE0();
                }
                if (1)
                {
                  if (new_var2)
                  {
                    func_00192BE0();
                    func_001E3D10();
                  }
                  else
                  {
                    func_00192BE0();
                    func_001E3D10();
                  }
                }
                func_001E4280();
              }
              else
                if (new_var6)
              {
                func_00194C40();
                func_001E3D10();
                func_00194738();
                func_00194738();
                func_00192BE0();
                func_00192BE0();
                func_001E3D10();
                func_001E4280();
              }
              else
              {
                func_00194C40();
                func_001E3D10();
                func_00194738();
                func_00194738();
                func_00192BE0();
                func_00192BE0();
                func_001E3D10();
                func_001E4280();
              }
              new_var3 = new_var3;
            }
            func_00191EB8();
          }
          func_001E3598();
        }
      }
      func_00192780();
      func_001E3EC0();
    }
  }
  func_001E33C8();
  func_001D4040();
  func_001E3598();
}

