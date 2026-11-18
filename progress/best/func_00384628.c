extern void func_002B2028(void *);
extern void D_002AD390(void *);
extern void func_00152720(void *, void *, void *);
extern u32 D_0040E618[];
extern u32 D_0040E658[];
extern u32 D_00486D18[];
typedef struct 
{
  u32 str;
  s32 refs;
} Entry;
typedef struct 
{
  s32 *map;
  s32 p1;
  s32 p2;
  s32 *reverse;
  s32 p4;
  s32 p5;
  s32 *begin;
  s32 *end;
  s32 *cap;
  Entry *entries;
  s32 p10;
  s32 p11;
  s32 count;
} Registry;
extern Registry D_004262D0;
typedef struct 
{
  char pad[8];
  s16 adjust;
  s16 pad2;
  void (*destroy)(void *, s32);
} Vtable;
typedef struct 
{
  s32 refs;
  Vtable *vt;
} Ref;
typedef struct 
{
  s32 id;
  s32 p1;
  s32 p2;
  void *vt;
  Ref *ref;
} Obj;
inline static void drop(u32 value)
{
  u32 *p = ((u32 *) value) - 4;
  if ((--p[2]) == 0)
  {
    if (p[1] + 16)
      func_002B2028(p);
    else
    {
      u32 old = D_0040E618[-1];
      p[0] = old;
      D_0040E618[-1] = (u32) p;
    }
  }
}

inline static u32 copy(u32 value)
{
  u32 *p = ((u32 *) value) - 4;
  if (p[3])
    return func_00151930(p);
  p[2]++;
  return value;
}

inline static void assign(Entry *dst, const Entry *src)
{
  if (src != dst)
  {
    drop(dst->str);
    dst->str = copy(src->str);
  }
  dst->refs = src->refs;
}

inline static void entryinit(Entry *t)
{
  u32 v;
  if (D_0040E658[3])
    v = func_00151930(D_0040E658);
  else
  {
    D_0040E658[2]++;
    v = ((u32) D_0040E658) + 16;
  }
  t->str = v;
  t->refs = 0;
}

inline static void append(s32 **v, s32 *value)
{
  if (v[1] != v[2])
  {
    if (v[1])
      *v[1] = *value;
    v[1]++;
  }
  else
    func_00152720(v, v[1], value);
}

inline s32 inline_fn(s32 *arg0, Obj *arg1)
{
  return arg0[arg1->id];
}

inline s32 *inline_fn2(s32 arg0)
{
  return (&D_004262D0)->reverse + arg0;
}

inline s32 *inline_fn23(char *arg0)
{
  return (s32 *) arg0;
}

inline s32 inline_fn234(Entry *arg0)
{
  return --arg0->refs;
}

inline s16 inline_fn2345(Vtable *arg0)
{
  return arg0->adjust;
}

void func_00384628(Obj *self, s32 flags)
{
  char *new_var5[2];
  s32 new_var2;
  int new_var;
  Vtable *new_var3;
  Ref *new_var4;
  new_var = 0 - 1;
  if (self->ref)
  {
    Ref *ref;
    new_var2 = inline_fn234(ref);
    if (new_var2 == 0)
    {
      Vtable *v = ref->vt;
      ref = self->ref;
      new_var3 = ref->vt;
      new_var3->destroy(((char *) (new_var4 = ref)) + inline_fn2345(ref->vt), 3);
    }
  }
  self->vt = D_00486D18;
  if ((self->id - 1) >= new_var)
  {
    Registry *r = &D_004262D0;
    s32 offset = self->id << 2;
    s32 *p = inline_fn23(((char *) (&D_004262D0)->map) + offset);
    Entry *e = (&D_004262D0)->entries + (*p);
    if (inline_fn234(e) == 0)
    {
      s32 oldid;
      volatile int idx = inline_fn(r->map, self);
      s32 last = r->count - 1;
      new_var5[0] = ((char *) r->entries) + (idx << 3);
      r->count = last;
      new_var5[1] = &(*((s32 *) (((char *) r->reverse) + (last << 2))));
      if (idx != ((float) last))
      {
        s32 moved = *new_var5[1];
        Entry *dst = (Entry *) new_var5[0];
        Entry *src = (Entry *) (((char *) r->entries) + (last << 3));
        assign(dst, src);
        {
          s32 *p = (&D_004262D0)->map + moved;
          *p = idx;
        }
        {
          s32 *p = inline_fn2(idx);
          *p = moved;
        }
      }
      {
        Entry *dst = &(&D_004262D0)->entries[(&D_004262D0)->count];
        Entry temp;
        entryinit(&temp);
        assign(dst, &temp);
        drop(temp.str);
      }
      append(&(&D_004262D0)->begin, &oldid);
    }
    self->id = -1;
  }
  if (flags & 1)
  {
    D_002AD390(self);
  }
}

