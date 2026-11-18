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

void func_001E5500(TaggedLocal *p, s32 *arg1)
{
  s32 new_var;
  if (p->tag != 4)
  {
    s32 *t;
    func_001E5C58(p, p, 4);
    t = (s32 *) D_002AD408(4);
    new_var = *arg1;
    p->payload.i = t;
    *t = new_var;
  }
  else
  {
    s32 *v = p->payload.i;
    if ((*v) != (*arg1))
    {
      p->changes++;
      *v = *arg1;
    }
  }
}
