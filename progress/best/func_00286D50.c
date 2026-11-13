extern char D_0047AD68[];
extern char D_0047B028[];
extern char D_0047B040[];
extern void D_0047D1F8;
extern void func_001D4040(void *, const char *);
extern void func_00289698(void *, int);
void *func_00286A20(void *arg0);
extern char D_0044DD18[];
extern char D_0047ADC0[];
extern char D_0047B050[];
extern void *D_002AD408(int);
extern void func_001E2460(void *, void *, int);
extern void func_001E2C78(void *, const char *, int);
extern void func_001E2E38(void *, const char *, void *);
void *func_00286AC0(void *arg0);
void func_00286BD8(void *arg0);
extern char D_0047B068[];
extern void D_0047D2B8;
extern float func_0015ACB0(int);
void *func_00286D50(void *arg0)
{
  void *sp0;
  void *v0;
  void *new_var;
  func_001D4040(&sp0, D_0047B068);
  ((int *) arg0)[5] = 0;
  ((int *) arg0)[6] = 0;
  ((int *) arg0)[7] = 0;
  ((void **) arg0)[2] = &D_0047D2B8;
  ((int *) arg0)[3] = 0;
  ((void **) arg0)[1] = sp0;
  new_var = arg0;
  ((int *) new_var)[0] = -1;
  ((float *) arg0)[8] = -50.0f;
  ((float *) arg0)[4] = func_0015ACB0((int) sp0) / 300.0f;
  ((float *) arg0)[9] = 1.0f;
  return arg0;
}

