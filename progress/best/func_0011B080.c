extern void func_001D4040(void *, const char *);
extern void func_001E3D10(s32, void *, s32);
extern void func_0011B220(void *, void *);
extern void func_0011C760(void *, void *, s32);
extern void func_0029FA58(void *, void *, s32);
extern void func_0029FA68(void *, void *, void *);
extern u8 D_0048D8E0[];
extern char D_004448F8[];
extern char D_00444D28[];
extern char D_00445D80[];
extern char D_00445D98[];
extern char D_00446628[];
inline static void *init(void *p, const char *s)
{
  func_001D4040(p, s);
  return p;
}

typedef struct
{
  u8 pad0[0xC];
  s32 unkC;
  u8 pad10[4];
  s32 unk14;
} Arg0;
typedef struct
{
  u8 pad0[4];
  s32 unk4;
  u8 pad8[0x54];
  s32 unk5C;
} Item;
typedef struct
{
  u8 pad0[4];
  Item *unk4;
} Arg1;
typedef struct
{
  f32 x;
  f32 y;
  f32 z;
  f32 w;
} Vec4;
void func_0011B080(Arg0 *a0, Arg1 *a1)
{
  char key[16];
  Vec4 v;
  Vec4 *pv;
  char key2[16];
  s32 active;
  s32 sel;
  Item *p;
  if (func_001E3650(func_001E4280(), (s32) init(key, D_00445D80)) > 0)
  {
    return;
  }
  active = func_001E3650(func_001E4280(), (s32) init(key, D_004448F8)) == a0->unkC;
  if (active)
  {
    func_001E3D10(func_001E4280(), init(key, D_00445D98), a0->unk14);
    func_0011B220(a0, a1);
  }
  pv = &v;
  pv->x = 1.0f;
  pv->y = 1.0f;
  pv->z = 1.0f;
  pv->w = 1.0f;
  sel = active;
  p = a1->unk4;
  if (a0->unk14 == 0)
  {
    sel = (active) ? (3) : (2);
  }
  if (p)
  {
    func_001D4040(key, D_00444D28);
    if (p->unk4 == (*((s32 *) key)))
    {
      func_0029FA58(p, a1, sel);
      func_0029FA68(p, a1, D_0048D8E0 + (sel << 4));
    }
    else
    {
      func_001D4040(key2, D_00446628);
      if (p->unk4 == (*((s32 *) key2)))
      {
        func_0011C760(p, a1, sel);
        p->unk5C = active;
      }
    }
  }
}
