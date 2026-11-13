extern void func_001D6090(void *);
extern void *D_002AD408(s32);
extern s32 D_0047FA08[];
typedef struct 
{
  s32 f00;
  s32 f04;
  s32 f08;
  u8 pad_0C[4];
  u8 f10;
  s32 f14;
  s32 f18;
  s32 f1c;
  s32 f20;
  s32 f24;
  s32 f28;
} TmpStruct;
typedef struct 
{
  s32 unk_00;
  s32 unk_04;
  void *vtable;
  s32 unk_0C;
  void *unk_10;
  s32 unk_14;
  s32 unk_18;
  s32 unk_1C;
  s32 unk_20;
  s32 unk_24;
  s32 unk_28;
  s32 unk_2C;
  s32 unk_30;
  s32 unk_34;
} MainStruct;
void *func_002B8438(void *arg0)
{
  MainStruct *p = (MainStruct *) arg0;
  s32 (*new_var)[];
  volatile TmpStruct *tmp;
  func_001D6090(arg0);
  p->unk_1C = 1;
  new_var = &D_0047FA08;
  p->unk_0C = 0;
  p->unk_18 = 0;
  *((u32 *) (&p->unk_14)) = 0xFFFFFFFFu;
  p->vtable = new_var;
  tmp = (volatile TmpStruct *) D_002AD408(0x2C);
  p->unk_20 = 1;
  p->unk_10 = (void *) tmp;
  tmp->f00 = 0;
  tmp->f04 = 0;
  tmp->f08 = 0;
  tmp->f10 = 0;
  tmp->f14 = 0;
  tmp->f18 = 0;
  tmp->f1c = 0;
  tmp->f20 = 0;
  tmp->f24 = 0;
  tmp->f28 = 0;
  p->unk_24 = 0;
  p->unk_28 = 0;
  p->unk_2C = 0;
  p->unk_30 = 0;
  p->unk_34 = 0;
  return arg0;
}

