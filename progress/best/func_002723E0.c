extern void func_0027C1E8(void *, s32);
extern void func_00231718(void *, void *);
extern void func_002313D0(void *, s32);
extern void *func_00271DA0(void *, void *, void *, s32);
extern void *func_002B1FC0(s32);
extern void *func_003D2910(s32);
extern void *func_00152D28(s32, void *);
extern void func_002B2028(void *);
extern int D_0040E618[];
void func_002723E0(void *a0, void *a1, s32 a2) {
 char sp[0x3C];
 void **p0;
 void *f0;
 void *f4;
 void *f8;
 void *var17;
 s32 var16;
 void *var18;
 s32 temp2;
 s32 temp21;
 void *var19;
 void *t;
 void *t23;
 void *temp17;
 void *temp20;
 void *var16_2;
 void *v;
 void *temp4_3;
 s32 temp3;

 p0 = (void **)a0;
 f0 = p0[0];
 f4 = p0[1];
 f8 = p0[2];
 if (f4 != f8) {
  if (f4 != NULL) func_0027C1E8(f4, (s32)((char *)f4 - 0x3C));
  p0[1] = (char *)f4 + 0x3C;
  func_0027C1E8(sp, a2);
  {
   void *f4b = p0[1];
   var17 = (char *)f4b - 0x78;
   var16 = (s32)(((char *)var17 - (char *)a1) * (s32)0xEEEEEEEF) >> 2;
   if (var16 > 0) {
    var18 = (char *)f4b - 0x78;
    do {
     var17 = (char *)var17 - 0x3C;
     func_00231718(var18, var17);
     var16 -= 1;
     var18 = (char *)var18 - 0x3C;
    } while (var16 > 0);
   }
  }
  func_00231718(a1, sp);
  func_002313D0(sp, 2);
  return;
 }
 temp2 = (s32)(((char *)f4 - (char *)f0) * (s32)0xEEEEEEEF) >> 2;
 temp21 = (temp2 != 0) ? (temp2 * 2) : 1;
 var19 = NULL;
 if (temp21 != 0) {
  s32 temp16 = temp21 * 0x3C;
  if (temp16 != 0) {
   t = func_002B1FC0(temp16);
   var19 = t;
   if (t == NULL) var19 = func_003D2910(temp16);
  } else {
   if (D_0040E618[-1] != 0) {
    var19 = (void *)D_0040E618[-1];
    D_0040E618[-1] = *(int *)D_0040E618[-1];
   } else {
    var19 = func_00152D28(0, (void *)D_0040E618[-1]);
   }
  }
 }
 t23 = func_00271DA0(f0, a1, var19, 0);
 if (t23 != NULL) func_0027C1E8(t23, a2);
 temp17 = f4;
 temp20 = func_00271DA0(a1, f4, (char *)t23 + 0x3C, 0);
 var16_2 = f0;
 if ((unsigned long)var16_2 < (unsigned long)temp17) {
  v = var16_2;
  do {
   func_002313D0(v, 2);
   var16_2 = (char *)var16_2 + 0x3C;
   v = var16_2;
  } while ((unsigned long)var16_2 < (unsigned long)temp17);
 }
 temp4_3 = f0;
 temp3 = (s32)(((char *)f8 - (char *)f0) * (s32)0xEEEEEEEF) >> 2;
 if (temp3 != 0) {
  if (temp3 * 0x3C != 0) {
   func_002B2028(temp4_3);
  } else {
   *(int *)temp4_3 = D_0040E618[-1];
   D_0040E618[-1] = (int)temp4_3;
  }
 }
 p0[1] = temp20;
 p0[0] = var19;
 p0[2] = (void *)((char *)var19 + temp21 * 0x3C);
}
