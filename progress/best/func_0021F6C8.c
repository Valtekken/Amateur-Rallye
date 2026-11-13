#ifndef M2C_DEFINES
#define M2C_DEFINES
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define M2C_ERROR(desc) (0)
#define M2C_CARRY 0
#define M2C_OVERFLOW(a) (0)
#endif
#ifndef M2C_DEFINES
#define M2C_DEFINES
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define M2C_ERROR(desc) (0)
#define M2C_CARRY 0
#define M2C_OVERFLOW(a) (0)
#endif
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
M2C_UNK D_002AD390(void *);
M2C_UNK func_001D1900(void *);
M2C_UNK func_001D2040(s32, M2C_UNK);
void func_0021FE68(void *arg0, s32 arg1);
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
M2C_UNK func_001D1FD0();
extern M2C_UNK D_0047A870;
void *func_0021FD90(void *arg0, s32 arg1);
typedef struct 
{
  void **begin;
  void **end;
  void **cap;
} Vec;
typedef struct 
{
  Vec **begin;
  Vec **end;
  Vec **cap;
} Outer;
void func_003F93CC(void *, void *, unsigned);
void func_0021F7D8(Outer *a, void *b);
void *func_0021F6C8(Vec *a, int *b)
{
  int idx = *b;
  void **first;
  if ((idx <= 0) || ((first, ((unsigned) idx) >= ((unsigned) (a->end - a->begin)))))
  {
    return 0;
  }
  return a->begin[idx];
}

