extern s32 func_00233450(void *, s32, s32);
extern void func_0024C548(s32, void *);
extern void func_00250350(void *, s32);
typedef struct Node
{
  struct Node *next;
  void *x;
  s32 v;
} Node;
typedef struct 
{
  u8 pad[0x18];
  Node **begin;
  Node **end;
} S;
void func_00233368(S *arg0)
{
  s32 n;
  s32 i;
  Node **slot;
  Node *node;
  Node *p;
  s32 v;
  n = (((s32) arg0->end) - ((s32) arg0->begin)) >> 2;
  i = 0;
  if (n > 0)
  {
    do
    {
      slot = &arg0->begin[i];
      node = *slot;
      p = node->next;
      v = *((s32 *) (((char *) node->x) + 8));
      if (p != node)
      {
        do
        {
          s32 pv = p->v;
          s32 r = func_00233450(arg0, v, pv);
          func_0024C548(r, slot);
          func_00250350(slot, r);
 do { p = p->next; } while (0);
          v = pv;
        }
        while (p != (*slot));
      }
      i++;
    }
    while (i < n);
  }
}
