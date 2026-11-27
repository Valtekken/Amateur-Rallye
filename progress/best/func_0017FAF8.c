#define P20(a, off) (*(s32 *)((u32)(off) + (u32)((a)->p20)))
extern s32 func_001FDE60(void);
extern s32 func_001FDBA8(s32, void *);
extern void func_003F9698(void *);
extern void func_0021E4F0(s32);
extern void *func_001E3820(s32, void *, void *);
extern s32 func_001FC7A8(void *, void *);
extern f32 func_001E3610(s32, void *);
extern void func_001E3D10(s32, void *, s32);
extern void func_001E3EC0(s32, void *, s32);
extern char D_0040E820[];
extern char D_0040E698[];
extern char D_0046F900[];
typedef struct 
{
  char pad[0xC];
  s32 count;
  s32 *p10;
  s32 *p14;
  s32 *p18;
  s32 *p1C;
  s32 *p20;
} A;
void func_0017FAF8(A *a, s32 arg1)
{
  s32 sp[4];
  s32 result = func_001FDBA8(func_001FDE60(), (void *) D_0040E820);
  s32 i;
  s32 v;
  s32 off;
  char **node;
  i = result == 0;
  if (i)
  {
    func_003F9698((void *) D_0046F900);
    func_0021E4F0(arg1);
    return;
  }
  sp[0] = result;
  for (i = 0; i < a->count; i++)
  {
    off = i * 4;
 do { node = func_001E3820(func_001E4280(), (void *) (((char *) a->p14) + off), (void *) D_0040E698); } while (0);
    if (node != NULL)
    {
      if ((func_001FC7A8(sp, node[2] + 0xA8) != 0) || (((v = P20(a, off)) != 0) && (v != 3)))
      {
        f32 f = func_001E3610(func_001E4280(), (void *) (((char *) a->p10) + off));
        if (0.5f < f)
        {
          func_001E3D10(func_001E4280(), (void *) (((char *) a->p18) + off), 1);
          if (P20(a, off) != 0)
          {
            P20(a, off) = P20(a, off) - 1;
            if (P20(a, off) != 0)
            {
              continue;
            }
          }
          func_001E3EC0(func_001E4280(), (void *) (((char *) a->p1C) + off), 3);
        }
      }
    }
  }

}
