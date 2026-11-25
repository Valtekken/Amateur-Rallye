extern void func_0011DF88(s32, s32);
extern void func_001D4040(void *, const char *);
extern void func_001E4040(s32, void *, s32);
extern s32 func_001E4280(void);
extern void D_002AD390(void *);
extern char D_00449750[];
extern char D_00449778[];
extern char D_004497A0[];
extern char D_0044D0E8[];
extern char D_0044DCD8[];
typedef struct 
{
  u8 pad[0x8];
  void *vtable;
  u8 pad2[0x1C];
  s32 unk28;
} S_func_0012E968_arg0;
void func_0012E968(S_func_0012E968_arg0 *arg0, s32 arg1)
{
  s32 temp;
  s32 *new_var3;
  s32 *new_var;
  s32 temp2;
  unsigned int new_var2;
  s32 temp3;
  s32 buf[4];
  arg0->vtable = D_0044D0E8;
  ;
  if (arg0->unk28 != 0)
  {
    func_0011DF88(arg0->unk28, 3);
  }
  temp = func_001E4280();
  new_var2 = arg1;
  func_001D4040(buf, D_00449750);
  func_001E4040(temp, buf, 0);
  temp2 = func_001E4280();
  new_var3 = (new_var = buf);
  func_001D4040(new_var3, D_00449778);
  temp3 = temp2;
  func_001E4040(temp3, buf, 0);
  temp3 = func_001E4280();
  func_001D4040(new_var, D_004497A0);
  func_001E4040(temp3, new_var, 0);
  arg0->vtable = D_0044DCD8;
  if (new_var2 & 1)
  {
    D_002AD390(arg0);
  }
}

