typedef struct A
{
  int flags;
  int unk4;
  int unk8;
  int unkC;
} A;
typedef struct B
{
  int pad;
  A *unk4;
  int unk8;
} B;
s32 func_003D8C20(B *a, A *p)
{
  s32 n;
  int new_var;
  p = a->unk4;
  if (!p)
  {
    return -1;
  }
  new_var = 256 & p->flags;
  a++;
  a--;
  n = (new_var) ? (p->unk8) : (p->unkC);
  n = p->unk4 - n;
  return a->unk8 - n;
}

extern s32 func_003D7F50(void *, u32, s32);
s32 func_003DA700(s32 a, u32 *p);
extern s32 func_003DE2F0(void *);
extern void func_003D6EB0(void *, s32);
extern u8 D_00489000[];
void *func_003DA770(register void *a);
