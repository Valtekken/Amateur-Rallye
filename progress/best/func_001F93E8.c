extern volatile unsigned short func_003F9698(char *, ...);
extern int func_001F92A8(s32 *, void *);
extern char D_004774D8[];
extern char D_00478018[];
extern char D_00478030[];
extern char D_00478040[];
extern char D_00478050[];
typedef struct 
{
  s32 f0;
  s32 f4;
  s32 f8;
  s32 fC;
} Counter;
extern Counter D_004262B0;
typedef struct 
{
  s32 *begin;
  s32 *end;
} Vec;
void func_001F93E8(Vec *r, void *arg1)
{
  func_003F9698(D_00478018, ((s32) ((r->end - r->begin) * 0xC4EC4EC5)) >> 2, r->begin);
  D_004262B0.fC++;
  char *p = (char *) r->begin;
  s32 *q = (s32 *) (p + 0x28);
  if (p != ((char *) r->end))
  {
    do
    {
      s32 idx = ((s32) ((p - ((char *) r->begin)) * 0xC4EC4EC5)) >> 2;
      char *s = (func_001F92A8((s32 *) p, arg1)) ? (D_00478030) : (D_00478040);
      q = (s32 *) (p + 0x28);
      func_003F9698(D_00478050, idx, q[-10], q[-9], q[-8], q[-7], q[-6], q[-5], q[-4], q[-3], q[-2], q[-1], q[0], q[1], q[2], s);
      p += 0x34;
    }
    while (p != ((char *) r->end));
  }
  D_004262B0.fC--;
  func_003F9698(D_004774D8);
}

