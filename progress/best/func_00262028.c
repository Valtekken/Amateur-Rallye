#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef struct 
{
  void *p;
  char pad[12];
} Holder;
extern s32 func_00152DC8(void *);
extern s32 func_00152E30(void *);
extern s32 func_00152E98(void *);
extern s32 func_00262B00(s32, s32);
extern s32 func_00262D58(s32, s32);
extern void *func_002B1FC0(s32);
extern void *func_003D2910(s32);
extern s32 func_002B2028(void *);
void func_00262028(void *arg0)
{
  Holder h[6];
  s8 *new_var;
  void *t2;
  void *t2_2;
  void *t4;
  s32 t18;
  void *t2_3;
  s8 *new_var2;
  void *t2_4;
  void *t16;
  void *t16_2;
  s32 t18_2;
  *((s32 *) (((char *) arg0) + 0x44)) = 1;
  h[1].p = *((void **) (((s8 *) arg0) + 4));
  h[0].p = *((void **) h[1].p);
  if (h[0].p != h[1].p)
  {
    do
    {
      t18 = *((s32 *) ((new_var = (s8 *) h[0].p) + 8));
      h[3].p = *((void **) (((s8 *) arg0) + 8));
      t4 = func_002B1FC0(0xC);
      t2 = ((char *) t4) + 8;
      if (t4 == NULL)
      {
        t4 = func_003D2910(0xC);
        t2 = ((char *) t4) + 8;
      }
      if (t2 != NULL)
      {
        *((s32 *) (((s8 *) t4) + 8)) = *((s32 *) (new_var + 8));
      }
      *((void **) (((s8 *) t4) + 0)) = h[3].p;
      *((void **) (((s8 *) t4) + 4)) = *((void **) (((s8 *) h[3].p) + 4));
      *((void **) (*((void **) (((s8 *) h[3].p) + 4)))) = t4;
      *((void **) (((s8 *) h[3].p) + 4)) = t4;
      h[2].p = h[0].p;
      t16 = *((void **) (new_var + 0));
      t2_3 = *((void **) (new_var + 4));
      *((void **) t2_3) = t16;
      *((void **) (((s8 *) t16) + 4)) = t2_3;
      func_002B2028(h[2].p);
      h[0].p = t16;
      h[1].p = t16;
      if (t18)
      {
        func_00262D58(t18, 3);
      }
      t2_2 = *((void **) (((s8 *) arg0) + 4));
      h[1].p = t2_2;
    }
    while (h[0].p != t2_2);
  }
  ;
  h[1].p = *((void **) (*((void **) (((s8 *) arg0) + 0xC))));
  h[2].p = *((void **) (((s8 *) arg0) + 0xC));
  if (h[1].p != (*((void **) (((s8 *) arg0) + 0xC))))
  {
    do
    {
      t18_2 = *((s32 *) (((s8 *) h[1].p) + 8));
      t16_2 = (s8 *) arg0;
      h[5].p = *((void **) (t16_2 + 0x10));
      new_var2 = ((s8 *) h[1].p) + 8;
      t4 = func_002B1FC0(0xC);
      t2 = ((char *) t4) + 8;
      if (t4 == NULL)
      {
        t4 = func_003D2910(0xC);
        t2 = (char *) t4;
        t2 = t2 + 8;
      }
      if (t2 != NULL)
      {
        *((s32 *) (((s8 *) t4) + 8)) = *((s32 *) new_var2);
      }
      *((void **) (((s8 *) t4) + 0)) = h[5].p;
      *((void **) (((s8 *) t4) + 4)) = *((void **) (((s8 *) h[5].p) + 4));
      *((void **) (*((void **) (((s8 *) h[5].p) + 4)))) = t4;
      *((void **) (((s8 *) h[5].p) + 4)) = t4;
      h[4].p = t4;
      h[3].p = h[1].p;
      t16_2 = *((void **) (((s8 *) h[1].p) + 0));
      t2_4 = *((void **) (((s8 *) h[1].p) + 4));
      *((void **) t2_4) = t16_2;
      *((void **) (((s8 *) t16_2) + 4)) = t2_4;
      func_002B2028(h[3].p);
      h[1].p = t16_2;
      h[2].p = t16_2;
      if (t18_2)
      {
        func_00262B00(t18_2, 3);
      }
      t2_4 = *((void **) (t16_2 + 0xC));
      h[2].p = t2_4;
    }
    while (h[1].p != t2_4);
  }
  func_00152E30(((char *) arg0) + 4);
  func_00152E98(((char *) arg0) + 0xC);
  func_00152DC8(arg0);
  *((s32 *) (((char *) arg0) + 0x44)) = 0;
  *((s32 *) (((char *) arg0) + 0x48)) = 1;
}

