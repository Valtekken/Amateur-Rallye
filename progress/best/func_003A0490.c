extern s32 func_003A03B8(s32, s8, s32, s32);
extern s32 func_003A3CC8(s32);
extern s8 *func_003A4508(s32);
u32 func_003A0490(s32 a, s32 b, u32 c, s32 d) {
 volatile s32 sp0 = b;
 volatile u32 sp4 = c;
 volatile s32 sp8 = d;
 volatile u32 spC;
 if (func_003A3CC8(a)==0) return 0xFFFFFFFFu;
 spC = func_003A3CC8(a) - 1;
 if (sp4 < spC) spC = sp4;
 spC++;
 while (spC--) {
   if (func_003A03B8(sp0, *(s8 *)(func_003A4508(a) + spC), 0, sp8) != 0xFFFFFFFFu)
     return spC;
 }
 return 0xFFFFFFFFu;
}
