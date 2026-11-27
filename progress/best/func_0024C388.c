typedef struct 
{
  float x;
  float y;
  float z;
} Vec;
typedef struct 
{
  int pad[3];
  Vec *p;
} Node;
typedef struct 
{
  Node *a;
  Node *b;
  Vec dir;
  float len;
  int f18;
  int f1c;
  int f20;
  int f24;
  int f28;
} Obj;
extern float D_00478468;
extern float func_001CF4C0(Vec *);
inline static void init(Vec *r, float x, float y, float z)
{
  r->x = x;
  r->y = y;
  r->z = z;
}

inline static void sub(Vec *r, Vec *a, Vec *b)
{
  init(r, a->x - b->x, a->y - b->y, a->z - b->z);
}

inline static void copy(Vec *d, Vec *s)
{
  d->x = s->x;
  d->y = s->y;
  d->z = s->z;
}

inline static float normalize(Vec *v)
{
  float n = func_001CF4C0(v);
  if (n < D_00478468)
  {
    v->x = 0;
    v->y = 0;
    v->z = 0;
  }
  else
  {
    v->x /= n;
    v->y /= n;
    v->z /= n;
  }
  return n;
}

void func_0024C388(Obj *p, Node *a, Node *b)
{
  Vec tmp;
  p->a = a;
  p->b = b;
  sub(&tmp, b->p, a->p);
  copy(&p->dir, &tmp);
  p->len = normalize(&p->dir);
  p->f28 = 0;
  p->f18 = 0;
  p->f1c = (p->f20 = 0);
  p->f24 = 0;
}

