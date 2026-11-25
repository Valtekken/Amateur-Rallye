extern void D_002AD390(void *);
extern void D_002AD530(s32);
extern void func_00262D58(s32, s32);
extern void func_002B2028(void *);
extern void *D_0040E618[];
extern void *D_0044DCD8[];
extern void *D_00473D10[];
typedef struct 
{
  u8 pad[0x8];
  void **vtable;
  u8 pad2[0x10];
  s32 unk1C;
  u8 pad3[0xC];
  s32 unk2C;
  s32 unk30;
  s32 unk34;
  void *unk38;
  u8 pad4[0x8];
  s32 unk44;
  u8 pad5[0x4];
  s32 unk4C;
} ArgStruct;
void func_0017E6F0(void *arg0, s32 arg1)
{
  ArgStruct *p = (ArgStruct *) arg0;
  s32 temp;
  void *ptr;
  void **new_var;
  s32 count;
  s32 unk4C_val;
  p->vtable = D_00473D10;
  temp = p->unk2C;
  if (temp != 0)
  {
    D_002AD530(temp);
  }
  temp = p->unk30;
  if (temp != 0)
  {
    D_002AD530(temp);
  }
  temp = p->unk34;
  if (temp != 0)
  {
    D_002AD530(temp);
  }
  ptr = p->unk38;
  new_var = *((void ***) (((u8 *) ptr) + 0x18));
  if (ptr != NULL)
  {
    void **func_ptr = new_var;
    s16 offset = *((s16 *) (((u8 *) func_ptr) + 0x8));
    void (*callback)(void *, s32, void *) = *((void (**)(void *, s32, void *)) (((u8 *) func_ptr) + 0xC));
    callback(((u8 *) ptr) + offset, 3, ptr);
  }
  temp = p->unk1C;
  if (temp != 0)
  {
    func_00262D58(temp, 3);
  }
  unk4C_val = p->unk4C;
  temp = p->unk44;
  count = (unk4C_val - temp) >> 2;
  if (count != 0)
  {
    if ((count * 4) != 0)
    {
      func_002B2028((void *) temp);
    }
    else
    {
      *((void **) temp) = D_0040E618[-1];
      D_0040E618[-1] = (void *) temp;
    }
  }
  p->vtable = D_0044DCD8;
  if (arg1 & 1)
  {
    D_002AD390(arg0);
  }
}

