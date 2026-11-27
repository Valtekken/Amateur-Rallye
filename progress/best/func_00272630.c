extern void func_00233068(void *, s32);
extern void func_002330C0(void *, void *);
extern void *func_00271E00(void *, void *, void *, s32);
extern void *func_002B1FC0(s32);
extern void *func_003D2910(s32);
extern void *func_00152D28(s32, void *);
extern void func_002B2028(void *);
extern int D_0040E618[];
void func_00272630(void *a0, void *a1, void *a2) {
 char sp[0x10];
 void **p0;
 void *f0;
 void *f4;
 void *f8;
 void *f4b;
 void *var17;
 s32 var16;
 void *var18;
 s32 temp2;
 s32 temp4;
 s32 var21;
 void *var20;
 void *t;
 void *t23;
 void *temp17;
 void *temp19;
 void *var16_2;
 void *v;
 void *temp4_2;
 s32 temp2_6;

 p0 = (void **)a0;
 f0 = p0[0];
 f4 = p0[1];
 f8 = p0[2];
 if (f4 != f8) {
  if (f4 != NULL) {
   *(float *)f4 = *(float *)((char *)f4 - 0x10);
   *(float *)((char *)f4 + 0x4) = *(float *)((char *)f4 - 0xC);
   *(float *)((char *)f4 + 0x8) = *(float *)((char *)f4 - 0x8);
   *(s32 *)((char *)f4 + 0xC) = *(s32 *)((char *)f4 - 0x4);
  }
  f4b = f4;
  p0[1] = (char *)f4 + 0x10;
  var17 = (char *)f4b - 0x10;
  var16 = (s32)(((char *)var17 - (char *)a1)) >> 4;
  if (var16 > 0) {
   var18 = (char *)f4b - 0x10;
   do {
    var17 = (char *)var17 - 0x10;
    func_002330C0(var18, var17);
    var16 -= 1;
    var18 = (char *)var18 - 0x10;
   } while (var16 > 0);
  }
  func_002330C0(a1, sp);
  func_00233068(sp, 2);
  return;
 }
 temp2 = (s32)(((char *)f4 - (char *)f0)) >> 4;
 temp4 = (temp2 != 0) ? (temp2 * 2) : 1;
 var21 = temp4 * 0x10;
 if (temp4 != 0) {
  if (var21 != 0) {
   t = func_002B1FC0(var21);
   var20 = t;
   if (t == NULL) var20 = func_003D2910(var21);
  } else {
   if (D_0040E618[-1] != 0) {
    var20 = (void *)D_0040E618[-1];
    D_0040E618[-1] = *(int *)D_0040E618[-1];
   } else {
    var20 = func_00152D28(0, (void *)D_0040E618[-1]);
   }
  }
 } else {
  var20 = NULL;
  var21 = 0;
 }
 t23 = func_00271E00(f0, a1, var20, 0);
 if (t23 != NULL) {
  *(float *)t23 = *(float *)a2;
  *(float *)((char *)t23 + 0x4) = *(float *)((char *)a2 + 0x4);
  *(float *)((char *)t23 + 0x8) = *(float *)((char *)a2 + 0x8);
  *(s32 *)((char *)t23 + 0xC) = *(s32 *)((char *)a2 + 0xC);
 }
 temp17 = f4;
 temp19 = func_00271E00(a1, f4, (char *)t23 + 0x10, 0);
 var16_2 = f0;
 if ((unsigned long)var16_2 < (unsigned long)temp17) {
  v = var16_2;
  do {
   func_00233068(v, 2);
   var16_2 = (char *)var16_2 + 0x10;
   v = var16_2;
  } while ((unsigned long)var16_2 < (unsigned long)temp17);
 }
 temp4_2 = f0;
 temp2_6 = (s32)(((char *)f8 - (char *)f0)) >> 4;
 if (temp2_6 != 0) {
  if (temp2_6 * 0x10 != 0) {
   func_002B2028(temp4_2);
  } else {
   *(int *)temp4_2 = D_0040E618[-1];
   D_0040E618[-1] = (int)temp4_2;
  }
 }
 p0[1] = temp19;
 p0[2] = (void *)((char *)var20 + var21);
 p0[0] = var20;
}
