#include "context.h"
extern void *func_001D6BB0(void);
extern void *func_002063F0(void *, s32, void *);
void func_00200250(void *arg0);
void func_00206218(void *arg0, void *arg1);
void func_00206268(void *arg0)
{
  void **p;
  void *obj;
  s16 off;
  unsigned short new_var;
  void (*fn)(void *, void *);
  new_var = 0x5C;
  p = (void **) func_001D6BB0();
  obj = *p;
  ;
  off = *((s16 *) (((u8 *) obj) + 0x58));
  fn = *((void (**)(void *, void *)) (((u8 *) obj) + new_var));
  fn(((u8 *) (*((void **) ((u8 *) obj)))) + off, arg0);
}

void func_002062A8(void *arg0, s32 *arg1);
