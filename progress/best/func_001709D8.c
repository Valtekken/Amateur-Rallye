void func_001709D8(void *arg0)
{
  float temp_f0;
  int var_2;
  float new_var;
  void *temp_3;
  void *temp_5;
  temp_3 = *((void **) (((char *) arg0) + 4));
  temp_5 = *((void **) (((char *) temp_3) + 0xC));
  var_2 = -1;
  if ((*((float *) (((char *) temp_5) + 0x128))) > 0.0f)
  {
    var_2 = 1;
  }
  temp_f0 = ((float) (-var_2)) * (*((float *) (((char *) temp_5) + 0x104)));
  *((float *) (((char *) temp_3) + 4)) = (*((float *) (((char *) temp_3) + 4))) + temp_f0;
  *((float *) (((char *) temp_3) + 8)) = (*((float *) (((char *) temp_3) + 8))) + temp_f0;
  temp_3 = *((void **) (((char *) arg0) + 8));
  temp_5 = *((void **) (((char *) temp_3) + 0xC));
  var_2 = -1;
  if ((*((float *) (((char *) temp_5) + 0x128))) > 0.0f)
  {
    var_2 = 1;
  }
  temp_f0 = ((float) (-var_2)) * (*((float *) (((char *) temp_5) + 0x104)));
  new_var = (*((float *) (((char *) temp_3) + 4))) + temp_f0;
  *((float *) (((char *) temp_3) + 4)) = new_var;
  *((float *) (((char *) temp_3) + 8)) = (*((float *) (((char *) temp_3) + 8))) + temp_f0;
  temp_3 = *((void **) (((char *) arg0) + 0xC));
  temp_5 = *((void **) (((char *) temp_3) + 0xC));
  var_2 = -1;
  if ((*((float *) (((char *) temp_5) + 0x128))) > 0.0f)
  {
    var_2 = 1;
  }
  temp_f0 = ((float) (-var_2)) * (*((float *) (((char *) temp_5) + 0x104)));
  *((float *) (((char *) temp_3) + 4)) = (*((float *) (((char *) temp_3) + 4))) + temp_f0;
  *((float *) (((char *) temp_3) + 8)) = (*((float *) (((char *) temp_3) + 8))) + temp_f0;
  temp_3 = *((void **) (((char *) arg0) + 0x10));
  temp_5 = *((void **) (((char *) temp_3) + 0xC));
  var_2 = -1;
  if ((*((float *) (((char *) temp_5) + 0x128))) > 0.0f)
  {
    var_2 = 1;
  }
  temp_f0 = ((float) (-var_2)) * (*((float *) (((char *) temp_5) + 0x104)));
  *((float *) (((char *) temp_3) + 8)) = (*((float *) (((char *) temp_3) + 8))) + temp_f0;
  *((float *) (((char *) temp_3) + 4)) = (*((float *) (((char *) temp_3) + 4))) + temp_f0;
}

