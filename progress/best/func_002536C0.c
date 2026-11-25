typedef struct Node536
{
  struct Node536 *next;
  u32 pad;
  void *unk8;
} Node536;
extern void func_0025C650(void *, void *);
extern void func_0025C658(void *, s32);
extern void func_0025C680(void *, void *);
void func_002536C0(s32 unused, Node536 **arg1)
{
  Node536 *n;
  void *sp0;
  func_0025C650(&sp0, arg1);
  n = (*arg1)->next;
  if (n != (*arg1))
  {
    do
    {
      func_0025C680(&sp0, n->unk8);
 do { n = n->next; } while (0);
    }
    while (n != (*arg1));
  }
  func_0025C658(&sp0, 2);
}
