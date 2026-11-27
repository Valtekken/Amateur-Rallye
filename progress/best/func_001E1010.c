typedef struct 
{
  s32 a;
  s32 *b;
  s32 c;
  s32 *d;
  s32 e;
  s32 *f;
} Entry;
typedef struct 
{
  Entry *start;
  Entry *end;
} Vec;
typedef struct 
{
  void *unk0;
  s32 pad[4];
  Vec vec;
  s32 pad1;
  s32 kind;
} List;
typedef struct 
{
  char pad[0x18];
  char str[12];
  s32 a;
  char pad2[0x1C];
  s32 b;
  s32 type;
} Obj;
typedef struct VT VT;
typedef struct Node
{
  void *unk0;
  VT *vt;
} Node;
struct VT
{
  s32 pad[4];
  s16 off10;
  s16 pad12;
  s32 fn14;
  s32 pad18[4];
  s16 off28;
  s16 pad2A;
  s32 fn2C;
};
extern s32 func_001D4010(void *);
extern void func_001D4040(void *, s32 *);
extern void func_001E15E0(void *, void *, s32);
extern s32 func_003FA760(s32 *, s32 *);
extern Node *func_001E6D58(void);
extern Node *func_001E6A70(Node *, void *);
s32 func_001E1010(Obj *a, List *b, s32 *out, void *v)
{
  s32 n;
  s32 ok;
  s32 *s;
  Entry *p;
  char sp[16];
  volatile Vec *vec;
  Node *obj;
  Node *list;
  Node *found;
  Node *result;
 do { if (b->kind == a->type) { vec = &b->vec; p = b->vec.start; n = (((char *) vec->end) - ((char *) p)) >> 3; if ((((n == 3) || (n == 5)) && (p->a == a->a)) && (p->c == a->b)) { s = func_001D4010(a); ok = 0; if (p->d && s) { ok = ((u32) func_003FA760(s, p->d)) < 1; } if (ok && (b->vec.start->e == a->type)) { if (((((char *) vec->end) - ((char *) b->vec.start)) >> 3) == 5) { func_001E15E0(a, b, 3); } func_001D4040(sp, b->vec.start->b); *out = *((s32 *) sp); obj = func_001E6D58(); list = (Node *) obj->unk0; if (list == 0) { return 0; } func_001D4040(sp, b->vec.start->f); found = func_001E6A70(list, sp); if (found == 0) { return 0; } result = (Node *) ((void *(*)(void *, void *)) found->vt->fn14)(((char *) found) + found->vt->off10, found); *((Node **) v) = result; ((void (*)(void *, void *)) result->vt->fn2C)(((char *) result) + result->vt->off28, b->unk0); return 1; } } } return 0; } while (0);
}
