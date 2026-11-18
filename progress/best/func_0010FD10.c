extern s32 func_001E4280(void);
extern s32 func_00194738(s32);
extern s32 func_00194C40(void);
extern void func_00194CD0(s32,s32,s32);
extern s32 func_00194D58(s32,s32);
extern void func_00195700(s32,s32,s32);
extern s32 func_00195788(s32,s32);
extern void func_00195C68(s32,s32,f32);
extern f32 func_00195CF0(s32,s32);
extern s32 func_00196028(void);
extern f32 func_00196A70(s32,s32);
extern s32 func_00196C10(s32,s32);
extern s32 func_00196E10(void);
extern void func_001D4040(void*,const char*);
extern s32 func_001E3650(s32,void*);
extern void func_001E3EC0(s32,void*,s32);
extern char D_00445BF0[], D_00445DC0[];

s32 func_0010FD10(void){
  u32 sp[4];
  s32 v16 = 0, v17, v18, off, t2, r3, k;
  f32 a, b;
  v17 = func_00196C10(func_00196E10(), 0);
  if (func_00194738(func_00194C40()) != 0) v16 = func_00196C10(func_00196E10(), 1);
  v18 = v17;
  if (v16 > 0 && v16 < v18) v18 = v16;
  if ((u32)(v18 - 1) < 3) {
    k = func_001E4280();
    func_001D4040(sp, D_00445DC0);
    off = func_001E3650(k, (void*)sp);
    t2 = off * 0xB + 0x3C;
    r3 = func_00194D58(func_00196028(), t2);
    if (v18 < r3 || r3 == 0) func_00194CD0(func_00196028(), t2, v18);
    if (v18 == 1) {
      switch (off) {
      case 0:
        if (!func_00195788(func_00196028(), 9)) { k = func_001E4280(); func_001D4040(sp, D_00445BF0); func_001E3EC0(k, (void*)sp, 6); }
        func_00195700(func_00196028(), 9, 1);
        break;
      case 1:
        if (!func_00195788(func_00196028(), 0xA)) { k = func_001E4280(); func_001D4040(sp, D_00445BF0); func_001E3EC0(k, (void*)sp, 0xE); }
        func_00195700(func_00196028(), 0xA, 1);
        break;
      case 2:
        if (!func_00195788(func_00196028(), 0xB)) { k = func_001E4280(); func_001D4040(sp, D_00445BF0); func_001E3EC0(k, (void*)sp, 0x16); }
        func_00195700(func_00196028(), 0xB, 1);
        break;
      }
    }
  }
  a = func_00195CF0(func_00196028(), 0x27);
  b = func_00196A70(func_00196E10(), 0);
  if (b <= a) func_00195C68(func_00196028(), 0x27, b);
  {
    s32 cond = func_00194738(func_00194C40());
    u32 r = (u32)v18 ^ 1u;
    if (cond != 0) {
      a = func_00195CF0(func_00196028(), 0x27);
      b = func_00196A70(func_00196E10(), 1);
      r = (u32)v18 ^ 1u;
      if (b <= a) { func_00195C68(func_00196028(), 0x27, b); r = (u32)v18 ^ 1u; }
    }
    return r < 1u;
  }
}
