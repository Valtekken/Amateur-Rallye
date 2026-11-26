extern void *D_002AD408(s32);
extern void func_001D4040(void *, const char *);
extern void func_001E2460(void *, void *);
extern void func_001E2E38(void *, void *, s32 *);
extern s32 func_003FA310(void *, const char *, s32);
extern u32 D_0044DD18[];
extern const char D_004711B0[];
extern const char D_004711D0[];
typedef struct 
{
  s32 unk0;
  s32 unk4;
  s32 unk8;
} ObjInner;
typedef struct 
{
  s32 unk0;
  s32 unk4;
  s32 unk8;
  s32 unkC;
  s32 *unk10;
  ObjInner unk14;
  s32 unk20;
} Obj;
typedef struct 
{
  u8 pad[0xC];
  s32 count;
  s32 *items;
} Arg0;
void *func_0018CD40(void *arg0)
{
  s32 i = 0;
  Obj *p = D_002AD408(0x24);
  char name[32];
  char sp20[256];
  char sp120[16];
  Arg0 *a = arg0;
  int new_var;
  ObjInner *inner = &p->unk14;
  func_001D4040(name, D_004711B0);
  p->unk8 = 0;
  p->unkC = 0;
  p->unk4 = (p->unk0 = 0);
  p->unk14.unk0 = 0;
  p->unk10 = (s32 *) D_0044DD18;
  p->unk20 = *((s32 *) name);
  inner->unk4 = (inner->unk8 = 0);
  new_var = 0;
  func_001E2460(sp120, p);
  if (a->count > new_var)
  {
    do
    {
      func_003FA310(sp20, D_004711D0, i);
      func_001E2E38(sp120, sp20, &a->items[i]);
      i++;
    }
    while (i < a->count);
  }
  return p;
}

