extern void *func_00168350(s32);

void *func_00168B08(void *arg0, s32 arg1) {
    float *r = func_00168350(arg1);
    float *p = r + 13;
    float a = r[13], b = p[1], c = p[2];
    ((float*)arg0)[0] = a;
    ((float*)arg0)[1] = b;
    ((float*)arg0)[2] = c;
    return arg0;
}
