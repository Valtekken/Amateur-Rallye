extern s32 D_0043C3B0[];
void func_003F0B30(s32 arg0, s32 arg1, s32 arg2);
extern void func_0040AF58(void);
extern void func_0040AFA0(void);
extern void func_004063A8(void *);
extern void SleepThread_2(void);
typedef struct Node
{
  u8 pad[0x3C];
  struct Node *next;
} Node;
typedef struct Obj
{
  u8 pad0[4];
  s32 field4;
  u8 pad8[4];
  Node *fieldC;
} Obj;
void *func_00406350(Obj *arg0);
void func_00406570(Obj *arg0);
extern s32 D_004411B0;
extern s32 D_004411B4;
extern s32 CreateSema_2(void *);
typedef struct SemaParam
{
  s32 unk0;
  s32 init;
  s32 max;
  u8 padC[8];
  s32 unk14;
} SemaParam;
void func_004065B0(void)
{
  SemaParam sp;
  if (D_004411B0 != (-1))
  {
    return;
  }
  sp.unk14 = 0;
  sp.init = (sp.max = 1);
  D_004411B0 = CreateSema_2(&sp);
  D_004411B4 = CreateSema_2(&sp);
}

