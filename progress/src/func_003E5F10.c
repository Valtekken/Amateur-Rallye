extern void func_003E1708(void *, const char *);
extern s32 func_003E4238(void *);
extern char D_00489E28[], D_00489E48[];
s32 func_003E5F10(void *arg0) {
  u8 *p = arg0;
  void *obj;
  s32 ret, state = *(s32*)(p+0x174);
  if (state==3 && *(s32*)(p+0x120)!=0) {
    func_003E1708(arg0, D_00489E28);
    *(s32*)(p+0x120)=0;
    state = *(s32*)(p+0x174);
  }
  switch (state) {
  case 3: obj = *(void**)(p+0x1C0); break;
  case 1: obj = *(void**)(p+0x1D0); break;
  case 2: obj = *(void**)(p+0x1E0); break;
  default: obj = *(void**)(p+0x1C0); func_003E1708(arg0, D_00489E48); break;
  }
  ret = func_003E4238(arg0);
  if (ret != 0) *(s32*)((u8*)obj+0x28)=1;
  return ret;
}
