extern float func_00241F90(void *, void *, float, float);
extern void func_0023E6D8(void *, void *, void *);
extern void func_0023E7B0(void *, void *, void *);
void func_00241C30(void *a, void *b, float fp0, float fp1) {
 void *p17 = *(void **)((char *)b + 0x4C);
 void *p18 = *(void **)((char *)b + 0x50);
 float *q = (float *)((char *)b + 0x0C);
 float f20, f21, f22, f23;
 float buf[16];
 f22 = fp1;
 f21 = fp0;
 f23 = 1.0f / f22;
 if (*(int *)((char *)p17 + 0x1C8)) {
   if (*(int *)((char *)p18 + 0x1C8)) {
     f20 = *(float *)((char *)p17 + 0x20) + *(float *)((char *)p18 + 0x20);
     f20 = 1.0f / f20;
     f21 = func_00241F90(a, p17, fp0, fp1) * *(float *)((char *)p18 + 0x20) * f20 * f23;
     f20 = func_00241F90(a, p18, fp0, fp1) * *(float *)((char *)p17 + 0x20) * f20 * f23;
   } else {
     f20 = 0.0f;
     f21 = func_00241F90(a, p17, fp0, fp1) * f23;
   }
 } else if (*(int *)((char *)p18 + 0x1C8)) {
   f21 = 0.0f;
   f20 = func_00241F90(a, p18, fp0, fp1) * f23;
 } else {
   f20 = 0.0f;
   f21 = 0.0f;
 }
 {
   float q0=q[0], q1=q[1], q2=q[2];
   float a0=q0*f21, a1=q1*f21, a2=q2*f21;
   buf[0]=*(float*)((char*)p17+0x11C)+a0;
   buf[1]=*(float*)((char*)p17+0x120)+a1;
   buf[2]=*(float*)((char*)p17+0x124)+a2;
   buf[4]=a0; buf[5]=a1; buf[6]=a2;
   buf[8]=a0; buf[9]=a1; buf[10]=a2;
   func_0023E6D8(b, buf, (char*)p17+0x128);
 }
 {
   float q0=q[0], q1=q[1], q2=q[2];
   float n0=-(q2*f20), n1=-(q0*f20), n2=-(q1*f20);
   buf[0]=*(float*)((char*)p18+0x11C)+n1;
   buf[1]=*(float*)((char*)p18+0x120)+n2;
   buf[2]=*(float*)((char*)p18+0x124)+n0;
   buf[4]=n1; buf[5]=n2; buf[6]=n0;
   buf[12]=q0*f20; buf[13]=q1*f20; buf[14]=q2*f20;
   func_0023E7B0(b, buf, (char*)p18+0x128);
 }
}
