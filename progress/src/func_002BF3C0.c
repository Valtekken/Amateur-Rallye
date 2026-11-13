void func_003F94D0(void *, int);
void func_003D1290(void *arg0, char *arg1);
extern void func_002C14B0(void *);
extern void func_002C1528(void *, int, int, int);
extern void func_0040AF58(void);
extern void func_0040AFA0(void);
extern void D_003CD7A0(int, int, int);
extern u64 D_00428DD0;
extern char D_00480F30[];
void *func_002BF9B0(void *arg0);
extern void ExitThread_2(void);
inline char *inline_fn(char **arg0)
{
  return *arg0;
}

void func_002BF3C0(void *arg0)
{
  void *new_var;
  new_var = arg0;
  if (1)
  {
    if (new_var != NULL)
    {
      char *v = inline_fn((char **) (((char *) new_var) + 0xC));
      ((void (*)(char *)) inline_fn((void **) (v + 0x24)))(((char *) arg0) + (*((s16 *) (v + 0x20))));
      v = inline_fn((char **) (((char *) arg0) + 0xC));
      ((void (*)(char *)) inline_fn((void **) (v + 0x1C)))(((char *) new_var) + (*((s16 *) (v + 0x18))));
      v = inline_fn((char **) (((char *) new_var) + 0xC));
      ((void (*)(char *)) (*((void **) (v + 0x2C))))(((char *) new_var) + (*((s16 *) (v + 0x28))));
      ExitThread_2();
    }
  }
}

extern s32 GetThreadId_2(void);
extern void ReferThreadStatus_2(s32, void *);
s32 func_002BF380(s32 arg0);
