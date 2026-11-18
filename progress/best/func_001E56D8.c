typedef struct TaggedLocal
{
  s32 name;
  union 
  {
    s32 *i;
    f32 *f;
  } payload;
  s32 tag;
  unsigned b0 : 1;
  unsigned b1 : 1;
  unsigned b2 : 1;
  unsigned rest : 29;
  s32 changes;
  s32 refs;
  s32 owner;
} TaggedLocal;
extern void func_001E5C58(TaggedLocal *, TaggedLocal *, s32);
extern void *D_002AD408(s32);
void func_001E56D8(TaggedLocal *p, f32 *arg1)
{
  f32 new_var;
  s32 equal;
  if (p->tag != 7)
  {
    func_001E5C58(p, p, 7);
    f32 *ptr = (f32 *) D_002AD408(8);
    f32 f0 = arg1[0];
    f32 f1 = arg1[1];
    p->payload.f = ptr;
    ptr[0] = f0;
    ptr[1] = f1;
  }
  else
  {
    f32 *v = p->payload.f;
    equal = 0;
    if (v[0] == arg1[0])
    {
      if (p->payload.f[1] == arg1[1])
      {
        equal = 1;
      }
    }
    if (!equal)
    {
      p->changes++;
      p->payload.f[0] = arg1[0];
      new_var = arg1[1];
      p->payload.f[1] = new_var;
    }
  }
}

