#include "context.h"
extern int func_001D4040(void *a0, const char *a1);
extern char *func_001D4010(char *a0);
extern void func_003FA310(char *a0, const char *fmt, char *a2, s32 a3);
extern char D_004724C8[];
extern char D_004732E8[];
extern char D_00472030[];
void *func_001A0960(void *arg0);
void func_001A0A08(void *arg0, void *arg1)
{
  char buf[0x70];
  s32 i;
  char *base;
  char *out;
  if (arg1 == 0)
  {
    return;
  }
  base = ((char *) arg1) + 0x5C;
  out = ((char *) arg0) + 0xC;
  i = 0;
  do
  {
    func_003FA310(buf, D_00472030, func_001D4010(base), i);
    i++;
    func_001D4040(out, buf);
    out += 4;
  }
  while (i < 4);
}

