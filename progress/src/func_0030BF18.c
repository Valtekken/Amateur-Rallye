extern s32 D_0043C3B0[];
void func_003F0B30(s32 arg0, s32 arg1, s32 arg2);
typedef int (*FuncPtr3)(void *, void *, int);
typedef int (*FuncPtr2)(void *, void *);
typedef struct VTable
{
  char pad0[0x50];
  s16 off50;
  char pad52[2];
  FuncPtr3 fn54;
  char pad58[0x28];
  s16 off80;
  char pad82[2];
  FuncPtr2 fn84;
} VTable;
typedef struct Obj
{
  char pad0[8];
  VTable *vt;
} Obj;
int func_0030BFA8(Obj *arg0, char *arg1, int arg2);
int func_0030BF18(Obj *arg0, char *arg1)
{
  VTable *vt;
  int result = 0;
  VTable *new_var;
  vt = arg0->vt;
  if (vt->fn84(((char *) arg0) + vt->off80, arg1) != 0)
  {
    ;
    if (arg0->vt->fn84(((char *) arg0) + arg0->vt->off80, arg1 + 4) != 0)
    {
      new_var = arg0->vt;
      vt = new_var;
      if (vt->fn84(((char *) arg0) + vt->off80, arg1 + 8) != 0)
      {
        result = 1;
      }
    }
  }
  return result;
}

void func_0030BE70(Obj *arg0, int *arg1);
