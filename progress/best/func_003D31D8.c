typedef s32 (*Handler)(void);
extern Handler D_00437E58;
extern Handler func_002ABA80(s32);
extern void *func_003D4938(void *, void *);
extern void func_003D4F40(void *);
extern void *func_002B1FC0(u32);
extern char D_00488EB8[];
extern char D_00439570[];
inline static void *construct_error(void *msg, void *obj)
{
  return func_003D4938(obj, msg);
}

void *func_003D2910(u32 n);
extern s32 func_003DA6B8(void *);
extern u8 D_0048BD29[];
s32 func_003D30B0(void *a);
typedef struct Buf
{
  void *v;
  u8 *cur;
  u8 *end;
} Buf;
typedef struct Stream
{
  Buf *buf;
  void *tied;
  u8 pad[18];
  u8 state;
} Stream;
typedef struct 
{
  Stream *s;
  s32 ok;
} Input;
extern void func_003D4D70(void *);
extern s32 func_003D8118(Buf *);
void *func_003D3118(Input *a, s8 *out);
s32 func_003D31D8(Input *a)
{
  Stream *s = a->s;
  int new_var;
  unsigned char c;
  if (s->state)
  {
    return -1;
  }
  {
    void *t = s->tied;
    if (t)
    {
      Buf *b = s->buf;
      if (b->end == b->cur)
      {
        func_003D4D70(t);
      }
    }
    {
      Buf *b = a->s->buf;
      if (b->cur >= b->end)
      {
        s32 r = func_003D8118(b);
        c = -1;
        if (r != (-1))
        {
          c = *b->cur;
        }
      }
      else
        if (b || a)
      {
        c = *b->cur;
      }
      else
      {
        c = *b->cur;
      }
      if (b)
      {
        new_var = -1;
      }
      else
      {
        new_var = -1;
      }
      if (c == new_var)
      {
        a->s->state |= 1;
      }
    }
  }
  return c;
}

