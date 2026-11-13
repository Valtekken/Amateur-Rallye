#define F(p,t,o) (*(t*)((char*)(p)+(o)))
typedef struct PoolNode
{
  u32 unused;
  struct PoolNode *next;
} PoolNode;
typedef struct BufferPool
{
  PoolNode *head;
  PoolNode *slots[4];
  int count;
} BufferPool;
extern void func_002BCB20(BufferPool *);
extern int func_003F9698(const char *, ...);
extern char D_00480528[];
extern void func_002BCDD8(void *);
void *func_002BCB68(BufferPool *p);
void func_002BCBC0(BufferPool *p, void *data)
{
  PoolNode **slot;
  int i = 0;
  PoolNode *n = (PoolNode *) (((char *) data) - 8);
  if (n != p->slots[0])
  {
    slot = &p->slots[0];
    do
    {
      ++i;
      if (i >= 4)
      {
        break;
      }
      ++slot;
    }
    while (n != (*slot));
  }
  if (i >= 4)
  {
    func_002BCDD8(data);
    --p->count;
  }
  else
  {
    n->next = p->head;
 do { } while (0);
    p->head = n;
  }
}

void func_002BC9F8(void *p, int a, int b, int c, int d);
void func_002BC9D8(void *p, int a);
