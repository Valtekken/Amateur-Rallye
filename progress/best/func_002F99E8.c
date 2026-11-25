typedef struct 
{
  s32 value;
  s32 prev;
  s32 next;
  s32 key;
} Node;
typedef struct 
{
  Node *begin;
  Node *end;
  Node *cap;
} Nodes;
typedef struct 
{
  u8 pad[96];
  Nodes nodes;
  s16 *index;
} Pool;
inline Node *inline_fn(Nodes *arg0)
{
  return arg0->begin;
}

void func_002F99E8(Pool *a, s32 key)
{
  volatile s16 saved;
  Nodes *v = &a->nodes;
  s16 index = *((s16 *) (((u8 *) a->index) + (key << 1)));
  Node *base = inline_fn(v);
  s16 *new_var;
  Node *p = (Node *) (((u8 *) base) + (index << 4));
  s32 prev = p->prev;
  s32 next = p->next;
  ((Node *) (((u8 *) base) + (prev << 4)))->next = next;
  ((Node *) (((u8 *) base) + (next << 4)))->prev = prev;
  *((s16 *) (((u8 *) a->index) + (p->key << 1))) = -1;
  if (index != ((v->end - a->nodes.begin) - 1))
  {
    *p = v->end[-1];
    base = a->nodes.begin;
    next = p->next;
    prev = p->prev;
    ((Node *) (((u8 *) base) + (next << 4)))->prev = index;
    ((Node *) (((u8 *) base) + (prev << 4)))->next = index;
    new_var = (s16 *) (((u8 *) a->index) + (p->key << 1));
    saved = index;
    *new_var = index;
  }
  v->end--;
}

