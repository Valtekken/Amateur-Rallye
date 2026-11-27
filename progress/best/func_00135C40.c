extern int func_0011E2B8(int, int);
extern int func_00193B60();
extern int func_00191630(int);
extern int func_00194C40();
extern int func_00194B80(int);
extern int func_00116D08();
extern int func_00116BD0(int);
extern int func_001E3598(int, void *);
extern int func_00191710(int);
extern int func_0011AD90();
extern int func_0011ABE8(int);
extern void func_0011E278(int, int);
extern void func_001D4040(void *, const char *);
extern void func_00194B48(int, int);
extern char D_00444B30[];
extern char D_0044A800[];
void func_00135C40(char *p)
{
  int kind;
  int state;
  int x;
  int val;
  char buf[16];
  if (func_0011E2B8(*((int *) (p + 12)), 1) != (-2))
  {
    return;
  }
  kind = func_00191630(func_00193B60());
  state = func_00194B80(func_00194C40());
  switch (kind)
  {
    case 1:

    case 2:

    case 3:
      func_00116BD0(func_00116D08());
      x = func_001E4280();
      func_001D4040(buf, D_00444B30);
      if (!func_001E3598(x, buf))
    {
      func_0011E278(*((int *) (p + 12)), 25);
      return;
    }
      goto five;

    case 9:

    case 10:

    case 11:

    case 12:

    case 13:
      x = func_001E4280();
      func_001D4040(buf, D_0044A800);
      if (func_001E3598(x, buf))
    {
      func_0011E278(*((int *) (p + 12)), 21);
    }
    else
    {
      func_0011E278(*((int *) (p + 12)), 34);
    }
      return;

    case 5:
      if ((state == 0) && (func_00191710(func_00193B60()) > 0))
    {
      x = func_00194C40();
      val = 1;
      goto set;
    }
      goto reset;

    case 6:
 do { } while (0);

    case 8:
      if (state == 0)
    {
      x = func_00194C40();
      val = 2;
      goto set;
    }
      if ((state == 2) && func_0011ABE8(func_0011AD90()))
    {
      x = func_00194C40();
      val = 3;
      goto set;
    }
      reset:
    func_00194B48(func_00194C40(), 0);

      five:
    func_0011E278(*((int *) (p + 12)), 5);

      return;
      set:
    func_00194B48(x, val);

      func_0011E278(*((int *) (p + 12)), 11);
      return;

    case 7:
      func_0011E278(*((int *) (p + 12)), 5);
      return;

  }

}
