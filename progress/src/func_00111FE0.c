extern s32 func_001E4280(void);
extern u32 func_001E3650(s32, void *);
extern void func_001D4040(void *, const char *);
extern void func_001E3D10(s32, void *, s32);
extern void func_001E3EC0(s32, void *, s32);
extern void func_00112138(void *, s32);
extern char D_00446758[], D_00446770[];

void func_00111FE0(void *a)
{
  u32 buf[4];
  s32 idx = (s32)func_001E3650(func_001E4280(), (char *)a + 0x3C);
  if (*(s32 *)((char *)a + 0x34) != 0) {
    if (idx == 1) {
      s32 k = func_001E4280();
      func_001D4040(buf, D_00446758);
      func_001E3D10(k, buf, 1);
      k = func_001E4280();
      func_001D4040(buf, D_00446770);
      func_001E3D10(k, buf, 0);
      *(s32 *)((char *)a + 0x34) = 0;
      func_00112138(a, 0);
    } else {
      *(s32 *)((char *)a + 0x34) = 0;
      func_001E3EC0(func_001E4280(), (char *)a + 0x3C, 1);
      func_00112138(a, 1);
    }
  } else {
    if (idx == 1) {
      func_001E3EC0(func_001E4280(), (char *)a + 0x3C, 0);
      *(s32 *)((char *)a + 0x34) = idx;
      func_00112138(a, 1);
    } else {
      func_00112138(a, 0);
      s32 k = func_001E4280();
      func_001D4040(buf, D_00446770);
      func_001E3D10(k, buf, 0);
    }
  }
}
