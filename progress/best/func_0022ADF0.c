void func_0016D178(void *arg0, float *arg1);
void func_0022AB30(void *arg0, float *arg1);
void func_0022AB70(void *arg0, float *arg1);
extern float func_003F3830(float);
extern int D_004265E0;
void func_0022ADF0(void *arg0)
{
  float *p;
  float d1;
  float d2;
  float m;
  float r;
  p = *((float **) (((char *) arg0) + 4));
  d1 = p[6] - p[3];
  d2 = p[8] - p[5];
  ;
  if (d2 < d1)
  {
    m = d1;
  }
  d1 = func_003F3830(m / (*((float *) (((char *) arg0) + 0x2C))));
  r = d1 * 1.443f;
  D_004265E0 = (int) r;
}

