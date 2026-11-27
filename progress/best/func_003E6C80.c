extern void func_003E0EA0(s32, void *, s32);
extern void func_003E4F40(void *, s32);
extern void func_0040AF58(void);
extern void func_0040AFA0(void *);

void func_003E6C80(void *arg0, s32 arg1, s32 arg2) {
  s32 sp0[8];
  s32 shifted = arg2 << 6;
  while (*(volatile s32 *)0x10002010 < 0) { }
  func_0040AF58();
  *(volatile s32 *)0x1000B010 = arg1 & 0x0FFFFFFF;
  *(volatile s32 *)0x1000B020 = shifted;
  *(volatile s32 *)0x1000B000 = 0x100;
  func_0040AFA0((void *)0x1000B010);
  func_003E4F40(arg0, arg2 | 0x70000000);
  sp0[0] = 4;
  func_003E0EA0(*(s32 *)((char *)arg0 + 0x858), sp0, 4);
  while (((*(volatile u32 *)0x1000B000) >> 8) & 1) { }
  while (*(volatile s32 *)0x10002010 < 0) { }
}
